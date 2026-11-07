// FUN_01039b1c @ 01039b1c size=104 calls_out=3 calls_in=0
// strings: 

void FUN_01039b1c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x4d) != '\x03') {
      return;
    }
    FUN_01039af8(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0102bd74(param_1 + 0x48);
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    return;
  }
  return;
}

