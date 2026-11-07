// FUN_012cec28 @ 012cec28 size=152 calls_out=4 calls_in=2
// strings: 

void FUN_012cec28(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = thunk_FUN_01be5118(0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x10);
  }
  FUN_01bed4e2(iVar1,param_2,0x10);
  iVar2 = thunk_FUN_01be5118(0x12);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x12);
  }
  FUN_01bed4e2(iVar2,param_3,0x12);
  uVar3 = FUN_01a3b664();
  *param_1 = 0x10;
  param_1[1] = iVar1;
  param_1[2] = 0x10;
  param_1[3] = 0x12;
  param_1[4] = iVar2;
  param_1[5] = 0x12;
  param_1[6] = uVar3;
  return;
}

