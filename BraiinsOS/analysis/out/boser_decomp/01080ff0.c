// FUN_01080ff0 @ 01080ff0 size=120 calls_out=4 calls_in=5
// strings: 

void FUN_01080ff0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1e);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x75) == '\x03') {
      FUN_0103b98c(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x74) = 0;
    }
  }
  else if (cVar1 == '\x04') {
    FUN_01087f9c(param_1 + 0x20);
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x50) == '\x03') {
      FUN_0108800c(param_1 + 0x30);
    }
  }
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}

