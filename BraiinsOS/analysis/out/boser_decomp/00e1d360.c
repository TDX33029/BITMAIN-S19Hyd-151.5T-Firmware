// FUN_00e1d360 @ 00e1d360 size=160 calls_out=4 calls_in=2
// strings: 

void FUN_00e1d360(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x5ec) == '\x03') {
      if (*(char *)(param_1 + 0x5d8) == '\x03') {
        param_1 = param_1 + 0x310;
      }
      else {
        if (*(char *)(param_1 + 0x5d8) != '\0') {
          return;
        }
        param_1 = param_1 + 0x48;
      }
      FUN_00df9ef8(param_1);
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x70) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x6c);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x68);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x48);
        return;
      }
    }
  }
  else if (cVar1 == '\x05') {
    FUN_00e1d41c(param_1 + 0x40);
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x30),1);
    return;
  }
  return;
}

