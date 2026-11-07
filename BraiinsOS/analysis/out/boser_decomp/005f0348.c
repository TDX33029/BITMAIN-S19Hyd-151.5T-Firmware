// FUN_005f0348 @ 005f0348 size=136 calls_out=5 calls_in=4
// strings: 

void FUN_005f0348(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 5) != '\x03') {
    if (*(char *)(param_1 + 5) == '\x04') {
      FUN_005f02cc(param_1 + 0xe);
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      FUN_0132b958(param_1[0xb],param_1[9],4,4);
      FUN_0134c054(param_1[6],param_1[7],1,0x10);
      *(undefined1 *)((int)param_1 + 0x13) = 0;
      FUN_019f8c54(*param_1,1);
      return;
    }
    return;
  }
  cVar1 = *(char *)(param_1 + 0x11);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x10);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0193c3cc(param_1 + 8);
    return;
  }
  return;
}

