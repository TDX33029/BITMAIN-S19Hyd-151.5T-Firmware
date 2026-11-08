// FUN_00a2ae58 @ 00a2ae58 size=280 calls_out=4 calls_in=5
// strings: 

void FUN_00a2ae58(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x204) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x1b8);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x195);
    }
    if (bVar3 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x198);
      if (*(int *)(param_1 + 0x1a8) != 0) {
        (**(code **)(*(int *)(param_1 + 0x1a8) + 0xc))(*(undefined4 *)(param_1 + 0x1ac));
      }
      *(undefined1 *)(param_1 + 0x194) = 0;
      cVar1 = *(char *)(param_1 + 0x200);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x200);
    }
    if (cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1fc);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x1d9);
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0x1dc);
        if (*(int *)(param_1 + 0x1ec) != 0) {
          (**(code **)(*(int *)(param_1 + 0x1ec) + 0xc))(*(undefined4 *)(param_1 + 0x1f0));
        }
        *(undefined1 *)(param_1 + 0x1d8) = 0;
      }
    }
    if (*(undefined1 **)(param_1 + 0x140) != &DAT_3b9aca00) {
      uVar2 = *(undefined4 *)(param_1 + 0x148);
      FUN_00a07b4c(uVar2);
      thunk_FUN_016d3fb4(uVar2);
    }
    if (*(undefined1 **)(param_1 + 0x128) != &DAT_3b9aca00) {
      uVar2 = *(undefined4 *)(param_1 + 0x130);
      FUN_00a07b4c(uVar2);
      thunk_FUN_016d3fb4(uVar2);
    }
    FUN_00a07e4c(param_1 + 0x48);
    return;
  }
  if (*(char *)(param_1 + 0x204) == '\0') {
    FUN_00a07e4c(param_1);
    return;
  }
  return;
}

