// FUN_00c3914c @ 00c3914c size=272 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_00c3914c(int *param_1)

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
    FUN_00faa444(&DAT_018a9ff4);
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
    if (*(short *)(iVar2 + 0x5e) == 0) goto LAB_00c391d4;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
    if (*(ushort *)(iVar2 + 0x5e) <= uVar5) {
LAB_00c391d4:
      do {
        iVar3 = *(int *)(iVar2 + 0x58);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar5 = (uint)*(ushort *)(iVar2 + 0x5c);
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (*(ushort *)(iVar3 + 0x5e) <= uVar5);
      goto LAB_00c391f8;
    }
  }
  iVar3 = iVar2;
LAB_00c391f8:
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    iVar2 = iVar3;
  }
  else {
    piVar1 = (int *)(iVar3 + uVar5 * 4 + 100);
    do {
      iVar2 = *piVar1;
      iVar4 = iVar4 + -1;
      piVar1 = (int *)(iVar2 + 0x60);
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = iVar2;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return CONCAT44(iVar3 + 0x60,iVar3 + uVar5 * 8);
}

