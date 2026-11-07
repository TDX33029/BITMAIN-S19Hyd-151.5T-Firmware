// FUN_00cb09f4 @ 00cb09f4 size=144 calls_out=4 calls_in=1
// strings: 

void FUN_00cb09f4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04' || cVar1 == '\x05') {
      FUN_00cb0954(param_1 + 0x10);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x1c) == '\x03') {
    FUN_00cb022c(param_1 + 0x20);
    return;
  }
  if (*(char *)(param_1 + 0x1c) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xbc);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xa8);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00c423b8(param_1 + 0x50);
  }
  if (*(int *)(param_1 + 0x20) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}

