// FUN_000316dc @ 000316dc  size=248  callers=0
// program: cgminer


int FUN_000316dc(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  char local_810 [2048];
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  *(undefined4 *)(param_2 + 0x4c) = param_3;
  FUN_00028c90(param_2);
  if (*(int *)(param_2 + 0xdc) != 0) {
    FUN_00030ec0(param_1);
    return 0;
  }
  FUN_000314b0(param_1 + 0x24,param_2);
  iVar1 = FUN_0001fe44(param_2 + 0xc0,param_2 + 0xa0);
  if (iVar1 == 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 6)) {
      iVar1 = 0;
    }
    else {
      builtin_strncpy(local_810,"Share above target",0x13);
      FUN_0001dd98(6,local_810,0);
    }
  }
  return iVar1;
}

