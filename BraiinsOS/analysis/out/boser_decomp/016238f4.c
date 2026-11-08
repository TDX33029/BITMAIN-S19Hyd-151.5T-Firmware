// FUN_016238f4 @ 016238f4 size=272 calls_out=2 calls_in=6
// strings: 

void FUN_016238f4(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  uint local_30;
  uint local_2c;
  uint *local_28;
  code *local_24;
  uint *local_20;
  code *local_1c;
  
  puVar3 = &local_30;
  if (param_3 < 4) {
    puVar4 = &DAT_00596d85;
    local_2c = 4;
  }
  else {
    uVar2 = FUN_01623a1c(param_2,param_3);
    uVar1 = FUN_01623a1c(param_2,param_3);
    if ((uVar2 & 0xffff) <= param_3) {
      if (3 < uVar1) {
        *param_1 = 0x80000000;
        return;
      }
      local_2c = FUN_01623a1c(param_2,param_3);
      local_2c = local_2c & 0xffff;
      puVar4 = &DAT_005af5a6;
      puVar3 = &local_2c;
      local_20 = &local_30;
      goto LAB_01623994;
    }
    local_2c = (uint)uVar1;
    puVar4 = &DAT_00595c25;
  }
  local_20 = &local_2c;
LAB_01623994:
  local_1c = FUN_012fd02c;
  local_24 = FUN_012fd02c;
  local_30 = param_3;
  local_28 = puVar3;
  FUN_00664898(param_1,puVar4,&local_28);
  return;
}

