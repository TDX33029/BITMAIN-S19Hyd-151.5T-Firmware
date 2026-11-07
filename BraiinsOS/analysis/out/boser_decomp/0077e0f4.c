// FUN_0077e0f4 @ 0077e0f4 size=668 calls_out=5 calls_in=1
// strings: overflow when adding duration to instant

void FUN_0077e0f4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int *piVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_150 [80];
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  int local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_88;
  uint uStack_84;
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
  
  uVar12 = *param_3;
  uVar13 = param_3[1];
  uVar14 = param_3[2];
  uVar3 = *(undefined2 *)((int)param_3 + 0x62);
  uVar4 = *(undefined2 *)(param_3 + 0x18);
  uVar5 = *(undefined2 *)((int)param_3 + 0x5e);
  uVar6 = *(undefined2 *)(param_3 + 0x17);
  uVar2 = *(undefined1 *)(param_3 + 0x16);
  uVar15 = param_3[0x12];
  uVar7 = *(undefined2 *)((int)param_3 + 0x3e);
  uVar8 = *(undefined2 *)((int)param_3 + 0x1a);
  uVar9 = *(ushort *)(param_3 + 6);
  uVar18 = param_3[0x11];
  uVar16 = param_3[5];
  piVar25 = (int *)param_3[4];
  uVar10 = *(ushort *)(param_3 + 0xf);
  uVar23 = param_3[8];
  uVar24 = param_3[9];
  FUN_019ac130(&local_100,1);
  uVar11 = local_f8;
  iVar19 = local_100 + param_5;
  uVar21 = local_fc + CARRY4(local_100,param_5);
  if ((int)((local_fc ^ uVar21) & ~local_fc) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
  }
  FUN_01bed4e2(auStack_150,param_4,0x4c);
  puVar17 = (undefined4 *)((uint)&local_100 | 4);
  bVar26 = (uVar9 & 1) == 0;
  if (bVar26) {
    uVar23 = param_3[8];
    uVar24 = param_3[9];
    uVar22 = param_3[10];
    *puVar17 = param_3[7];
    puVar17[1] = uVar23;
    puVar17[2] = uVar24;
    puVar17[3] = uVar22;
    uVar23 = param_3[0xc];
    uVar24 = param_3[0xd];
    uVar22 = param_3[0xe];
    puVar17[4] = param_3[0xb];
    puVar17[5] = uVar23;
    puVar17[6] = uVar24;
    puVar17[7] = uVar22;
    local_100._2_2_ = uVar8;
  }
  else {
    FUN_015e8ad4(puVar17,uVar23,uVar24);
  }
  puVar17 = (undefined4 *)((uint)&local_48 | 4);
  bVar27 = (uVar10 & 1) == 0;
  local_100 = CONCAT22(local_100._2_2_,(ushort)!bVar26);
  if (bVar27) {
    uVar15 = param_3[0x11];
    uVar18 = param_3[0x12];
    uVar23 = param_3[0x13];
    uVar24 = param_3[0x14];
    uVar22 = param_3[0x15];
    *puVar17 = param_3[0x10];
    puVar17[1] = uVar15;
    puVar17[2] = uVar18;
    puVar17[3] = uVar23;
    puVar17[4] = uVar24;
    puVar17[5] = uVar22;
    local_48._2_2_ = uVar7;
  }
  else {
    FUN_015e8ad4(puVar17,uVar18,uVar15);
  }
  uStack_c8 = uStack_e0;
  uStack_cc = uStack_e4;
  uStack_d0 = local_e8;
  local_48 = CONCAT22(local_48._2_2_,(ushort)!bVar27);
  local_88 = local_100;
  uStack_84 = local_fc;
  uStack_80 = local_f8;
  uStack_7c = uStack_f4;
  local_78 = local_f0;
  local_74 = local_ec;
  uStack_70 = local_e8;
  uStack_6c = uStack_e4;
  uStack_68 = uStack_e0;
  local_64 = local_48;
  local_60 = uStack_44;
  uStack_5c = uStack_40;
  local_58 = local_3c;
  uStack_54 = uStack_38;
  uStack_50 = uStack_34;
  uStack_4c = uStack_30;
  do {
    iVar20 = *piVar25;
    bVar26 = (bool)hasExclusiveAccess(piVar25);
  } while (!bVar26);
  *piVar25 = iVar20 + 1;
  if (iVar20 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x77e38c);
    (*pcVar1)();
  }
  local_e8 = local_100;
  uStack_e4 = local_fc;
  uStack_e0 = local_f8;
  uStack_dc = uStack_f4;
  uStack_d8 = local_f0;
  local_d4 = local_ec;
  uStack_c4 = local_48;
  local_c0 = uStack_44;
  uStack_bc = uStack_40;
  uStack_b8 = local_3c;
  uStack_b4 = uStack_38;
  uStack_b0 = uStack_34;
  uStack_ac = uStack_30;
  local_90 = uVar11;
  local_100 = uVar12;
  local_fc = uVar13;
  local_f8 = uVar14;
  local_f0 = piVar25;
  local_ec = uVar16;
  local_a8 = uVar2;
  local_a4 = uVar6;
  local_a2 = uVar5;
  local_a0 = uVar4;
  local_9e = uVar3;
  local_98 = iVar19;
  local_94 = uVar21;
  FUN_013f946c(param_2,auStack_150);
  FUN_01bed4e2(param_1,param_3,0x68);
  return;
}

