// FUN_00b51c60 @ 00b51c60 size=164 calls_out=2 calls_in=2
// strings: 

void FUN_00b51c60(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 8) == '\x03') {
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    FUN_00c8204c(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),1);
    return;
  }
  if (*(char *)(param_1 + 8) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x3c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x38);
  }
  if (bVar2 && cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x34);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x31);
    }
    if (bVar2 && cVar1 == '\x03') {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_00c8204c(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),1);
      }
      *(undefined1 *)(param_1 + 0x30) = 0;
      FUN_00c822ec(*(undefined4 *)(param_1 + 4));
      return;
    }
  }
  FUN_00c822ec(*(undefined4 *)(param_1 + 4));
  return;
}

