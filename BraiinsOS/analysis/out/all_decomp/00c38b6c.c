// FUN_00c38b6c @ 00c38b6c size=272 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_00c38b6c(int *param_1)

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
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    iVar3 = param_1[2];
    for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar3 = *(int *)(iVar3 + 0xb8);
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = iVar3;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
    if (*(short *)(iVar3 + 0xb6) == 0) goto LAB_00c38bf4;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
    if (*(ushort *)(iVar3 + 0xb6) <= uVar5) {
LAB_00c38bf4:
      do {
        iVar1 = *(int *)(iVar3 + 0xb0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb4);
        iVar4 = iVar4 + 1;
        iVar3 = iVar1;
      } while (*(ushort *)(iVar1 + 0xb6) <= uVar5);
      goto LAB_00c38c18;
    }
  }
  iVar1 = iVar3;
LAB_00c38c18:
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    iVar3 = iVar1;
  }
  else {
    piVar2 = (int *)(iVar1 + uVar5 * 4 + 0xbc);
    do {
      iVar3 = *piVar2;
      iVar4 = iVar4 + -1;
      piVar2 = (int *)(iVar3 + 0xb8);
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = iVar3;
  param_1[2] = 0;
  param_1[3] = iVar4;
  iVar1 = iVar1 + uVar5 * 8;
  return CONCAT44(iVar1 + 0x58,iVar1);
}

