// FUN_013a5d44 @ 013a5d44 size=180 calls_out=2 calls_in=1
// strings: 

void FUN_013a5d44(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  bVar1 = 0;
  if (*(char *)(*(int *)(param_2 + 0x278) + 0x15a) == '\x01') {
    bVar1 = *(byte *)(*(int *)(param_2 + 0x278) + 0x15b);
  }
  FUN_0137a9fc(&local_2c,param_2,param_3,param_4);
  if (local_2c == 2) {
    *param_1 = 2;
    param_1[1] = local_28;
    return;
  }
  if ((local_2c & 1) == 0) {
    *param_1 = 0;
    return;
  }
  if ((bVar1 & 1) == 0) {
    param_1[2] = local_24;
    *param_1 = 1;
    param_1[1] = local_28;
    return;
  }
  FUN_013b7ec0(param_1,param_4,local_28);
  return;
}

