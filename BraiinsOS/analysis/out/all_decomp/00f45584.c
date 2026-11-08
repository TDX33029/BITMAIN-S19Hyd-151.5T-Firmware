// FUN_00f45584 @ 00f45584 size=292 calls_out=1 calls_in=136
// strings: 

undefined8 FUN_00f45584(int *param_1)

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
      iVar2 = *(int *)(iVar2 + 0x198);
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = iVar2;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
    if (*(short *)(iVar2 + 0x192) == 0) goto LAB_00f45618;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
    if (*(ushort *)(iVar2 + 0x192) <= uVar5) {
LAB_00f45618:
      do {
        iVar3 = *(int *)(iVar2 + 0x108);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar5 = (uint)*(ushort *)(iVar2 + 400);
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (*(ushort *)(iVar3 + 0x192) <= uVar5);
      goto LAB_00f4563c;
    }
  }
  iVar3 = iVar2;
LAB_00f4563c:
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    iVar2 = iVar3;
  }
  else {
    piVar1 = (int *)(iVar3 + uVar5 * 4 + 0x19c);
    do {
      iVar2 = *piVar1;
      iVar4 = iVar4 + -1;
      piVar1 = (int *)(iVar2 + 0x198);
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = iVar2;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return CONCAT44(iVar3 + uVar5 * 0x18,iVar3 + uVar5 * 0xc + 0x10c);
}

