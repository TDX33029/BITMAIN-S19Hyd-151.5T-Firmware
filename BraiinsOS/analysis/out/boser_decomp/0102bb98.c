// FUN_0102bb98 @ 0102bb98 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_0102bb98(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
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
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    if (*(int *)(param_1 + 0x10) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

