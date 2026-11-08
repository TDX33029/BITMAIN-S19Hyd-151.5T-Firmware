// FUN_00e7b2d0 @ 00e7b2d0 size=112 calls_out=4 calls_in=4
// strings: 

void FUN_00e7b2d0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x7c) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x6c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x58);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x15) == '\x04') {
        FUN_01139b38(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
        FUN_009495dc(param_1 + 0x38);
        FUN_007bc140(param_1 + 0x18);
      }
      else {
        if (*(char *)(param_1 + 0x15) != '\x03') {
          return;
        }
        FUN_00ba64b4(param_1 + 0x18);
      }
      *(undefined1 *)(param_1 + 0x14) = 0;
      return;
    }
  }
  return;
}

