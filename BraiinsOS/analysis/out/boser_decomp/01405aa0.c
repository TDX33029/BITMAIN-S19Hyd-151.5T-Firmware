// FUN_01405aa0 @ 01405aa0 size=724 calls_out=9 calls_in=2
// strings: 

void FUN_01405aa0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  uint local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  uint local_94;
  uint local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar14 = param_2[5];
  uVar15 = param_3[5];
  uVar12 = 0;
  uVar10 = uVar15 + uVar14;
  iVar7 = uVar10 * 0xe8;
  if (0x8d3dcb < uVar10) {
LAB_01405ad8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,iVar7);
  }
  if (iVar7 == 0) {
    local_e0 = 4;
    uVar10 = 0;
  }
  else {
    uVar12 = 4;
    local_e0 = FUN_01298504(iVar7,4);
    if (local_e0 == 0) goto LAB_01405ad8;
  }
  local_dc = 0;
  local_e4 = uVar10;
  FUN_01409784(&local_e4,param_2[4] + 8,uVar14);
  FUN_01409784(&local_e4,param_3[4] + 8,uVar15);
  uVar16 = *param_2;
  uVar2 = *param_3;
  bVar17 = (short)param_2[6] != 1;
  uVar10 = param_2[1];
  uVar14 = param_2[2];
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  uVar15 = param_2[0x16];
  if (bVar17) {
    puVar4 = (uint *)((uint)&local_d8 | 4);
    uVar5 = param_2[8];
    uVar6 = param_2[9];
    uVar8 = param_2[10];
    *puVar4 = param_2[7];
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar8;
    uVar5 = param_2[0xc];
    uVar6 = param_2[0xd];
    uVar8 = param_2[0xe];
    puVar4[4] = param_2[0xb];
    puVar4[5] = uVar5;
    puVar4[6] = uVar6;
    puVar4[7] = uVar8;
    local_d8._2_2_ = *(undefined2 *)((int)param_2 + 0x1a);
  }
  else {
    FUN_015e8ad4((uint)&local_d8 | 4,param_2[8],param_2[9]);
  }
  local_d8 = CONCAT22(local_d8._2_2_,(ushort)!bVar17);
  bVar17 = (short)param_2[0xf] != 1;
  if (bVar17) {
    puVar4 = (uint *)((uint)&local_48 | 4);
    uVar5 = param_2[0x11];
    uVar6 = param_2[0x12];
    uVar8 = param_2[0x13];
    uVar11 = param_2[0x14];
    uVar13 = param_2[0x15];
    *puVar4 = param_2[0x10];
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar8;
    puVar4[4] = uVar11;
    puVar4[5] = uVar13;
    local_48._2_2_ = *(undefined2 *)((int)param_2 + 0x3e);
  }
  else {
    FUN_015e8ad4((uint)&local_48 | 4,param_2[0x11],param_2[0x12]);
  }
  iVar7 = local_e0;
  uVar5 = local_e4;
  local_48 = CONCAT22(local_48._2_2_,(ushort)!bVar17);
  local_88 = local_d8;
  uStack_84 = uStack_d4;
  uStack_80 = uStack_d0;
  uStack_7c = uStack_cc;
  local_78 = local_c8;
  local_74 = local_c4;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
  uStack_68 = uStack_b8;
  local_64 = local_48;
  local_60 = uStack_44;
  uStack_5c = uStack_40;
  local_58 = local_3c;
  uStack_54 = uStack_38;
  uStack_50 = uStack_34;
  uStack_4c = uStack_30;
  local_94 = param_2[0x17];
  local_90 = param_2[0x18];
  uStack_b4 = local_48;
  local_b0 = uStack_44;
  uStack_ac = uStack_40;
  uStack_a8 = local_3c;
  uStack_a4 = uStack_38;
  uStack_a0 = uStack_34;
  uStack_9c = uStack_30;
  iVar9 = local_dc * 0xe8;
  local_98 = (char)uVar15;
  uVar18 = FUN_013cf100(iVar9);
  FUN_01bed4e2((int)uVar18 + 8,iVar7,iVar9);
  FUN_013dd8c8(iVar7,0);
  FUN_013e6414(uVar5,iVar7,4,0xe8);
  FUN_01bed4e2(param_1 + 6,&local_d8,0x4c);
  *(undefined8 *)(param_1 + 4) = uVar18;
  bVar17 = (int)(uVar3 - (uVar10 + (uVar2 < uVar16))) < 0 !=
           (SBORROW4(uVar3,uVar10) != SBORROW4(uVar3 - uVar10,(uint)(uVar2 < uVar16)));
  if (uVar2 == uVar16 && uVar3 == uVar10) {
    bVar17 = uVar1 < uVar14;
  }
  if (bVar17) {
    uVar16 = uVar2;
    uVar10 = uVar3;
    uVar14 = uVar1;
  }
  *param_1 = uVar16;
  param_1[1] = uVar10;
  param_1[2] = uVar14;
  FUN_0077a52c(param_3);
  return;
}

