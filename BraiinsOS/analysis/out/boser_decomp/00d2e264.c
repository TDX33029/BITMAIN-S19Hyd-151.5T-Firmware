// FUN_00d2e264 @ 00d2e264 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_00d2e264(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\b' && *(char *)(param_1 + 0xc) != '\n') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xb4);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xa4);
  }
  if (bVar2 && cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x4c) == '\x03') {
      FUN_00d2e0d8(param_1 + 0x60);
    }
    else {
      if (*(char *)(param_1 + 0x4c) != '\x04') {
        return;
      }
      FUN_00cf34b8(param_1 + 0x60);
    }
    *(undefined1 *)(param_1 + 0x4d) = 0;
    return;
  }
  return;
}

