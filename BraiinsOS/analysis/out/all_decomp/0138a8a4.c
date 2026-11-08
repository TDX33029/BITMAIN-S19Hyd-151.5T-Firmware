// FUN_0138a8a4 @ 0138a8a4 size=740 calls_out=2 calls_in=2
// strings: 

void FUN_0138a8a4(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined *local_60;
  code *local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  
  local_2c = 0;
  local_30 = 4;
  local_34 = 0;
  local_38 = 0;
  local_3c = 4;
  local_40 = (undefined *)0x0;
  local_28 = 0;
  if ((int)param_2 < 0) {
    local_5c = FUN_007883b8;
    local_60 = &DAT_00568468;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005970ba,&local_60,&DAT_01893ca0);
  }
  uStack_4c = param_2;
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    FUN_013c4434(&local_40,0,param_2,4,4);
    uVar1 = local_2c;
    iVar4 = param_2 - 1;
    puVar2 = (undefined4 *)(local_3c + local_38 * 4);
    puVar3 = puVar2;
    if (iVar4 != 0) {
      do {
        puVar3 = puVar2 + 1;
        *puVar2 = 0;
        iVar4 = iVar4 + -1;
        puVar2 = puVar3;
      } while (iVar4 != 0);
      local_38 = param_2 + local_38 + -1;
    }
    local_38 = local_38 + 1;
    *puVar3 = 0;
    if (local_2c < param_2) {
      uVar5 = param_2 - local_2c;
      if (local_34 - local_2c < uVar5) {
        FUN_013c4434(&local_34,local_2c,uVar5,4,4);
        puVar2 = (undefined4 *)(local_30 + local_2c * 4);
      }
      else {
        puVar2 = (undefined4 *)(local_30 + local_2c * 4);
      }
      if (1 < uVar5) {
        iVar4 = ~uVar1 + param_2;
        puVar3 = puVar2;
        do {
          puVar2 = puVar3 + 1;
          *puVar3 = 0;
          iVar4 = iVar4 + -1;
          puVar3 = puVar2;
        } while (iVar4 != 0);
        local_2c = (uVar5 + local_2c) - 1;
      }
      *puVar2 = 0;
      uStack_4c = local_2c + 1;
    }
  }
  local_60 = local_40;
  local_5c = (code *)local_3c;
  iStack_58 = local_38;
  local_54 = local_34;
  iStack_50 = local_30;
  uStack_48 = local_28;
  local_2c = 0;
  local_30 = 4;
  local_34 = 0;
  local_38 = 0;
  local_3c = 4;
  local_40 = (undefined *)0x0;
  local_28 = 0;
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    FUN_013c4434(&local_40,0,param_2,4,4);
    uVar1 = local_2c;
    iVar4 = param_2 - 1;
    puVar2 = (undefined4 *)(local_3c + local_38 * 4);
    puVar3 = puVar2;
    if (iVar4 != 0) {
      do {
        puVar3 = puVar2 + 1;
        *puVar2 = 0;
        iVar4 = iVar4 + -1;
        puVar2 = puVar3;
      } while (iVar4 != 0);
      local_38 = param_2 + local_38 + -1;
    }
    local_38 = local_38 + 1;
    *puVar3 = 0;
    if (local_2c < param_2) {
      uVar5 = param_2 - local_2c;
      if (local_34 - local_2c < uVar5) {
        FUN_013c4434(&local_34,local_2c,uVar5,4,4);
        puVar2 = (undefined4 *)(local_30 + local_2c * 4);
      }
      else {
        puVar2 = (undefined4 *)(local_30 + local_2c * 4);
      }
      if (1 < uVar5) {
        iVar4 = ~uVar1 + param_2;
        puVar3 = puVar2;
        do {
          puVar2 = puVar3 + 1;
          *puVar3 = 0;
          iVar4 = iVar4 + -1;
          puVar3 = puVar2;
        } while (iVar4 != 0);
        local_2c = (uVar5 + local_2c) - 1;
      }
      param_2 = local_2c + 1;
      *puVar2 = 0;
    }
  }
  param_1[7] = local_40;
  param_1[8] = local_3c;
  param_1[9] = local_38;
  param_1[10] = local_34;
  param_1[0xb] = local_30;
  param_1[0xc] = param_2;
  param_1[0xd] = local_28;
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = iStack_58;
  param_1[3] = local_54;
  param_1[4] = iStack_50;
  param_1[5] = uStack_4c;
  param_1[6] = uStack_48;
  return;
}

