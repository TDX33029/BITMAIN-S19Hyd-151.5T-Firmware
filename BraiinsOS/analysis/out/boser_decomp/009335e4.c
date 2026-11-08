// FUN_009335e4 @ 009335e4 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_009335e4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x6e5) != '\x03') {
      return;
    }
    FUN_00932f30(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x6e4) = 0;
    *(undefined4 *)(param_1 + 0x6e0) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xc0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_01192a14(param_1 + 0x68);
    }
    FUN_00932f8c(param_1 + 0x10);
    return;
  }
  return;
}

