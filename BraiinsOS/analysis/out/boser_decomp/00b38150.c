// FUN_00b38150 @ 00b38150 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_00b38150(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x80000001) {
    uVar1 = 0;
  }
  if ((uVar1 & 0x7fffffff) < 4) {
                    /* WARNING: Could not recover jumptable at 0x00b38178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((int)&DAT_00b3817c + (&DAT_00b3817c)[uVar1]))();
    return;
  }
  if (param_1[1] == 0x80000001) {
    return;
  }
  FUN_00b381cc(param_1 + 1);
  return;
}

