// FUN_00c0e874 @ 00c0e874 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00c0e874(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xbc);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xa8);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00ba638c(param_1 + 0x50);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  return;
}

