// FUN_016b9924 @ 016b9924 size=188 calls_out=2 calls_in=1
// strings: 

void FUN_016b9924(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  bVar3 = 0;
  if (*(char *)(*(int *)(param_2 + 0x18) + 0x15a) == '\x01') {
    bVar3 = *(byte *)(*(int *)(param_2 + 0x18) + 0x15b);
  }
  FUN_016b7df8(&local_34,param_2,param_3,param_4,param_5,param_6);
  uVar2 = local_2c;
  uVar1 = local_30;
  if (local_34 == 2) {
    *param_1 = 2;
    param_1[1] = local_30;
  }
  else if ((local_34 & 1) == 0) {
    *param_1 = 0;
  }
  else if ((bVar3 & 1) == 0) {
    *param_1 = 1;
    param_1[1] = local_30;
    param_1[2] = local_2c;
  }
  else {
    local_2c = param_5;
    uStack_28 = param_6;
    local_34 = param_2;
    local_30 = param_3;
    FUN_01686ee4(param_1,param_4,uVar1,uVar2,uVar2,&local_34);
  }
  return;
}

