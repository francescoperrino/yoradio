#ifndef dsp_full_loc
#define dsp_full_loc
#include <pgmspace.h>
/*************************************************************************************
    HOWTO:
    Copy this file to yoRadio/locale/displayL10n_custom.h
    and modify it
*************************************************************************************/
const char mon[] PROGMEM = "lun";
const char tue[] PROGMEM = "mar";
const char wed[] PROGMEM = "mer";
const char thu[] PROGMEM = "gio";
const char fri[] PROGMEM = "ven";
const char sat[] PROGMEM = "sab";
const char sun[] PROGMEM = "dom";

const char monf[] PROGMEM = "lunedi";
const char tuef[] PROGMEM = "martedi";
const char wedf[] PROGMEM = "mercoledi";
const char thuf[] PROGMEM = "giovedi";
const char frif[] PROGMEM = "venerdi";
const char satf[] PROGMEM = "sabato";
const char sunf[] PROGMEM = "domenica";

const char jan[] PROGMEM = "gennaio";
const char feb[] PROGMEM = "febbraio";
const char mar[] PROGMEM = "marzo";
const char apr[] PROGMEM = "aprile";
const char may[] PROGMEM = "maggio";
const char jun[] PROGMEM = "giugno";
const char jul[] PROGMEM = "luglio";
const char aug[] PROGMEM = "agostp";
const char sep[] PROGMEM = "settembre";
const char octt[] PROGMEM = "ottobre";
const char nov[] PROGMEM = "novembre";
const char decc[] PROGMEM = "dicembre";

const char wn_N[]      PROGMEM = "NORD";
const char wn_NNE[]    PROGMEM = "NNE";
const char wn_NE[]     PROGMEM = "NE";
const char wn_ENE[]    PROGMEM = "ENE";
const char wn_E[]      PROGMEM = "EST";
const char wn_ESE[]    PROGMEM = "ESE";
const char wn_SE[]     PROGMEM = "SE";
const char wn_SSE[]    PROGMEM = "SSE";
const char wn_S[]      PROGMEM = "SUD";
const char wn_SSW[]    PROGMEM = "SSO";
const char wn_SW[]     PROGMEM = "SO";
const char wn_WSW[]    PROGMEM = "OSO";
const char wn_W[]      PROGMEM = "OVEST";
const char wn_WNW[]    PROGMEM = "ONO";
const char wn_NW[]     PROGMEM = "NO";
const char wn_NNW[]    PROGMEM = "NNO";

const char* const dow[]     PROGMEM = { sun, mon, tue, wed, thu, fri, sat };
const char* const dowf[]    PROGMEM = { sunf, monf, tuef, wedf, thuf, frif, satf };
const char* const mnths[]   PROGMEM = { jan, feb, mar, apr, may, jun, jul, aug, sep, octt, nov, decc };
const char* const wind[]    PROGMEM = { wn_N, wn_NNE, wn_NE, wn_ENE, wn_E, wn_ESE, wn_SE, wn_SSE, wn_S, wn_SSW, wn_SW, wn_WSW, wn_W, wn_WNW, wn_NW, wn_NNW, wn_N };

const char    const_PlReady[]    PROGMEM = "[pronto]";
const char  const_PlStopped[]    PROGMEM = "[fermato]";
const char  const_PlConnect[]    PROGMEM = "[in connessione]";
const char  const_DlgVolume[]    PROGMEM = "VOLUME";
const char    const_DlgLost[]    PROGMEM = "* PERSO *";
const char  const_DlgUpdate[]    PROGMEM = "* AGGIORNAMENTO *";
const char const_DlgNextion[]    PROGMEM = "* NEXTION *";
const char const_getWeather[]    PROGMEM = "";
const char  const_waitForSD[]    PROGMEM = "INDEX SD";

const char        apNameTxt[]    PROGMEM = "AP NAME";
const char        apPassTxt[]    PROGMEM = "PASSWORD";
const char       bootstrFmt[]    PROGMEM = "Trying to %s";
const char        apSettFmt[]    PROGMEM = "IMPOSTAZIONI: HTTP://%s/";
#if EXT_WEATHER
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 percepiti: %.1f\011C \007 pressione: %d mbar \007 umidita': %s%% \007 vento: %.1f m/s [%s]";
#else
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 pressione: %d mbar \007 umidita: %s%%";
#endif
const char     weatherUnits[]    PROGMEM = "metric";   /* standard, metric, imperial */
const char      weatherLang[]    PROGMEM = "it";       /* https://openweathermap.org/current#multi */

#endif
