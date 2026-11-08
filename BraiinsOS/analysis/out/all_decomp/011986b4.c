// FUN_011986b4 @ 011986b4 size=3248 calls_out=15 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01198fe0) */

void FUN_011986b4(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined *puVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  byte bVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined4 *local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 *local_c0;
  int iStack_bc;
  undefined4 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 *local_a8;
  undefined8 local_a4;
  int local_9c;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  undefined4 *local_88;
  uint local_84;
  undefined4 *local_80;
  uint local_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  undefined1 local_50;
  char *local_4c;
  int *local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  cVar4 = *param_4;
  uVar40 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                        &DAT_00566ed8,4);
  piVar9 = (int *)uVar40;
  if (cVar4 != '\x04') {
    do {
      iVar14 = *piVar9;
      bVar5 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar5);
    *piVar9 = iVar14 + 1;
    if (-1 < iVar14) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar14 = *DAT_018da8b4;
        bVar5 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar5);
      *DAT_018da8b4 = iVar14 + 1;
      if (-1 < iVar14) {
        local_38 = DAT_018da8b4;
        uStack_34 = DAT_018da8b8;
        local_84 = CONCAT22(local_84._2_2_,0x100);
        local_88 = (undefined4 *)&DAT_80000028;
        local_50 = 6;
        local_a8 = (undefined4 *)0x1;
        local_4c = param_4;
        uStack_30 = uVar40;
        local_a4 = uVar40;
        puVar32 = (undefined *)thunk_FUN_016d4a50(0x80);
        if (puVar32 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(puVar32,&local_a8,0x80);
        iVar14 = 0;
LAB_01198810:
        param_1[1] = iVar14;
        param_1[2] = puVar32;
        *param_1 = 1;
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xfdee,0x11993a4);
    (*pcVar3)();
  }
  puVar17 = *(undefined4 **)(param_4 + 0xc);
  puVar25 = *(undefined4 **)(param_4 + 8);
  if (puVar17 != (undefined4 *)0x1) {
    iVar14 = 0;
    do {
      local_90 = uVar40;
      if ((int)puVar17 * 0x18 == iVar14) {
        if ((undefined4 *)0xa < puVar17) {
          puVar11 = (undefined4 *)FUN_011e4c9c();
          uVar21 = *puVar11;
          iVar14 = puVar11[1];
          puVar12 = (uint *)FUN_011e4df8();
          uVar13 = (**(code **)(iVar14 + 0xc))(uVar21);
          uVar26 = puVar12[3];
          uVar22 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                   uVar26 >> 0x18;
          uVar13 = puVar12[2] ^ uVar13;
          lVar6 = (ulonglong)uVar22 * 0xb36a80d2;
          uVar38 = (uint)lVar6;
          uVar22 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                   uVar13 >> 0x18) * -0x4c957f2e +
                   uVar22 * -0x5851f42e + (int)((ulonglong)lVar6 >> 0x20);
          uVar15 = (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8
                   | uVar22 >> 0x18) ^ (uint)((ulonglong)uVar13 * 0x2df45158);
          uVar19 = uVar15 ^ puVar12[0xe];
          uVar38 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
                   uVar38 >> 0x18) ^
                   uVar26 * 0x2df45158 +
                   uVar13 * 0x2d7f954c + (int)((ulonglong)uVar13 * 0x2df45158 >> 0x20);
          uVar22 = uVar38 ^ puVar12[0xf];
          uVar26 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                   uVar22 >> 0x18;
          lVar6 = (ulonglong)uVar26 * 0xb36a80d2;
          uVar13 = (uint)lVar6;
          uVar39 = uVar22 * 0x2df45158 +
                   uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20) ^
                   (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                   uVar13 >> 0x18) ^ puVar12[9];
          uVar27 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                   uVar39 >> 0x18;
          lVar7 = (ulonglong)uVar27 * 0xb36a80d2;
          uVar22 = (uint)lVar7;
          uVar13 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18) * -0x4c957f2e +
                   uVar26 * -0x5851f42e + (int)((ulonglong)lVar6 >> 0x20);
          uVar19 = (uint)((ulonglong)uVar19 * 0x2df45158) ^
                   (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18) ^ puVar12[8];
          uVar13 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18) * -0x4c957f2e +
                   uVar27 * -0x5851f42e + (int)((ulonglong)lVar7 >> 0x20);
          uVar28 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18) ^ (uint)((ulonglong)uVar19 * 0x2df45158);
          uVar26 = *puVar12;
          uVar37 = puVar12[1];
          uVar34 = uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
                   uVar37 >> 0x18;
          uVar27 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                   uVar26 >> 0x18;
          uVar19 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                   uVar22 >> 0x18) ^
                   uVar39 * 0x2df45158 +
                   uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20);
          uVar26 = ~uVar26;
          uVar22 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18;
          lVar6 = (ulonglong)uVar26 * (ulonglong)uVar22;
          uVar13 = (uint)lVar6;
          uVar13 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                   uVar13 >> 0x18) ^
                   uVar19 * uVar34 +
                   uVar28 * uVar27 + (int)((ulonglong)uVar34 * (ulonglong)uVar28 >> 0x20);
          uVar37 = ~uVar37;
          uVar22 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                   uVar28 >> 0x18) * uVar26 + uVar22 * uVar37 + (int)((ulonglong)lVar6 >> 0x20);
          uVar19 = (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8
                   | uVar22 >> 0x18) ^ (uint)((ulonglong)uVar34 * (ulonglong)uVar28);
          uVar22 = uVar19;
          if ((uVar28 & 0x20) != 0) {
            uVar22 = uVar13;
            uVar13 = uVar19;
          }
          local_80 = (undefined4 *)(uVar22 << (uVar28 & 0x1f) | (uVar13 >> 1) >> (~uVar28 & 0x1f));
          uVar19 = uVar15 ^ puVar12[0xc];
          uVar39 = uVar38 ^ puVar12[0xd];
          uVar29 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                   uVar39 >> 0x18;
          lVar6 = (ulonglong)uVar29 * 0xb36a80d2;
          uVar20 = (uint)lVar6;
          uVar20 = uVar39 * 0x2df45158 +
                   uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20) ^
                   (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18) ^ puVar12[0xb];
          uVar23 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18;
          lVar7 = (ulonglong)uVar23 * 0xb36a80d2;
          uVar31 = (uint)lVar7;
          uVar39 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18) * -0x4c957f2e +
                   uVar29 * -0x5851f42e + (int)((ulonglong)lVar6 >> 0x20);
          uVar19 = (uint)((ulonglong)uVar19 * 0x2df45158) ^
                   (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8
                   | uVar39 >> 0x18) ^ puVar12[10];
          uVar39 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18) * -0x4c957f2e +
                   uVar23 * -0x5851f42e + (int)((ulonglong)lVar7 >> 0x20);
          uVar23 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8
                   | uVar39 >> 0x18) ^ (uint)((ulonglong)uVar19 * 0x2df45158);
          uVar19 = (uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
                   uVar31 >> 0x18) ^
                   uVar20 * 0x2df45158 +
                   uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20);
          uVar39 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18;
          lVar6 = (ulonglong)uVar26 * (ulonglong)uVar39;
          uVar20 = (uint)lVar6;
          uVar19 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18) ^
                   uVar19 * uVar34 +
                   uVar23 * uVar27 + (int)((ulonglong)uVar34 * (ulonglong)uVar23 >> 0x20);
          uVar39 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                   uVar23 >> 0x18) * uVar26 + uVar39 * uVar37 + (int)((ulonglong)lVar6 >> 0x20);
          uVar20 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8
                   | uVar39 >> 0x18) ^ (uint)((ulonglong)uVar34 * (ulonglong)uVar23);
          uVar39 = uVar20;
          if ((uVar23 & 0x20) != 0) {
            uVar39 = uVar19;
            uVar19 = uVar20;
          }
          local_88 = (undefined4 *)(uVar39 << (uVar23 & 0x1f) | (uVar19 >> 1) >> (~uVar23 & 0x1f));
          uVar20 = uVar15 ^ puVar12[10];
          uVar31 = uVar38 ^ puVar12[0xb];
          uVar30 = uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
                   uVar31 >> 0x18;
          lVar6 = (ulonglong)uVar30 * 0xb36a80d2;
          uVar29 = (uint)lVar6;
          uVar16 = uVar31 * 0x2df45158 +
                   uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20) ^
                   (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                   uVar29 >> 0x18) ^ puVar12[0xf];
          uVar24 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                   uVar16 >> 0x18;
          lVar7 = (ulonglong)uVar24 * 0xb36a80d2;
          uVar31 = (uint)lVar7;
          uVar29 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18) * -0x4c957f2e +
                   uVar30 * -0x5851f42e + (int)((ulonglong)lVar6 >> 0x20);
          uVar20 = (uint)((ulonglong)uVar20 * 0x2df45158) ^
                   (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8
                   | uVar29 >> 0x18) ^ puVar12[0xe];
          uVar29 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18) * -0x4c957f2e +
                   uVar24 * -0x5851f42e + (int)((ulonglong)lVar7 >> 0x20);
          uVar24 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8
                   | uVar29 >> 0x18) ^ (uint)((ulonglong)uVar20 * 0x2df45158);
          uVar20 = (uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
                   uVar31 >> 0x18) ^
                   uVar16 * 0x2df45158 +
                   uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20);
          uVar29 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18;
          lVar6 = (ulonglong)uVar26 * (ulonglong)uVar29;
          uVar31 = (uint)lVar6;
          uVar20 = (uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
                   uVar31 >> 0x18) ^
                   uVar20 * uVar34 +
                   uVar24 * uVar27 + (int)((ulonglong)uVar34 * (ulonglong)uVar24 >> 0x20);
          uVar29 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                   uVar24 >> 0x18) * uVar26 + uVar29 * uVar37 + (int)((ulonglong)lVar6 >> 0x20);
          uVar31 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8
                   | uVar29 >> 0x18) ^ (uint)((ulonglong)uVar34 * (ulonglong)uVar24);
          uVar29 = uVar31;
          if ((uVar24 & 0x20) != 0) {
            uVar29 = uVar20;
            uVar20 = uVar31;
          }
          local_90._0_4_ =
               (undefined4 *)(uVar29 << (uVar24 & 0x1f) | (uVar20 >> 1) >> (~uVar24 & 0x1f));
          uVar38 = uVar38 ^ puVar12[9];
          uVar15 = uVar15 ^ puVar12[8];
          uVar30 = uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
                   uVar38 >> 0x18;
          lVar6 = (ulonglong)uVar30 * 0xb36a80d2;
          uVar31 = (uint)lVar6;
          uVar31 = uVar38 * 0x2df45158 +
                   uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20) ^
                   (uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
                   uVar31 >> 0x18) ^ puVar12[0xd];
          uVar16 = uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
                   uVar31 >> 0x18;
          lVar7 = (ulonglong)uVar16 * 0xb36a80d2;
          uVar35 = (uint)lVar7;
          uVar38 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                   uVar15 >> 0x18) * -0x4c957f2e +
                   uVar30 * -0x5851f42e + (int)((ulonglong)lVar6 >> 0x20);
          uVar15 = (uint)((ulonglong)uVar15 * 0x2df45158) ^
                   (uVar38 * 0x1000000 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8
                   | uVar38 >> 0x18) ^ puVar12[0xc];
          uVar38 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                   uVar15 >> 0x18) * -0x4c957f2e +
                   uVar16 * -0x5851f42e + (int)((ulonglong)lVar7 >> 0x20);
          uVar16 = (uVar38 * 0x1000000 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8
                   | uVar38 >> 0x18) ^ (uint)((ulonglong)uVar15 * 0x2df45158);
          uVar15 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
                   uVar35 >> 0x18) ^
                   uVar31 * 0x2df45158 +
                   uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20);
          uVar38 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                   uVar15 >> 0x18;
          lVar6 = (ulonglong)uVar26 * (ulonglong)uVar38;
          uVar31 = (uint)lVar6;
          uVar15 = (uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
                   uVar31 >> 0x18) ^
                   uVar15 * uVar34 +
                   uVar16 * uVar27 + (int)((ulonglong)uVar34 * (ulonglong)uVar16 >> 0x20);
          uVar26 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                   uVar16 >> 0x18) * uVar26 + uVar38 * uVar37 + (int)((ulonglong)lVar6 >> 0x20);
          uVar38 = (uVar26 * 0x1000000 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8
                   | uVar26 >> 0x18) ^ (uint)((ulonglong)uVar34 * (ulonglong)uVar16);
          uVar26 = uVar38;
          if ((uVar16 & 0x20) != 0) {
            uVar26 = uVar15;
            uVar15 = uVar38;
          }
          local_98 = uVar26 << (uVar16 & 0x1f) | (uVar15 >> 1) >> (~uVar16 & 0x1f);
          local_7c = uVar13 << (uVar28 & 0x1f) | (uVar22 >> 1) >> (~uVar28 & 0x1f);
          local_84 = uVar19 << (uVar23 & 0x1f) | (uVar39 >> 1) >> (~uVar23 & 0x1f);
          local_90._4_4_ = uVar20 << (uVar24 & 0x1f) | (uVar29 >> 1) >> (~uVar24 & 0x1f);
          local_94 = uVar15 << (uVar16 & 0x1f) | (uVar26 >> 1) >> (~uVar16 & 0x1f);
          local_a4._0_4_ = 0;
          local_a4._4_4_ = 0;
          local_9c = 0;
          local_a8 = &DAT_005674cc;
          if (puVar17 != (undefined4 *)0x0) {
            FUN_011aabe4(&local_a8);
          }
          puVar25 = puVar25 + 2;
          do {
            if (*(char *)(puVar25 + -2) != '\x03') {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_0038cc6d,0x15,&DAT_0188a668);
            }
            iVar14 = puVar25[1];
            if (iVar14 == 0) {
              iVar14 = 0;
              iVar33 = 1;
            }
            else {
              uVar21 = *puVar25;
              iVar33 = thunk_FUN_016d4a50(iVar14);
              if (iVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(1,iVar14);
              }
              FUN_016dd1aa(iVar33,uVar21,iVar14);
            }
            FUN_012258fc(&local_a8,iVar33,iVar14);
            puVar25 = puVar25 + 6;
            puVar17 = (undefined4 *)((int)puVar17 - 1);
          } while (puVar17 != (undefined4 *)0x0);
          local_f0 = local_a8;
          local_ec = (int)local_a4;
          local_e8 = local_a4._4_4_;
          local_e4 = local_9c;
          uStack_e0 = local_98;
          uStack_dc = local_94;
          local_d8 = (uint)(undefined4 *)local_90;
          uStack_d4 = local_90._4_4_;
          uStack_d0 = (uint)local_88;
          uStack_cc = local_84;
          uStack_c8 = (uint)local_80;
          uStack_c4 = local_7c;
          FUN_0115c22c((uint)&local_c0 | 4,param_4 + 4);
          local_c0 = (undefined4 *)CONCAT31(local_c0._1_3_,4);
          local_90._0_4_ = local_f0;
          local_90._4_4_ = local_ec;
          local_88 = (undefined4 *)local_e8;
          local_84 = local_e4;
          local_80 = (undefined4 *)uStack_e0;
          local_7c = uStack_dc;
          local_78._0_4_ = local_d8;
          local_78._4_4_ = uStack_d4;
          uStack_70 = uStack_d0;
          uStack_6c = uStack_cc;
          uStack_68 = uStack_c8;
          uStack_64 = uStack_c4;
          local_a8 = local_c0;
          local_a4._0_4_ = iStack_bc;
          local_a4._4_4_ = (int)puStack_b8;
          local_9c = uStack_b4;
          local_98 = uStack_b0;
          local_94 = uStack_ac;
          local_60 = uVar40;
          iVar14 = thunk_FUN_016d4a50(0x50);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x50);
          }
          FUN_016dd1aa(iVar14,&local_a8,0x50);
          puVar32 = &DAT_018895c8;
          goto LAB_01198810;
        }
        if (puVar17 == (undefined4 *)0x0) {
          puVar17 = (undefined4 *)0x0;
          local_a4._0_4_ = 4;
          local_a8 = (undefined4 *)0x0;
        }
        else {
          iVar14 = thunk_FUN_016d4a50();
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,(int)puVar17 << 3);
          }
          iVar33 = 0;
          local_a8 = puVar17;
          local_a4._0_4_ = iVar14;
          do {
            iVar10 = iVar33 * 3;
            if (*(char *)((int)puVar25 + iVar10) != '\x03') {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_0038cc6d,0x15,&DAT_0188a678);
            }
            iVar18 = *(int *)((int)puVar25 + iVar10 + 0xc);
            uVar21 = *(undefined4 *)((int)puVar25 + iVar10 + 8);
            if (iVar18 == 0) {
              iVar10 = 1;
            }
            else {
              iVar10 = thunk_FUN_016d4a50(iVar18);
              if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(1,iVar18);
              }
            }
            FUN_016dd1aa(iVar10,uVar21,iVar18);
            piVar9 = (int *)(iVar14 + iVar33);
            *piVar9 = iVar10;
            iVar33 = iVar33 + 8;
            piVar9[1] = iVar18;
          } while ((int)puVar17 << 3 != iVar33);
        }
        local_c0 = local_a8;
        iStack_bc = (int)local_a4;
        puStack_b8 = puVar17;
        FUN_0115c22c((uint)&local_f0 | 4,param_4 + 4);
        local_f0 = (undefined4 *)CONCAT31(local_f0._1_3_,4);
        local_88 = local_c0;
        local_84 = iStack_bc;
        local_80 = puStack_b8;
        local_a8 = local_f0;
        local_a4._0_4_ = local_ec;
        local_a4._4_4_ = local_e8;
        local_9c = local_e4;
        local_98 = uStack_e0;
        local_94 = uStack_dc;
        puVar17 = (undefined4 *)thunk_FUN_016d4a50(0x30);
        if (puVar17 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x30);
        }
        puVar32 = &DAT_01889608;
        *puVar17 = local_a8;
        puVar17[1] = (int)local_a4;
        puVar17[2] = local_a4._4_4_;
        puVar17[3] = local_9c;
        puVar17[4] = local_98;
        puVar17[5] = local_94;
        *(undefined8 *)(puVar17 + 6) = local_90;
        puVar17[8] = local_88;
        puVar17[9] = local_84;
        puVar17[10] = local_80;
        puVar17[0xb] = local_7c;
        goto LAB_01199200;
      }
      pcVar1 = (char *)((int)puVar25 + iVar14);
      iVar14 = iVar14 + 0x18;
    } while (*pcVar1 == '\x03');
    iVar14 = 0;
    bVar36 = 0;
    do {
      pbVar2 = (byte *)((int)puVar25 + iVar14);
      iVar14 = iVar14 + 0x18;
      bVar36 = (&DAT_00420308)[*pbVar2] | bVar36;
    } while ((int)puVar17 * 0x18 != iVar14);
    FUN_0115c22c((uint)&local_f0 | 4,param_4 + 4);
    local_f0 = (undefined4 *)CONCAT31(local_f0._1_3_,4);
    FUN_011a0e8c(&local_c0,puVar25,puVar17);
    local_a8 = local_f0;
    local_a4._0_4_ = local_ec;
    local_a4._4_4_ = local_e8;
    local_9c = local_e4;
    local_98 = uStack_e0;
    local_94 = uStack_dc;
    local_88 = local_c0;
    local_84 = iStack_bc;
    local_80 = puStack_b8;
    local_7c = CONCAT31(local_7c._1_3_,bVar36);
    puVar17 = (undefined4 *)thunk_FUN_016d4a50(0x30);
    if (puVar17 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x30);
    }
    puVar32 = &DAT_018895a8;
    *puVar17 = local_a8;
    puVar17[1] = (int)local_a4;
    puVar17[2] = local_a4._4_4_;
    puVar17[3] = local_9c;
    puVar17[4] = local_98;
    puVar17[5] = local_94;
    *(undefined8 *)(puVar17 + 6) = local_90;
    puVar17[8] = local_88;
    puVar17[9] = local_84;
    puVar17[10] = local_80;
    puVar17[0xb] = local_7c;
LAB_01199200:
    param_1[1] = puVar17;
    param_1[2] = puVar32;
    *param_1 = 1;
    return;
  }
  FUN_0115c22c((uint)&local_c0 | 4,param_4 + 4);
  local_c0 = (undefined4 *)CONCAT31(local_c0._1_3_,4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)puVar25) {
  case 0:
    uVar8 = 0;
    break;
  default:
    local_f0 = (undefined4 *)*puVar25;
    local_ec = puVar25[1];
    local_e8 = puVar25[2];
    local_e4 = puVar25[3];
    uStack_e0 = puVar25[4];
    uStack_dc = puVar25[5];
    goto LAB_01199258;
  case 3:
    uVar21 = puVar25[2];
    iVar14 = puVar25[3];
    if (iVar14 == 0) {
      iVar33 = 1;
    }
    else {
      iVar33 = thunk_FUN_016d4a50(iVar14);
      if (iVar33 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar14);
      }
    }
    FUN_016dd1aa(iVar33,uVar21,iVar14);
    uVar8 = 3;
    local_ec = iVar14;
    local_e8 = iVar33;
    local_e4 = iVar14;
    break;
  case 4:
    FUN_0115c22c((uint)&local_f0 | 4,puVar25 + 1);
    uVar8 = 4;
    break;
  case 5:
    if (puVar25[3] == 0) {
      local_e4 = 0;
      local_ec = 0;
    }
    else {
      if (puVar25[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_011f809c((uint)&local_f0 | 4,puVar25[1],puVar25[2]);
    }
    uVar8 = 5;
  }
  local_f0 = (undefined4 *)CONCAT31(local_f0._1_3_,uVar8);
LAB_01199258:
  local_a8 = local_f0;
  local_a4._0_4_ = local_ec;
  local_a4._4_4_ = local_e8;
  local_9c = local_e4;
  local_98 = uStack_e0;
  local_94 = uStack_dc;
  local_90._0_4_ = local_c0;
  local_90._4_4_ = iStack_bc;
  local_88 = puStack_b8;
  local_84 = uStack_b4;
  local_80 = (undefined4 *)uStack_b0;
  local_7c = uStack_ac;
  local_78 = uVar40;
  puVar17 = (undefined4 *)thunk_FUN_016d4a50(0x38);
  if (puVar17 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x38);
  }
  *puVar17 = local_a8;
  puVar17[1] = (int)local_a4;
  puVar17[2] = local_a4._4_4_;
  puVar17[3] = local_9c;
  puVar17[4] = local_98;
  puVar17[5] = local_94;
  puVar17[6] = (undefined4 *)local_90;
  puVar17[7] = local_90._4_4_;
  puVar17[8] = local_88;
  puVar17[9] = local_84;
  puVar17[10] = local_80;
  puVar17[0xb] = local_7c;
  *(undefined8 *)(puVar17 + 0xc) = local_78;
  param_1[1] = puVar17;
  param_1[2] = &DAT_018895e8;
  *param_1 = 1;
  return;
}

