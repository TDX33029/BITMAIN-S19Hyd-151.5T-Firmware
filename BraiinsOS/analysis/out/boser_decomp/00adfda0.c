// FUN_00adfda0 @ 00adfda0 size=144 calls_out=4 calls_in=9
// strings: 

void FUN_00adfda0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_r7;
  
  if (param_3 == 0) {
    uVar1 = 0x80000000;
  }
  else {
    uVar1 = 0x10;
    unaff_r7 = thunk_FUN_01be5118(0x10);
    if (unaff_r7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x10);
    }
    FUN_01bed4e2(unaff_r7,param_3,0x10);
  }
  if (*(int *)(param_2 + 0x2c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30));
  }
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined4 *)(param_2 + 0x34) = 0x10;
  *(int *)(param_2 + 0x30) = unaff_r7;
  FUN_01bed4e2(param_1,param_2,0x48);
  return;
}

