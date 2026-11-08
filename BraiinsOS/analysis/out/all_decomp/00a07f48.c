// FUN_00a07f48 @ 00a07f48 size=152 calls_out=1 calls_in=2
// strings: 

void FUN_00a07f48(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x60);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x3d);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163bdc0(param_1 + 0x40);
    if (*(int *)(param_1 + 0x50) != 0) {
      (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
    }
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 0xa8) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xa4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x81);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163bdc0(param_1 + 0x84);
    if (*(int *)(param_1 + 0x94) != 0) {
      (**(code **)(*(int *)(param_1 + 0x94) + 0xc))(*(undefined4 *)(param_1 + 0x98));
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
    return;
  }
  return;
}

