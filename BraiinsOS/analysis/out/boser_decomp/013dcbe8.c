// FUN_013dcbe8 @ 013dcbe8 size=828 calls_out=8 calls_in=1
// strings: 

void FUN_013dcbe8(undefined4 *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort local_130;
  short local_110;
  undefined2 local_10e;
  code *local_10c;
  code *local_108;
  code *pcStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_b8 [4];
  undefined4 local_a8;
  code *local_a4;
  code *local_a0;
  code *local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  code *local_58;
  code *local_54;
  code *local_50;
  uint local_4c;
  undefined2 local_44 [6];
  uint local_38 [5];
  
  uVar5 = *(uint *)(param_2 + 0xc);
  if (uVar5 < 2) {
    local_a0 = (code *)0x2;
    local_a4 = (code *)0x0;
    local_a8 = (code *)((uint)local_a8 & 0xffffff00);
    local_a4 = (code *)FUN_013e677c(&local_a8);
LAB_013dcc64:
    *param_1 = 0x80000000;
    param_1[1] = local_a4;
    return;
  }
  iVar6 = *(int *)(param_2 + 4);
  uVar1 = **(ushort **)(param_2 + 8);
  *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
  *(uint *)(param_2 + 0xc) = uVar5 - 2;
  FUN_013c7bc4(&local_a8,param_2);
  if ((short)local_a8 == 2) goto LAB_013dcc64;
  local_108 = local_a0;
  pcStack_104 = local_9c;
  uStack_100 = uStack_98;
  uStack_fc = uStack_94;
  uStack_f8 = uStack_90;
  local_f4 = local_8c;
  uStack_f0 = uStack_88;
  uStack_ec = uStack_84;
  uStack_e8 = uStack_80;
  uStack_e4 = uStack_7c;
  local_e0 = local_78;
  uStack_dc = uStack_74;
  uStack_d8 = uStack_70;
  uStack_d4 = uStack_6c;
  uStack_d0 = uStack_68;
  local_110 = (short)local_a8;
  local_10c = local_a4;
  uVar5 = (*(int *)(param_2 + 4) + (uVar5 - iVar6)) - *(int *)(param_2 + 0xc);
  local_10e = local_a8._2_2_;
  pcVar3 = (code *)((param_3 & 0xffff) - uVar5);
  if ((param_3 & 0xffff) < uVar5) {
    local_58 = (code *)local_b8;
    local_54 = FUN_012fd02c;
    local_b8[0] = uVar5;
    FUN_00664898(&local_a8,&DAT_005896dc,&local_58);
    pcVar2 = local_a0;
    pcVar3 = local_a4;
    if (local_a8 != (code *)&DAT_80000000) {
      local_a0 = local_a4;
      local_9c = pcVar2;
      local_a4 = local_a8;
      local_a8 = (code *)CONCAT22(local_a8._2_2_,0x11);
      uVar4 = FUN_013e649c(&local_a8);
      *param_1 = 0x80000000;
      param_1[1] = uVar4;
      goto LAB_013dd564;
    }
  }
  local_c0 = 0;
  local_c4 = 4;
  local_c8 = 0;
  if (pcVar3 < &SUB_00000004) {
    FUN_01bed4e2(&local_9c,&local_110,0x44);
    local_a8 = (code *)local_c8;
    local_a4 = (code *)local_c4;
    local_a0 = (code *)local_c0;
    FUN_01bed4e2(param_1,&local_a8,0x50);
    *(ushort *)(param_1 + 0x14) = (ushort)(((uint)uVar1 << 0x18) >> 0x10) | uVar1 >> 8;
    return;
  }
  FUN_013db778(&local_a8,param_2);
  if ((short)local_a8 == 0) {
    if (*(uint *)(param_2 + 0xc) < 2) {
      local_a0 = (code *)0x2;
      local_a4 = (code *)0x0;
      local_a8 = (code *)((uint)local_130 << 0x10);
      uVar4 = FUN_013e677c(&local_a8);
    }
    else {
      local_38[0] = *(uint *)(param_2 + 0xc) - 2;
      pcVar3 = (code *)(*(ushort **)(param_2 + 8) + 1);
      uVar1 = **(ushort **)(param_2 + 8);
      *(code **)(param_2 + 8) = pcVar3;
      *(uint *)(param_2 + 0xc) = local_38[0];
      uVar5 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
      local_4c = uVar5 >> 0x10;
      if (uVar5 >> 0x10 <= local_38[0]) {
        *(code **)(param_2 + 8) = pcVar3 + local_4c;
        *(uint *)(param_2 + 0xc) = local_38[0] - local_4c;
                    /* WARNING: Could not recover jumptable at 0x013dcde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        local_58 = pcVar3;
        local_54 = (code *)local_4c;
        local_50 = pcVar3;
        (*(code *)(&DAT_013dcdec + *(int *)(&DAT_013dcdec + ((uint)local_a8 >> 0x10) * 4)))();
        return;
      }
      local_44[0] = (undefined2)(uVar5 >> 0x10);
      local_a4 = FUN_012fcf18;
      local_a8 = (code *)local_44;
      local_9c = FUN_012fd02c;
      local_a0 = (code *)local_38;
      FUN_00664898(&local_58,&DAT_005993bb,&local_a8);
      local_a4 = local_58;
      local_a0 = local_54;
      local_9c = local_50;
      local_a8 = (code *)CONCAT22(local_a8._2_2_,0x11);
      uVar4 = FUN_013e649c(&local_a8);
    }
    *param_1 = 0x80000000;
    param_1[1] = uVar4;
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = local_a4;
  }
  FUN_0074dce4(&local_c8);
LAB_013dd564:
  FUN_013d1724(&local_110);
  return;
}

