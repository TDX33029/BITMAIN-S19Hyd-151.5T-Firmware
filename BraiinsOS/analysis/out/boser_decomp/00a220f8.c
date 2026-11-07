// FUN_00a220f8 @ 00a220f8 size=52 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_00a220f8(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2 - 4U >> 1;
  if ((uVar1 | param_2 << 0x1f) < 8) {
                    /* WARNING: Could not recover jumptable at 0x00a22120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_00a22124 + *(int *)(&DAT_00a22124 + uVar1 * 4)))();
    return uVar2;
  }
  return 5;
}

