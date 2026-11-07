// FUN_00d36930 @ 00d36930 size=64 calls_out=1 calls_in=4
// strings: 

void FUN_00d36930(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    return;
  }
  cVar1 = (char)param_1[0xf];
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)((int)param_1 + 0x19);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_019ede44(param_1 + 7);
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
  return;
}

