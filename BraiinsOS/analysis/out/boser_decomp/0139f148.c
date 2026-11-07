// FUN_0139f148 @ 0139f148 size=108 calls_out=1 calls_in=43
// strings: 

void FUN_0139f148(int param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iStack_14;
  int *piStack_10;
  code *pcStack_c;
  
  if (((param_2 <= param_3) ||
      (piVar1 = (int *)(param_1 + param_3 * 0xf0), *piVar1 == 3 && piVar1[1] == 0)) ||
     (piVar1[0x33] != param_4)) {
    piStack_10 = &iStack_14;
    pcStack_c = FUN_00b1c384;
    iStack_14 = param_4;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005bd439,&piStack_10,&DAT_01cedba4);
  }
  return;
}

