// FUN_0135ba80 @ 0135ba80 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_0135ba80(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (param_3 < 0) {
LAB_0135baa0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,param_3);
  }
  if (param_3 == 0) {
    iVar2 = 1;
    iVar3 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(param_3);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_0135baa0;
    }
    iVar3 = param_3;
  }
  FUN_016dd1aa(iVar2,param_2,param_3);
  param_1[5] = param_5;
  *param_1 = 0x80000001;
  param_1[1] = iVar3;
  param_1[2] = iVar2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  return;
}

