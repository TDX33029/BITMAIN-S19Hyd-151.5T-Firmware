// FUN_0083dcb8 @ 0083dcb8 size=100 calls_out=3 calls_in=2
// strings: 

void FUN_0083dcb8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x1c) != '\x03') {
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x8c) == '\x03') {
      FUN_0081f4e0(param_1 + 0x20);
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x14),1);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x4c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x48);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0193c3cc(param_1 + 0x28);
    return;
  }
  return;
}

