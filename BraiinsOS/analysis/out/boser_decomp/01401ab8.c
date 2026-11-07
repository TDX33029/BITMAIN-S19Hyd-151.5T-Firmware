// FUN_01401ab8 @ 01401ab8 size=324 calls_out=3 calls_in=2
// strings: 

void FUN_01401ab8(int param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  sVar1 = *param_2;
  sVar3 = param_2[0x20];
  if (sVar1 != 1) {
    puVar4 = (undefined4 *)((uint)&local_e8 | 4);
    uVar9 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 6);
    uVar6 = *(undefined4 *)(param_2 + 8);
    *puVar4 = *(undefined4 *)(param_2 + 2);
    puVar4[1] = uVar9;
    puVar4[2] = uVar5;
    puVar4[3] = uVar6;
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0xe);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
    puVar4[4] = *(undefined4 *)(param_2 + 10);
    puVar4[5] = uVar9;
    puVar4[6] = uVar5;
    puVar4[7] = uVar6;
    local_e8._2_2_ = param_2[1];
  }
  else {
    FUN_015e8ad4((uint)&local_e8 | 4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
  }
  local_e8 = CONCAT22(local_e8._2_2_,(ushort)(sVar1 == 1));
  sVar1 = param_2[0x12];
  if (sVar1 != 1) {
    puVar4 = (undefined4 *)((uint)&local_48 | 4);
    uVar9 = *(undefined4 *)(param_2 + 0x16);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar6 = *(undefined4 *)(param_2 + 0x1a);
    uVar7 = *(undefined4 *)(param_2 + 0x1c);
    uVar8 = *(undefined4 *)(param_2 + 0x1e);
    *puVar4 = *(undefined4 *)(param_2 + 0x14);
    puVar4[1] = uVar9;
    puVar4[2] = uVar5;
    puVar4[3] = uVar6;
    puVar4[4] = uVar7;
    puVar4[5] = uVar8;
    local_48._2_2_ = param_2[0x13];
  }
  else {
    FUN_015e8ad4((uint)&local_48 | 4,*(undefined4 *)(param_2 + 0x16),*(undefined4 *)(param_2 + 0x18)
                );
  }
  local_48 = CONCAT22(local_48._2_2_,(ushort)(sVar1 == 1));
  local_130 = local_e8;
  uStack_12c = uStack_e4;
  uStack_128 = uStack_e0;
  uStack_124 = uStack_dc;
  local_120 = local_d8;
  uStack_11c = uStack_d4;
  uStack_118 = uStack_d0;
  uStack_114 = uStack_cc;
  uStack_110 = uStack_c8;
  local_10c = local_48;
  uStack_108 = uStack_44;
  uStack_104 = uStack_40;
  local_100 = local_3c;
  uStack_fc = uStack_38;
  uStack_f8 = uStack_34;
  uStack_f4 = uStack_30;
  uVar9 = *(undefined4 *)(param_2 + 0x72);
  sVar1 = param_2[0x23];
  sVar2 = param_2[0x22];
  local_f0 = (char)sVar3;
  FUN_01401e58(&local_e8,param_2 + 0x24);
  FUN_01bed4e2(param_1,&local_130,0x44);
  *(undefined4 *)(param_1 + 0xe4) = uVar9;
  *(short *)(param_1 + 0x46) = sVar1;
  *(short *)(param_1 + 0x44) = sVar2;
  FUN_01bed4e2(param_1 + 0x48,&local_e8,0x9c);
  return;
}

