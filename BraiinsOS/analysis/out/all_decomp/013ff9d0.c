// FUN_013ff9d0 @ 013ff9d0 size=140 calls_out=1 calls_in=0
// strings: 

uint FUN_013ff9d0(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003e937e,0x1e,&DAT_018a1998);
  }
  uVar1 = 0;
  if (param_2 != 0) {
    if (param_2 != 1) {
      uVar2 = 0;
      do {
        uVar1 = uVar2 + (param_2 >> 1);
        param_2 = param_2 - (param_2 >> 1);
        if (param_4 < *(uint *)(param_1 + uVar1 * 0xc)) {
          uVar1 = uVar2;
        }
        uVar2 = uVar1;
      } while (1 < param_2);
    }
    uVar1 = *(uint *)(param_1 + uVar1 * 0xc);
    uVar1 = (uint)(uVar1 <= param_4 && param_3 <= uVar1);
  }
  return uVar1;
}

