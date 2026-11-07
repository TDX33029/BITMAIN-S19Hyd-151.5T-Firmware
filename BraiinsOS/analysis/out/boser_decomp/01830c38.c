// FUN_01830c38 @ 01830c38 size=7600 calls_out=43 calls_in=4
// strings: size overflows MAX_SIZE | valid request parts

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01830c38(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  undefined2 uVar15;
  int *piVar16;
  ushort uVar17;
  int *piVar18;
  uint uVar19;
  int ****ppppiVar20;
  int ****ppppiVar21;
  int ****ppppiVar22;
  int ****ppppiVar23;
  int ****ppppiVar24;
  int iVar25;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  int iVar29;
  undefined4 *puVar30;
  char *pcVar31;
  int *piVar32;
  int iVar33;
  ushort *puVar34;
  undefined1 *puVar35;
  undefined4 extraout_r1;
  int iVar36;
  undefined1 *extraout_r1_00;
  int ****ppppiVar37;
  int ****ppppiVar38;
  int ****ppppiVar39;
  int ****ppppiVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  int *piVar44;
  int ****ppppiVar45;
  undefined4 *puVar46;
  uint extraout_r2;
  int ****extraout_r2_00;
  uint extraout_r2_01;
  uint uVar47;
  undefined4 *puVar48;
  int ****extraout_r3;
  uint uVar49;
  int *piVar50;
  int iVar51;
  int iVar52;
  undefined1 uVar53;
  undefined4 uVar54;
  uint uVar55;
  uint uVar56;
  int iVar57;
  int ***pppiVar58;
  char cVar59;
  byte bVar60;
  int *piVar61;
  int ****ppppiVar62;
  int ****ppppiVar63;
  int ****ppppiVar64;
  int ****extraout_r12;
  int ****ppppiVar65;
  int ****extraout_r12_00;
  undefined4 extraout_r12_01;
  int ****ppppiVar66;
  int ****ppppiVar67;
  bool bVar68;
  bool bVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  ulonglong uVar72;
  undefined8 uVar73;
  int *local_f8c;
  int ****local_f88;
  int ****local_f84;
  int ****local_f80;
  int ****local_f7c;
  int ****local_f78;
  int *local_f5c;
  int ****local_f0c;
  ushort local_ef8;
  int local_ef4;
  int ****local_ed0;
  int ****local_ecc;
  int ****local_ec8;
  int *local_ec4;
  uint local_ec0;
  undefined1 *local_ebc;
  int local_eb8;
  int *local_eb4;
  int iStack_eb0;
  int local_eac;
  uint local_ea8;
  int iStack_ea4;
  int local_ea0;
  int local_e9c;
  uint local_e98;
  int iStack_e94;
  uint local_e90;
  int iStack_e8c;
  int iStack_e88;
  int iStack_e84;
  int iStack_e80;
  int ****local_e78;
  int ****ppppiStack_e74;
  int ****ppppiStack_e70;
  int *piStack_e6c;
  uint uStack_e68;
  undefined1 *local_e64;
  int iStack_e60;
  int *piStack_e5c;
  int iStack_e58;
  int iStack_e54;
  uint uStack_e50;
  int ****local_e48;
  int ****local_e44;
  int ****local_e40;
  int *local_e3c;
  undefined2 local_e34;
  undefined1 local_e32;
  undefined1 auStack_e30 [128];
  undefined4 local_db0;
  int ****local_dac;
  undefined4 local_da8;
  int *piStack_da4;
  uint local_da0;
  undefined1 *local_d9c;
  int iStack_d98;
  int *piStack_d94;
  int iStack_d90;
  int iStack_d8c;
  uint uStack_d88;
  undefined4 local_bf0;
  undefined4 uStack_bec;
  undefined4 uStack_be8;
  undefined1 *puStack_be4;
  uint uStack_be0;
  uint local_bdc;
  undefined8 uStack_bd8;
  int ****ppppiStack_bd0;
  int ****ppppiStack_bcc;
  int ****local_bc8;
  int ****ppppiStack_bc4;
  int ****ppppiStack_bc0;
  int ****ppppiStack_bbc;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined1 auStack_bb0 [272];
  undefined4 local_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  int ****local_a8c;
  int ****ppppiStack_a88;
  int ****ppppiStack_a84;
  int *piStack_a80;
  undefined4 uStack_a7c;
  undefined4 local_a78;
  undefined4 uStack_a74;
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  undefined4 uStack_a68;
  undefined4 local_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined4 uStack_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  byte local_a4c;
  undefined2 uStack_a4b;
  undefined1 local_a49;
  undefined8 local_a48;
  int ****local_a40;
  int ****local_a3c;
  byte local_a38;
  int ****local_a30;
  int ****local_a2c;
  undefined1 local_a28;
  byte bStack_a27;
  undefined1 auStack_a26 [2];
  undefined4 local_a24;
  undefined4 local_a20;
  undefined1 *local_a1c;
  undefined8 local_a18;
  int ****local_a10;
  int ****ppppiStack_a0c;
  int ****ppppiStack_a08;
  int ****local_a04;
  int ****ppppiStack_a00;
  int ****ppppiStack_9fc;
  undefined2 local_9f8;
  undefined1 local_9ac;
  undefined2 local_9ab;
  undefined1 local_9a9;
  int ****local_9a8;
  int ****ppppiStack_9a4;
  int ****ppppiStack_9a0;
  int *piStack_99c;
  undefined4 local_998;
  undefined8 local_994;
  int *local_98c;
  undefined1 local_988 [3];
  undefined1 uStack_985;
  undefined1 *local_984;
  int iStack_980;
  int *piStack_97c;
  int iStack_978;
  int iStack_974;
  uint local_970;
  int iStack_96c;
  int iStack_968;
  int iStack_964;
  uint uStack_960;
  int iStack_95c;
  int ****local_8a8;
  int ****local_8a4;
  int ****local_8a0;
  int *local_89c;
  int local_898;
  int local_894;
  int *local_890;
  int ****local_88c;
  int ****local_888;
  int ****local_884;
  int ****local_880;
  int *local_87c;
  undefined1 local_878;
  undefined1 local_877;
  int local_870 [2];
  undefined4 local_868;
  undefined1 *puStack_864;
  uint local_860;
  uint local_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_840;
  undefined4 local_83c;
  undefined2 local_838;
  undefined1 auStack_830 [44];
  byte local_804;
  undefined2 local_803;
  undefined1 local_801;
  undefined4 local_800;
  undefined4 local_7fc;
  int ****local_7f8;
  byte local_7f4;
  byte local_7ec;
  undefined4 *local_7e8;
  undefined4 local_7e4;
  int ****local_7e0;
  undefined1 auStack_7dc [4];
  int ****local_7d8;
  int ****local_7d4;
  undefined4 local_7d0;
  int ****local_7cc;
  int ****local_7c8;
  int *local_7c4;
  undefined8 local_7c0;
  int ****local_7b8;
  int ****local_7b4;
  int ****local_7b0;
  int ****local_7ac;
  int ****local_7a8;
  int ****local_7a4;
  uint local_7a0;
  int iStack_79c;
  undefined4 local_798;
  undefined1 local_794;
  undefined2 uStack_793;
  undefined1 uStack_791;
  undefined4 local_790;
  undefined1 auStack_78c [4];
  char local_788 [8];
  int local_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined1 auStack_770 [4];
  char acStack_76c [4];
  char local_768 [128];
  int ****local_6e8;
  int ****ppppiStack_6e4;
  int ****ppppiStack_6e0;
  int *piStack_6dc;
  int local_6d8;
  int iStack_6d4;
  int *piStack_6d0;
  int ****ppppiStack_6cc;
  int ****local_458;
  int ****ppppiStack_454;
  int ****ppppiStack_450;
  int *piStack_44c;
  uint uStack_448;
  undefined1 *local_444;
  int iStack_440;
  int *piStack_43c;
  int iStack_438;
  int iStack_434;
  uint local_430;
  int iStack_42c;
  int iStack_428;
  int iStack_424;
  uint uStack_420;
  int iStack_41c;
  int ****local_418;
  int ****local_414;
  int ****local_410;
  int ****local_40c;
  int ****local_408;
  int *local_404;
  int ****local_400;
  undefined2 local_3fc;
  undefined2 local_3fa;
  int ****local_3f8;
  int ****local_3f4;
  int ****local_3f0;
  int ****local_3ec;
  int ****local_3e8;
  int ****local_3e4;
  uint uStack_3e0;
  int iStack_3dc;
  int iStack_3d8;
  undefined1 local_3d4;
  undefined2 uStack_3d3;
  undefined1 local_3d1;
  int local_3d0;
  int iStack_3cc;
  int local_3c8;
  byte local_3c0;
  undefined2 uStack_3bf;
  undefined1 local_3bd;
  int local_3bc;
  int local_3b8;
  int *local_3b4;
  uint local_3b0;
  int *local_3ac;
  int local_3a8;
  int local_3a4;
  undefined4 local_3a0;
  int ****ppppiStack_39c;
  int ****ppppiStack_398;
  int *piStack_394;
  uint uStack_390;
  undefined1 *local_38c;
  int iStack_388;
  int *piStack_384;
  int iStack_380;
  int iStack_37c;
  uint uStack_378;
  int ****local_2b0;
  int ****ppppiStack_2ac;
  int ****ppppiStack_2a8;
  int *piStack_2a4;
  int local_2a0;
  int iStack_29c;
  int *piStack_298;
  int ****ppppiStack_294;
  int ****local_290;
  int ****local_28c;
  int ****local_288;
  int *local_284;
  int local_280;
  int local_27c;
  int *local_278;
  int ****local_274;
  undefined2 local_215;
  undefined1 local_213;
  int ****local_180;
  int ****ppppiStack_17c;
  int ****ppppiStack_178;
  int *local_174;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 *puStack_114;
  uint local_110;
  uint local_10c;
  undefined8 local_108;
  int ****local_100;
  int ****ppppiStack_fc;
  int ****local_f8;
  int ****local_f4;
  int ****ppppiStack_f0;
  int ****ppppiStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int ****local_c8;
  int ****local_c4;
  int ****local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined2 local_2c;
  undefined1 local_2a;
  
  local_170 = CONCAT22(local_170._2_2_,CONCAT11(local_170._1_1_,(undefined1)local_170));
  if (*param_1 == 3 && param_1[1] == 0) {
    iVar51 = param_1[2];
    uVar54 = 1;
    local_a18 = CONCAT44(local_a18._4_4_,(undefined4)local_a18);
    local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
    uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
    local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
    local_7c0 = CONCAT44(local_7c0._4_4_,(int ****)local_7c0);
    goto LAB_01830ee8;
  }
  piVar18 = (int *)param_1[0x2e];
  local_f5c = param_1 + 0x1d;
  uVar5 = *(undefined2 *)((int)param_1 + 0x9d);
  ppppiVar37 = (int ****)param_1[0x11];
  ppppiVar38 = (int ****)param_1[0x12];
  bVar2 = *(byte *)(param_1 + 0x27);
  uVar19 = (uint)bVar2;
  ppppiVar39 = (int ****)param_1[0x13];
  ppppiVar20 = (int ****)param_1[0x10];
  ppppiVar40 = (int ****)param_1[0x14];
  piVar26 = param_1 + 0x17;
  iVar11 = *piVar26;
  iVar41 = param_1[0x28];
  uVar6 = *(undefined2 *)((int)param_1 + 0x5e);
  iVar33 = *piVar26;
  iVar51 = *piVar26;
  iVar42 = param_1[0x29];
  uVar71 = *(undefined8 *)(param_1 + 0x28);
  ppppiVar21 = (int ****)param_1[0x19];
  piVar26 = (int *)param_1[0x2a];
  ppppiVar22 = (int ****)param_1[0x1a];
  uVar43 = param_1[0x2b];
  ppppiVar23 = (int ****)param_1[0x1b];
  uVar3 = *(undefined1 *)((int)param_1 + 0x9f);
  piVar44 = (int *)param_1[0x2c];
  ppppiVar24 = (int ****)param_1[0x1c];
  ppppiVar66 = (int ****)param_1[0x18];
  piVar61 = (int *)param_1[0x15];
  ppppiVar64 = (int ****)param_1[0x16];
  iVar36 = param_1[0x2d];
  ppppiVar45 = (int ****)*local_f5c;
  uVar47 = param_1[0x1e];
  iVar52 = param_1[0x1f];
  iVar57 = param_1[0x20];
  iVar12 = param_1[0x21];
  uVar7 = *(undefined2 *)((int)param_1 + 0x85);
  uVar4 = *(undefined1 *)((int)param_1 + 0x87);
  local_ed0 = (int ****)*param_1;
  local_ecc = (int ****)param_1[1];
  local_ec8 = (int ****)param_1[2];
  local_ec4 = (int *)param_1[3];
  local_ec0 = param_1[4];
  local_ebc = (undefined1 *)param_1[5];
  local_eb8 = param_1[6];
  local_eb4 = (int *)param_1[7];
  iStack_eb0 = param_1[8];
  local_eac = param_1[9];
  local_ea8 = param_1[10];
  iStack_ea4 = param_1[0xb];
  local_ea0 = param_1[0xc];
  local_e9c = param_1[0xd];
  local_e98 = param_1[0xe];
  iStack_e94 = param_1[0xf];
  local_e90 = param_1[0x22];
  iStack_e8c = param_1[0x23];
  iStack_e88 = param_1[0x24];
  iStack_e84 = param_1[0x25];
  iStack_e80 = param_1[0x26];
  if (ppppiVar66 == (int ****)0x0) {
LAB_01830e8c:
    iVar51 = FUN_0183b6d8(param_1 + 0x10);
  }
  else {
    if (ppppiVar66 < ppppiVar64) {
      if (*(char *)((int)piVar61 + (int)ppppiVar66) < -0x40) goto LAB_01830e3c;
    }
    else if (ppppiVar66 != ppppiVar64) goto LAB_01830e3c;
    if ((ppppiVar66 != (int ****)&SUB_00000004) || (*piVar61 != 0x70747468)) {
      if (ppppiVar66 < ppppiVar64) {
        if (*(char *)((int)piVar61 + (int)ppppiVar66) < -0x40) goto LAB_01830e3c;
      }
      else if (ppppiVar66 != ppppiVar64) goto LAB_01830e3c;
      if ((ppppiVar66 != (int ****)&DAT_00000005) ||
         (iVar25 = thunk_FUN_01bed842(piVar61,&DAT_0053278b,5), iVar25 != 0)) goto LAB_01830e8c;
    }
    if (*(char *)((int)piVar18 + 0x1a3) == '\x01') {
      if (ppppiVar66 < ppppiVar64) {
        if (*(char *)((int)piVar61 + (int)ppppiVar66) < -0x40) goto LAB_01830e3c;
      }
      else if (ppppiVar66 != ppppiVar64) {
LAB_01830e3c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(piVar61,ppppiVar64,0,ppppiVar66,&DAT_01d2fde8);
      }
      if ((ppppiVar66 != (int ****)&DAT_00000005) ||
         (iVar25 = thunk_FUN_01bed842(piVar61,&DAT_0053278b,5), iVar25 != 0)) goto LAB_01830e8c;
    }
    local_f78 = (int ****)&local_ec8;
    uVar72 = (ulonglong)CONCAT14((char)iVar36,&local_a28);
    local_994._4_4_ = (int ****)(piVar18 + 2);
    local_998 = (int ****)0x0;
    if (piVar18[0xc] == 0) {
      local_998 = (int ****)0x2;
    }
    local_f0c = (int ****)&local_7cc;
    local_98c = (int *)0x0;
LAB_01830fc0:
    uVar70 = FUN_01414bbc(&local_998);
    puVar30 = (undefined4 *)((ulonglong)uVar70 >> 0x20);
    piVar32 = (int *)uVar70;
    if (piVar32 != (int *)0x0) {
      iVar25 = FUN_01aa5cdc(&local_ed0);
      if (iVar25 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("size overflows MAX_SIZE",0x17,&local_7d8,&DAT_01d2f38c,&DAT_01d1e454);
      }
      uVar17 = FUN_0141c4b0(&local_ed0,piVar32);
      uVar56 = local_ea8;
      iVar13 = local_eac;
      piVar50 = local_eb4;
      iVar25 = local_eb8;
      uVar14 = (ushort)local_e98;
      uVar55 = local_e98 & 0xffff;
      uVar49 = 0;
      piVar16 = (int *)(uVar55 & uVar17);
      while( true ) {
        do {
          piVar27 = piVar16;
          piVar16 = (int *)0x0;
        } while (piVar50 <= piVar27);
        puVar34 = (ushort *)(iVar25 + (int)piVar27 * 4);
        uVar28 = (uint)*puVar34;
        if (uVar28 == 0xffff) break;
        uVar8 = puVar34[1];
        if (((int)piVar27 - (uint)(uVar14 & uVar8) & uVar55) < uVar49) {
          bVar68 = local_ed0 != (int ****)0x2 || local_ecc != (int ****)0x0;
          bVar69 = uVar49 >> 9 != 0;
          if ((undefined4 *)*piVar32 == (undefined4 *)0x0) goto LAB_01831174;
          (**(code **)*piVar32)(&local_7d8,piVar32 + 3,piVar32[1],piVar32[2]);
          goto LAB_01831180;
        }
        if ((uint)uVar8 == (uint)uVar17) {
          if (uVar56 <= uVar28) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar28,uVar56,&DAT_01d1e3f4);
          }
          iVar29 = uVar28 * 0x34 + iVar13;
          if ((*(int *)(iVar29 + 0x20) != 0) != (*piVar32 == 0)) {
            if (*(int *)(iVar29 + 0x20) == 0) {
              if (*(char *)(iVar29 + 0x24) == (char)piVar32[1]) goto LAB_01830fc0;
            }
            else if ((*(int *)(iVar29 + 0x28) == piVar32[2]) &&
                    (iVar29 = thunk_FUN_01bed842(*(undefined4 *)(iVar29 + 0x24),piVar32[1]),
                    iVar29 == 0)) goto LAB_01830fc0;
          }
        }
        uVar49 = uVar49 + 1;
        piVar16 = (int *)((int)piVar27 + 1);
      }
      bVar68 = local_ed0 != (int ****)0x2 || local_ecc != (int ****)0x0;
      bVar69 = uVar49 >> 9 != 0;
      if ((undefined4 *)*piVar32 == (undefined4 *)0x0) {
LAB_01831174:
        local_7d8 = (int ****)0x0;
        local_7d4 = (int ****)CONCAT31(local_7d4._1_3_,(char)piVar32[1]);
      }
      else {
        (**(code **)*piVar32)(&local_7d8,piVar32 + 3,piVar32[1],piVar32[2]);
      }
LAB_01831180:
      local_7c8 = local_7cc;
      local_7cc = local_7d0;
      local_7d0 = local_7d4;
      local_7c0._0_4_ = (int ****)CONCAT22(CONCAT11(local_7c0._3_1_,bVar69 & bVar68),uVar17);
      local_7d4 = local_7d8;
      local_7d8 = (int ****)&local_ed0;
      local_7c4 = piVar27;
      (**(code **)*puVar30)(&local_db0,puVar30 + 3,puVar30[1],puVar30[2]);
      local_da0 = CONCAT31(local_da0._1_3_,*(undefined1 *)(puVar30 + 4));
      FUN_0141e5bc(&local_7d8,&local_db0);
      goto LAB_01830fc0;
    }
    ppppiVar62 = (int ****)&DAT_00000001;
    FUN_012834b0(&local_7d8,piVar61,ppppiVar64);
    FUN_01414f00(&local_db0,&local_7d8);
    if ((char)local_db0 == '\x03') {
      FUN_006666fc(&local_7c8,piVar61,ppppiVar64);
      local_7a4 = (int ****)*local_f5c;
      local_7a0 = param_1[0x1e];
      iStack_79c = param_1[0x1f];
      local_798 = param_1[0x20];
      local_794 = (undefined1)param_1[0x21];
      local_7d8 = ppppiVar20;
      local_7d4 = ppppiVar37;
      local_7d0 = ppppiVar38;
      local_7cc = ppppiVar39;
      local_7c0._4_4_ = iVar51;
      local_7b8 = ppppiVar66;
      local_7b4 = ppppiVar21;
      local_7b0 = ppppiVar22;
      local_7ac = ppppiVar23;
      local_7a8 = ppppiVar24;
      local_994._0_4_ = (int ****)FUN_0183b784(&local_7d8);
      local_998 = (int ****)CONCAT31(local_998._1_3_,3);
    }
    else {
      local_998 = local_db0;
      local_994._0_4_ = local_dac;
      local_994._4_4_ = local_da8;
      local_98c = piStack_da4;
      _local_988 = local_da0;
      local_984 = local_d9c;
      iStack_980 = iStack_d98;
      piStack_97c = piStack_d94;
      iStack_978 = iStack_d90;
      iStack_974 = iStack_d8c;
      local_970 = uStack_d88;
      if ((char)local_db0 != '\x03') {
        local_e78 = local_db0;
        ppppiStack_e74 = local_dac;
        ppppiStack_e70 = local_da8;
        piStack_e6c = piStack_da4;
        uStack_e68 = local_da0;
        local_e64 = local_d9c;
        iStack_e60 = iStack_d98;
        piStack_e5c = piStack_d94;
        iStack_e58 = iStack_d90;
        iStack_e54 = iStack_d8c;
        uStack_e50 = uStack_d88;
        if ((local_e90 & 1) == 0) {
          local_e3c = (int *)0x0;
          local_e40 = (int ****)0x0;
          local_e44 = (int ****)&DAT_00000001;
          local_e48 = (int ****)&PTR_FUN_01d1f218;
        }
        else {
          puVar30 = (undefined4 *)((uint)&local_e90 | 4);
          local_e48 = (int ****)*puVar30;
          local_e44 = (int ****)puVar30[1];
          local_e40 = (int ****)puVar30[2];
          local_e3c = (int *)puVar30[3];
        }
        if (((*(char *)((int)piVar18 + 0x1a1) == '\x01') && ((char)local_db0 != '\0')) &&
           (iVar51 = FUN_014146a0(&local_e78,&DAT_00570850), iVar51 != 0)) {
          local_f5c = (int *)0x569ce8;
          local_7d8 = (int ****)0x0;
          local_7d4 = (int ****)0x33;
          local_7d0 = (int ****)0x0;
          local_7cc = (int ****)0x0;
          iVar51 = FUN_0137f4c4(&local_ed0,&local_7d8);
          if (iVar51 == 0) {
            iVar51 = *(int *)(piVar18[0x67] + 0x10);
            if (iVar51 != 0) {
              iVar33 = *(int *)(piVar18[0x67] + 0xc);
              local_f0c = (int ****)(local_988 + 1);
              ppppiVar62 = (int ****)&local_e78;
              iVar51 = iVar51 << 8;
              local_f7c = (int ****)&local_290;
              do {
                FUN_01855774(&local_db0,iVar33,ppppiVar62);
                if (local_db0 != (int ****)&SUB_00000004 || local_dac != (int ****)0x0) {
                  FUN_01bed4e2(&local_7d8,&local_db0,0xa0);
                  if ((local_768[0] == '\0') ||
                     ((iVar25 = FUN_014146a0(local_768,&DAT_00570850), iVar25 == 0 &&
                      (iVar25 = FUN_014146a0(local_768,&DAT_00570360), iVar25 == 0)))) {
                    FUN_01855de4(&local_7d8);
                  }
                  else {
                    iVar25 = local_780;
                    cVar59 = local_788[0];
                    puVar30 = (undefined4 *)0x0;
                    if (local_780 == -0x7fffffff) {
                      puVar30 = &uStack_77c;
                    }
                    if (local_788[0] != '\x02') {
                      puVar30 = &local_798;
                    }
                    if (puVar30 == (undefined4 *)0x0) {
                      cVar59 = '\x02';
                    }
                    else {
                      puVar35 = &DAT_0000000c;
                      puVar46 = (undefined4 *)&SUB_00000004;
                      puVar48 = (undefined4 *)&DAT_00000008;
                      if (local_780 == -0x7fffffff) {
                        puVar35 = auStack_770;
                        puVar46 = &uStack_778;
                        puVar48 = &uStack_774;
                      }
                      if (local_788[0] != '\x02') {
                        puVar48 = &local_790;
                        puVar46 = (undefined4 *)&local_794;
                        puVar35 = auStack_78c;
                      }
                      (**(code **)*puVar30)(&local_998,puVar35,*puVar46,*puVar48);
                      uVar56 = _local_988;
                      pcVar31 = &DAT_00000010;
                      if (iVar25 == -0x7fffffff) {
                        pcVar31 = acStack_76c;
                      }
                      if (cVar59 != '\x02') {
                        pcVar31 = local_788;
                      }
                      cVar59 = *pcVar31;
                      _local_988 = CONCAT31(stack0xfffff679,cVar59);
                      uVar49 = _local_988;
                      local_290 = local_998;
                      local_28c = (int ****)local_994;
                      local_288 = local_994._4_4_;
                      local_284 = local_98c;
                      uStack_985 = SUB41(uVar56,3);
                      local_988._1_2_ = SUB42(uVar56,1);
                      local_3a0 = (int ****)
                                  CONCAT22(CONCAT11(local_3a0._3_1_,uStack_985),local_988._1_2_);
                      _local_988 = uVar49;
                    }
                    FUN_01855de4(&local_7d8);
                    if (cVar59 != '\x02') {
                      local_db0 = local_290;
                      local_dac = local_28c;
                      local_da8 = local_288;
                      piStack_da4 = local_284;
                      local_da0 = CONCAT31((int3)local_3a0,cVar59);
                      local_998 = (int ****)0x0;
                      local_994._0_4_ = (int ****)0x33;
                      local_994._4_4_ = (int ****)0x0;
                      local_98c = (int *)0x0;
                      FUN_0141d310(&local_7d8,&local_ed0,&local_998,&local_db0);
                      if ((char)local_7c8 != '\x02') {
                        (*(code *)local_7d8[4])(&local_7cc,local_7d4,local_7d0);
                      }
                      break;
                    }
                  }
                }
                iVar33 = iVar33 + 0x100;
                iVar51 = iVar51 + -0x100;
              } while (iVar51 != 0);
            }
          }
        }
        uVar70 = CONCAT44(local_f0c,local_f5c);
        local_7c0 = CONCAT44(local_7c0._4_4_,(int ****)local_7c0);
        if (*(char *)((int)piVar18 + 0x1a2) == '\x01') {
          local_7c0 = CONCAT44(local_7c0._4_4_,(int ****)local_7c0);
          if ((char)local_e78 != '\0') {
            iVar51 = FUN_014146a0(&local_e78,&DAT_00570850);
            local_7c0 = CONCAT44(local_7c0._4_4_,(int ****)local_7c0);
            if (iVar51 != 0) {
              iVar51 = *(int *)(piVar18[0x67] + 0x10);
              local_7c0 = CONCAT44(local_7c0._4_4_,(int ****)local_7c0);
              if (iVar51 != 0) {
                iVar33 = *(int *)(piVar18[0x67] + 0xc);
                iVar51 = iVar51 << 8;
                local_f7c = (int ****)&local_7c8;
LAB_018316bc:
                FUN_01855774(&local_db0,iVar33,&local_e78);
                if (local_db0 == (int ****)&SUB_00000004 && local_dac == (int ****)0x0)
                goto LAB_01831828;
                FUN_01bed4e2(&local_7d8,&local_db0,0xa0);
                if ((local_768[0] == '\0') ||
                   ((iVar25 = FUN_014146a0(local_768,&DAT_00570850), iVar25 == 0 &&
                    (iVar25 = FUN_014146a0(local_768,&DAT_00570360), iVar25 == 0)))) {
                  FUN_01855de4(&local_7d8);
                  goto LAB_01831828;
                }
                if (local_7d8 == (int ****)&DAT_00000003 && local_7d4 == (int ****)0x0) {
                  ppppiVar63 = (int ****)&DAT_00000003;
                }
                else {
                  ppppiVar62 = (int ****)(local_7a0 & 0xffff);
                  uVar70 = FUN_01ac635c((int ****)local_7c0,local_7c0._4_4_);
                  FUN_0187b658(&local_290,local_7b4,local_7b0);
                  FUN_017260a4(&local_998,local_7a8,local_7a4);
                  if (local_7d8 == (int ****)0x0) {
                    ppppiVar63 = (int ****)0x0;
                  }
                  else if (local_7d8 == (int ****)&DAT_00000001) {
                    ppppiVar63 = (int ****)&DAT_00000001;
                  }
                  else {
                    ppppiVar63 = (int ****)0x2;
                    local_f88 = local_7c8;
                    local_f8c = local_7c4;
                    local_f80 = local_7d0;
                    local_f84 = local_7cc;
                  }
                  local_3a0 = local_290;
                  ppppiStack_39c = local_28c;
                  ppppiStack_398 = local_288;
                  local_c8 = local_998;
                  local_c4 = (int ****)local_994;
                  local_c0 = local_994._4_4_;
                }
                FUN_01855de4(&local_7d8);
                if (ppppiVar63 == (int ****)&DAT_00000003) goto LAB_01831828;
                local_7d0 = local_f80;
                local_7cc = local_f84;
                local_7c8 = local_f88;
                local_7c4 = local_f8c;
                local_7d4 = (int ****)0x0;
                local_7b8 = local_3a0;
                local_7b4 = ppppiStack_39c;
                local_7b0 = ppppiStack_398;
                local_7ac = local_c8;
                local_7a8 = local_c4;
                local_7a4 = local_c0;
                local_7a0 = CONCAT22(local_7a0._2_2_,(short)ppppiVar62);
                local_290 = (int ****)0x0;
                local_284 = (int *)0x0;
                if (ppppiStack_398 == (int ****)0x0) {
                  local_290 = (int ****)0x2;
                }
                local_7d8 = ppppiVar63;
                local_288 = (int ****)&local_7d8;
                local_7c0 = uVar70;
                while( true ) {
                  uVar73 = FUN_01414bbc(&local_290);
                  puVar30 = (undefined4 *)((ulonglong)uVar73 >> 0x20);
                  if ((int)uVar73 == 0) break;
                  (**(code **)*puVar30)(&local_db0,puVar30 + 3,puVar30[1],puVar30[2]);
                  local_da0 = CONCAT31(local_da0._1_3_,*(undefined1 *)(puVar30 + 4));
                  FUN_0182e46c(&local_998,&local_ed0,(int)uVar73,&local_db0);
                  if (local_988[0] != '\x02') {
                    (*(code *)local_998[4])(&local_98c,(int ****)local_994,local_994._4_4_);
                  }
                }
                FUN_017793c0(&local_7d8);
              }
            }
          }
        }
LAB_01831834:
        FUN_01413d40(&local_7d8);
        uVar56 = extraout_r2;
        uVar73 = CONCAT44(extraout_r1,uVar19);
        if (8 < uVar19) {
          if (uVar19 == 9) {
            local_3a0 = (int ****)CONCAT22(CONCAT11(local_3a0._3_1_,uVar3),uVar5);
            uVar56 = uVar43 & 0xff;
            uVar73 = uVar71;
          }
          else {
            uVar73 = FUN_013d4df8(iVar41,iVar42);
            uVar56 = extraout_r2_01;
          }
        }
        local_998 = (int ****)CONCAT13(local_3a0._2_1_,CONCAT21((undefined2)local_3a0,bVar2));
        local_98c = piVar26;
        _local_988 = uVar56;
        local_994 = uVar73;
        FUN_013abc4c(&local_db0,&local_7d8,&local_998);
        local_3a0 = local_e78;
        ppppiVar62 = local_3a0;
        ppppiStack_39c = ppppiStack_e74;
        ppppiStack_398 = ppppiStack_e70;
        piStack_394 = piStack_e6c;
        uStack_390 = uStack_e68;
        local_38c = local_e64;
        iStack_388 = iStack_e60;
        piStack_384 = piStack_e5c;
        iStack_380 = iStack_e58;
        iStack_37c = iStack_e54;
        uStack_378 = uStack_e50;
        if (local_db0 == (int ****)&DAT_00000003 && local_dac == (int ****)0x0) {
          uVar53 = (undefined1)local_da8;
          bVar60 = local_da8._1_1_;
          FUN_01a8c248(&local_3a0);
        }
        else {
          local_3a0._0_1_ = (char)local_e78;
          cVar59 = (char)local_3a0;
          local_3a0._1_1_ = (undefined1)((uint)local_e78 >> 8);
          uVar53 = local_3a0._1_1_;
          local_3a0._2_1_ = (byte)((uint)local_e78 >> 0x10);
          bVar60 = local_3a0._2_1_;
          local_3a0 = ppppiVar62;
          FUN_01bed4e2(&local_7d8,&local_db0,0x88);
          if (cVar59 != '\x03') {
            FUN_01a8c248(&local_798);
            local_798 = CONCAT31(CONCAT21(CONCAT11(local_798._3_1_,bVar60),uVar53),cVar59);
            FUN_01bed4e2((int)&local_798 + 3,(uint)&local_3a0 | 3,0x29);
            ppppiVar63 = local_7d4;
            ppppiVar62 = local_7d8;
            uVar53 = (undefined1)local_7d0;
            bVar60 = local_7d0._1_1_;
            local_ef8 = (ushort)local_7d0._1_1_;
            FUN_01bed4e2(&local_998,(int)&local_7d0 + 2,0x7e);
            FUN_01bed4e2(&local_290,&local_998,0x7e);
            if (ppppiVar62 == (int ****)&DAT_00000003 && ppppiVar63 == (int ****)0x0)
            goto LAB_01832970;
            local_db0 = (int ****)CONCAT22(CONCAT11(local_db0._3_1_,local_213),local_215);
            FUN_01bed4e2(&local_7d8,&local_290,0x7a);
            puVar35 = auStack_e30;
            FUN_01bed4e2(puVar35,&local_7d8,0x7a);
            local_e34 = (undefined2)local_db0;
            local_e32 = local_db0._2_1_;
            local_998 = local_e48;
            local_994._0_4_ = local_e44;
            local_994._4_4_ = local_e40;
            local_98c = local_e3c;
            local_290 = local_e48;
            local_28c = local_e44;
            local_288 = local_e40;
            local_284 = local_e3c;
            FUN_01bed4e2(&local_7d8,puVar35,0x7a);
            local_a2c = ppppiVar63;
            local_3a0 = (int ****)CONCAT22(CONCAT11(local_3a0._3_1_,local_e32),local_e34);
            bStack_a27 = bVar60;
            local_a30 = ppppiVar62;
            local_a28 = uVar53;
            FUN_01bed4e2(auStack_a26,&local_7d8,0x7a);
            local_9ab = (undefined2)local_3a0;
            local_9a9 = local_3a0._2_1_;
            local_9a8 = local_290;
            ppppiStack_9a4 = local_28c;
            ppppiStack_9a0 = local_288;
            piStack_99c = local_284;
            uVar15 = (ushort)local_e98;
            local_9ac = (char)iVar36;
            uVar71 = FUN_01ac635c(local_eb8,local_eb4);
            FUN_0187b658(&local_998,local_eac,local_ea8);
            FUN_017260a4(&local_7d8,local_ea0,local_e9c);
            if (local_ed0 == (int ****)0x0) {
              pppiVar58 = (int ***)0x0;
            }
            else if (local_ed0 == (int ****)0x2) {
              pppiVar58 = (int ***)0x2;
              local_ef8 = (ushort)local_ec8;
              uVar70 = CONCAT44(local_ec4,local_ec0);
              puVar35 = local_ebc;
            }
            else {
              pppiVar58 = (int ***)0x1;
            }
            local_f0c = (int ****)((ulonglong)uVar70 >> 0x20);
            local_f5c = (int *)uVar70;
            local_290 = local_998;
            local_28c = (int ****)local_994;
            local_288 = local_994._4_4_;
            local_3a0 = local_7d8;
            ppppiStack_39c = local_7d4;
            ppppiStack_398 = local_7d0;
            FUN_017793c0(&local_a30);
            local_a28 = (undefined1)local_ef8;
            bStack_a27 = (byte)(local_ef8 >> 8);
            local_a24 = local_f0c;
            local_a20 = local_f5c;
            local_a2c = (int ****)0x0;
            local_a10 = local_290;
            ppppiStack_a0c = local_28c;
            ppppiStack_a08 = local_288;
            local_a04 = local_3a0;
            ppppiStack_a00 = ppppiStack_39c;
            ppppiStack_9fc = ppppiStack_398;
            piVar32 = (int *)piVar18[0x51];
            ppppiVar62 = ppppiStack_39c;
            local_a30 = (int ****)pppiVar58;
            local_9f8 = uVar15;
            local_a1c = puVar35;
            local_a18 = uVar71;
            if (piVar32 != (int *)0x0) {
              do {
                iVar51 = *piVar32;
                bVar68 = (bool)hasExclusiveAccess(piVar32);
              } while (!bVar68);
              *piVar32 = iVar51 + 1;
              ppppiVar62 = (int ****)0x0;
              local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
              uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
              local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
              if (iVar51 < 0) goto LAB_01832a28;
            }
            ppppiVar67 = (int ****)piVar18[0x4e];
            ppppiVar63 = ppppiStack_398;
            ppppiVar65 = extraout_r12;
            if (&DAT_00000001 < ppppiVar67) {
              ppppiVar62 = (int ****)piVar18[0x4f];
              do {
                pppiVar58 = *ppppiVar62;
                ppppiVar63 = (int ****)((int)pppiVar58 + 1);
                bVar68 = (bool)hasExclusiveAccess(ppppiVar62);
              } while (!bVar68);
              *ppppiVar62 = (int ***)ppppiVar63;
              local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
              uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
              local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
              if ((int)pppiVar58 < 0) goto LAB_01832a28;
              ppppiVar65 = (int ****)piVar18[0x50];
            }
            iVar33 = piVar18[0x52];
            iVar51 = piVar18[0x53];
            piVar50 = (int *)piVar18[0x54];
            if (piVar50 != (int *)0x0) {
              do {
                iVar36 = *piVar50;
                bVar68 = (bool)hasExclusiveAccess(piVar50);
              } while (!bVar68);
              *piVar50 = iVar36 + 1;
              local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
              uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
              local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
              if (iVar36 < 0) goto LAB_01832a28;
              ppppiVar63 = (int ****)piVar18[0x55];
            }
            local_290 = ppppiVar67;
            local_28c = ppppiVar62;
            local_288 = ppppiVar65;
            local_284 = piVar32;
            local_280 = iVar33;
            local_27c = iVar51;
            local_278 = piVar50;
            local_274 = ppppiVar63;
            FUN_0188c850(&local_998,piVar18 + 0x12);
            local_6e8 = local_290;
            ppppiStack_6e4 = local_28c;
            ppppiStack_6e0 = local_288;
            piStack_6dc = local_284;
            local_6d8 = local_280;
            iStack_6d4 = local_27c;
            piStack_6d0 = local_278;
            ppppiStack_6cc = local_274;
            FUN_01bed4e2(&local_7d8,&local_998,0xf0);
            piVar32 = (int *)piVar18[0x59];
            do {
              iVar51 = *piVar32;
              bVar68 = (bool)hasExclusiveAccess(piVar32);
            } while (!bVar68);
            *piVar32 = iVar51 + 1;
            local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
            uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
            local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
            if (iVar51 < 0) goto LAB_01832a28;
            iVar51 = piVar18[0x5a];
            FUN_0187b880(&local_290,piVar18[0x57],piVar18[0x58]);
            uVar53 = *(undefined1 *)((int)piVar18 + 0x169);
            local_888 = local_290;
            local_884 = local_28c;
            local_880 = local_288;
            FUN_01bed4e2(&local_998,&local_7d8,0x110);
            local_87c = piVar32;
            local_878 = (char)iVar51;
            local_877 = uVar53;
            FUN_01bed4e2(local_870,&local_a30,0x98);
            ppppiVar63 = extraout_r2_00;
            ppppiVar62 = extraout_r3;
            if (local_89c != (int *)0x0) {
              do {
                iVar51 = *local_89c;
                ppppiVar63 = (int ****)(iVar51 + 1);
                bVar68 = (bool)hasExclusiveAccess(local_89c);
              } while (!bVar68);
              *local_89c = (int)ppppiVar63;
              ppppiVar62 = (int ****)0x0;
              local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
              uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
              local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
              if (iVar51 < 0) goto LAB_01832a28;
            }
            ppppiVar65 = extraout_r12_00;
            if (&DAT_00000001 < local_8a8) {
              do {
                ppppiVar62 = (int ****)*local_8a4;
                bVar68 = (bool)hasExclusiveAccess(local_8a4);
              } while (!bVar68);
              *local_8a4 = (int ***)((int)ppppiVar62 + 1);
              local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
              uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
              local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
              if ((int)ppppiVar62 < 0) goto LAB_01832a28;
              ppppiVar63 = local_8a4;
              ppppiVar65 = local_8a0;
            }
            if (local_890 != (int *)0x0) {
              do {
                iVar51 = *local_890;
                bVar68 = (bool)hasExclusiveAccess(local_890);
              } while (!bVar68);
              *local_890 = iVar51 + 1;
              local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
              uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
              local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
              if (iVar51 < 0) goto LAB_01832a28;
              ppppiVar62 = local_88c;
            }
            local_278 = local_890;
            local_27c = local_894;
            local_280 = local_898;
            local_290 = local_8a8;
            local_284 = local_89c;
            local_28c = ppppiVar63;
            local_288 = ppppiVar65;
            local_274 = ppppiVar62;
            FUN_0188c850(&local_7d8,&local_998);
            local_2b0 = local_290;
            ppppiStack_2ac = local_28c;
            ppppiStack_2a8 = local_288;
            piStack_2a4 = local_284;
            local_2a0 = local_280;
            iStack_29c = local_27c;
            piStack_298 = local_278;
            ppppiStack_294 = local_274;
            FUN_01bed4e2(&local_3a0,&local_7d8,0xf0);
            FUN_01bed4e2(&local_290,&local_998,0x110);
            FUN_01bed4e2(&local_998,&local_3a0,0x110);
            uVar53 = local_878;
            piVar32 = local_87c;
            do {
              iVar51 = *local_87c;
              bVar68 = (bool)hasExclusiveAccess(local_87c);
            } while (!bVar68);
            *local_87c = iVar51 + 1;
            if (iVar51 < 0) goto LAB_01832a28;
            FUN_0187b880(&local_7d8,local_884,local_880);
            local_174 = piVar32;
            local_180 = local_7d8;
            ppppiStack_17c = local_7d4;
            ppppiStack_178 = local_7d0;
            local_170._0_2_ = CONCAT11(local_877,uVar53);
            local_168 = 2;
            if (local_7e8 == (undefined4 *)0x0) {
              (*(code *)local_7e0[5])(&local_7d8,local_7e4);
              if (((uint)local_7d8 & 1) != 0) goto LAB_01831edc;
LAB_01831ef0:
              if (local_7e8 != (undefined4 *)0x0) {
                (*(code *)*local_7e8)(&local_c4,auStack_7dc,local_7e4,local_7e0);
                goto LAB_01831f40;
              }
            }
            else {
              local_7d4 = (int ****)0x0;
              local_7d0 = local_7e0;
              local_7cc = (int ****)0x0;
              local_7c8 = local_7e0;
              local_7c4 = (int *)0x0;
              local_7d8 = (int ****)&DAT_00000001;
LAB_01831edc:
              if ((local_7c8 != (int ****)0x0 || local_7d0 != (int ****)0x0) ||
                  (local_7c4 != (int *)0x0 || local_7cc != (int ****)0x0)) goto LAB_01831ef0;
              local_b8 = 0;
              local_bc = 0;
              local_c0 = (int ****)&DAT_00000001;
              local_c4 = (int ****)&PTR_FUN_01d1f218;
LAB_01831f40:
              local_168 = 0;
              puVar30 = (undefined4 *)((uint)&local_168 | 4);
              *puVar30 = local_c4;
              puVar30[1] = local_c0;
              puVar30[2] = local_bc;
              puVar30[3] = local_b8;
            }
            FUN_01856e08(&local_180,local_870);
            uVar19 = (uint)local_804;
            if (8 < uVar19) {
              if (uVar19 == 10) {
                uVar72 = FUN_013d4df8(local_800,local_7fc);
              }
              else {
                local_f7c = (int ****)(uint)local_7f4;
                uVar72 = CONCAT44(local_7fc,local_800);
                local_f78 = local_7f8;
                local_2a = local_801;
                local_2c = local_803;
              }
            }
            FUN_017970c4(&local_150,auStack_830);
            uVar56 = (uint)local_7ec;
            uVar71 = FUN_01ac635c(local_858,local_854);
            FUN_0187b658(&local_c8,local_84c,local_848);
            ppppiVar62 = (int ****)0x1832004;
            FUN_017260a4(&local_7d8,local_840,local_83c);
            if (local_870[0] == 0) {
              local_120 = 0;
              local_868 = extraout_r12_01;
            }
            else if (local_870[0] == 2) {
              local_120 = 2;
              uVar56 = local_860;
              uVar19 = local_85c;
              ppppiVar62 = (int ****)puStack_864;
            }
            else {
              local_120 = 1;
              local_868 = extraout_r12_01;
              ppppiVar62 = (int ****)&ppppiStack_398;
            }
            local_e8 = CONCAT22(local_e8._2_2_,local_838);
            local_100 = local_c8;
            ppppiStack_fc = local_c4;
            local_f8 = local_c0;
            local_f4 = local_7d8;
            ppppiStack_f0 = local_7d4;
            ppppiStack_ec = local_7d0;
            local_11c = 0;
            local_e0 = local_168;
            uStack_dc = uStack_164;
            uStack_d8 = uStack_160;
            uStack_d4 = uStack_15c;
            uStack_d0 = uStack_158;
            local_118 = local_868;
            puStack_114 = (undefined1 *)ppppiVar62;
            local_110 = uVar56;
            local_10c = uVar19;
            local_108 = uVar71;
            FUN_01bed4e2(&local_c8,local_870,0x98);
            FUN_0185e980(&local_7d8,&local_290,&local_c8);
            FUN_01bed4e2(&local_da8,&local_7d8,0x1b8);
            FUN_01bed4e2(auStack_bb0,&local_290,0x110);
            local_a8c = local_180;
            ppppiStack_a88 = ppppiStack_17c;
            ppppiStack_a84 = ppppiStack_178;
            piStack_a80 = local_174;
            uStack_a7c = local_170;
            local_a49 = local_2a;
            uStack_a4b = local_2c;
            local_a78 = local_150;
            uStack_a74 = uStack_14c;
            uStack_a70 = uStack_148;
            uStack_a6c = uStack_144;
            uStack_a68 = uStack_140;
            local_a64 = local_13c;
            uStack_a60 = uStack_138;
            uStack_a5c = uStack_134;
            uStack_a58 = uStack_130;
            uStack_a54 = uStack_12c;
            uStack_a50 = uStack_128;
            local_bf0 = local_120;
            uStack_bec = local_11c;
            uStack_be8 = local_118;
            puStack_be4 = puStack_114;
            uStack_be0 = local_110;
            local_bdc = local_10c;
            ppppiStack_bd0 = local_100;
            ppppiStack_bcc = ppppiStack_fc;
            local_bc8 = local_f8;
            ppppiStack_bc4 = local_f4;
            ppppiStack_bc0 = ppppiStack_f0;
            ppppiStack_bbc = ppppiStack_ec;
            uStack_bb8 = local_e8;
            uStack_bb4 = uStack_e4;
            local_aa0 = local_168;
            uStack_a9c = uStack_164;
            uStack_a98 = uStack_160;
            uStack_a94 = uStack_15c;
            uStack_a90 = uStack_158;
            local_a3c = local_f7c;
            local_a40 = local_f78;
            local_a38 = local_7ec;
            local_dac = (int ****)0x0;
            local_db0 = (int ****)0x0;
            local_a4c = local_804;
            local_a48 = uVar72;
            uStack_bd8 = local_108;
            FUN_01855e4c(&local_998);
            local_ef4 = 0;
            iVar51 = 0;
            if (piVar44 != (int *)0x0) {
              iVar51 = piVar44[3];
            }
            puVar35 = extraout_r1_00;
            piVar32 = (int *)0x0;
            if (piVar44 != (int *)0x0 && iVar51 != 0) {
              local_f5c = (int *)0x0;
              iVar51 = *piVar44;
              uVar19 = piVar44[1];
              puVar35 = (undefined1 *)(uVar19 & 0xee0b5d86);
              while( true ) {
                uVar56 = *(uint *)(puVar35 + iVar51);
                uVar49 = (uVar56 & 0x80808080 ^ 0x80808080) & (uVar56 ^ 0x77777777) + 0xfefefeff;
                while (uVar49 != 0) {
                  uVar55 = uVar49 >> 8;
                  uVar28 = uVar49 >> 0x10;
                  uVar9 = uVar49 >> 0x18;
                  uVar10 = uVar49 << 0x18;
                  piVar32 = (int *)(iVar51 + -0x18 +
                                   ((uint)(puVar35 +
                                          ((uint)LZCOUNT(uVar10 | (uVar55 & 0xff) << 0x10 |
                                                         (uVar28 & 0xff) << 8 | uVar9) >> 3)) &
                                   uVar19) * -0x18);
                  uVar49 = uVar49 - 1 & uVar49;
                  if ((*piVar32 == 0x62faee34 && piVar32[2] == -0x11f4a27a) &&
                      (piVar32[1] == -0x482c25de && piVar32[3] == -0x733551cd)) {
                    iVar51 = iVar51 + ((uint)(puVar35 +
                                             ((uint)LZCOUNT(uVar10 | (uVar55 & 0xff) << 0x10 |
                                                            (uVar28 & 0xff) << 8 | uVar9) >> 3)) &
                                      uVar19) * -0x18;
                    uVar71 = (**(code **)(*(int *)(iVar51 + -4) + 0x14))
                                       (*(undefined4 *)(iVar51 + -8));
                    piVar50 = (int *)uVar71;
                    (**(code **)((int)((ulonglong)uVar71 >> 0x20) + 0xc))(&local_7d8,piVar50);
                    puVar35 = (undefined1 *)
                              ((uint)local_7d4 ^ 0xb7d3da22 | (uint)local_7cc ^ 0x8ccaae33);
                    piVar32 = (int *)0x0;
                    if ((local_7d8 == (int ****)0x62faee34 && local_7d0 == (int ****)0xee0b5d86) &&
                        puVar35 == (undefined1 *)0x0) {
                      puVar35 = &DAT_3b9aca00;
                      piVar32 = (int *)0x0;
                      if ((undefined1 *)piVar50[2] != &DAT_3b9aca00) {
                        piVar32 = piVar50;
                      }
                    }
                    goto LAB_018321f0;
                  }
                }
                piVar32 = (int *)0x0;
                if ((uVar56 & 0x80808080 & uVar56 << 1) != 0) break;
                local_f5c = (int *)((int)local_f5c + 4);
                puVar35 = (undefined1 *)((uint)(puVar35 + (int)local_f5c) & uVar19);
              }
            }
LAB_018321f0:
            if (piVar32 == (int *)0x0) {
              puVar35 = &DAT_3b9aca00;
            }
            if (piVar32 != (int *)0x0 || (undefined1 *)piVar18[0x5e] != puVar35) {
              piVar50 = (int *)0x0;
              if ((undefined1 *)piVar18[0x5e] != &DAT_3b9aca00) {
                piVar50 = piVar18 + 0x5c;
              }
              if (piVar32 != (int *)0x0) {
                piVar50 = piVar32;
              }
              FUN_019e6e74(&local_998,&DAT_01d1f1d8,*piVar50,piVar50[1],piVar50[2],&DAT_01d1f1d8);
              if (local_998 != (int ****)0x2 || (int ****)local_994 != (int ****)0x0) {
                FUN_01bed4e2(&local_7d8,&local_998,0x50);
                local_ef4 = thunk_FUN_01be5118(0x50);
                if (local_ef4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(8,0x50);
                }
                FUN_01bed4e2(local_ef4,&local_998,0x50);
              }
            }
            iVar51 = 0;
            if ((undefined1 *)piVar18[0x62] != &DAT_3b9aca00) {
              FUN_019e6e74(&local_998,&DAT_01d1f1d8,piVar18[0x60],piVar18[0x61],
                           (undefined1 *)piVar18[0x62],&DAT_01d1f1d8);
              if (local_998 != (int ****)0x2 || (int ****)local_994 != (int ****)0x0) {
                FUN_01bed4e2(&local_7d8,&local_998,0x50);
                iVar51 = thunk_FUN_01be5118(0x50);
                if (iVar51 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(8,0x50);
                }
                FUN_01bed4e2(iVar51,&local_998,0x50);
              }
            }
            local_998 = local_ed0;
            local_994._0_4_ = local_ecc;
            local_994._4_4_ = local_ec8;
            local_98c = local_ec4;
            _local_988 = local_ec0;
            local_984 = local_ebc;
            iStack_980 = local_eb8;
            piStack_97c = local_eb4;
            iStack_978 = iStack_eb0;
            iStack_974 = local_eac;
            local_970 = local_ea8;
            iStack_96c = iStack_ea4;
            iStack_968 = local_ea0;
            iStack_964 = local_e9c;
            uStack_960 = local_e98;
            iStack_95c = iStack_e94;
            do {
              iVar33 = *piVar18;
              bVar68 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar68);
            *piVar18 = iVar33 + 1;
            if (iVar33 < 0) {
LAB_01832a28:
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x1832a28);
              (*pcVar1)();
            }
            FUN_01bed4e2(&local_7d8,&local_db0,0x380);
            local_3d0 = piVar18[0x60];
            iStack_3cc = piVar18[0x61];
            local_3c8 = piVar18[0x62];
            local_458 = local_998;
            ppppiStack_454 = (int ****)local_994;
            ppppiStack_450 = local_994._4_4_;
            piStack_44c = local_98c;
            uStack_448 = _local_988;
            local_444 = local_984;
            iStack_440 = iStack_980;
            piStack_43c = piStack_97c;
            iStack_438 = iStack_978;
            iStack_434 = iStack_974;
            local_430 = local_970;
            iStack_42c = iStack_96c;
            iStack_428 = iStack_968;
            iStack_424 = iStack_964;
            uStack_420 = uStack_960;
            iStack_41c = iStack_95c;
            local_3a8 = local_ef4;
            local_418 = ppppiVar20;
            local_414 = ppppiVar37;
            local_410 = ppppiVar38;
            local_40c = ppppiVar39;
            local_408 = ppppiVar40;
            local_404 = piVar61;
            local_400 = ppppiVar64;
            local_3f8 = ppppiVar66;
            local_3f4 = ppppiVar21;
            local_3f0 = ppppiVar22;
            local_3ec = ppppiVar23;
            local_3e8 = ppppiVar24;
            local_3e4 = ppppiVar45;
            uStack_3e0 = uVar47;
            iStack_3dc = iVar52;
            iStack_3d8 = iVar57;
            local_3d4 = (char)iVar12;
            uStack_3d3 = uVar7;
            local_3d1 = uVar4;
            local_3c0 = bVar2;
            uStack_3bf = uVar5;
            local_3bd = uVar3;
            local_3bc = iVar41;
            local_3b8 = iVar42;
            local_3ac = piVar18;
            local_3a4 = iVar51;
            local_3fc = (short)iVar11;
            local_3fa = uVar6;
            local_3b4 = piVar26;
            local_3b0 = uVar43;
            iVar51 = thunk_FUN_01be5118(0x438);
            if (iVar51 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0x438);
            }
            FUN_01bed4e2(iVar51,&local_7d8,0x438);
            FUN_0178e884(piVar44);
            uVar54 = 0;
            goto LAB_01830ee8;
          }
          FUN_01839f10(&local_7d8);
        }
        FUN_01bed4e2(&local_290,&local_998,0x7e);
LAB_01832970:
        FUN_01bed4e2(auStack_e30,&local_7d8,0x7a);
        ppppiVar21 = local_e40;
        ppppiVar20 = local_e44;
        local_e32 = local_db0._2_1_;
        local_e34 = (undefined2)local_db0;
        local_998 = local_e48;
        local_994._0_4_ = local_e44;
        local_994._4_4_ = local_e40;
        local_98c = local_e3c;
        if (local_e48 == (int ****)0x0) {
          if (*local_e40 != (int ***)0x0) {
            (*(code *)*local_e40)(local_e44);
          }
          if (ppppiVar21[1] != (int ***)0x0) {
            thunk_FUN_01be4678(ppppiVar20);
          }
        }
        else {
          (*(code *)local_e48[4])(&local_98c,local_e44,local_e40);
        }
        local_998 = (int ****)CONCAT31(CONCAT21(local_998._2_2_,bVar60),uVar53);
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("valid request parts",0x13,&local_998,&DAT_01d1f1f8,&DAT_01d205f4);
      }
    }
    local_7d8 = ppppiVar20;
    local_7d4 = ppppiVar37;
    local_7d0 = ppppiVar38;
    local_7cc = ppppiVar39;
    local_7c8 = ppppiVar40;
    local_7c4 = piVar61;
    local_7c0._0_4_ = ppppiVar64;
    local_7c0._4_4_ = iVar33;
    local_7b8 = ppppiVar66;
    local_7b4 = ppppiVar21;
    local_7b0 = ppppiVar22;
    local_7ac = ppppiVar23;
    local_7a8 = ppppiVar24;
    local_7a4 = ppppiVar45;
    local_7a0 = uVar47;
    iStack_79c = iVar52;
    local_798 = iVar57;
    local_794 = (char)iVar12;
    uStack_793 = uVar7;
    uStack_791 = uVar4;
    iVar51 = FUN_0183b784(&local_7d8);
    if ((char)local_998 == '\x03') {
      FUN_018561b8(&local_998);
    }
  }
  FUN_0178e884(piVar44);
  if (local_e90 != 0) {
    FUN_0181eb40((uint)&local_e90 | 4);
  }
  FUN_017793c0(&local_ed0);
  uVar54 = 1;
  local_a18 = CONCAT44(local_a18._4_4_,(undefined4)local_a18);
  local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
  uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
  local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
  local_7c0 = CONCAT44(local_7c0._4_4_,(int ****)local_7c0);
  if (9 < uVar19) {
    local_a18 = CONCAT44(local_a18._4_4_,(undefined4)local_a18);
    local_108 = CONCAT44(local_108._4_4_,(undefined4)local_108);
    uStack_bd8 = CONCAT44(uStack_bd8._4_4_,(undefined4)uStack_bd8);
    local_a48 = CONCAT44(local_a48._4_4_,(undefined4)local_a48);
    local_7c0 = CONCAT44(local_7c0._4_4_,(int ****)local_7c0);
    if (iVar42 != 0) {
      thunk_FUN_01be4678(iVar41);
    }
  }
LAB_01830ee8:
  piVar26 = (int *)param_1[0x2e];
  DataMemoryBarrier(0xb);
  do {
    iVar33 = *piVar26;
    bVar68 = (bool)hasExclusiveAccess(piVar26);
  } while (!bVar68);
  *piVar26 = iVar33 + -1;
  if (iVar33 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018537bc(param_1[0x2e]);
  }
  return CONCAT44(iVar51,uVar54);
LAB_01831828:
  iVar33 = iVar33 + 0x100;
  iVar51 = iVar51 + -0x100;
  if (iVar51 == 0) goto LAB_01831834;
  goto LAB_018316bc;
}

