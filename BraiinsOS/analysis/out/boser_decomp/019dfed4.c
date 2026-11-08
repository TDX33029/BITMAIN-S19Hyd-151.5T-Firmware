// FUN_019dfed4 @ 019dfed4 size=92 calls_out=1 calls_in=2
// strings: 

int * FUN_019dfed4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2b728);
  }
  if (piVar1 == param_1) {
    return (int *)0x0;
  }
  iVar2 = *piVar1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2b738);
  }
  *param_1 = iVar2;
  *(int **)(iVar2 + 4) = param_1;
  *piVar1 = 0;
  piVar1[1] = 0;
  return piVar1;
}

