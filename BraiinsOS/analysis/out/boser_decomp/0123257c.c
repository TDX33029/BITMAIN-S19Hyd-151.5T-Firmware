// FUN_0123257c @ 0123257c size=208 calls_out=2 calls_in=1
// strings: manual | manual_indefinitestruct FanControlstruct PoolConfigstruct GroupConfigstruct PauseConfigstruct TempControlstruct FanControlV2struct TempControlV2struct HashChainGlobalstruct ConfigDescriptor

void FUN_0123257c(undefined4 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 4) {
    if (*param_2 != 0x6f747561) goto LAB_01232628;
    *param_1 = 2;
    uVar1 = 0;
  }
  else if (param_3 == 6) {
    iVar2 = thunk_FUN_01bed842(param_2,"manual",6);
    if (iVar2 != 0) {
LAB_01232628:
      FUN_0123c0e0(param_1,param_2,param_3,&DAT_01c24bcc,3);
      return;
    }
    *param_1 = 2;
    uVar1 = 1;
  }
  else {
    if ((param_3 != 0x11) ||
       (iVar2 = thunk_FUN_01bed842(param_2,
                                   "manual_indefinitestruct FanControlstruct PoolConfigstruct GroupConfigstruct PauseConfigstruct TempControlstruct FanControlV2struct TempControlV2struct HashChainGlobalstruct ConfigDescriptor"
                                   ,0x11), iVar2 != 0)) goto LAB_01232628;
    uVar1 = 2;
    *param_1 = 2;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

