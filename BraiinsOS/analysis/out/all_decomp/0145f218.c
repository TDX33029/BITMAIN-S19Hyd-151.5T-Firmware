// FUN_0145f218 @ 0145f218 size=252 calls_out=3 calls_in=6
// strings: 

void FUN_0145f218(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 3) {
    uVar2 = *(uint *)(param_1 + 0x90);
    iVar1 = 1;
    if (2 < uVar2) {
      iVar1 = uVar2 - 3;
    }
    if (iVar1 == 2) {
      if (*(char *)(param_1 + 0xf7) == '\x01') {
        if (((*(byte *)(param_1 + 0xd0) != 0xb) && (9 < *(byte *)(param_1 + 0xd0))) &&
           (*(int *)(param_1 + 0xd8) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd4));
        }
        *(int *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 *)(param_1 + 0xf7) = 0;
        *(undefined1 *)(param_1 + 0xd0) = 0xb;
        if ((uVar2 == 0) && (iVar1 = *(int *)(param_1 + 0x94), iVar1 != -0x80000000)) {
          uVar3 = *(undefined4 *)(param_1 + 0x98);
          FUN_007bae88(uVar3,*(undefined4 *)(param_1 + 0x9c));
          if (iVar1 != 0) {
            thunk_FUN_016d3fb4(uVar3);
          }
        }
        *(undefined1 *)(param_1 + 0xf5) = 1;
        *(undefined4 *)(param_1 + 0x90) = 3;
        return;
      }
    }
    else if (iVar1 != 3) {
      return;
    }
  }
  else {
    bVar4 = iVar1 == 4;
    if (bVar4) {
      iVar1 = *(int *)(param_1 + 0x90);
    }
    if (!bVar4 || iVar1 != 5) {
      return;
    }
  }
  FUN_010b3b6c();
  return;
}

