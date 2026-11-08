// FUN_00a08c98 @ 00a08c98 size=292 calls_out=2 calls_in=1
// strings: 

void FUN_00a08c98(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x44) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x40);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x1d);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x20);
      if (*(int *)(param_1 + 0x30) != 0) {
        (**(code **)(*(int *)(param_1 + 0x30) + 0xc))(*(undefined4 *)(param_1 + 0x34));
      }
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x98);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x94);
  }
  if (bVar2 && cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x90);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x6d);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x70);
      if (*(int *)(param_1 + 0x80) != 0) {
        (**(code **)(*(int *)(param_1 + 0x80) + 0xc))(*(undefined4 *)(param_1 + 0x84));
      }
      *(undefined1 *)(param_1 + 0x6c) = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0xc4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xc0);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00e7c67c(param_1 + 0xa8);
    if (*(int *)(param_1 + 0xac) != 0) {
      (**(code **)(*(int *)(param_1 + 0xac) + 0xc))(*(undefined4 *)(param_1 + 0xb0));
    }
  }
  cVar1 = *(char *)(param_1 + 0x100);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xdd);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163bdc0(param_1 + 0xe0);
    if (*(int *)(param_1 + 0xf0) != 0) {
      (**(code **)(*(int *)(param_1 + 0xf0) + 0xc))(*(undefined4 *)(param_1 + 0xf4));
    }
    *(undefined1 *)(param_1 + 0xdc) = 0;
    return;
  }
  return;
}

