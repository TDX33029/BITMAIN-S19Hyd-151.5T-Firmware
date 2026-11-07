// FUN_01584928 @ 01584928 size=768 calls_out=15 calls_in=3
// strings: 

void FUN_01584928(undefined4 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  undefined4 uStack_110;
  uint local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint auStack_a0 [10];
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 *local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 auStack_52 [46];
  
  FUN_00602b88(&local_68);
  uVar2 = local_60;
  puVar1 = local_64;
  if (local_68 != 0x80000000) {
    FUN_01584c70(&local_e0,0x16);
    local_d4 = CONCAT31(local_d4._1_3_,0x2b);
    *param_1 = 1;
    param_1[1] = local_e0;
    param_1[2] = local_dc;
    param_1[3] = local_d8;
    param_1[4] = local_d4;
    if (local_68 == 0) {
      return;
    }
    goto LAB_01584a44;
  }
  iVar3 = FUN_016d2e2a(local_64,0x902,0);
  if (iVar3 < 0) {
    FUN_01584d9c(&local_e0);
    *param_1 = 1;
    param_1[1] = local_e0;
    param_1[2] = local_dc;
    param_1[3] = local_d8;
    param_1[4] = local_d4;
    *puVar1 = 0;
  }
  else {
    iVar4 = FUN_016d6590(iVar3,0x540c);
    if (iVar4 == 0) {
      iVar4 = FUN_016d2d0c(iVar3,4,0);
      if (iVar4 < 0) {
        FUN_01584d9c(&local_e0);
        goto LAB_0158499c;
      }
      FUN_016dd606(&local_68,1,0x3c);
      iVar4 = FUN_016ddc8a(iVar3,&local_68);
      if (iVar4 == 0) {
        puVar8 = auStack_a0;
        local_74 = local_54;
        local_78 = local_58;
        FUN_016dd1aa(puVar8,auStack_52,0x26);
        local_cc = local_78;
        local_c8 = CONCAT22(local_c8._2_2_,local_74);
        FUN_016dd1aa(&uStack_c4,(uint)puVar8 | 2,0x24);
        local_c8 = local_c8 & 0xffff;
        uStack_114 = local_5c & 0xffff7f84;
        uStack_118 = local_60 | 0x880;
        uStack_11c = (uint)local_64 & 0xfffffffe;
        local_120 = local_68 & 0xfffffe3e;
        uStack_110 = local_cc;
        local_10c = local_c8;
        uStack_108 = uStack_c4;
        uStack_104 = uStack_c0;
        uStack_100 = uStack_bc;
        uStack_fc = uStack_b8;
        local_f8 = local_b4;
        uStack_f4 = uStack_b0;
        uStack_f0 = uStack_ac;
        uStack_ec = uStack_a8;
        uStack_e8 = uStack_a4;
        local_dc = local_120;
        local_d8 = uStack_11c;
        local_d4 = uStack_118;
        local_d0 = uStack_114;
        iVar4 = FUN_016ddca0(iVar3,0);
        if (iVar4 == 0) {
          iVar4 = FUN_016ddc80(iVar3,2);
          puVar8 = &local_68;
          if (iVar4 != 0) goto LAB_01584bd0;
        }
        else {
LAB_01584bd0:
          puVar6 = (uint *)FUN_016d2bc8();
          uVar7 = *puVar6;
          *puVar8 = 0;
          puVar8[1] = uVar7;
          FUN_01584edc(&local_e0,puVar8);
          if (local_e0 != -0x80000000) goto LAB_0158499c;
        }
        param_1[6] = iVar3;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 100000000;
        *param_1 = 0;
        *puVar1 = 0;
        goto joined_r0x01584c20;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      local_6c = *puVar5;
      local_70 = 0;
      FUN_01584edc(&local_dc,&local_70);
      *param_1 = 1;
      param_1[1] = local_dc;
      param_1[2] = local_d8;
      param_1[3] = local_d4;
      param_1[4] = local_d0;
    }
    else {
      puVar5 = (undefined4 *)FUN_016d2bc8();
      local_124 = *puVar5;
      local_128 = 0;
      FUN_01584edc(&local_e0,&local_128);
LAB_0158499c:
      *param_1 = 1;
      param_1[1] = local_e0;
      param_1[2] = local_dc;
      param_1[3] = local_d8;
      param_1[4] = local_d4;
    }
    FUN_01584eb4(iVar3);
    *puVar1 = 0;
  }
joined_r0x01584c20:
  if (uVar2 == 0) {
    return;
  }
  local_64 = puVar1;
LAB_01584a44:
  thunk_FUN_016d3fb4(local_64);
  return;
}

