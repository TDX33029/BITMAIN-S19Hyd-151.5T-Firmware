// FUN_01388ab8 @ 01388ab8 size=204 calls_out=2 calls_in=1
// strings: 

void FUN_01388ab8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  bVar1 = 0;
  if (*(char *)(*(int *)(param_2 + 0x18) + 0x15a) == '\x01') {
    bVar1 = *(byte *)(*(int *)(param_2 + 0x18) + 0x15b);
  }
  FUN_01387810(&local_34,param_2,param_3,param_4);
  if (local_34 == 2) {
    *param_1 = 2;
    param_1[1] = local_30;
    return;
  }
  if ((local_34 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  if ((bVar1 & 1) == 0) {
    *param_1 = 1;
    param_1[1] = local_30;
    param_1[2] = local_2c;
    return;
  }
  uStack_28 = param_6;
  FUN_013b7cf0(param_1,param_4,local_30,local_2c);
  return;
}

