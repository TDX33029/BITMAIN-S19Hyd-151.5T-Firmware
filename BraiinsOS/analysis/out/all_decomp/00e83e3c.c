// FUN_00e83e3c @ 00e83e3c size=104 calls_out=3 calls_in=0
// strings: 

void FUN_00e83e3c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 8) == '\x03') {
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    FUN_00e44660(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),1);
    return;
  }
  if (*(char *)(param_1 + 8) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x50);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x4c);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00de3884(param_1 + 0x14);
  }
  FUN_00e44900(*(undefined4 *)(param_1 + 4));
  return;
}

