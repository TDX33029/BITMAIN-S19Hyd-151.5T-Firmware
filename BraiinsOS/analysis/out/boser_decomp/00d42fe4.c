// FUN_00d42fe4 @ 00d42fe4 size=80 calls_out=2 calls_in=2
// strings: 

void FUN_00d42fe4(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  
  if ((*param_1 & 7) == 3) {
    puVar1 = param_1 + 4;
    if (*puVar1 == 0x80000001) {
      return;
    }
    iVar2 = 0x10;
    if (*puVar1 == 0x80000000) {
      iVar2 = 0x14;
      puVar1 = param_1 + 5;
    }
    FUN_019bb7e0(*(undefined4 *)((int)param_1 + iVar2),puVar1[1]);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_005f6588();
  return;
}

