// FUN_005f3d40 @ 005f3d40 size=136 calls_out=6 calls_in=2
// strings: 

void FUN_005f3d40(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 3:
    if (*(char *)(param_1 + 100) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x60);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x5c);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00b71be0(param_1 + 0x48);
      return;
    }
    return;
  case 4:
    FUN_005f3418(param_1 + 0x30);
    return;
  case 5:
    FUN_005efd6c(param_1 + 0x2c);
    break;
  case 6:
    FUN_005f36a8(param_1 + 0x2c);
    FUN_019c71c4(param_1 + 0x1c);
    break;
  default:
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}

