// FUN_00c02a90 @ 00c02a90 size=1380 calls_out=10 calls_in=1
// strings: 

void FUN_00c02a90(undefined4 *param_1,char *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint *local_b8;
  uint uStack_b4;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  uint *local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int iStack_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  uint *local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  uint local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  if (*param_2 != '\x05') {
    if (*param_2 != '\x03') {
      FUN_0157a234(&local_78);
      uVar4 = FUN_0157cc00(&local_78,&DAT_01887184,&DAT_018ab990);
      param_1[2] = uVar4;
      *param_1 = 6;
      param_1[1] = 0;
      FUN_00c01f94(param_2);
      return;
    }
    local_60 = *(int *)(param_2 + 4);
    local_5c = *(int *)(param_2 + 8);
    local_58 = *(int *)(param_2 + 0xc);
    local_78 = (uint *)CONCAT31(local_78._1_3_,6);
    FUN_00d66d04(&local_a0,&local_78);
    if ((char)local_a0 == '\x02') {
      *param_1 = 6;
      param_1[1] = 0;
      param_1[2] = local_9c;
      return;
    }
    local_e0 = local_98;
    uVar5 = local_e0;
    local_dc = local_94;
    local_d8 = iStack_90;
    local_d4 = local_8c;
    local_d0 = iStack_88;
    local_cc = iStack_84;
    local_e0._0_1_ = (char)local_98;
    local_e0 = uVar5;
    if (((uint)local_a0 & 1) != 0) {
      if ((char)local_e0 == '\x06') {
        local_a0 = (uint *)CONCAT31(local_a0._1_3_,0xd);
        local_4c = FUN_0157cc00(&local_a0,&DAT_01878148,&DAT_018ab990);
      }
      else {
        FUN_00d44b6c(&local_50,&local_e0);
        if (local_50 == 0) {
          *(ulonglong *)(param_1 + 2) = CONCAT44(iStack_44,local_48);
          *param_1 = 5;
          param_1[1] = 0;
          return;
        }
      }
      param_1[2] = local_4c;
      *param_1 = 6;
      param_1[1] = 0;
      return;
    }
    if ((char)local_e0 == '\x06') {
      local_50 = CONCAT31(local_50._1_3_,0xd);
      local_98 = FUN_0157cc00(&local_50,&DAT_01878148,&DAT_018ab990);
    }
    else {
      FUN_00d4380c(&local_a0,&local_e0);
      if (local_a0 != (uint *)&DAT_00000005 || local_9c != 0) {
        *param_1 = local_a0;
        param_1[1] = local_9c;
        param_1[2] = local_98;
        param_1[3] = local_94;
        param_1[4] = iStack_90;
        param_1[5] = local_8c;
        return;
      }
    }
    *param_1 = 6;
    param_1[1] = 0;
    param_1[2] = local_98;
    return;
  }
  local_d8 = *(int *)(param_2 + 4);
  local_d4 = *(int *)(param_2 + 8);
  local_c0 = *(undefined4 *)(param_2 + 0xc);
  if (local_d8 == 0) {
    local_c0 = 0;
  }
  local_e0 = (uint)(local_d8 != 0);
  local_cc = 0;
  local_dc = 0;
  local_d0 = local_e0;
  local_c8 = local_d8;
  local_c4 = local_d4;
  FUN_00c3b8fc(&local_50,&local_e0);
  if (local_50 == 0) {
LAB_00c02d10:
    local_78 = (uint *)CONCAT31(local_78._1_3_,0xb);
    uVar5 = FUN_0157cd6c(&local_78,&DAT_0188717c,&DAT_018ab990);
  }
  else {
    puVar12 = (undefined4 *)(local_50 + local_48 * 0x18);
    iVar2 = local_50 + local_48 * 0xc;
    iVar14 = *(int *)(iVar2 + 0x10c);
    iVar6 = *(int *)(iVar2 + 0x110);
    iVar2 = *(int *)(iVar2 + 0x114);
    puVar3 = (undefined4 *)((uint)&local_78 | 4);
    uVar4 = puVar12[1];
    uVar8 = puVar12[2];
    uVar9 = puVar12[3];
    uVar10 = puVar12[4];
    uVar11 = puVar12[5];
    *puVar3 = *puVar12;
    puVar3[1] = uVar4;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    local_a0 = local_78;
    local_9c = local_74;
    local_98 = local_70;
    local_94 = local_6c;
    iStack_90 = local_68;
    local_8c = local_64;
    iStack_88 = local_60;
    if (iVar14 == -0x80000000) goto LAB_00c02d10;
    piVar13 = (int *)((uint)&local_a0 | 4);
    local_b8 = (uint *)*piVar13;
    uStack_b4 = piVar13[1];
    uStack_b0 = piVar13[2];
    iStack_ac = piVar13[3];
    iStack_a8 = piVar13[4];
    iStack_a4 = piVar13[5];
    FUN_00c3b8fc(&local_50,&local_e0);
    if (local_50 != 0) {
      iVar7 = local_50 + local_48 * 0xc;
      piVar13 = (int *)(local_50 + local_48 * 0x18);
      local_a0 = *(uint **)(iVar7 + 0x10c);
      local_9c = *(uint *)(iVar7 + 0x110);
      local_98 = *(uint *)(iVar7 + 0x114);
      iStack_90 = *piVar13;
      local_8c = piVar13[1];
      iStack_88 = piVar13[2];
      iStack_84 = piVar13[3];
      iStack_80 = piVar13[4];
      iStack_7c = piVar13[5];
      local_94 = local_6c;
      iStack_54 = iStack_7c;
      if (local_a0 != (uint *)&DAT_80000000) {
        local_78 = local_a0;
        local_74 = local_9c;
        local_70 = local_98;
        local_68 = iStack_90;
        local_64 = local_8c;
        local_60 = iStack_88;
        local_5c = iStack_84;
        local_58 = iStack_80;
        if (local_a0 != (uint *)0x0) {
          thunk_FUN_016d3fb4(local_9c);
        }
        FUN_00c01f94(&iStack_90);
        local_78 = (uint *)CONCAT31(local_78._1_3_,0xb);
        uVar4 = FUN_0157cd6c(&local_78,&DAT_0188717c,&DAT_018ab990);
        *param_1 = 6;
        param_1[1] = 0;
        param_1[2] = uVar4;
        FUN_00c01f94(&local_b8);
        if (iVar14 != 0) {
          thunk_FUN_016d3fb4(iVar6);
        }
        goto LAB_00c02d8c;
      }
    }
    local_78 = local_b8;
    local_74 = uStack_b4;
    local_70 = uStack_b0;
    local_6c = iStack_ac;
    local_68 = iStack_a8;
    local_64 = iStack_a4;
    local_60 = iVar14;
    local_5c = iVar6;
    local_58 = iVar2;
    FUN_00d66d04(&local_a0,&local_78);
    if ((char)local_a0 == '\x02') {
      uVar5 = local_9c;
    }
    else {
      local_50 = local_98;
      uVar5 = local_50;
      local_4c = local_94;
      local_48 = iStack_90;
      iStack_44 = local_8c;
      iStack_40 = iStack_88;
      iStack_3c = iStack_84;
      local_50._0_1_ = (char)local_98;
      local_50 = uVar5;
      if (((uint)local_a0 & 1) != 0) {
        if ((char)local_50 == '\x06') {
          local_a0 = (uint *)CONCAT31(local_a0._1_3_,0xd);
          local_34 = FUN_0157cc00(&local_a0,&DAT_01878148,&DAT_018ab990);
        }
        else {
          FUN_00d44b6c(&local_38,&local_50);
          if (local_38 == 0) {
            *(undefined8 *)(param_1 + 2) = local_30;
            *param_1 = 5;
            param_1[1] = 0;
            goto LAB_00c02d8c;
          }
        }
        param_1[2] = local_34;
        *param_1 = 6;
        param_1[1] = 0;
        goto LAB_00c02d8c;
      }
      if ((char)local_50 == '\x06') {
        local_38 = CONCAT31(local_38._1_3_,0xd);
        uVar5 = FUN_0157cc00(&local_38,&DAT_01878148,&DAT_018ab990);
      }
      else {
        FUN_00d4380c(&local_a0,&local_50);
        if (local_a0 != (uint *)&DAT_00000005 || local_9c != 0) {
          *param_1 = local_a0;
          param_1[1] = local_9c;
          param_1[2] = local_98;
          param_1[3] = local_94;
          param_1[4] = iStack_90;
          param_1[5] = local_8c;
          goto LAB_00c02d8c;
        }
        uVar5 = local_98;
      }
    }
  }
  *param_1 = 6;
  param_1[1] = 0;
  param_1[2] = uVar5;
LAB_00c02d8c:
  while( true ) {
    FUN_00c3b8fc(&local_78,&local_e0);
    uVar5 = local_70;
    puVar1 = local_78;
    if (local_78 == (uint *)0x0) break;
    local_a0 = &local_e0;
    if (local_78[local_70 * 3 + 0x43] != 0) {
      thunk_FUN_016d3fb4(local_78[local_70 * 3 + 0x44]);
    }
    FUN_00c436d0(puVar1 + uVar5 * 6);
  }
  return;
}

