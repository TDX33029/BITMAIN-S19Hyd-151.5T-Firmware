// FUN_00078688 @ 00078688  size=124  callers=1
// program: bmminer


undefined4 FUN_00078688(undefined4 param_1,undefined4 param_2,char *param_3,size_t param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  snprintf(param_3,param_4,"%p",param_2);
  iVar1 = FUN_0007abfc(param_1,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_00080c6c();
    uVar2 = FUN_0007aa1c(param_1,param_3,uVar2);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

