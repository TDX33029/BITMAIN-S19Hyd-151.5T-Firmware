// FUN_01679e04 @ 01679e04 size=988 calls_out=11 calls_in=2
// strings: 

void FUN_01679e04(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  bool bVar11;
  int *piVar12;
  int iVar13;
  undefined4 ****ppppuVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined8 uVar18;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  int *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  char local_128;
  undefined2 local_124;
  undefined2 local_122;
  undefined1 local_120;
  undefined4 local_11f;
  undefined2 local_11b;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [68];
  undefined1 local_a0;
  char local_9f;
  char local_9e;
  char local_9d;
  char local_9c;
  char local_9b;
  char local_9a;
  undefined1 local_99;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_93;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 ****local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined4 ****local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  local_160 = param_2[0x13];
  if (local_160 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&DAT_0056ed00,&local_160,0);
  }
  local_128 = *(char *)(param_2 + 0xd);
  local_120 = *(undefined1 *)(param_2 + 0xf);
  if (local_128 != '\x03' && local_128 != '\x02') {
    param_4 = (int *)param_2[10];
    do {
      iVar13 = *param_4;
      bVar11 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar11);
    *param_4 = iVar13 + 1;
    if (iVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x167a1e0);
      (*pcVar1)();
    }
    unaff_r8 = param_2[0xb];
    unaff_r9 = param_2[0xc];
  }
  local_144 = param_2[6];
  uStack_140 = param_2[7];
  uStack_13c = param_2[8];
  local_11b = *(undefined2 *)((int)param_2 + 0x41);
  cVar2 = *(char *)((int)param_2 + 0x5b);
  uVar3 = *(undefined1 *)((int)param_2 + 0x5a);
  cVar4 = *(char *)((int)param_2 + 0x59);
  cVar5 = *(char *)((int)param_2 + 0x57);
  local_154 = param_2[2];
  uStack_150 = param_2[3];
  uStack_14c = param_2[4];
  uStack_148 = param_2[5];
  local_122 = 0x101;
  local_11f = *(undefined4 *)((int)param_2 + 0x3d);
  local_15c = *param_2;
  local_138 = param_2[9];
  local_158 = param_2[1];
  local_124 = *(undefined2 *)(param_2 + 0xe);
  uVar6 = *(undefined1 *)((int)param_2 + 0x5d);
  cVar7 = *(char *)(param_2 + 0x16);
  cVar8 = *(char *)((int)param_2 + 0x56);
  cVar9 = *(char *)((int)param_2 + 0x55);
  uVar10 = *(undefined1 *)(param_2 + 0x15);
  uVar17 = param_2[0x14];
  local_134 = param_4;
  local_130 = unaff_r8;
  local_12c = unaff_r9;
  uVar18 = FUN_016bc0ec(*(undefined4 *)(param_2[0x12] + 4),*(undefined4 *)(param_2[0x12] + 8));
  uVar16 = (undefined4)((ulonglong)uVar18 >> 0x20);
  piVar12 = (int *)uVar18;
  FUN_016bed94(auStack_e4);
  FUN_016c04f8(auStack_e4,&local_15c);
  local_9a = '\x02' - cVar7;
  local_9e = '\x02' - cVar8;
  local_9f = '\x02' - cVar9;
  local_9d = '\x02' - cVar5;
  local_9c = '\x02' - cVar4;
  local_a0 = 1;
  local_9b = cVar2 << 1;
  local_99 = uVar10;
  local_98 = uVar17;
  local_94 = uVar3;
  local_93 = uVar6;
  FUN_016bfc64(&local_90,auStack_e4,piVar12 + 2,uVar16);
  if (local_90 == 2) {
    *param_1 = local_8c;
    param_1[1] = local_88;
    *(undefined8 *)(param_1 + 2) = uVar18;
  }
  else {
    local_118 = local_7c;
    uStack_114 = uStack_78;
    uStack_110 = uStack_74;
    uStack_10c = uStack_70;
    local_108 = local_6c;
    uStack_104 = uStack_68;
    uStack_100 = uStack_64;
    uStack_fc = uStack_60;
    local_f8 = local_5c;
    uStack_f4 = uStack_58;
    uStack_f0 = uStack_54;
    uStack_ec = uStack_50;
    uStack_e8 = uStack_4c;
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar12;
      bVar11 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar11);
    *piVar12 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(piVar12,uVar16);
    }
    local_7c = local_118;
    uStack_78 = uStack_114;
    uStack_74 = uStack_110;
    uStack_70 = uStack_10c;
    local_6c = local_108;
    uStack_68 = uStack_104;
    uStack_64 = uStack_100;
    uStack_60 = uStack_fc;
    local_5c = local_f8;
    uStack_58 = uStack_f4;
    uStack_54 = uStack_f0;
    uStack_50 = uStack_ec;
    uStack_4c = uStack_e8;
    if (((local_90 & 1) == 0) || (local_88 != 0x27)) {
      if ((local_90 & 1) == 0) {
        local_38 = &local_48;
        local_40 = 0;
        local_48 = (undefined4 ****)0x0;
        local_2c = 0;
        local_44 = (undefined *)0x1;
        local_30 = 0x60000020;
        local_34 = &DAT_01d07424;
        iVar13 = FUN_016f0c98(&local_88,&local_38);
        if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01d0743c,&DAT_01d30334);
        }
        ppppuVar14 = local_48;
        puVar15 = local_44;
        uVar16 = local_40;
      }
      else {
        local_30 = 0;
        local_34 = (undefined *)0x1;
        local_38 = (undefined4 ****)0x0;
        iVar13 = FUN_016c787c(1,local_8c,&local_38,&DAT_01d07424);
        if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01d0743c,&DAT_01d30334);
        }
        ppppuVar14 = local_38;
        puVar15 = local_34;
        uVar16 = local_30;
      }
      param_1[1] = ppppuVar14;
      param_1[2] = puVar15;
      param_1[3] = uVar16;
    }
    else {
      param_1[1] = 0x80000000;
      param_1[2] = local_84;
    }
    FUN_01679c3c(&local_90);
    *param_1 = 0;
  }
  FUN_0167a2fc(auStack_e4);
  return;
}

