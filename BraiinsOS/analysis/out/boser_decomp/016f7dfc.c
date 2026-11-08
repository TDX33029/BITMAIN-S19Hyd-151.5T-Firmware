// FUN_016f7dfc @ 016f7dfc size=584 calls_out=8 calls_in=1
// strings: 

void FUN_016f7dfc(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint *local_90;
  uint *local_8c;
  undefined4 local_88;
  uint *local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint *local_68;
  uint *local_64;
  uint local_60;
  uint *local_5c;
  int local_58 [5];
  uint *local_44;
  uint local_38;
  uint *local_34;
  uint local_30;
  
  local_88 = *param_2;
  local_90 = (uint *)param_2[1];
  puVar4 = local_90 + param_2[2] * 4;
  local_98 = 0;
  local_9c = 4;
  local_a0 = 0;
  local_8c = local_90;
  local_84 = puVar4;
  if (param_2[2] != 0) {
    puVar2 = local_90;
    local_8c = local_90;
    do {
      puVar5 = puVar2 + 4;
      if (*puVar2 == 2) goto LAB_016f7fa0;
      if ((*puVar2 & 1) == 0) {
        local_80 = puVar2[1];
        local_7c = puVar2[2];
        local_78 = puVar2[3];
        FUN_01915310(local_58,&local_a0,&local_80);
        if (local_58[0] != -0x7fffffd7) {
          local_80 = local_80 & 0xffff0000;
          local_8c = puVar5;
          puVar4 = (uint *)FUN_016f80f8(&local_80,local_58);
          goto LAB_016f7ff8;
        }
      }
      else {
        local_78 = puVar2[1];
        local_74 = puVar2[2];
        uStack_70 = puVar2[3];
        local_7c = 0;
        local_80 = 0;
        local_58[0] = FUN_01937230();
        local_58[4] = 0;
        local_58[3] = 0;
        local_58[2] = 0;
        local_58[1] = 0x2000;
        local_44 = &local_80;
        FUN_017124a4(&local_38,local_58);
        if (local_38 == 0x80000000) {
          puVar4 = local_34;
          local_8c = puVar5;
LAB_016f7fe8:
          FUN_019bb7e0(local_78,local_74);
LAB_016f7ff8:
          *param_1 = 0x80000000;
          param_1[1] = puVar4;
          FUN_017151bc(&local_90);
          FUN_016f80a8(&local_a0);
          return;
        }
        local_60 = local_38;
        local_64 = local_34;
        local_68 = local_34;
        puVar2 = local_34 + local_30 * 3;
        local_5c = puVar2;
        if (local_30 != 0) {
          puVar1 = local_34;
          do {
            puVar6 = puVar1 + 3;
            if (*puVar1 == 0x80000000) goto LAB_016f7f44;
            local_34 = (uint *)puVar1[1];
            local_30 = puVar1[2];
            local_38 = *puVar1;
            FUN_01915310(local_58,&local_a0,&local_38);
            if (local_58[0] != -0x7fffffd7) {
              local_38 = local_38 & 0xffff0000;
              local_8c = puVar5;
              local_64 = puVar6;
              puVar4 = (uint *)FUN_016f80f8(&local_38,local_58);
              FUN_0192f3bc(&local_68);
              goto LAB_016f7fe8;
            }
            puVar3 = puVar1 + 3;
            puVar1 = puVar6;
          } while (puVar3 != puVar2);
          puVar6 = puVar2;
LAB_016f7f44:
          local_64 = puVar6;
        }
        FUN_0192f3bc(&local_68);
        FUN_019bb7e0(local_78,local_74);
      }
      puVar2 = puVar5;
    } while (puVar5 != puVar4);
    puVar5 = puVar4;
LAB_016f7fa0:
    local_8c = puVar5;
  }
  FUN_017151bc(&local_90);
  *param_1 = local_a0;
  param_1[1] = local_9c;
  param_1[2] = local_98;
  return;
}

