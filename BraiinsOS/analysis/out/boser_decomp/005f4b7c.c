// FUN_005f4b7c @ 005f4b7c size=180 calls_out=4 calls_in=1
// strings: 

void FUN_005f4b7c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    FUN_006a41c0(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x68) == '\x03') {
      cVar1 = *(char *)(param_1 + 100);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x40);
      }
      if (bVar2 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x44);
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_01139b38(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x1c),1);
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    FUN_006a41c0(param_1 + 0x24);
  }
  *(undefined1 *)(param_1 + 0x21) = 0;
  if (*(char *)(param_1 + 0x22) != '\0') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}

