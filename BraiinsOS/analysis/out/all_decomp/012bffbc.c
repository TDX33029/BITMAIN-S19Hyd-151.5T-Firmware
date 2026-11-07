// FUN_012bffbc @ 012bffbc size=276 calls_out=1 calls_in=1
// strings: 

int * FUN_012bffbc(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1[8] == 0) {
    return (int *)0x0;
  }
  param_1[8] = param_1[8] + -1;
  if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a9ff4);
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)param_1[2];
    for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar2 = (int *)piVar2[0x23];
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = (int)piVar2;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
    if (*(short *)((int)piVar2 + 0x8a) == 0) goto LAB_012c0044;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
    if (*(ushort *)((int)piVar2 + 0x8a) <= uVar5) {
LAB_012c0044:
      do {
        piVar3 = (int *)*piVar2;
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar5 = (uint)*(ushort *)(piVar2 + 0x22);
        iVar4 = iVar4 + 1;
        piVar2 = piVar3;
      } while (*(ushort *)((int)piVar3 + 0x8a) <= uVar5);
      goto LAB_012c0068;
    }
  }
  piVar3 = piVar2;
LAB_012c0068:
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    piVar2 = piVar3;
  }
  else {
    piVar1 = piVar3 + uVar5 + 0x24;
    do {
      piVar2 = (int *)*piVar1;
      iVar4 = iVar4 + -1;
      piVar1 = piVar2 + 0x23;
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = (int)piVar2;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return piVar3 + uVar5 * 3 + 1;
}

