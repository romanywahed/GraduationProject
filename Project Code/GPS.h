////////////////////////////////////////////////////////////////////////////////
//////////PROTOTYPES////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
char GPS_Start(void);
void GPS_Read(int g_com_port);
char GPS_Close(void);


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
typedef enum
{
	errorGPS=0,
	command_excution_successGPS,
	gprs_intialization_succesGPS,
	gps_intialization_succesGPS,
	http_intialization_succesGPS,
	gps_reading_successGPS,
	gps_fixGPS,
	communication_successGPS
}GPS_response_t;