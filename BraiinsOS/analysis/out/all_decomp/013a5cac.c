// FUN_013a5cac @ 013a5cac size=152 calls_out=2 calls_in=1
// strings: 

void FUN_013a5cac(undefined4 *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  bVar1 = *(byte *)(param_2 + 0x2b4);
  bVar2 = *(byte *)(param_2 + 0x2b5);
  FUN_013ae3dc(&local_24);
  if (local_24 == 2) {
    *param_1 = 2;
    param_1[1] = local_20;
    return;
  }
  if ((local_24 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  if ((bVar1 & bVar2 & 1) == 0) {
    *param_1 = 1;
    param_1[1] = local_20;
    param_1[2] = local_1c;
    return;
  }
  FUN_013b7b18(param_1,param_3,local_20,local_1c);
  return;
}

