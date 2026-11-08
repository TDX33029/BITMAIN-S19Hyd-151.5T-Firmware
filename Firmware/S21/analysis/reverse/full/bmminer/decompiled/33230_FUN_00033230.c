// FUN_00033230 @ 00033230  size=156  callers=1
// program: bmminer


undefined4 FUN_00033230(char *param_1,size_t param_2,int param_3)

{
  int iVar1;
  char *param4;
  
  iVar1 = FUN_00057d2c();
  if (iVar1 == 0) {
    snprintf(param_1,param_2,"%d",param_3);
    return 0;
  }
  if (iVar1 == 1) {
    param4 = (char *)FUN_0005724c();
    snprintf(param_1,param_2,"%s:%s","searchfailed",param4);
    return 0;
  }
  snprintf(param_1,param_2,"searching");
  return 0;
}

