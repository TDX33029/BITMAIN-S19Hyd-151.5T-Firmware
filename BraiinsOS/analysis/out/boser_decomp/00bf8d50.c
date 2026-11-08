// FUN_00bf8d50 @ 00bf8d50 size=176 calls_out=2 calls_in=3
// strings: 

void FUN_00bf8d50(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xa0) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x9c) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    return;
  }
  if (*(char *)(param_1 + 0x9c) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    return;
  }
  if (*(char *)(param_1 + 0x98) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x94) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x90);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x8c);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x6c);
    }
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined1 *)(param_1 + 0x99) = 0;
  return;
}

