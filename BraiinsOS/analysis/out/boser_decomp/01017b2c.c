// FUN_01017b2c @ 01017b2c size=264 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_01017b2c(int *param_1)

{
  int *piVar1;
  int iVar2;
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
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    iVar2 = param_1[2];
    for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar2 = *(int *)(iVar2 + 0x60);
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = iVar2;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
  }
  iVar3 = iVar2;
  if (*(ushort *)(iVar2 + 0x5e) <= uVar5) {
    do {
      iVar2 = *(int *)(iVar3 + 0x58);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fff0);
      }
      uVar5 = (uint)*(ushort *)(iVar3 + 0x5c);
      iVar4 = iVar4 + 1;
      iVar3 = iVar2;
    } while (*(ushort *)(iVar2 + 0x5e) <= uVar5);
  }
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    iVar3 = iVar2;
  }
  else {
    piVar1 = (int *)(iVar2 + uVar5 * 4 + 100);
    do {
      iVar3 = *piVar1;
      iVar4 = iVar4 + -1;
      piVar1 = (int *)(iVar3 + 0x60);
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = iVar3;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return CONCAT44(iVar2 + 0x60,iVar2 + uVar5 * 8);
}

