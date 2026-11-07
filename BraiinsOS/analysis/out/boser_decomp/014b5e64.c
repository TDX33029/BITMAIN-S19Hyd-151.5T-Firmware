// FUN_014b5e64 @ 014b5e64 size=144 calls_out=3 calls_in=2
// strings: 

void FUN_014b5e64(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_01be5118(0xf);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xf);
  }
  FUN_01bed4e2(iVar1,&DAT_004a34b0,0xf);
  iVar2 = thunk_FUN_01be5118(0xf);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xf);
  }
  FUN_01bed4e2(iVar2,&DAT_004a34b0,0xf);
  *param_1 = 0xf;
  param_1[1] = iVar1;
  param_1[2] = 0xf;
  param_1[3] = 0xf;
  param_1[4] = iVar2;
  param_1[5] = 0xf;
  return;
}

