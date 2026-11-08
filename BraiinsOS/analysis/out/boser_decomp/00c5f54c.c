// FUN_00c5f54c @ 00c5f54c size=100 calls_out=2 calls_in=0
// strings: 

void FUN_00c5f54c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 4:
  case 10:
  case 0xc:
    if (*(char *)(param_1 + 0xb4) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xa4);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x90);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00c423b8(param_1 + 0x38);
        return;
      }
    }
    break;
  case 5:
  case 7:
  case 8:
  case 9:
  case 0xb:
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa4);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00cdd114(param_1 + 0x38);
      return;
    }
    break;
  default:
    return;
  }
  return;
}

