// FUN_0003aa48 @ 0003aa48  size=60  callers=2
// program: bmminer


void FUN_0003aa48(char *param_1)

{
  tm *__tp;
  time_t tStack_c;
  
  time(&tStack_c);
  __tp = gmtime(&tStack_c);
  strftime(param_1,0x20,"%a, %d %b %Y %T GMT",__tp);
  return;
}

