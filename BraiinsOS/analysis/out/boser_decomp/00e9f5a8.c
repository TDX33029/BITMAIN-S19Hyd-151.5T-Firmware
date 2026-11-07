// FUN_00e9f5a8 @ 00e9f5a8 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_00e9f5a8(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x80);
  if (cVar1 == '\0') {
    FUN_00e9f654(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x94) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    }
  }
  *(undefined4 *)(param_1 + 0x81) = 0;
  return;
}

