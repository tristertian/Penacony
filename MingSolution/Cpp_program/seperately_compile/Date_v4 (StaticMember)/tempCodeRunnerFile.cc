Date::Date(){
    // acquair for breakdown time
    time_t current = time(NULL);
    struct tm* local = localtime(&current);
    y = local->tm_year + 1900;  // year: tm_year is GEOcalendar-1900
    m = local->tm_mon + 1;      // month: tm_mon is between 0~11
    d = local->tm_mday;
}