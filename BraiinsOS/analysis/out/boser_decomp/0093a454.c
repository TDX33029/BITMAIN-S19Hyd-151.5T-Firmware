// FUN_0093a454 @ 0093a454 size=180 calls_out=6 calls_in=3
// strings: 

void FUN_0093a454(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x9c) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x1c) != '\x04') {
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x4c);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x48);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x28);
        return;
      }
    }
    return;
  }
  cVar1 = *(char *)(param_1 + 0x8c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x78);
  }
  if (bVar2 && cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x35) == '\x04') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
      FUN_009495dc(param_1 + 0x58);
      FUN_007bc140(param_1 + 0x38);
    }
    else {
      if (*(char *)(param_1 + 0x35) != '\x03') goto LAB_0093a4a8;
      FUN_011928d4(param_1 + 0x38);
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
LAB_0093a4a8:
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x14),1);
  return;
}

