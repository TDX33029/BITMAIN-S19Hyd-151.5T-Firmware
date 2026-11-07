// FUN_010e727c @ 010e727c size=80 calls_out=2 calls_in=1
// strings: 

void FUN_010e727c(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 != 3) {
    FUN_005f6588();
    return;
  }
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

