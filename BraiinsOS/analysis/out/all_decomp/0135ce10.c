// FUN_0135ce10 @ 0135ce10 size=1388 calls_out=12 calls_in=2
// strings: error building NFAByteClasses({singletons}) | a Display implementation returned an error unexpectedly

/* WARNING: Removing unreachable block (ram,0x0135d150) */

void FUN_0135ce10(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  undefined4 *****pppppuVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined4 *****pppppuVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 unaff_r4;
  undefined4 uVar19;
  undefined4 ****ppppuVar20;
  undefined4 unaff_r5;
  undefined4 *****pppppuVar21;
  undefined *puVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  int *local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char local_168;
  undefined2 local_164;
  undefined2 local_162;
  undefined1 local_160;
  undefined4 local_15f;
  undefined2 local_15b;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 ****local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 ****ppppuStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 *****local_120;
  undefined *local_11c;
  undefined1 *local_118;
  undefined *local_114;
  undefined4 ****local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 ****local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 ****ppppuStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d4 [2];
  undefined4 local_cc;
  undefined4 local_c4;
  undefined4 local_bc;
  undefined4 local_b4;
  int *local_ac;
  undefined4 local_a8;
  char local_a0;
  undefined1 local_9c;
  undefined4 local_9a;
  undefined4 local_96;
  undefined1 local_92;
  undefined1 local_90;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 *****local_80 [4];
  undefined4 ****local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 ****local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 ****ppppuStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *****local_38;
  undefined *local_34;
  undefined4 ****local_30;
  undefined1 auStack_29 [5];
  
  local_1a0 = param_2[0x13];
  if (local_1a0 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&DAT_00568c80,&local_1a0,0);
  }
  local_168 = *(char *)(param_2 + 0xd);
  local_160 = *(undefined1 *)(param_2 + 0xf);
  if (local_168 != '\x03' && local_168 != '\x02') {
    param_4 = (int *)param_2[10];
    do {
      iVar18 = *param_4;
      bVar25 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar25);
    *param_4 = iVar18 + 1;
    if (iVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x135d380);
      (*pcVar1)();
    }
    unaff_r4 = param_2[0xb];
    unaff_r5 = param_2[0xc];
  }
  local_184 = param_2[6];
  local_15f = *(undefined4 *)((int)param_2 + 0x3d);
  uVar2 = *(undefined1 *)((int)param_2 + 0x5d);
  uVar3 = *(undefined1 *)((int)param_2 + 0x5a);
  cVar4 = *(char *)(param_2 + 0x16);
  cVar5 = *(char *)((int)param_2 + 0x56);
  local_19c = *param_2;
  local_198 = param_2[1];
  local_194 = param_2[2];
  local_190 = param_2[3];
  local_18c = param_2[4];
  local_180 = param_2[7];
  uVar24 = *(uint *)(param_2[0x12] + 8);
  cVar6 = *(char *)((int)param_2 + 0x5b);
  cVar7 = *(char *)((int)param_2 + 0x59);
  cVar8 = *(char *)((int)param_2 + 0x57);
  local_178 = param_2[9];
  local_17c = param_2[8];
  local_188 = param_2[5];
  local_15b = *(undefined2 *)((int)param_2 + 0x41);
  local_164 = *(undefined2 *)(param_2 + 0xe);
  local_162 = 0x101;
  local_174 = param_4;
  uStack_170 = unaff_r4;
  uStack_16c = unaff_r5;
  if (0x7ffffff4 < uVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,auStack_29,&DAT_018574d8,&DAT_01857540);
  }
  uVar19 = *(undefined4 *)(param_2[0x12] + 4);
  uVar23 = uVar24 + 0xb & 0xfffffffc;
  cVar9 = *(char *)((int)param_2 + 0x55);
  uVar10 = *(undefined1 *)(param_2 + 0x15);
  uVar17 = param_2[0x14];
  piVar14 = (int *)thunk_FUN_016d4a50(uVar23);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,uVar23);
  }
  *piVar14 = 1;
  piVar14[1] = 1;
  FUN_016dd1aa(piVar14 + 2,uVar19,uVar24);
  local_88 = 0xfa;
  local_96 = 0x2020202;
  local_9a = 0x2020202;
  local_8f = 0x2020202;
  local_8b = 0x202;
  local_92 = 3;
  local_a0 = '\x03';
  local_82 = 0;
  local_84 = 0;
  local_9c = 0;
  local_b4 = 2;
  local_bc = 2;
  local_c4 = 2;
  local_cc = 2;
  local_d4[0] = 0;
  local_90 = 1;
  local_89 = 10;
  FUN_013c1294(local_d4,&local_19c);
  local_84 = CONCAT11(uVar2,uVar3);
  local_90 = 1;
  local_8f = CONCAT13('\x02' - cVar7,
                      CONCAT12('\x02' - cVar8,CONCAT11('\x02' - cVar5,'\x02' - cVar9)));
  local_8b = CONCAT11('\x02' - cVar4,cVar6 << 1);
  local_89 = uVar10;
  local_88 = uVar17;
  FUN_013bec5c(&local_120,local_d4,piVar14 + 2,uVar24);
  puVar22 = local_114;
  pppppuVar11 = (undefined4 *****)local_118;
  puVar12 = local_11c;
  pppppuVar16 = local_120;
  if (local_120 == (undefined4 *****)&SUB_00000002) {
    *param_1 = local_11c;
    param_1[1] = local_118;
    param_1[2] = piVar14;
    param_1[3] = uVar24;
    goto LAB_0135d29c;
  }
  local_158 = local_10c;
  uStack_154 = uStack_108;
  uStack_150 = uStack_104;
  uStack_14c = uStack_100;
  local_148 = local_fc;
  uStack_144 = uStack_f8;
  uStack_140 = uStack_f4;
  uStack_13c = uStack_f0;
  local_138 = local_ec;
  uStack_134 = uStack_e8;
  ppppuStack_130 = ppppuStack_e4;
  uStack_12c = uStack_e0;
  uStack_128 = uStack_dc;
  DataMemoryBarrier(0xb);
  do {
    iVar18 = *piVar14;
    bVar25 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar25);
  *piVar14 = iVar18 + -1;
  if (iVar18 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(piVar14,uVar24);
    ppppuStack_e4 = local_110;
  }
  local_70 = local_110;
  local_80[0] = pppppuVar16;
  local_80[1] = (undefined4 *****)puVar12;
  local_80[2] = pppppuVar11;
  local_80[3] = (undefined4 *****)puVar22;
  local_6c = local_158;
  uStack_68 = uStack_154;
  uStack_64 = uStack_150;
  uStack_60 = uStack_14c;
  local_5c = local_148;
  uStack_58 = uStack_144;
  uStack_54 = uStack_140;
  uStack_50 = uStack_13c;
  local_4c = local_138;
  uStack_48 = uStack_134;
  ppppuStack_44 = ppppuStack_130;
  uStack_40 = uStack_12c;
  uStack_3c = uStack_128;
  if ((((uint)pppppuVar16 & 1) == 0) || (pppppuVar11 != (undefined4 *****)0x27)) {
    if (((uint)pppppuVar16 & 1) != 0) {
      local_118 = (undefined1 *)0x0;
      local_11c = (undefined *)0x1;
      local_120 = (undefined4 *****)0x0;
      FUN_0135c828(&local_120,0,0x12,1,1);
      puVar13 = local_118;
      puVar22 = local_11c;
      pppppuVar21 = local_120;
      FUN_016dd1aa(local_11c + (int)local_118,"error building NFAByteClasses({singletons})",0x12);
      puVar15 = (undefined1 *)((int)pppppuVar11 + -0x22);
      if (pppppuVar11 < (undefined1 *)0x22) {
        puVar15 = (undefined1 *)0x0;
      }
      bVar25 = puVar15 == (undefined1 *)0x1;
      ppppuVar20 = (undefined4 ****)(puVar13 + 0x12);
      goto joined_r0x0135d1e4;
    }
    local_30 = (undefined4 ****)0x0;
    local_11c = &DAT_018923d8;
    local_120 = &local_38;
    local_38 = (undefined4 *****)0x0;
    local_114 = (undefined *)0x0;
    local_34 = (undefined *)0x1;
    local_118 = &DAT_60000020;
    iVar18 = FUN_013f4404(local_80 + 2,&local_120);
    if (iVar18 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,auStack_29,
                   &DAT_018923f0,&DAT_018af130);
    }
    ppppuVar20 = local_30;
    pppppuVar21 = local_38;
    puVar22 = local_34;
    pppppuVar11 = local_80[2];
LAB_0135d260:
    iVar18 = 0x24;
    if (pppppuVar11 == (undefined4 *****)0x22) {
      iVar18 = 0xc;
    }
    pppppuVar16 = &local_5c;
    local_110 = *(undefined4 *****)(auStack_29 + iVar18 + -0x57);
    if (pppppuVar11 == (undefined4 *****)0x22) {
      pppppuVar16 = local_80 + 3;
    }
joined_r0x0135d1f8:
    if (local_110 != (undefined4 ****)0x0) {
      thunk_FUN_016d3fb4(pppppuVar16[1]);
    }
  }
  else {
    pppppuVar21 = (undefined4 *****)&DAT_80000000;
    puVar15 = (undefined1 *)0x5;
    bVar25 = false;
    ppppuVar20 = ppppuStack_e4;
joined_r0x0135d1e4:
    if (bVar25) {
      if (-0x7ffffffd < (int)local_110) {
        pppppuVar16 = &local_70;
        goto joined_r0x0135d1f8;
      }
    }
    else if (puVar15 == (undefined1 *)0x0) goto LAB_0135d260;
  }
  param_1[3] = ppppuVar20;
  *param_1 = 0;
  param_1[1] = pppppuVar21;
  param_1[2] = puVar22;
LAB_0135d29c:
  if (local_a0 != '\x03' && local_a0 != '\x02') {
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *local_ac;
      bVar25 = (bool)hasExclusiveAccess(local_ac);
    } while (!bVar25);
    *local_ac = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(local_ac,local_a8);
      return;
    }
  }
  return;
}

