// FUN_01ad608c @ 01ad608c size=280 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01ad608c(int *param_1)

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
    FUN_012fb0cc(&DAT_01d2ffe0);
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)param_1[2];
    for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar2 = (int *)piVar2[0x44];
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = (int)piVar2;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
  }
  if (uVar5 < *(ushort *)((int)piVar2 + 0x10e)) {
    piVar3 = piVar2;
  }
  else {
    do {
      piVar3 = (int *)*piVar2;
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fff0);
      }
      uVar5 = (uint)*(ushort *)(piVar2 + 0x43);
      iVar4 = iVar4 + 1;
      piVar2 = piVar3;
    } while (*(ushort *)((int)piVar3 + 0x10e) <= uVar5);
  }
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    piVar2 = piVar3;
  }
  else {
    piVar1 = piVar3 + uVar5 + 0x45;
    do {
      piVar2 = (int *)*piVar1;
      iVar4 = iVar4 + -1;
      piVar1 = piVar2 + 0x44;
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = (int)piVar2;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return CONCAT44(piVar3 + uVar5 * 3 + 0x22,piVar3 + uVar5 * 3 + 1);
}

