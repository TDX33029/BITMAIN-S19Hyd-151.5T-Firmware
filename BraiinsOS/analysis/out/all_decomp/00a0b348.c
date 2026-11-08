// FUN_00a0b348 @ 00a0b348 size=228 calls_out=1 calls_in=2
// strings: 

void FUN_00a0b348(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x94);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x71);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163bdc0(param_1 + 0x74);
    if (*(int *)(param_1 + 0x84) != 0) {
      (**(code **)(*(int *)(param_1 + 0x84) + 0xc))(*(undefined4 *)(param_1 + 0x88));
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
    cVar1 = *(char *)(param_1 + 0x44);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x44);
  }
  if (cVar1 == '\x03') {
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
  cVar1 = *(char *)(param_1 + 0xd0);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xad);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163bdc0(param_1 + 0xb0);
    if (*(int *)(param_1 + 0xc0) != 0) {
      (**(code **)(*(int *)(param_1 + 0xc0) + 0xc))(*(undefined4 *)(param_1 + 0xc4));
    }
    *(undefined1 *)(param_1 + 0xac) = 0;
    return;
  }
  return;
}

