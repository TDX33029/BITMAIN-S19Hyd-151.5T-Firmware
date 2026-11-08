// FUN_00c39ac4 @ 00c39ac4 size=96 calls_out=3 calls_in=4
// strings: 

void FUN_00c39ac4(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)((int)param_1 + 0x12) != '\x03') {
    if (*(char *)((int)param_1 + 0x12) == '\x04') {
      FUN_00c399b8(param_1 + 6);
      FUN_019f8c54(*param_1,param_1[1]);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x12) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x11);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x10);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 8);
      return;
    }
  }
  return;
}

