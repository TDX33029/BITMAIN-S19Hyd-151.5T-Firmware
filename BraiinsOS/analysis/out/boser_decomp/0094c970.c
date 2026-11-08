// FUN_0094c970 @ 0094c970 size=148 calls_out=4 calls_in=9
// strings: 

void FUN_0094c970(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  int unaff_r7;
  
  if (param_3 == 0) {
    param_4 = 0x80000000;
  }
  else {
    unaff_r7 = FUN_01298504(param_4,1);
    if (unaff_r7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_4);
    }
    FUN_01bed4e2(unaff_r7,param_3,param_4);
    unaff_r6 = param_4;
  }
  if (*(int *)(param_2 + 0xd4) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_2 + 0xd4),*(undefined4 *)(param_2 + 0xd8));
  }
  *(undefined4 *)(param_2 + 0xd4) = param_4;
  *(int *)(param_2 + 0xd8) = unaff_r7;
  *(undefined4 *)(param_2 + 0xdc) = unaff_r6;
  FUN_01bed4e2(param_1,param_2,0x130);
  return;
}

