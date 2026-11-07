// FUN_0167d59c @ 0167d59c size=180 calls_out=2 calls_in=5
// strings: 

void FUN_0167d59c(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
                 uint param_6)

{
  uint *puVar1;
  uint extraout_r1;
  uint unaff_r5;
  bool bVar2;
  bool bVar3;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38;
  uint local_34;
  undefined2 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint *local_20;
  code *local_1c;
  uint *local_18;
  code *local_14;
  
  bVar3 = param_4 <= param_6;
  bVar2 = param_6 == param_4;
  local_28 = param_6;
  if (!bVar3 || bVar2) {
    unaff_r5 = param_6 + 1;
  }
  local_2c = param_5;
  if (!bVar3 || bVar2) {
    bVar3 = unaff_r5 <= param_5;
    bVar2 = param_5 == unaff_r5;
  }
  if (!bVar3 || bVar2) {
    local_40 = param_5;
    uStack_3c = param_6;
    local_30 = 0;
    local_38 = param_3;
    local_34 = param_4;
    FUN_016bc880(&local_20,param_2,&local_40);
    bVar2 = local_20 == (uint *)0x1;
    puVar1 = (uint *)extraout_r1;
    if (bVar2) {
      puVar1 = local_18;
    }
    if (bVar2) {
      local_20 = (uint *)local_1c;
    }
    *param_1 = (uint)bVar2;
    if (bVar2) {
      param_1[1] = (uint)local_20;
      param_1[2] = (uint)puVar1;
    }
    return;
  }
  local_1c = FUN_0065fd28;
  local_20 = &local_2c;
  local_18 = &local_24;
  local_14 = FUN_012fd02c;
  local_24 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_005a4e9e,&local_20,&DAT_01d08f98);
}

