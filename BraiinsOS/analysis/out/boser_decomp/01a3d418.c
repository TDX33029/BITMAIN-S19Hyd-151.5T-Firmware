// FUN_01a3d418 @ 01a3d418 size=60 calls_out=2 calls_in=4
// strings: 

void FUN_01a3d418(int *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x2000);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x2000);
  }
  *param_1 = iVar1;
  param_1[1] = 0;
  param_1[2] = 0x2000;
  param_1[3] = 0x11;
  param_1[4] = 0x2000;
  return;
}

