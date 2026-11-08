// FUN_00662b40 @ 00662b40 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_00662b40(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x20);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x1d);
  }
  if (bVar2 && cVar1 == '\x03') {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_006f5fbc(*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),1);
    }
    *(undefined1 *)(param_1 + 0x1c) = 0;
    return;
  }
  return;
}

