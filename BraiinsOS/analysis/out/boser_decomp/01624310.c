// FUN_01624310 @ 01624310 size=304 calls_out=2 calls_in=3
// strings: 

void FUN_01624310(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  code *local_24;
  uint *local_20;
  code *local_1c;
  
  uVar4 = param_2[1];
  if (uVar4 < 4) {
    puVar3 = &DAT_00596d85;
    local_2c = 4;
LAB_016243b0:
    local_20 = &local_2c;
    local_28 = &local_30;
LAB_016243b4:
    local_1c = FUN_012fd02c;
    local_24 = FUN_012fd02c;
    local_30 = uVar4;
    FUN_00664898(&local_3c,puVar3,&local_28);
    if (local_3c != -0x80000000) {
      param_1[1] = local_38;
      param_1[2] = local_34;
      goto LAB_01624434;
    }
  }
  else {
    uVar5 = *param_2;
    uVar2 = FUN_01623ca8(uVar5,uVar4);
    uVar1 = FUN_01623ca8(uVar5,uVar4);
    if (uVar4 < (uVar2 & 0xffff)) {
      local_2c = (uint)uVar1;
      puVar3 = &DAT_00595c25;
      goto LAB_016243b0;
    }
    if (uVar1 < 4) {
      local_2c = FUN_01623ca8(uVar5,uVar4);
      local_2c = local_2c & 0xffff;
      local_20 = &local_30;
      puVar3 = &DAT_005af5a6;
      local_28 = &local_2c;
      goto LAB_016243b4;
    }
  }
  local_3c = -0x80000000;
  param_1[1] = (int)param_2;
LAB_01624434:
  *param_1 = local_3c;
  return;
}

