// FUN_00e83e54 @ 00e83e54 size=104 calls_out=3 calls_in=1
// strings: 

void FUN_00e83e54(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x6e8) == '\x03') {
      FUN_00e83d5c(param_1 + 0x10);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 500);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x1e0);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00ba638c(param_1 + 0x188);
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
  return;
}

