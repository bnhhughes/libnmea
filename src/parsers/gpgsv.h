#ifndef INC_NMEA_GPGSV_H
#define INC_NMEA_GPGSV_H

#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <nmea.h>

typedef struct {
	nmea_s base;
	int nummsgs;
	int msgnum;
	int numsvs;

	int s0_prn;
	int s0_el_deg;
	int s0_az_deg;
	int s0_snr_db;

	int s1_prn;
	int s1_el_deg;
	int s1_az_deg;
	int s1_snr_db;

	int s2_prn;
	int s2_el_deg;
	int s2_az_deg;
	int s2_snr_db;

	int s3_prn;
	int s3_el_deg;
	int s3_az_deg;
	int s3_snr_db;
} nmea_gpgsv_s;

/* Value indexes */
#define NMEA_GPGSV_NUMMSGS 0
#define NMEA_GPGSV_MSGNUM 1
#define NMEA_GPGSV_NUMSVS 2

#define NMEA_GPGSV_S0_PRN 3
#define NMEA_GPGSV_S0_EL  4
#define NMEA_GPGSV_S0_AZ  5
#define NMEA_GPGSV_S0_SNR 6

#define NMEA_GPGSV_S1_PRN 7
#define NMEA_GPGSV_S1_EL  8
#define NMEA_GPGSV_S1_AZ  9
#define NMEA_GPGSV_S1_SNR 10

#define NMEA_GPGSV_S2_PRN 11
#define NMEA_GPGSV_S2_EL  12
#define NMEA_GPGSV_S2_AZ  13
#define NMEA_GPGSV_S2_SNR 14

#define NMEA_GPGSV_S3_PRN 15
#define NMEA_GPGSV_S3_EL  16
#define NMEA_GPGSV_S3_AZ  17
#define NMEA_GPGSV_S3_SNR 18

#endif  /* INC_NMEA_GPGSV_H */
