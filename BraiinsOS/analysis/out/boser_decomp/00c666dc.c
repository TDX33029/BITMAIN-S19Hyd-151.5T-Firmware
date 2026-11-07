// FUN_00c666dc @ 00c666dc size=160 calls_out=3 calls_in=1
// strings: 

void FUN_00c666dc(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 6:
  case 8:
  case 10:
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
  case 7:
  case 9:
  case 0xb:
    break;
  case 0xc:
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa4);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x4c) == '\x03') {
        FUN_00cdd160(param_1 + 0x60);
      }
      else {
        if (*(char *)(param_1 + 0x4c) != '\x04') {
          return;
        }
        FUN_00c371a8(param_1 + 0x60);
      }
      *(undefined1 *)(param_1 + 0x4d) = 0;
      return;
    }
    break;
  default:
    return;
  }
  return;
}

