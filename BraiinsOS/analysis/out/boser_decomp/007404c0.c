// FUN_007404c0 @ 007404c0 size=60 calls_out=1 calls_in=2
// strings: 

void FUN_007404c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x38);
    iVar2 = 0x24;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xa4);
    iVar2 = 0x90;
  }
  if (cVar1 == '\x03') {
    FUN_00b71be0(param_1 + iVar2);
    return;
  }
  return;
}

