// FUN_00b64e38 @ 00b64e38 size=112 calls_out=5 calls_in=3
// strings: Timestamp

void FUN_00b64e38(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_011e6a00(&uStack_24);
  FUN_019bb7e0(uStack_24,uStack_20);
  iVar1 = thunk_FUN_01be5118(9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,9);
  }
  FUN_01bed4e2(iVar1,"Timestamp",9);
  *param_1 = 9;
  param_1[1] = iVar1;
  param_1[2] = 9;
  return;
}

