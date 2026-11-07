// FUN_008eb7e4 @ 008eb7e4 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_008eb7e4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  iVar4 = piVar2[1];
  iVar5 = piVar2[2];
  piVar3 = (int *)piVar2[3];
  *piVar2 = -0x80000000;
  if (iVar1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar4;
  piVar3[2] = iVar5;
  return;
}

