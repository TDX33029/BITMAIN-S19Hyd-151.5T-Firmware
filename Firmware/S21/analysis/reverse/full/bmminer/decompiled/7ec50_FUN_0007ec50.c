// FUN_0007ec50 @ 0007ec50  size=120  callers=37
// program: bmminer


undefined4 FUN_0007ec50(undefined4 param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    iVar2 = FUN_0007e790(param_2,sVar1);
    if (iVar2 != 0) {
      uVar3 = FUN_0007eb90(param_1,param_2,param_3);
      return uVar3;
    }
  }
  FUN_0007e8e0(param_3);
  return 0xffffffff;
}

