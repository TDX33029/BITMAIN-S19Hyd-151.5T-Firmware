// FUN_011c618c @ 011c618c size=96 calls_out=2 calls_in=1
// strings: 

void FUN_011c618c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xd0) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xbc);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa8);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_01192a14(param_1 + 0x50);
    }
  }
  if (*(int *)(param_1 + 0x34) == 0 || *(int *)(param_1 + 0x34) == 3) {
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  return;
}

