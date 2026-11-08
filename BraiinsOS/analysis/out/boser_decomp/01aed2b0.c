// FUN_01aed2b0 @ 01aed2b0 size=80 calls_out=2 calls_in=1
// strings: 

int * FUN_01aed2b0(int param_1,uint param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    return *(int **)(param_1 + 0x2e8);
  }
  if (6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2 - 1,6,&DAT_01d303f4);
  }
  piVar1 = (int *)(param_1 + (param_2 - 1) * 0x7c);
  if (*piVar1 == -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d30404);
  }
  return piVar1;
}

