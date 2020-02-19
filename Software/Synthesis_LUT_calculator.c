#include <stdio.h>
#include <math.h>
#include <inttypes.h>
	
#define MIDI_NOTE_ZERO 8.1757989156
#define NUMBER_OF_SAMPLES_IN_LUT 4096
#define MAX_LUT_VALUE 4000.0
#define SAMPLE_RATE 44094.48819

double get_freq_from_note_nbr(int note_nbr, double ref_freq)
{
    static const double chromatic_ratio = 1.059463094359295264562;

    // Calculate actual frequency based on note number, from reference frequency
    return (double) (ref_freq * pow(chromatic_ratio, (double)note_nbr));
}

void main(){
	float freq[127];
	float phase_inc[127];
	
	int rows = 32;
	
	for (int x = 0; x <= 127; ++x){
		freq[x] = get_freq_from_note_nbr(x,MIDI_NOTE_ZERO);
		phase_inc[x] = ((freq[x]*(float)NUMBER_OF_SAMPLES_IN_LUT)/SAMPLE_RATE);
	}
	
	
	// MIDI PHASE
	printf("\n\n\nMIDI PHASE\n");
	for(int i =0; i<=127; ++i){
		printf("%f,",phase_inc[i]);
	}
	
	
	// MIDI FREQ
	printf("\n\n\nMIDI FREQ\n");
	for(int i =0; i<=127; ++i){
		printf("%f,",freq[i]);
		if((i+1)%rows == 0) printf("\n");
	}
	
	
	// SINUS
	printf("\n\n\nSINUS LUT\n");
	for (int i = 0; i < NUMBER_OF_SAMPLES_IN_LUT; ++i){
		printf("%d,",(int16_t)((MAX_LUT_VALUE/2)*sin(2*M_PI*(float)i/(float)NUMBER_OF_SAMPLES_IN_LUT)));
	}
	
	// SQUARE
	printf("\n\n\nSQUARE LUT\n");
	for (int i = 0; i < NUMBER_OF_SAMPLES_IN_LUT; ++i){
		if(i<(NUMBER_OF_SAMPLES_IN_LUT/2)) printf("%d,",(int16_t)(MAX_LUT_VALUE/2.0));
		else printf("%d,",(int16_t)(-MAX_LUT_VALUE/2.0));
	}
	
	// SAW
	printf("\n\n\nSAW LUT\n");
	for (int i = 0; i < NUMBER_OF_SAMPLES_IN_LUT; ++i){
		printf("%d,",(int16_t)((MAX_LUT_VALUE/(float)NUMBER_OF_SAMPLES_IN_LUT)*i-(MAX_LUT_VALUE/2.0)));
	}
	
	// TRI
	printf("\n\n\nTRI LUT\n");
	for (int i = 0; i < NUMBER_OF_SAMPLES_IN_LUT; ++i){
		if(i<(NUMBER_OF_SAMPLES_IN_LUT/2)) printf("%d,",(int16_t)((MAX_LUT_VALUE/((float)NUMBER_OF_SAMPLES_IN_LUT/2.0))*i-(MAX_LUT_VALUE/2.0)));
		else printf("%d,",(int16_t)((-MAX_LUT_VALUE/((float)NUMBER_OF_SAMPLES_IN_LUT/2.0))*i+2*MAX_LUT_VALUE-(MAX_LUT_VALUE/2.0)));
	}
}