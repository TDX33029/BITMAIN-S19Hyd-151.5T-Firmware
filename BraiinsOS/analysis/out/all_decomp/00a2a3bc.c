// FUN_00a2a3bc @ 00a2a3bc size=376 calls_out=4 calls_in=5
// strings: 

void FUN_00a2a3bc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x21c) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x1dc);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x1b9);
    }
    if (bVar4 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x1bc);
      if (*(int *)(param_1 + 0x1cc) != 0) {
        (**(code **)(*(int *)(param_1 + 0x1cc) + 0xc))(*(undefined4 *)(param_1 + 0x1d0));
      }
      *(undefined1 *)(param_1 + 0x1b8) = 0;
      cVar1 = *(char *)(param_1 + 0x18c);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x18c);
    }
    if (cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x188);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x165);
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0x168);
        if (*(int *)(param_1 + 0x178) != 0) {
          (**(code **)(*(int *)(param_1 + 0x178) + 0xc))(*(undefined4 *)(param_1 + 0x17c));
        }
        *(undefined1 *)(param_1 + 0x164) = 0;
      }
    }
    cVar1 = *(char *)(param_1 + 0x218);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x1f5);
    }
    if (bVar4 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x1f8);
      if (*(int *)(param_1 + 0x208) != 0) {
        (**(code **)(*(int *)(param_1 + 0x208) + 0xc))(*(undefined4 *)(param_1 + 0x20c));
      }
      *(undefined1 *)(param_1 + 500) = 0;
      iVar2 = *(int *)(param_1 + 0x128);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x128);
    }
    if (iVar2 != -0x80000000) {
      if (iVar2 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 300));
      }
      if ((*(uint *)(param_1 + 0x134) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x138));
      }
    }
    if (*(undefined1 **)(param_1 + 0x110) != &DAT_3b9aca00) {
      uVar3 = *(undefined4 *)(param_1 + 0x118);
      FUN_00a07b4c(uVar3);
      thunk_FUN_016d3fb4(uVar3);
    }
    FUN_00a0b1b8(param_1 + 0x40);
    return;
  }
  if (*(char *)(param_1 + 0x21c) == '\0') {
    FUN_00a0b1b8(param_1);
    return;
  }
  return;
}

