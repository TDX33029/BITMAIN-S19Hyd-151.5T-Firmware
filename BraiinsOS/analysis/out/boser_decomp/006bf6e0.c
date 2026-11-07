// FUN_006bf6e0 @ 006bf6e0 size=268 calls_out=1 calls_in=6
// strings: 

int FUN_006bf6e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1[8] == 0) {
    iVar2 = 0;
  }
  else {
    param_1[8] = param_1[8] + -1;
    if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ffe0);
    }
    iVar3 = param_1[1];
    if (iVar3 == 0) {
      iVar3 = param_1[2];
      for (iVar2 = param_1[3]; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar3 = *(int *)(iVar3 + 0x820);
      }
      uVar5 = 0;
      iVar4 = 0;
      *param_1 = 1;
    }
    else {
      iVar4 = param_1[2];
      uVar5 = param_1[3];
    }
    if (uVar5 < *(ushort *)(iVar3 + 0x81a)) {
      iVar2 = iVar3;
    }
    else {
      do {
        iVar2 = *(int *)(iVar3 + 0x790);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fff0);
        }
        uVar5 = (uint)*(ushort *)(iVar3 + 0x818);
        iVar4 = iVar4 + 1;
        iVar3 = iVar2;
      } while (*(ushort *)(iVar2 + 0x81a) <= uVar5);
    }
    if (iVar4 == 0) {
      iVar4 = uVar5 + 1;
      iVar3 = iVar2;
    }
    else {
      piVar1 = (int *)(iVar2 + uVar5 * 4 + 0x824);
      do {
        iVar3 = *piVar1;
        iVar4 = iVar4 + -1;
        piVar1 = (int *)(iVar3 + 0x820);
      } while (iVar4 != 0);
      iVar4 = 0;
    }
    iVar2 = uVar5 * 0xb0 + iVar2;
    param_1[1] = iVar3;
    param_1[2] = 0;
    param_1[3] = iVar4;
  }
  return iVar2;
}

