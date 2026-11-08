// FUN_00668b80 @ 00668b80 size=92 calls_out=2 calls_in=3
// strings: 

void FUN_00668b80(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x154) == '\0') {
    FUN_00668cb0(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x154) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x14c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x128);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0193c3cc(param_1 + 300);
  }
  FUN_00668cb0(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x155) = 0;
  return;
}

