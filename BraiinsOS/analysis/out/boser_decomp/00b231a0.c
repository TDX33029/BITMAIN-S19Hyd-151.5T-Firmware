// FUN_00b231a0 @ 00b231a0 size=112 calls_out=3 calls_in=4
// strings: 

void FUN_00b231a0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x1c) != '\x03') {
    if (*(char *)(param_1 + 0x1c) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x8c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x78);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00b238c8(param_1 + 0x20);
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

