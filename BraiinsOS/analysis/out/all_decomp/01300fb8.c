// FUN_01300fb8 @ 01300fb8 size=172 calls_out=3 calls_in=0
// strings: 

void FUN_01300fb8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,*(uint *)(param_1 + 8),&DAT_01890988);
  }
  if (uVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = 0;
    iVar5 = uVar1 * 0x78;
    do {
      uVar1 = FUN_012fa894(iVar3);
      iVar2 = 1;
      if (0x7f < uVar1) {
        iVar2 = 2;
        if (0x3fff < uVar1) {
          iVar2 = 3;
        }
        if ((0x1fffff < uVar1) && (iVar2 = 5, uVar1 < 0x10000000)) {
          iVar2 = 4;
        }
      }
      iVar3 = iVar3 + 0x78;
      iVar5 = iVar5 + -0x78;
      iVar4 = iVar4 + uVar1 + iVar2 + 2;
    } while (iVar5 != 0);
  }
  iVar5 = FUN_01337c54(*(undefined4 *)(param_1 + 0x10));
  *(int *)(param_1 + 0x14) = iVar5 + iVar4;
  return;
}

