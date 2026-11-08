// FUN_00bf94b4 @ 00bf94b4 size=72 calls_out=1 calls_in=3
// strings: 

void FUN_00bf94b4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xa4) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    return;
  }
  if (*(char *)(param_1 + 0xa4) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
    return;
  }
  if (*(char *)(param_1 + 0x88) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x74) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  if (*(char *)(param_1 + 0x74) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x70) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x6c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x68);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x48);
    }
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  *(undefined1 *)(param_1 + 0x75) = 0;
  return;
}

