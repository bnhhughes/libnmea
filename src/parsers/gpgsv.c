#include "../nmea/parser_types.h"
#include "gpgsv.h"
#include "parse.h"

int
init(nmea_parser_s *parser)
{
	/* Declare what sentence type to parse */
	NMEA_PARSER_TYPE(parser, NMEA_GPGSV);
	NMEA_PARSER_PREFIX(parser, "GPGSV");
	return 0;
}

int
allocate_data(nmea_parser_s *parser)
{
	parser->data = malloc(sizeof (nmea_gpgsv_s));
	if (NULL == parser->data) {
		return -1;
	}

	return 0;
}

int
set_default(nmea_parser_s *parser)
{
	memset(parser->data, 0, sizeof (nmea_gpgsv_s));
	return 0;
}

int
free_data(nmea_s *data)
{
	free(data);
	return 0;
}

int
parse(nmea_parser_s *parser, char *value, int val_index)
{
	nmea_gpgsv_s *data = (nmea_gpgsv_s *) parser->data;
	int v = strtol(value, NULL, 10);

  switch (val_index)
  {
    case NMEA_GPGSV_NUMMSGS:
      data->nummsgs = v;
      break;
    case NMEA_GPGSV_MSGNUM:
      data->msgnum = v;
      break;
    case NMEA_GPGSV_NUMSVS:
      data->numsvs = v;
      break;
    case NMEA_GPGSV_S0_PRN:
      data->s0_prn = v;
      break;
    case NMEA_GPGSV_S0_EL:
      data->s0_el_deg = v;
      break;
    case NMEA_GPGSV_S0_AZ:
      data->s0_az_deg = v;
      break;
    case NMEA_GPGSV_S0_SNR:
      data->s0_snr_db = v;
      break;
    case NMEA_GPGSV_S1_PRN:
      data->s1_prn = v;
      break;
    case NMEA_GPGSV_S1_EL:
      data->s1_el_deg = v;
      break;
    case NMEA_GPGSV_S1_AZ:
      data->s1_az_deg = v;
      break;
    case NMEA_GPGSV_S1_SNR:
      data->s1_snr_db = v;
      break;
    case NMEA_GPGSV_S2_PRN:
      data->s2_prn = v;
      break;
    case NMEA_GPGSV_S2_EL:
      data->s2_el_deg = v;
      break;
    case NMEA_GPGSV_S2_AZ:
      data->s2_az_deg = v;
      break;
    case NMEA_GPGSV_S2_SNR:
      data->s2_snr_db= v;
      break;
    case NMEA_GPGSV_S3_PRN:
      data->s3_prn= v;
      break;
    case NMEA_GPGSV_S3_EL:
      data->s3_el_deg = v;
      break;
    case NMEA_GPGSV_S3_AZ:
      data->s3_az_deg = v;
      break;
    case NMEA_GPGSV_S3_SNR:
      data->s3_snr_db = v;
      break;
    default:
      break;
  }

	return 0;
}
