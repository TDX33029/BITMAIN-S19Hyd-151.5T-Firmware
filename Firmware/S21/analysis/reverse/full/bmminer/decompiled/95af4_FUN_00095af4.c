// FUN_00095af4 @ 00095af4  size=88  callers=1
// program: bmminer


void FUN_00095af4(char *param_1,size_t param_2)

{
  tm tStack_38;
  time_t tStack_c;
  
  time(&tStack_c);
  localtime_r(&tStack_c,&tStack_38);
  strftime(param_1,param_2,"%m-%d %T",&tStack_38);
  return;
}

