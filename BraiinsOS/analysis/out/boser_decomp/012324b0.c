// FUN_012324b0 @ 012324b0 size=192 calls_out=2 calls_in=1
// strings: manual | manual_indefinitestruct FanControlstruct PoolConfigstruct GroupConfigstruct PauseConfigstruct TempControlstruct FanControlV2struct TempControlV2struct HashChainGlobalstruct ConfigDescriptor

void FUN_012324b0(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 4) {
    if (*param_2 == 0x6f747561) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_01232544;
    }
LAB_0123254c:
    uVar3 = FUN_01265080(param_2,param_3,&DAT_01c24bcc,3);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uVar1 = 1;
  }
  else {
    if (param_3 == 6) {
      iVar2 = thunk_FUN_01bed842(param_2,"manual",6);
      if (iVar2 != 0) goto LAB_0123254c;
      uVar1 = 1;
    }
    else {
      if ((param_3 != 0x11) ||
         (iVar2 = thunk_FUN_01bed842(param_2,
                                     "manual_indefinitestruct FanControlstruct PoolConfigstruct GroupConfigstruct PauseConfigstruct TempControlstruct FanControlV2struct TempControlV2struct HashChainGlobalstruct ConfigDescriptor"
                                     ,0x11), iVar2 != 0)) goto LAB_0123254c;
      uVar1 = 2;
    }
    param_1[1] = uVar1;
    uVar1 = 0;
  }
LAB_01232544:
  *param_1 = uVar1;
  return;
}

