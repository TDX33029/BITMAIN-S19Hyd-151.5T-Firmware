// FUN_00a0a92c @ 00a0a92c size=356 calls_out=2 calls_in=2
// strings: 

void FUN_00a0a92c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x3a) == '\x03') {
    if ((*(char *)(param_1 + 0xc) == '\x03') && (*(int *)(param_1 + 4) != 0)) {
      FUN_00aa0a58(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10);
    for (iVar3 = *(int *)(param_1 + 0x30); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar2[-4] != 0) {
        thunk_FUN_016d3fb4(puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar2);
      }
      if (puVar2[2] != 0) {
        thunk_FUN_016d3fb4(puVar2[3]);
      }
      puVar2 = puVar2 + 10;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
    }
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar3 = 0;
    iVar4 = *(int *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x38) = 0;
    while (iVar3 != iVar4) {
      iVar1 = iVar6 + iVar3 * 0x20;
      puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10);
      for (iVar5 = *(int *)(iVar1 + 0x18); iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar2[-4] != 0) {
          thunk_FUN_016d3fb4(puVar2[-3]);
        }
        if (puVar2[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar2);
        }
        if (puVar2[2] != 0) {
          thunk_FUN_016d3fb4(puVar2[3]);
        }
        puVar2 = puVar2 + 10;
      }
      iVar3 = iVar3 + 1;
      if (*(int *)(iVar1 + 0x10) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x14));
      }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c));
    }
    *(undefined1 *)(param_1 + 0x39) = 0;
  }
  return;
}

