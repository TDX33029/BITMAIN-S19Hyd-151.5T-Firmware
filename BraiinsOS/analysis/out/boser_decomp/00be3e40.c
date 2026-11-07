// FUN_00be3e40 @ 00be3e40 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00be3e40(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xc0);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xac);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00bb1450(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x10) == -0x80000000) {
    return;
  }
  FUN_0132b958(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),4,0xc);
  return;
}

