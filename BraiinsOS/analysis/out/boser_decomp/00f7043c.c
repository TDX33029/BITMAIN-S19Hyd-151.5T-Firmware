// FUN_00f7043c @ 00f7043c size=112 calls_out=4 calls_in=0
// strings: 

void FUN_00f7043c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x25) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xf0);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xec);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00b99500(param_1 + 0x30);
    }
  }
  else {
    if (*(char *)(param_1 + 0x25) != '\x04') {
      return;
    }
    FUN_008865cc(param_1 + 0x28);
    FUN_0084ec48(param_1 + 0x14);
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    FUN_00b9c308(param_1 + 0xf4);
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}

