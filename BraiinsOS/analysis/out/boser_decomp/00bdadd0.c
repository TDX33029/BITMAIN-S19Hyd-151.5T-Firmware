// FUN_00bdadd0 @ 00bdadd0 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_00bdadd0(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x14) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x13);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x12);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_0193c3cc(param_1 + 10);
  }
  FUN_019bb7e0(param_1[5],param_1[6]);
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  return;
}

