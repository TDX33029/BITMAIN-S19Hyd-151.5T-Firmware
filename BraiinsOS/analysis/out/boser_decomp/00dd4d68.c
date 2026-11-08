// FUN_00dd4d68 @ 00dd4d68 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_00dd4d68(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 199) != '\x03') {
      return;
    }
    FUN_00cb6be0(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xc3) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xdc);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 200);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00db1dcc(param_1 + 0x70);
    }
    FUN_00dd4d10(param_1 + 0x10);
    return;
  }
  return;
}

