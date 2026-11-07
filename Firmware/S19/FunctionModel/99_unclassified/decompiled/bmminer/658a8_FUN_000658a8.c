// FUN_000658a8 @ 000658a8  size=424  callers=110
// program: bmminer


undefined4 FUN_000658a8(int param_1,char *param_2,long param_3,char *param_4,undefined1 param_5)

{
  __pid_t _Var1;
  FILE *param0;
  undefined1 uStack00000000;
  char acStack_30 [24];
  
  if (DAT_0071a100 == 0) {
    DAT_0071a100 = 1;
    DAT_0071a104 = getenv("ZLOG_PROFILE_DEBUG");
    DAT_0071a108 = getenv("ZLOG_PROFILE_ERROR");
  }
  if (param_1 == 1) {
    if (DAT_0071a108 == (char *)0x0) {
      return 0;
    }
    param0 = fopen64(DAT_0071a108,"a");
    if (param0 == (FILE *)0x0) {
      return 0xffffffff;
    }
    FUN_00065868(acStack_30);
    _Var1 = getpid();
    fprintf(param0,"%s WARN  (%d:%s:%ld) ",acStack_30,_Var1,param_2,param_3);
  }
  else if (param_1 == 2) {
    if (DAT_0071a108 == (char *)0x0) {
      return 0;
    }
    param0 = fopen64(DAT_0071a108,"a");
    if (param0 == (FILE *)0x0) {
      return 0xffffffff;
    }
    FUN_00065868(acStack_30);
    _Var1 = getpid();
    fprintf(param0,"%s ERROR (%d:%s:%ld) ",acStack_30,_Var1,param_2,param_3);
  }
  else if (param_1 == 0) {
    if (DAT_0071a104 == (char *)0x0) {
      return 0;
    }
    param0 = fopen64(DAT_0071a104,"a");
    if (param0 == (FILE *)0x0) {
      return 0xffffffff;
    }
    FUN_00065868(acStack_30);
    _Var1 = getpid();
    fprintf(param0,"%s DEBUG (%d:%s:%ld) ",acStack_30,_Var1,param_2,param_3);
  }
  else {
    param0 = (FILE *)0x0;
  }
  vfprintf(param0,param_4,&param_5);
  fputc(10,param0);
  fclose(param0);
  return 0;
}

