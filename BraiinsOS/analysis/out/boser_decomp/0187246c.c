// FUN_0187246c @ 0187246c size=212 calls_out=4 calls_in=8
// strings: 

void FUN_0187246c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  
  puVar4 = (uint *)(param_1 + 0x40);
  uVar1 = *puVar4;
  puVar3 = (uint *)(param_1 + 0x90);
  if (uVar1 == 3) {
    uVar1 = *puVar3;
    iVar2 = 1;
    if (2 < uVar1) {
      iVar2 = uVar1 - 3;
    }
    if (iVar2 == 2) {
      if (*(char *)(param_1 + 0xf7) == '\x01') {
        if (((*(byte *)(param_1 + 0xd0) != 0xb) && (9 < *(byte *)(param_1 + 0xd0))) &&
           (*(int *)(param_1 + 0xd8) != 0)) {
          thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0xd4));
        }
        *(undefined1 *)(param_1 + 0xd0) = 0xb;
        *(undefined1 *)(param_1 + 0xf7) = 0;
        FUN_0172f038(puVar4);
        *puVar4 = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
        if (uVar1 < 3) {
          FUN_0116c8d0(puVar3);
        }
        *(undefined1 *)(param_1 + 0xf5) = 1;
        *(undefined4 *)(param_1 + 0x90) = 3;
        return;
      }
    }
    else if (iVar2 != 3) {
      return;
    }
  }
  else {
    bVar5 = uVar1 == 4;
    if (bVar5) {
      uVar1 = *puVar3;
    }
    if (!bVar5 || uVar1 != 5) {
      return;
    }
  }
  FUN_01421814(param_1);
  return;
}

