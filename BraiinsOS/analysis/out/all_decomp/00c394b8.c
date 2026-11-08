// FUN_00c394b8 @ 00c394b8 size=304 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_00c394b8(int *param_1)

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
      iVar2 = *(int *)(iVar2 + 0x9d8);
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = iVar2;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
    if (*(short *)(iVar2 + 0x9d2) == 0) goto LAB_00c3954c;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
    if (*(ushort *)(iVar2 + 0x9d2) <= uVar5) {
LAB_00c3954c:
      do {
        iVar3 = *(int *)(iVar2 + 0x948);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar5 = (uint)*(ushort *)(iVar2 + 0x9d0);
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (*(ushort *)(iVar3 + 0x9d2) <= uVar5);
      goto LAB_00c39570;
    }
  }
  iVar3 = iVar2;
LAB_00c39570:
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    iVar2 = iVar3;
  }
  else {
    piVar1 = (int *)(iVar3 + uVar5 * 4 + 0x9dc);
    do {
      iVar2 = *piVar1;
      iVar4 = iVar4 + -1;
      piVar1 = (int *)(iVar2 + 0x9d8);
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[3] = iVar4;
  param_1[1] = iVar2;
  param_1[2] = 0;
  return CONCAT44(uVar5 * 0xd8 + iVar3,iVar3 + uVar5 * 0xc + 0x94c);
}

