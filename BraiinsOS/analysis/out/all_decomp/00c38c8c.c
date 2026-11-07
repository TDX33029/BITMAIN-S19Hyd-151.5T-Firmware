// FUN_00c38c8c @ 00c38c8c size=284 calls_out=1 calls_in=5
// strings: 

undefined8 FUN_00c38c8c(int *param_1)

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
    FUN_00faa444(&DAT_018a9ff4);
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = param_1[2];
    for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar1 = *(int *)(iVar1 + 0x110);
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = iVar1;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
    if (*(short *)(iVar1 + 0x10e) == 0) goto LAB_00c38d20;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
    if (*(ushort *)(iVar1 + 0x10e) <= uVar5) {
LAB_00c38d20:
      do {
        iVar3 = *(int *)(iVar1 + 0x108);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar5 = (uint)*(ushort *)(iVar1 + 0x10c);
        iVar4 = iVar4 + 1;
        iVar1 = iVar3;
      } while (*(ushort *)(iVar3 + 0x10e) <= uVar5);
      goto LAB_00c38d44;
    }
  }
  iVar3 = iVar1;
LAB_00c38d44:
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    iVar1 = iVar3;
  }
  else {
    piVar2 = (int *)(iVar3 + uVar5 * 4 + 0x114);
    do {
      iVar1 = *piVar2;
      iVar4 = iVar4 + -1;
      piVar2 = (int *)(iVar1 + 0x110);
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = iVar1;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return CONCAT44(iVar3 + uVar5 * 0x10,iVar3 + uVar5 * 8 + 0xb0);
}

