// FUN_01ad61b4 @ 01ad61b4 size=292 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01ad61b4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
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
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = param_1[2];
    for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar1 = *(int *)(iVar1 + 0x5b8);
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = iVar1;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
  }
  if (uVar5 < *(ushort *)(iVar1 + 0x5b2)) {
    iVar3 = iVar1;
  }
  else {
    do {
      iVar3 = *(int *)(iVar1 + 0x528);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fff0);
      }
      uVar5 = (uint)*(ushort *)(iVar1 + 0x5b0);
      iVar4 = iVar4 + 1;
      iVar1 = iVar3;
    } while (*(ushort *)(iVar3 + 0x5b2) <= uVar5);
  }
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    iVar1 = iVar3;
  }
  else {
    piVar2 = (int *)(iVar3 + uVar5 * 4 + 0x5bc);
    do {
      iVar1 = *piVar2;
      iVar4 = iVar4 + -1;
      piVar2 = (int *)(iVar1 + 0x5b8);
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[3] = iVar4;
  param_1[1] = iVar1;
  param_1[2] = 0;
  return CONCAT44(iVar3 + uVar5 * 0x78,iVar3 + uVar5 * 0xc + 0x52c);
}

