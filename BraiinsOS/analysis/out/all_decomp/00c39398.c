// FUN_00c39398 @ 00c39398 size=272 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_00c39398(int *param_1)

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
      iVar1 = *(int *)(iVar1 + 0x90);
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = iVar1;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
    if (*(short *)(iVar1 + 0x8a) == 0) goto LAB_00c39420;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
    if (*(ushort *)(iVar1 + 0x8a) <= uVar5) {
LAB_00c39420:
      do {
        iVar3 = *(int *)(iVar1 + 0x58);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar5 = (uint)*(ushort *)(iVar1 + 0x88);
        iVar4 = iVar4 + 1;
        iVar1 = iVar3;
      } while (*(ushort *)(iVar3 + 0x8a) <= uVar5);
      goto LAB_00c39444;
    }
  }
  iVar3 = iVar1;
LAB_00c39444:
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    iVar1 = iVar3;
  }
  else {
    piVar2 = (int *)(iVar3 + uVar5 * 4 + 0x94);
    do {
      iVar1 = *piVar2;
      iVar4 = iVar4 + -1;
      piVar2 = (int *)(iVar1 + 0x90);
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = iVar1;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return CONCAT44(iVar3 + uVar5 * 8,iVar3 + uVar5 * 4 + 0x5c);
}

