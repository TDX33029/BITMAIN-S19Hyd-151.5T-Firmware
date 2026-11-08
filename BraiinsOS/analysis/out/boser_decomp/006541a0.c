// FUN_006541a0 @ 006541a0 size=124 calls_out=1 calls_in=5
// strings: 

bool FUN_006541a0(int param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  
  if (*(uint *)(param_1 + 8) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,*(uint *)(param_1 + 8),&DAT_01c03458);
  }
  if ((param_3 & 1) == 0) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + param_2 * 0x14);
  }
  else {
    if (*(uint *)(param_1 + 0x14) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_4,*(uint *)(param_1 + 0x14),&DAT_01c03468);
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + param_4 * 9 + 5);
  }
  return *piVar1 != 0;
}

