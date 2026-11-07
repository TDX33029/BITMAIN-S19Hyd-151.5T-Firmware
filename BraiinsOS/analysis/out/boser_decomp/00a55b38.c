// FUN_00a55b38 @ 00a55b38 size=76 calls_out=1 calls_in=1
// strings: 

void FUN_00a55b38(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 9);
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    if (*(char *)(param_1 + 0x5ac) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x5a0) == '\0') {
      FUN_00df9ef8(param_1 + 0x10);
      return;
    }
    if (*(char *)(param_1 + 0x5a0) == '\x03') {
      FUN_00df9ef8(param_1 + 0x2d8);
      return;
    }
  }
  return;
}

