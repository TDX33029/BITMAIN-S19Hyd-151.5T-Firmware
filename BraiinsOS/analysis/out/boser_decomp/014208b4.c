// FUN_014208b4 @ 014208b4 size=1332 calls_out=8 calls_in=2
// strings: overflow when adding duration to instant | overflow when subtracting duration from instantMatching variant not foundrisingfalling

void FUN_014208b4(uint *param_1,undefined4 param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  short sVar10;
  int iVar11;
  int extraout_r3;
  uint uVar12;
  int iVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  uint local_c0;
  uint uStack_bc;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_98;
  uint local_94;
  undefined1 *local_90;
  code *local_88;
  int local_84;
  code *local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puStack_b8 = param_5;
  local_ac = (code *)0x0;
  local_b0 = (code *)0x0;
  local_a8 = 0;
  local_c0 = param_3;
  uStack_bc = param_4;
  FUN_019ac248(&local_88,&local_c0,&local_b0);
  uVar4 = local_78;
  pcVar2 = local_88;
  local_90 = param_5;
  param_1[9] = 0;
  local_ac = (code *)0x0;
  local_b0 = (code *)0x0;
  local_a8 = 0;
  local_98 = param_3;
  local_94 = param_4;
  FUN_019ac248(&local_88,&local_98,&local_b0);
  pcVar14 = local_80;
  if (((uint)local_88 & 1) != 0) {
    local_80 = (code *)local_78;
    local_84 = local_7c;
    local_88 = pcVar14;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00477ada,0x23,&local_88,&DAT_01cf4364,&DAT_01cf43b4);
  }
  if (0x39 < local_7c && (uint)(local_80 < (code *)0xfff44180) <= 0x3a - local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00477abd,0x3b,&DAT_01cf43c4);
  }
  local_2c = 0;
  uVar18 = FUN_01bf0ff0(local_80,local_7c,0x15180,0);
  uVar3 = (uint)uVar18;
  local_30 = 0x1d;
  local_40 = 0x1f;
  local_3c = 0;
  local_38 = 0x1f;
  local_34 = 0;
  local_60 = 0x1f;
  local_5c = 0;
  uVar7 = (int)(uVar3 - 0x2b09) % 0x23ab1;
  local_58 = 0x1e;
  local_54 = 0;
  local_50 = 0x1f;
  local_4c = 0;
  local_48 = 0x1e;
  local_44 = 0;
  local_80 = (code *)0x1e;
  local_7c = 0;
  local_70 = 0x1e;
  local_78 = 0x1f;
  local_74 = 0;
  local_6c = 0;
  local_68 = 0x1f;
  local_64 = 0;
  local_88 = (code *)0x1f;
  uVar9 = uVar7 + 0x23ab1;
  uVar12 = ((int)uVar7 >> 0x1f) + (uint)(0xfffdc54e < uVar7);
  if (-1 < (int)uVar7) {
    uVar9 = uVar7;
    uVar12 = (int)uVar7 >> 0x1f;
  }
  uVar19 = FUN_01bf0ff0(uVar9,uVar12,0x8eac,0);
  if (uVar12 == uVar9 < 0x23ab0 && (uint)(0x8eab < uVar9 - 0x23ab0) <= uVar12 - (uVar9 < 0x23ab0)) {
    uVar19 = 3;
  }
  lVar1 = (uVar19 & 0xffffffff) * 0xffff7154;
  uVar8 = (uint)lVar1;
  uVar15 = uVar8 + uVar9;
  uVar12 = (int)(uVar19 >> 0x20) * -0x8eac + ((int)((ulonglong)lVar1 >> 0x20) - (int)uVar19) +
           uVar12 + (uint)CARRY4(uVar8,uVar9);
  uVar20 = FUN_01bf0fb0(uVar15,uVar12,0x5b5,0);
  if (uVar12 == uVar15 < 0x8ead && (uint)(0x5b4 < uVar15 - 0x8ead) <= uVar12 - (uVar15 < 0x8ead)) {
    uVar20 = 0x18;
  }
  lVar1 = (uVar20 & 0xffffffff) * 0xfffffa4b;
  uVar9 = (uint)lVar1;
  uVar16 = uVar9 + uVar15;
  uVar8 = (int)(uVar20 >> 0x20) * -0x5b5 + ((int)((ulonglong)lVar1 >> 0x20) - (int)uVar20) + uVar12
          + (uint)CARRY4(uVar9,uVar15);
  uVar21 = FUN_01bf0fb0(uVar16,uVar8,0x16d,0);
  iVar5 = (int)((ulonglong)uVar21 >> 0x20);
  uVar9 = (uint)uVar21;
  uVar12 = (uint)(uVar16 < 0x5b4);
  bVar17 = (uint)(0x16c < uVar16 - 0x5b4) <= uVar8 - uVar12;
  local_84 = 0;
  if (uVar8 == uVar12 && bVar17) {
    uVar9 = 3;
  }
  uVar15 = (uint)((ulonglong)uVar9 * 0xfffffe93);
  if (uVar8 == uVar12 && bVar17) {
    iVar5 = 0;
  }
  uVar12 = uVar15 + uVar16;
  iVar6 = iVar5 * -0x16d + ((int)((ulonglong)uVar9 * 0xfffffe93 >> 0x20) - uVar9) + uVar8 +
          (uint)CARRY4(uVar15,uVar16);
  iVar13 = 0;
  iVar5 = 0;
  do {
    uVar8 = *(uint *)((int)&local_88 - iVar5);
    iVar11 = *(int *)((int)&local_84 - iVar5);
    if ((int)(iVar6 - (iVar11 + (uint)(uVar12 < uVar8))) < 0 !=
        (SBORROW4(iVar6,iVar11) != SBORROW4(iVar6 - iVar11,(uint)(uVar12 < uVar8))))
    goto LAB_01420b74;
    bVar17 = uVar12 < uVar8;
    uVar12 = uVar12 - uVar8;
    iVar13 = iVar13 + 1;
    iVar6 = iVar6 - (iVar11 + (uint)bVar17);
    bVar17 = iVar5 != -0x58;
    iVar5 = iVar5 + -8;
  } while (bVar17);
  iVar13 = 0xb;
LAB_01420b74:
  local_ac._0_2_ = CONCAT11((char)uVar12 + '\x01',(undefined1)local_ac);
  pcVar14 = pcVar14 + uVar3 * -0x15180;
  FUN_01bf0fb0(uVar3 - 0x2b06,(int)((ulonglong)uVar18 >> 0x20) - (uint)(uVar3 < 0x2b06),7,0);
  iVar6 = iVar13 + 3;
  iVar5 = extraout_r2;
  if (extraout_r3 < (int)(uint)(extraout_r2 == 0)) {
    iVar5 = extraout_r2 + 7;
  }
  iVar11 = iVar6;
  if (0xc < iVar6) {
    iVar11 = iVar13 + 0xf7;
  }
  sVar10 = 2000;
  local_ac = (code *)CONCAT13((char)iVar5,CONCAT12((char)iVar11,(undefined2)local_ac));
  if (0xc < iVar6) {
    sVar10 = 0x7d1;
  }
  local_ac = (code *)CONCAT31(local_ac._1_3_,(char)((uint)pcVar14 / 0xe10));
  local_b0 = (code *)CONCAT13((char)(((uint)pcVar14 % 0xe10) / 0x3c),
                              CONCAT12((char)pcVar14 +
                                       ((char)((uint)pcVar14 / 0x3c) * '\x10' -
                                       (char)((uint)pcVar14 / 0x3c)) * -4,
                                       ((short)((int)(uVar3 - 0x2b09) / 0x23ab1) +
                                       (short)((int)uVar7 >> 0x1f)) * 400 + (short)uVar19 * 100 +
                                       (short)uVar20 * 4 + (short)uVar9 + sVar10));
  local_88 = (code *)&local_b0;
  local_84 = (int)FUN_014172f8;
  FUN_012fa178(param_1,&DAT_01cf4704,&DAT_00590e5f,&local_88);
  FUN_01ac6204(&local_88,param_1 + 10,0x1d);
  if ((char)local_78 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00477c12,0x27,&local_b0,&DAT_01d210e8,&DAT_01cf46e4);
  }
  local_b0 = local_88;
  local_ac = (code *)local_84;
  local_a8 = (uint)local_80;
  uStack_a4 = local_7c;
  uStack_a0 = local_78;
  (**(code **)(param_1[4] + 0x10))(param_1 + 7,param_1[5],param_1[6]);
  param_1[4] = (uint)local_b0;
  param_1[5] = (uint)local_ac;
  param_1[6] = local_a8;
  param_1[7] = uStack_a4;
  param_1[8] = uStack_a0;
  uVar12 = param_4 + (0xfffffffe < param_3);
  if ((int)((param_4 ^ uVar12) & ~param_4) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281f4);
  }
  if (((uint)pcVar2 & 1) == 0) {
    param_5 = param_5 + -uVar4;
  }
  uVar4 = param_3 + 1;
  uVar9 = uVar12;
  if ((undefined1 *)0x7fffffff < param_5) {
    uVar9 = uVar12 - (param_3 + 1 == 0);
    if ((int)(uVar12 & (uVar12 ^ uVar9)) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("overflow when subtracting duration from instantMatching variant not foundrisingfalling"
                   ,0x2f,&DAT_01d28204);
    }
    param_5 = &DAT_3b9aca00 + (int)param_5;
    uVar4 = param_3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar9;
  param_1[2] = (uint)param_5;
  return;
}

