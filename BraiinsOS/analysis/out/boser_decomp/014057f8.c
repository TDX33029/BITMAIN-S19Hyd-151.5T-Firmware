// FUN_014057f8 @ 014057f8 size=384 calls_out=4 calls_in=1
// strings: 

void FUN_014057f8(undefined4 param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_210 [160];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined2 local_ec;
  undefined1 auStack_ea [158];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  sVar1 = *param_2;
  sVar3 = param_2[0x20];
  if (sVar1 == 0) {
    puVar5 = (undefined4 *)((uint)&local_130 | 4);
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 6);
    uVar7 = *(undefined4 *)(param_2 + 8);
    *puVar5 = *(undefined4 *)(param_2 + 2);
    puVar5[1] = uVar4;
    puVar5[2] = uVar6;
    puVar5[3] = uVar7;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar6 = *(undefined4 *)(param_2 + 0xe);
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    puVar5[4] = *(undefined4 *)(param_2 + 10);
    puVar5[5] = uVar4;
    puVar5[6] = uVar6;
    puVar5[7] = uVar7;
    local_130._2_2_ = param_2[1];
  }
  else {
    FUN_015e8ad4((uint)&local_130 | 4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
  }
  sVar2 = param_2[0x12];
  local_130 = CONCAT22(local_130._2_2_,(ushort)(sVar1 != 0));
  if (sVar2 != 1) {
    puVar5 = (undefined4 *)((uint)&local_48 | 4);
    uVar4 = *(undefined4 *)(param_2 + 0x16);
    uVar6 = *(undefined4 *)(param_2 + 0x18);
    uVar7 = *(undefined4 *)(param_2 + 0x1a);
    uVar8 = *(undefined4 *)(param_2 + 0x1c);
    uVar9 = *(undefined4 *)(param_2 + 0x1e);
    *puVar5 = *(undefined4 *)(param_2 + 0x14);
    puVar5[1] = uVar4;
    puVar5[2] = uVar6;
    puVar5[3] = uVar7;
    puVar5[4] = uVar8;
    puVar5[5] = uVar9;
    local_48._2_2_ = param_2[0x13];
  }
  else {
    FUN_015e8ad4((uint)&local_48 | 4,*(undefined4 *)(param_2 + 0x16),*(undefined4 *)(param_2 + 0x18)
                );
  }
  local_48 = CONCAT22(local_48._2_2_,(ushort)(sVar2 == 1));
  local_170 = local_130;
  uStack_16c = uStack_12c;
  uStack_168 = uStack_128;
  uStack_164 = uStack_124;
  local_160 = local_120;
  local_15c = local_11c;
  uStack_158 = uStack_118;
  uStack_154 = uStack_114;
  uStack_150 = uStack_110;
  local_14c = local_48;
  local_148 = uStack_44;
  uStack_144 = uStack_40;
  local_140 = local_3c;
  uStack_13c = uStack_38;
  uStack_138 = uStack_34;
  uStack_134 = uStack_30;
  FUN_01bed4e2((uint)auStack_210 | 2,param_3,0x9c);
  local_130 = local_170;
  uStack_12c = uStack_16c;
  uStack_128 = uStack_168;
  uStack_124 = uStack_164;
  local_120 = local_160;
  local_11c = local_15c;
  uStack_118 = uStack_158;
  uStack_114 = uStack_154;
  uStack_110 = uStack_150;
  uStack_10c = local_14c;
  local_108 = local_148;
  uStack_104 = uStack_144;
  uStack_100 = local_140;
  uStack_fc = uStack_13c;
  uStack_f8 = uStack_138;
  uStack_f4 = uStack_134;
  local_ec = 0;
  local_f0 = (char)sVar3;
  FUN_01bed4e2(auStack_ea,auStack_210,0x9e);
  local_4c = 0x15180;
  uVar4 = FUN_0140aeb4(&local_130);
  FUN_014059bc(param_1,param_2,uVar4,1);
  return;
}

