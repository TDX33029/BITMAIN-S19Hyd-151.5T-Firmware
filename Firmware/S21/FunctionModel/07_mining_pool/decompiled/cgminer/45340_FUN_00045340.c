// FUN_00045340 @ 00045340  size=88  callers=1
// program: cgminer


undefined4 FUN_00045340(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  snprintf(param_3,0xb,"%p",param_2);
  iVar1 = FUN_000466bc(param_1,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_000495d8();
    uVar2 = FUN_00046428(param_1,param_3,uVar2);
    return uVar2;
  }
  return 0xffffffff;
}

