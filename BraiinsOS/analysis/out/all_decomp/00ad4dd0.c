// FUN_00ad4dd0 @ 00ad4dd0 size=156 calls_out=3 calls_in=3
// strings: 

void FUN_00ad4dd0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x74) == '\x03') {
      FUN_00a07b4c(param_1 + 0x20);
      return;
    }
    return;
  }
  if (cVar1 == '\x04') {
    cVar1 = *(char *)(param_1 + 0x18);
    if (cVar1 == '\x04') {
      FUN_00a07b4c(param_1 + 0x110);
      FUN_00ac8e24(param_1 + 0x20);
      return;
    }
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_00a07b4c(param_1 + 0x40);
      return;
    }
  }
  else {
    bVar2 = cVar1 == '\x05';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x85);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00accc50(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x84) = 0;
      return;
    }
  }
  return;
}

