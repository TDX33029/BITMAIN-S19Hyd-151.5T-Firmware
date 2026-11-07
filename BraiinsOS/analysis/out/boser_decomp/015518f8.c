// FUN_015518f8 @ 015518f8 size=72 calls_out=1 calls_in=0
// strings: 

void FUN_015518f8(undefined4 *param_1)

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
    FUN_012fb0cc(&DAT_01d293f0);
  }
  iVar3 = *piVar1;
  iVar4 = piVar1[1];
  *piVar1 = 0;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d24074);
  }
  *piVar2 = iVar3;
  piVar2[1] = iVar4;
  return;
}

