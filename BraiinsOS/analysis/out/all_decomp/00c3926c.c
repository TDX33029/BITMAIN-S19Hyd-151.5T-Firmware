// FUN_00c3926c @ 00c3926c size=284 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_00c3926c(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1[8] == 0) {
    return 0;
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
      piVar2 = (int *)piVar2[0x2e];
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = (int)piVar2;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
    if (*(short *)((int)piVar2 + 0xb6) == 0) goto LAB_00c392f4;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
    if (*(ushort *)((int)piVar2 + 0xb6) <= uVar5) {
LAB_00c392f4:
      do {
        piVar3 = (int *)*piVar2;
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar5 = (uint)*(ushort *)(piVar2 + 0x2d);
        iVar4 = iVar4 + 1;
        piVar2 = piVar3;
      } while (*(ushort *)((int)piVar3 + 0xb6) <= uVar5);
      goto LAB_00c39318;
    }
  }
  piVar3 = piVar2;
LAB_00c39318:
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    piVar2 = piVar3;
  }
  else {
    piVar1 = piVar3 + uVar5 + 0x2f;
    do {
      piVar2 = (int *)*piVar1;
      iVar4 = iVar4 + -1;
      piVar1 = piVar2 + 0x2e;
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = (int)piVar2;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return CONCAT44(piVar3 + uVar5 * 3 + 0xc,piVar3 + uVar5 + 1);
}

