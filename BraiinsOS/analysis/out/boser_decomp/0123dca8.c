// FUN_0123dca8 @ 0123dca8 size=208 calls_out=2 calls_in=2
// strings: 

void FUN_0123dca8(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  uint local_68;
  uint local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  FUN_01a56a10(&local_84);
  FUN_012440e4(&local_68,param_2);
  puVar2 = (uint *)((uint)&local_68 | 4);
  local_64 = puVar2[1];
  uVar4 = puVar2[2];
  if (local_68 == 2) {
    param_1[1] = *puVar2;
    param_1[2] = local_64;
    param_1[3] = uVar4;
    *param_1 = 2;
  }
  else {
    uVar1 = local_68 & 1;
    uVar3 = 1;
    local_68 = *puVar2;
    if (uVar1 == 0) {
      local_64 = local_7c;
      local_68 = local_80;
      uVar3 = local_84;
    }
    *param_1 = uVar3;
    param_1[1] = local_68;
    param_1[2] = local_64;
    param_1[3] = uVar4;
    param_1[4] = local_58;
    param_1[5] = uStack_54;
    param_1[6] = uStack_50;
    param_1[7] = uStack_4c;
    param_1[8] = local_48;
    param_1[9] = uStack_44;
    param_1[10] = uStack_40;
    param_1[0xb] = uStack_3c;
  }
  return;
}

