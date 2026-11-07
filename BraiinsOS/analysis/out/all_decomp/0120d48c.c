// FUN_0120d48c @ 0120d48c size=72 calls_out=1 calls_in=0
// strings: 

void FUN_0120d48c(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  param_1 = (undefined4 *)*param_1;
  piVar1 = (int *)*param_1;
  piVar2 = (int *)param_1[1];
  *param_1 = 0;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  iVar3 = *piVar1;
  iVar4 = piVar1[1];
  *piVar1 = 0;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a78a8);
  }
  *piVar2 = iVar3;
  piVar2[1] = iVar4;
  return;
}

