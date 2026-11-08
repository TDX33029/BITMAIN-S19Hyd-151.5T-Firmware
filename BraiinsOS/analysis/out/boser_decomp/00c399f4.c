// FUN_00c399f4 @ 00c399f4 size=148 calls_out=5 calls_in=2
// strings: 

void FUN_00c399f4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0x3c)) {
  case 3:
    if (*(char *)(param_1 + 0x95) == '\x03') {
      FUN_00740564(param_1 + 0x40);
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    break;
  case 4:
    FUN_005f649c(param_1 + 0x50);
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x70);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x6c);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00b71be0(param_1 + 0x58);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x78) == '\x03') {
      FUN_00b6bb40(param_1 + 0x58);
    }
    break;
  default:
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  return;
}

