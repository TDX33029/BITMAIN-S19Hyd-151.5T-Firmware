// FUN_00d4380c @ 00d4380c size=740 calls_out=8 calls_in=3
// strings: 

void FUN_00d4380c(undefined4 *param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  uint local_d4 [3];
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint *local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint *local_98;
  int iStack_94;
  int iStack_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  uint uStack_80;
  uint *local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (*param_2 != '\x05') {
    if (*param_2 == '\x03') {
      local_60 = *(uint *)(param_2 + 4);
      local_5c = *(uint *)(param_2 + 8);
      local_58 = *(uint *)(param_2 + 0xc);
      local_78 = (uint *)CONCAT31(local_78._1_3_,6);
      FUN_00d43b78(param_1,&local_78);
      return;
    }
    FUN_0157a234(&local_78);
    uVar3 = FUN_0157cc00(&local_78,&DAT_01887184,&DAT_018ab990);
    param_1[2] = uVar3;
    *param_1 = 5;
    param_1[1] = 0;
    FUN_00c01f94(param_2);
    return;
  }
  local_d4[2] = *(uint *)(param_2 + 4);
  local_c8 = *(undefined4 *)(param_2 + 8);
  local_b4 = *(undefined4 *)(param_2 + 0xc);
  if (local_d4[2] == 0) {
    local_b4 = 0;
  }
  local_d4[0] = (uint)(local_d4[2] != 0);
  local_c0 = 0;
  local_d4[1] = 0;
  local_c4 = local_d4[0];
  local_bc = local_d4[2];
  local_b8 = local_c8;
  FUN_00c3b8fc(&local_b0,local_d4);
  if (local_b0 != (uint *)0x0) {
    puVar12 = local_b0 + local_a8 * 6;
    uVar4 = local_b0[local_a8 * 3 + 0x44];
    uVar10 = local_b0[local_a8 * 3 + 0x43];
    uVar11 = local_b0[local_a8 * 3 + 0x45];
    puVar2 = (uint *)((uint)&local_78 | 4);
    uVar5 = puVar12[1];
    uVar6 = puVar12[2];
    uVar7 = puVar12[3];
    uVar8 = puVar12[4];
    uVar9 = puVar12[5];
    *puVar2 = *puVar12;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar2[4] = uVar8;
    puVar2[5] = uVar9;
    local_98 = local_78;
    iStack_94 = iStack_74;
    iStack_90 = local_70;
    local_8c = local_6c;
    iStack_88 = iStack_68;
    iStack_84 = iStack_64;
    uStack_80 = local_60;
    if (uVar10 != 0x80000000) {
      piVar13 = (int *)((uint)&local_98 | 4);
      local_b0 = (uint *)*piVar13;
      iStack_ac = piVar13[1];
      local_a8 = piVar13[2];
      iStack_a4 = piVar13[3];
      iStack_a0 = piVar13[4];
      iStack_9c = piVar13[5];
      FUN_00c3b8fc(&local_78,local_d4);
      if (local_78 != (uint *)0x0) {
        puVar2 = local_78 + local_70 * 6;
        local_50 = local_78[local_70 * 3 + 0x43];
        local_4c = local_78[local_70 * 3 + 0x44];
        local_48 = local_78[local_70 * 3 + 0x45];
        local_40 = *puVar2;
        uStack_3c = puVar2[1];
        uStack_38 = puVar2[2];
        uStack_34 = puVar2[3];
        uStack_30 = puVar2[4];
        uStack_2c = puVar2[5];
        if (local_50 != 0x80000000) {
          if (local_50 != 0) {
            thunk_FUN_016d3fb4(local_4c);
          }
          FUN_00c01f94(&local_40);
          local_78 = (uint *)CONCAT31(local_78._1_3_,0xb);
          uVar3 = FUN_0157cd6c(&local_78,&DAT_0188717c,&DAT_018ab990);
          *param_1 = 5;
          param_1[1] = 0;
          param_1[2] = uVar3;
          FUN_00c01f94(&local_b0);
          if (uVar10 != 0) {
            thunk_FUN_016d3fb4(uVar4);
          }
          goto LAB_00d43a54;
        }
      }
      local_78 = local_b0;
      iStack_74 = iStack_ac;
      local_70 = local_a8;
      local_6c = iStack_a4;
      iStack_68 = iStack_a0;
      iStack_64 = iStack_9c;
      local_60 = uVar10;
      local_5c = uVar4;
      local_58 = uVar11;
      FUN_00d43b78(param_1,&local_78);
      goto LAB_00d43a54;
    }
  }
  local_78 = (uint *)CONCAT31(local_78._1_3_,0xb);
  uVar3 = FUN_0157cd6c(&local_78,&DAT_0188717c,&DAT_018ab990);
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = uVar3;
LAB_00d43a54:
  while (FUN_00c3b8fc(&local_78,local_d4), iVar1 = local_70, puVar2 = local_78,
        local_78 != (uint *)0x0) {
    local_98 = local_d4;
    if (local_78[local_70 * 3 + 0x43] != 0) {
      thunk_FUN_016d3fb4(local_78[local_70 * 3 + 0x44]);
    }
    FUN_00c436d0(puVar2 + iVar1 * 6);
  }
  return;
}

