// FUN_0102cad8 @ 0102cad8 size=56 calls_out=1 calls_in=0
// strings: 

void FUN_0102cad8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xb8);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa4);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x90) == '\x03') {
        FUN_0102bd74(param_1 + 0x38);
        return;
      }
      return;
    }
  }
  return;
}

