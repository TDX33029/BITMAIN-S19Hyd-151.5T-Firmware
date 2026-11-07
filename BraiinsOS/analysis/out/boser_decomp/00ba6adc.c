// FUN_00ba6adc @ 00ba6adc size=132 calls_out=3 calls_in=0
// strings: 

void FUN_00ba6adc(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x34) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x30);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x24);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_01139b38(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xac);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x98);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0x40);
    }
    if (*(int *)(param_1 + 0x10) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

