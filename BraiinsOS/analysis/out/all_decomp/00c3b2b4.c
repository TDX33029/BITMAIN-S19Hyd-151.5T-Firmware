// FUN_00c3b2b4 @ 00c3b2b4 size=284 calls_out=1 calls_in=0
// strings: 

int FUN_00c3b2b4(int *param_1)

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
    FUN_00faa444(&DAT_0188d374);
  }
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    iVar2 = param_1[2];
    for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar2 = *(int *)(iVar2 + 0x248);
    }
    uVar5 = 0;
    iVar4 = 0;
    *param_1 = 1;
    param_1[1] = iVar2;
    param_1[2] = 0;
    param_1[3] = 0;
    if (*(short *)(iVar2 + 0x242) == 0) goto LAB_00c3b348;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
    if (*(ushort *)(iVar2 + 0x242) <= uVar5) {
LAB_00c3b348:
      do {
        iVar3 = *(int *)(iVar2 + 0x210);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0188d364);
        }
        uVar5 = (uint)*(ushort *)(iVar2 + 0x240);
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (*(ushort *)(iVar3 + 0x242) <= uVar5);
      goto LAB_00c3b36c;
    }
  }
  iVar3 = iVar2;
LAB_00c3b36c:
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    iVar2 = iVar3;
  }
  else {
    piVar1 = (int *)(iVar3 + uVar5 * 4 + 0x24c);
    do {
      iVar2 = *piVar1;
      iVar4 = iVar4 + -1;
      piVar1 = (int *)(iVar2 + 0x248);
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = iVar2;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return iVar3 + uVar5 * 0x30;
}

