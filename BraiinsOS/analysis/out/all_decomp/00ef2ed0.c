// FUN_00ef2ed0 @ 00ef2ed0 size=272 calls_out=2 calls_in=0
// strings: 

void FUN_00ef2ed0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  
  local_3c = 0;
  local_44 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 4;
  local_4c = 4;
  if (param_2[3] - param_2[1] != 0) {
    uVar1 = (uint)(param_2[3] - param_2[1]) >> 4;
    FUN_00edff4c(&local_50,0,uVar1,4,8);
    if ((uint)(local_44 - local_3c) < uVar1) {
      FUN_00edff4c(&local_44,local_3c,uVar1,4,8);
    }
  }
  local_34 = (undefined4 *)param_2[1];
  uStack_30 = param_2[2];
  puStack_2c = (undefined4 *)param_2[3];
  local_38 = *param_2;
  if (local_34 != puStack_2c) {
    puVar4 = (undefined4 *)(local_40 + local_3c * 8 + 4);
    do {
      uVar3 = *local_34;
      uVar5 = local_34[1];
      uVar6 = local_34[2];
      uVar7 = local_34[3];
      local_34 = local_34 + 4;
      local_3c = local_3c + 1;
      puVar2 = (undefined4 *)(local_4c + local_48 * 8);
      *puVar2 = uVar3;
      local_48 = local_48 + 1;
      puVar2[1] = uVar5;
      puVar4[-1] = uVar6;
      *puVar4 = uVar7;
      puVar4 = puVar4 + 2;
    } while (local_34 != puStack_2c);
  }
  FUN_00ee3edc(&local_38);
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = local_44;
  param_1[4] = local_40;
  param_1[5] = local_3c;
  return;
}

