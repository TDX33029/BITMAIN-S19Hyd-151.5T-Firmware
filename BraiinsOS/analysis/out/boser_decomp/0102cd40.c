// FUN_0102cd40 @ 0102cd40 size=96 calls_out=3 calls_in=0
// strings: 

void FUN_0102cd40(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) == '\x04') {
      FUN_0102cd0c(param_1 + 0x38);
      FUN_0102cc1c(param_1 + 0xd0);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x34) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x30);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x2c);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}

