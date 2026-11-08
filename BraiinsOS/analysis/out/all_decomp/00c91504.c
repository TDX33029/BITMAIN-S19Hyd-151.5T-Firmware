// FUN_00c91504 @ 00c91504 size=144 calls_out=3 calls_in=1
// strings: 

void FUN_00c91504(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\x04') {
    FUN_00c915b4(param_1 + 0x30);
  }
  else if (cVar1 == '\x05') {
    if (*(char *)(param_1 + 0xa9) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xa0);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x9d);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00c8315c(param_1 + 0x30);
      }
    }
  }
  else {
    if (cVar1 != '\x06') {
      return;
    }
    if (*(char *)(param_1 + 0xad) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xa4);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0xa1);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00c8315c(param_1 + 0x34);
      }
    }
  }
  FUN_00c48cbc(param_1 + 0x14);
  return;
}

