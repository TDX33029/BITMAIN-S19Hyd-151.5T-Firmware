// FUN_00095b4c @ 00095b4c  size=668  callers=134
// program: bmminer


undefined4 FUN_00095b4c(int param_1,char *param_2,long param_3,char *param_4,undefined1 param_5)

{
  __pid_t _Var1;
  undefined1 uStack00000000;
  char acStack_30 [24];
  FILE *local_14;
  
  local_14 = (FILE *)0x0;
  if (DAT_00a4e818 == 0) {
    DAT_00a4e818 = 1;
    DAT_00a4e81c = getenv("ZLOG_PROFILE_DEBUG");
    DAT_00a4e820 = getenv("ZLOG_PROFILE_ERROR");
  }
  if (param_1 == 1) {
    if (DAT_00a4e820 == (char *)0x0) {
      return 0;
    }
    local_14 = fopen64(DAT_00a4e820,"a");
    if (local_14 == (FILE *)0x0) {
      return 0xffffffff;
    }
    FUN_00095af4(acStack_30,0x15);
    _Var1 = getpid();
    fprintf(local_14,"%s WARN  (%d:%s:%ld) ",acStack_30,_Var1,param_2,param_3);
  }
  else if (param_1 == 2) {
    if (DAT_00a4e820 == (char *)0x0) {
      return 0;
    }
    local_14 = fopen64(DAT_00a4e820,"a");
    if (local_14 == (FILE *)0x0) {
      return 0xffffffff;
    }
    FUN_00095af4(acStack_30,0x15);
    _Var1 = getpid();
    fprintf(local_14,"%s ERROR (%d:%s:%ld) ",acStack_30,_Var1,param_2,param_3);
  }
  else if (param_1 == 0) {
    if (DAT_00a4e81c == (char *)0x0) {
      return 0;
    }
    local_14 = fopen64(DAT_00a4e81c,"a");
    if (local_14 == (FILE *)0x0) {
      return 0xffffffff;
    }
    FUN_00095af4(acStack_30,0x15);
    _Var1 = getpid();
    fprintf(local_14,"%s DEBUG (%d:%s:%ld) ",acStack_30,_Var1,param_2,param_3);
  }
  vfprintf(local_14,param_4,&param_5);
  fputc(10,local_14);
  fclose(local_14);
  return 0;
}

