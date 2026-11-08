// FUN_00b63248 @ 00b63248 size=112 calls_out=5 calls_in=1
// strings: Temperature

void FUN_00b63248(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_00b5bd7c(&uStack_24);
  FUN_019bb7e0(uStack_24,uStack_20);
  iVar1 = thunk_FUN_01be5118(0xb);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xb);
  }
  FUN_01bed4e2(iVar1,"Temperature",0xb);
  *param_1 = 0xb;
  param_1[1] = iVar1;
  param_1[2] = 0xb;
  return;
}

