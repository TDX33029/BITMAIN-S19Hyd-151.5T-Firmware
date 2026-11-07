// FUN_00fd5a04 @ 00fd5a04 size=100 calls_out=4 calls_in=1
// strings: 

void FUN_00fd5a04(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x61c) == '\0') {
    FUN_00f86328(param_1 + 0x518);
    return;
  }
  if (*(char *)(param_1 + 0x61c) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x614);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x608);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x60c),*(undefined4 *)(param_1 + 0x610));
  }
  FUN_00fd5c28(param_1);
  FUN_00fd5a90(param_1 + 0x500);
  return;
}

