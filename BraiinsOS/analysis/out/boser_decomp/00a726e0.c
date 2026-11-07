// FUN_00a726e0 @ 00a726e0 size=156 calls_out=4 calls_in=0
// strings: 

void FUN_00a726e0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x5bc) == '\x03') {
        FUN_00a7389c(param_1 + 0x18);
      }
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      if (*(char *)(param_1 + 0x6c4) == '\x03') {
        FUN_00a7389c(param_1 + 0x120);
      }
      if (*(int *)(param_1 + 0x18) != 2 || *(int *)(param_1 + 0x1c) != 0) {
        FUN_00b9a764();
      }
    }
    FUN_0084ec48(param_1 + 4);
    return;
  }
  cVar1 = *(char *)(param_1 + 0xdc);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xd8);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00b99500(param_1 + 0x1c);
    return;
  }
  return;
}

