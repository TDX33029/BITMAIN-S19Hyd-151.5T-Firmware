// FUN_00cb6270 @ 00cb6270 size=52 calls_out=1 calls_in=3
// strings: 

void FUN_00cb6270(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x15);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00fe4378(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    *(undefined1 *)(param_1 + 0x14) = 0;
    return;
  }
  return;
}

