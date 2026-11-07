// FUN_01192ba8 @ 01192ba8 size=4676 calls_out=20 calls_in=1
// strings: additionalProperties | patternProperties | properties | properties | properties | properties

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01192ba8(undefined4 *param_1,int param_2,int *param_3,char *param_4)

{
  code *pcVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar25;
  undefined **ppuVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  int *piVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  int iVar40;
  uint uVar41;
  byte *pbVar42;
  bool bVar43;
  undefined8 uVar44;
  int local_208;
  int *local_204;
  int *local_1fc;
  uint *local_1f8;
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  uint *local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint *local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint *local_1bc;
  undefined **local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint *local_1a8;
  int local_1a0 [5];
  int local_18c;
  int local_188;
  int local_184;
  uint *local_180;
  undefined **local_17c;
  uint *local_178;
  uint local_168;
  uint local_164;
  uint local_160;
  uint *local_d8;
  int *local_d4;
  uint *local_d0;
  uint *local_c8;
  undefined8 local_c4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint *local_b0;
  uint local_ac;
  undefined1 *local_a8;
  undefined8 local_a4;
  uint uStack_9c;
  undefined1 local_70;
  char *local_6c;
  int *local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 local_40;
  uint *local_38;
  undefined **local_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar7 = *param_3;
  if (iVar7 != 0) {
    iVar30 = param_3[1];
    iVar40 = iVar7;
    while( true ) {
      uVar3 = *(ushort *)(iVar40 + 0x192);
      iVar34 = iVar40 + 0x10c;
      uVar20 = 0xffffffff;
      iVar35 = (uint)uVar3 * 0xc;
      do {
        if (iVar35 == 0) {
          uVar20 = (uint)uVar3;
          goto LAB_01192c68;
        }
        uVar24 = *(uint *)(iVar34 + 8);
        uVar18 = uVar24;
        if (0x13 < uVar24) {
          uVar18 = 0x14;
        }
        iVar8 = FUN_016dd50a("additionalProperties",*(undefined4 *)(iVar34 + 4),uVar18);
        if (iVar8 == 0) {
          iVar8 = 0x14 - uVar24;
        }
        iVar35 = iVar35 + -0xc;
        uVar20 = uVar20 + 1;
        iVar34 = iVar34 + 0xc;
      } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
      if (0 < iVar8 == iVar8 < 0) break;
LAB_01192c68:
      if (iVar30 == 0) goto LAB_01192cbc;
      iVar30 = iVar30 + -1;
      iVar40 = *(int *)(iVar40 + uVar20 * 4 + 0x198);
    }
    pcVar23 = (char *)(iVar40 + uVar20 * 0x18);
    cVar2 = *pcVar23;
    if (cVar2 == '\x01') {
      if (pcVar23[1] == '\0') goto LAB_01192ca0;
    }
    else if (cVar2 == '\x05') {
LAB_01192ca0:
      *param_1 = 0;
      return;
    }
  }
LAB_01192cbc:
  if (*param_4 != '\x05') {
    uStack_50 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             "properties",10);
    piVar32 = (int *)uStack_50;
    do {
      iVar7 = *piVar32;
      bVar43 = (bool)hasExclusiveAccess(piVar32);
    } while (!bVar43);
    *piVar32 = iVar7 + 1;
    if (-1 < iVar7) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar7 = *DAT_018da8b4;
        bVar43 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar43);
      *DAT_018da8b4 = iVar7 + 1;
      if (-1 < iVar7) {
        local_58 = DAT_018da8b4;
        uStack_54 = DAT_018da8b8;
        local_70 = 6;
        local_a4._0_4_ = CONCAT22(local_a4._2_2_,0x2000);
        local_a8 = &DAT_80000028;
        local_c8 = (uint *)0x1;
        local_6c = param_4;
        local_c4 = uStack_50;
        iVar7 = thunk_FUN_016d4a50(0x80);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar7,&local_c8,0x80);
        param_1[1] = 0;
        param_1[2] = iVar7;
        *param_1 = 1;
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1193e18);
    (*pcVar1)();
  }
  puVar27 = *(uint **)(param_4 + 0xc);
  if ((uint *)0xe < puVar27) {
    FUN_0119d4b4(&local_168,param_2,"properties",10);
    puVar9 = (undefined4 *)FUN_011e4c9c();
    uVar21 = *puVar9;
    iVar7 = puVar9[1];
    puVar39 = (uint *)FUN_011e4df8();
    uVar20 = (**(code **)(iVar7 + 0xc))(uVar21);
    uVar11 = puVar39[8];
    uVar12 = puVar39[9];
    uVar13 = puVar39[10];
    uVar14 = puVar39[0xb];
    uVar15 = puVar39[0xc];
    uVar16 = puVar39[0xd];
    uVar36 = puVar39[2];
    uVar41 = puVar39[3];
    uVar33 = puVar39[0xe];
    uVar10 = puVar39[0xf];
    uVar17 = *puVar39;
    uVar24 = puVar39[1];
    FUN_011a5370(&local_c8,0x20,4,puVar27);
    local_1ec = local_bc;
    uVar31 = uVar41 << 0x18 | (uVar41 >> 8 & 0xff) << 0x10 | (uVar41 >> 0x10 & 0xff) << 8 |
             uVar41 >> 0x18;
    lVar4 = (ulonglong)uVar31 * 0xb36a80d2;
    uVar18 = (uint)lVar4;
    local_1f0 = (uint)local_c4._4_4_;
    uVar36 = uVar36 ^ uVar20;
    uVar20 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) * -0x4c957f2e + uVar31 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    local_1f8 = local_c8;
    local_1f4 = (uint)(int *)local_c4;
    uVar19 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar36 * 0x2df45158);
    uVar25 = uVar19 ^ uVar33;
    uVar31 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) ^
             uVar41 * 0x2df45158 +
             uVar36 * 0x2d7f954c + (int)((ulonglong)uVar36 * 0x2df45158 >> 0x20);
    uVar20 = uVar31 ^ uVar10;
    uVar18 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18;
    lVar4 = (ulonglong)uVar18 * 0xb36a80d2;
    uVar36 = (uint)lVar4;
    uVar18 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
             uVar25 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar36 = uVar20 * 0x2df45158 +
             uVar25 * 0x2d7f954c + (int)((ulonglong)uVar25 * 0x2df45158 >> 0x20) ^
             (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) ^ uVar12;
    uVar20 = uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18;
    lVar4 = (ulonglong)uVar20 * 0xb36a80d2;
    uVar37 = (uint)lVar4;
    uVar18 = (uint)((ulonglong)uVar25 * 0x2df45158) ^
             (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) ^ uVar11;
    uVar20 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar25 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
             uVar17 >> 0x18;
    uVar17 = ~uVar17;
    uVar41 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar18 * 0x2df45158);
    uVar28 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
             uVar24 >> 0x18;
    uVar20 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
             uVar37 >> 0x18) ^
             uVar36 * 0x2df45158 +
             uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20);
    uVar18 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18;
    lVar4 = (ulonglong)uVar17 * (ulonglong)uVar18;
    uVar36 = (uint)lVar4;
    uVar20 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) ^
             uVar20 * uVar28 +
             uVar41 * uVar25 + (int)((ulonglong)uVar28 * (ulonglong)uVar41 >> 0x20);
    uVar24 = ~uVar24;
    uVar18 = (uVar41 << 0x18 | (uVar41 >> 8 & 0xff) << 0x10 | (uVar41 >> 0x10 & 0xff) << 8 |
             uVar41 >> 0x18) * uVar17 + uVar18 * uVar24 + (int)((ulonglong)lVar4 >> 0x20);
    uVar36 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) ^ (uint)((ulonglong)uVar28 * (ulonglong)uVar41);
    uVar18 = uVar36;
    if ((uVar41 & 0x20) != 0) {
      uVar18 = uVar20;
      uVar20 = uVar36;
    }
    local_1d0 = uVar18 << (uVar41 & 0x1f) | (uVar20 >> 1) >> (~uVar41 & 0x1f);
    local_1cc = uVar20 << (uVar41 & 0x1f) | (uVar18 >> 1) >> (~uVar41 & 0x1f);
    uVar20 = uVar31 ^ uVar16;
    uVar18 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18;
    lVar4 = (ulonglong)uVar18 * 0xb36a80d2;
    uVar37 = (uint)lVar4;
    uVar41 = uVar19 ^ uVar15;
    uVar18 = (uVar41 << 0x18 | (uVar41 >> 8 & 0xff) << 0x10 | (uVar41 >> 0x10 & 0xff) << 8 |
             uVar41 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar36 = (uint)((ulonglong)uVar41 * 0x2df45158) ^
             (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) ^ uVar13;
    uVar20 = uVar20 * 0x2df45158 +
             uVar41 * 0x2d7f954c + (int)((ulonglong)uVar41 * 0x2df45158 >> 0x20) ^
             (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
             uVar37 >> 0x18) ^ uVar14;
    uVar18 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18;
    lVar4 = (ulonglong)uVar18 * 0xb36a80d2;
    uVar41 = (uint)lVar4;
    uVar37 = (uVar41 << 0x18 | (uVar41 >> 8 & 0xff) << 0x10 | (uVar41 >> 0x10 & 0xff) << 8 |
             uVar41 >> 0x18) ^
             uVar20 * 0x2df45158 +
             uVar36 * 0x2d7f954c + (int)((ulonglong)uVar36 * 0x2df45158 >> 0x20);
    uVar41 = uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
             uVar37 >> 0x18;
    lVar5 = (ulonglong)uVar17 * (ulonglong)uVar41;
    uVar38 = (uint)lVar5;
    uVar20 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) * -0x4c957f2e + uVar18 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar36 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar36 * 0x2df45158);
    uVar20 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) * uVar17 + uVar41 * uVar24 + (int)((ulonglong)lVar5 >> 0x20);
    uVar41 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar28 * (ulonglong)uVar36);
    uVar20 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
             uVar38 >> 0x18) ^
             uVar37 * uVar28 +
             uVar36 * uVar25 + (int)((ulonglong)uVar28 * (ulonglong)uVar36 >> 0x20);
    uVar18 = uVar41;
    if ((uVar36 & 0x20) != 0) {
      uVar18 = uVar20;
      uVar20 = uVar41;
    }
    local_1d4 = uVar20 << (uVar36 & 0x1f) | (uVar18 >> 1) >> (~uVar36 & 0x1f);
    local_1d8 = (uint *)(uVar18 << (uVar36 & 0x1f) | (uVar20 >> 1) >> (~uVar36 & 0x1f));
    uVar14 = uVar31 ^ uVar14;
    uVar20 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
             uVar14 >> 0x18;
    lVar4 = (ulonglong)uVar20 * 0xb36a80d2;
    uVar18 = (uint)lVar4;
    uVar13 = uVar19 ^ uVar13;
    uVar20 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
             uVar13 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar33 = (uint)((ulonglong)uVar13 * 0x2df45158) ^
             (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ uVar33;
    uVar10 = uVar14 * 0x2df45158 +
             uVar13 * 0x2d7f954c + (int)((ulonglong)uVar13 * 0x2df45158 >> 0x20) ^
             (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) ^ uVar10;
    uVar20 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18;
    lVar4 = (ulonglong)uVar20 * 0xb36a80d2;
    uVar18 = (uint)lVar4;
    uVar18 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) ^
             uVar10 * 0x2df45158 +
             uVar33 * 0x2d7f954c + (int)((ulonglong)uVar33 * 0x2df45158 >> 0x20);
    uVar20 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
             uVar33 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar14 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18;
    lVar4 = (ulonglong)uVar17 * (ulonglong)uVar14;
    uVar10 = (uint)lVar4;
    uVar36 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar33 * 0x2df45158);
    uVar20 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) * uVar17 + uVar14 * uVar24 + (int)((ulonglong)lVar4 >> 0x20);
    uVar14 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar28 * (ulonglong)uVar36);
    uVar20 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) ^
             uVar18 * uVar28 +
             uVar36 * uVar25 + (int)((ulonglong)uVar28 * (ulonglong)uVar36 >> 0x20);
    uVar18 = uVar14;
    if ((uVar36 & 0x20) != 0) {
      uVar18 = uVar20;
      uVar20 = uVar14;
    }
    local_1dc = uVar20 << (uVar36 & 0x1f) | (uVar18 >> 1) >> (~uVar36 & 0x1f);
    local_1e0 = uVar18 << (uVar36 & 0x1f) | (uVar20 >> 1) >> (~uVar36 & 0x1f);
    uVar31 = uVar31 ^ uVar12;
    uVar20 = uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
             uVar31 >> 0x18;
    lVar4 = (ulonglong)uVar20 * 0xb36a80d2;
    uVar18 = (uint)lVar4;
    uVar19 = uVar19 ^ uVar11;
    uVar20 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
             uVar19 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar15 = (uint)((ulonglong)uVar19 * 0x2df45158) ^
             (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ uVar15;
    uVar16 = uVar31 * 0x2df45158 +
             uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20) ^
             (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) ^ uVar16;
    uVar20 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
             uVar16 >> 0x18;
    lVar4 = (ulonglong)uVar20 * 0xb36a80d2;
    uVar18 = (uint)lVar4;
    uVar18 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) ^
             uVar16 * 0x2df45158 +
             uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20);
    uVar14 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18;
    lVar5 = (ulonglong)uVar17 * (ulonglong)uVar14;
    uVar10 = (uint)lVar5;
    uVar20 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar36 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar15 * 0x2df45158);
    uVar20 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) * uVar17 + uVar14 * uVar24 + (int)((ulonglong)lVar5 >> 0x20);
    uVar24 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar28 * (ulonglong)uVar36);
    uVar20 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) ^
             uVar18 * uVar28 +
             uVar36 * uVar25 + (int)((ulonglong)uVar28 * (ulonglong)uVar36 >> 0x20);
    uVar18 = uVar24;
    if ((uVar36 & 0x20) != 0) {
      uVar18 = uVar20;
      uVar20 = uVar24;
    }
    local_1e4 = uVar20 << (uVar36 & 0x1f) | (uVar18 >> 1) >> (~uVar36 & 0x1f);
    local_1e8 = (uint *)(uVar18 << (uVar36 & 0x1f) | (uVar20 >> 1) >> (~uVar36 & 0x1f));
    local_1c0 = *(uint *)(param_4 + 4);
    local_1bc = *(uint **)(param_4 + 8);
    if (local_1c0 == 0) {
      puVar27 = (uint *)0x0;
    }
    local_1b4 = 0;
    local_1c8 = (uint)(local_1c0 != 0);
    local_1c4 = 0;
    local_1b8 = (undefined **)local_1c8;
    local_1b0 = local_1c0;
    local_1ac = (uint)local_1bc;
    local_1a8 = puVar27;
    do {
      uVar44 = FUN_00f45584(&local_1c8);
      uVar21 = (undefined4)((ulonglong)uVar44 >> 0x20);
      iVar7 = (int)uVar44;
      if (iVar7 == 0) {
        local_c8 = local_1f8;
        local_c4._0_4_ = (int *)local_1f4;
        local_c4._4_4_ = (uint *)local_1f0;
        local_bc = local_1ec;
        local_b8 = (uint)local_1e8;
        local_b4 = local_1e4;
        local_b0 = (uint *)local_1e0;
        local_ac = local_1dc;
        local_a8 = (undefined1 *)local_1d8;
        local_a4._0_4_ = local_1d4;
        local_a4._4_4_ = local_1d0;
        uStack_9c = local_1cc;
        puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x30);
        if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x30);
        }
        local_17c = &PTR_LAB_01889168;
        *puVar9 = local_1f8;
        puVar9[1] = local_1f4;
        puVar9[2] = local_1f0;
        puVar9[3] = local_1ec;
        puVar9[4] = local_1e8;
        puVar9[5] = local_1e4;
        puVar9[6] = local_1e0;
        puVar9[7] = local_1dc;
        puVar9[8] = local_1d8;
        puVar9[9] = local_1d4;
        puVar9[10] = local_1d0;
        puVar9[0xb] = local_1cc;
LAB_01193690:
        FUN_01161600(&local_168);
        param_1[1] = puVar9;
        param_1[2] = local_17c;
        *param_1 = 1;
        return;
      }
      FUN_0119d4b4(&local_c8,&local_168,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      uVar22 = *(undefined4 *)(iVar7 + 4);
      iVar7 = *(int *)(iVar7 + 8);
      if (iVar7 == 0) {
        iVar40 = 1;
      }
      else {
        iVar40 = thunk_FUN_016d4a50(iVar7);
        if (iVar40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar7);
        }
      }
      FUN_016dd1aa(iVar40,uVar22,iVar7);
      local_18c = iVar7;
      local_188 = iVar40;
      local_184 = iVar7;
      uVar6 = FUN_01352d48(local_40,uVar21);
      FUN_0125acb4(&local_180,&local_c8,uVar21,uVar6);
      if (local_180 == (uint *)0x0) {
        if (iVar7 != 0) {
          thunk_FUN_016d3fb4(iVar40);
        }
        FUN_01161600(&local_c8);
        uVar20 = local_1f4;
        puVar9 = (undefined4 *)0x0;
        if (local_1f4 != 0) {
          if (local_1ec != 0) {
            puVar39 = local_1f8 + 1;
            uVar18 = ~*local_1f8 & 0x80808080;
            puVar27 = local_1f8;
            iVar7 = local_1ec;
            do {
              puVar29 = puVar39;
              if (uVar18 == 0) {
                do {
                  puVar39 = puVar29 + 1;
                  uVar18 = *puVar29;
                  puVar27 = puVar27 + -0x20;
                  puVar29 = puVar39;
                } while ((uVar18 & 0x80808080) == 0x80808080);
                uVar18 = uVar18 & 0x80808080 ^ 0x80808080;
              }
              uVar24 = LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                               (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) & 0x38;
              if (puVar27[-8 - uVar24] != 0) {
                thunk_FUN_016d3fb4(puVar27[-7 - uVar24]);
              }
              FUN_0115ccf0(puVar27 + (-5 - uVar24));
              iVar7 = iVar7 + -1;
              uVar18 = uVar18 - 1 & uVar18;
            } while (iVar7 != 0);
          }
          if (uVar20 * 0x21 != -0x25) {
            thunk_FUN_016d3fb4(local_1f8 + uVar20 * -8 + -8);
          }
        }
        goto LAB_01193690;
      }
      local_34 = local_17c;
      local_38 = local_180;
      FUN_01224bd8(local_1a0,&local_1f8,&local_18c,&local_38);
      if (local_1a0[0] != 0) {
        FUN_0115ccf0(local_1a0);
      }
      FUN_01161600(&local_c8);
    } while( true );
  }
  if (iVar7 != 0) {
    local_208 = param_3[1];
    iVar40 = iVar7;
    iVar30 = local_208;
    do {
      uVar3 = *(ushort *)(iVar40 + 0x192);
      iVar34 = iVar40 + 0x10c;
      uVar20 = 0xffffffff;
      iVar35 = (uint)uVar3 * 0xc;
      do {
        if (iVar35 == 0) {
          uVar20 = (uint)uVar3;
          goto LAB_01192d84;
        }
        uVar24 = *(uint *)(iVar34 + 8);
        uVar18 = uVar24;
        if (0x10 < uVar24) {
          uVar18 = 0x11;
        }
        iVar8 = FUN_016dd50a("patternProperties",*(undefined4 *)(iVar34 + 4),uVar18);
        if (iVar8 == 0) {
          iVar8 = 0x11 - uVar24;
        }
        iVar35 = iVar35 + -0xc;
        uVar20 = uVar20 + 1;
        iVar34 = iVar34 + 0xc;
      } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
      if (0 < iVar8 == iVar8 < 0) break;
LAB_01192d84:
      if (iVar30 == 0) goto LAB_011936c4;
      iVar30 = iVar30 + -1;
      iVar40 = *(int *)(iVar40 + uVar20 * 4 + 0x198);
    } while( true );
  }
LAB_01193780:
  FUN_0119d4b4(&local_168,param_2,"properties",10);
  puVar39 = (uint *)0x0;
  if (puVar27 == (uint *)0x0) {
    local_1fc = (int *)&DAT_00000004;
    local_d8 = (uint *)0x0;
  }
  else {
    local_1fc = (int *)thunk_FUN_016d4a50((int)puVar27 << 5);
    if (local_1fc == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)puVar27 << 5);
    }
    local_d8 = puVar27;
  }
  local_1f0 = *(uint *)(param_4 + 4);
  local_1ec = *(int *)(param_4 + 8);
  if (local_1f0 == 0) {
    puVar27 = (uint *)0x0;
  }
  local_1f8 = (uint *)(uint)(local_1f0 != 0);
  local_d0 = (uint *)0x0;
  local_1e4 = 0;
  local_1f4 = 0;
  local_1e8 = local_1f8;
  local_1e0 = local_1f0;
  local_1dc = local_1ec;
  local_1d8 = puVar27;
  local_d4 = local_1fc;
LAB_01193860:
  uVar44 = FUN_00f45584(&local_1f8);
  uVar21 = (undefined4)((ulonglong)uVar44 >> 0x20);
  iVar7 = (int)uVar44;
  if (iVar7 == 0) {
    puVar27 = (uint *)thunk_FUN_016d4a50(0xc);
    if (puVar27 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *puVar27 = (uint)local_d8;
    puVar27[1] = (uint)local_d4;
    puVar27[2] = (uint)local_d0;
    ppuVar26 = &PTR_LAB_01889188;
  }
  else {
    FUN_0119d4b4(&local_c8,&local_168,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
    uVar20 = *(uint *)(iVar7 + 8);
    uVar22 = *(undefined4 *)(iVar7 + 4);
    if (uVar20 == 0) {
      uVar18 = 1;
    }
    else {
      uVar18 = thunk_FUN_016d4a50(uVar20);
      if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar20);
      }
    }
    FUN_016dd1aa(uVar18,uVar22,uVar20);
    uVar6 = FUN_01352d48(local_40,uVar21);
    FUN_0125acb4(&local_38,&local_c8,uVar21,uVar6);
    if (local_38 != (uint *)0x0) goto code_r0x011938f4;
    if (uVar20 != 0) {
      thunk_FUN_016d3fb4(uVar18);
    }
    FUN_01161600(&local_c8);
    piVar32 = local_1fc;
    for (iVar7 = (int)puVar39 + 1; iVar7 != 1; iVar7 = iVar7 + -1) {
      if (*piVar32 != 0) {
        thunk_FUN_016d3fb4(piVar32[1]);
      }
      FUN_0115ccf0(piVar32 + 3);
      piVar32 = piVar32 + 8;
    }
    puVar27 = (uint *)0x0;
    ppuVar26 = local_34;
    if (local_d8 != (uint *)0x0) {
      thunk_FUN_016d3fb4(local_1fc);
    }
  }
  FUN_01161600(&local_168);
  local_34 = ppuVar26;
  goto LAB_011939d8;
LAB_011936c4:
  uVar3 = *(ushort *)(iVar7 + 0x192);
  iVar30 = iVar7 + 0x10c;
  uVar20 = 0xffffffff;
  iVar40 = (uint)uVar3 * 0xc;
  do {
    if (iVar40 == 0) {
      uVar20 = (uint)uVar3;
      goto LAB_01193744;
    }
    uVar24 = *(uint *)(iVar30 + 8);
    uVar18 = uVar24;
    if (7 < uVar24) {
      uVar18 = 8;
    }
    iVar35 = FUN_016dd50a(&DAT_00569b28,*(undefined4 *)(iVar30 + 4),uVar18);
    if (iVar35 == 0) {
      iVar35 = 8 - uVar24;
    }
    iVar40 = iVar40 + -0xc;
    uVar20 = uVar20 + 1;
    iVar30 = iVar30 + 0xc;
  } while ((char)((0 < iVar35) - (iVar35 < 0)) == '\x01');
  if (0 < iVar35 == iVar35 < 0) {
    pbVar42 = (byte *)(iVar7 + uVar20 * 0x18);
    uVar20 = (uint)*pbVar42;
    bVar43 = uVar20 == 4;
    if (bVar43) {
      uVar20 = *(uint *)(pbVar42 + 0xc);
    }
    if (bVar43 && uVar20 == 2) {
      pcVar23 = *(char **)(pbVar42 + 8);
      cVar2 = *pcVar23;
      bVar43 = cVar2 == '\x03';
      if (bVar43) {
        cVar2 = pcVar23[0x18];
      }
      if (bVar43 && cVar2 == '\x03') {
        FUN_00602a1c(&local_168,*(undefined4 *)(pcVar23 + 8),*(undefined4 *)(pcVar23 + 0xc));
        FUN_00602a1c(&local_c8,*(undefined4 *)(pcVar23 + 0x20),*(undefined4 *)(pcVar23 + 0x24));
        if (local_168 != 0x80000000) {
          FUN_0119d4b4(&local_168,param_2,"properties",10);
          puVar39 = (uint *)0x0;
          if (puVar27 == (uint *)0x0) {
            local_204 = (int *)&DAT_00000004;
            local_180 = (uint *)0x0;
          }
          else {
            local_204 = (int *)thunk_FUN_016d4a50((int)puVar27 << 5);
            if (local_204 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,(int)puVar27 << 5);
            }
            local_180 = puVar27;
          }
          local_1f0 = *(uint *)(param_4 + 4);
          local_1ec = *(int *)(param_4 + 8);
          if (local_1f0 == 0) {
            puVar27 = (uint *)0x0;
          }
          local_1f8 = (uint *)(uint)(local_1f0 != 0);
          local_178 = (uint *)0x0;
          local_17c = (undefined **)local_204;
          local_1e4 = 0;
          local_1f4 = 0;
          local_1e8 = local_1f8;
          local_1e0 = local_1f0;
          local_1dc = local_1ec;
          local_1d8 = puVar27;
          goto LAB_01193b88;
        }
      }
    }
    goto LAB_01193780;
  }
LAB_01193744:
  if (local_208 == 0) goto LAB_01193780;
  iVar7 = *(int *)(iVar7 + uVar20 * 4 + 0x198);
  local_208 = local_208 + -1;
  goto LAB_011936c4;
LAB_01193b88:
  uVar44 = FUN_00f45584(&local_1f8);
  uVar21 = (undefined4)((ulonglong)uVar44 >> 0x20);
  iVar7 = (int)uVar44;
  if (iVar7 == 0) goto LAB_01193c68;
  FUN_0119d4b4(&local_c8,&local_168,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
  uVar20 = *(uint *)(iVar7 + 8);
  uVar22 = *(undefined4 *)(iVar7 + 4);
  if (uVar20 == 0) {
    uVar18 = 1;
  }
  else {
    uVar18 = thunk_FUN_016d4a50(uVar20);
    if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar20);
    }
  }
  FUN_016dd1aa(uVar18,uVar22,uVar20);
  uVar6 = FUN_01352d48(local_40,uVar21);
  FUN_0125acb4(&local_38,&local_c8,uVar21,uVar6);
  if (local_38 == (uint *)0x0) {
    if (uVar20 != 0) {
      thunk_FUN_016d3fb4(uVar18);
    }
    FUN_01161600(&local_c8);
    piVar32 = local_204;
    for (iVar7 = (int)puVar39 + 1; iVar7 != 1; iVar7 = iVar7 + -1) {
      if (*piVar32 != 0) {
        thunk_FUN_016d3fb4(piVar32[1]);
      }
      FUN_0115ccf0(piVar32 + 3);
      piVar32 = piVar32 + 8;
    }
    if (local_180 != (uint *)0x0) {
      thunk_FUN_016d3fb4(local_204);
    }
    FUN_01161600(&local_168);
    if (local_c8 != (uint *)0x0) {
      thunk_FUN_016d3fb4((int *)local_c4);
    }
    puVar27 = (uint *)0x0;
    if (local_168 != 0) {
      thunk_FUN_016d3fb4(local_164);
    }
    goto LAB_011939d8;
  }
  local_1b8 = local_34;
  local_1b4 = local_30;
  local_1b0 = uStack_2c;
  local_1ac = uStack_28;
  local_1bc = local_38;
  local_1c8 = uVar20;
  local_1c4 = uVar18;
  local_1c0 = uVar20;
  if (puVar39 == local_180) {
    FUN_011cf65c(&local_180);
    local_204 = (int *)local_17c;
  }
  puVar27 = (uint *)(local_204 + (int)puVar39 * 8);
  puVar39 = (uint *)((int)puVar39 + 1);
  *puVar27 = local_1c8;
  puVar27[1] = local_1c4;
  puVar27[2] = local_1c0;
  puVar27[3] = (uint)local_1bc;
  puVar27[4] = (uint)local_1b8;
  puVar27[5] = local_1b4;
  puVar27[6] = local_1b0;
  puVar27[7] = local_1ac;
  local_178 = puVar39;
  FUN_01161600(&local_c8);
  goto LAB_01193b88;
code_r0x011938f4:
  local_1b4 = local_30;
  local_1b0 = uStack_2c;
  local_1ac = uStack_28;
  local_1b8 = local_34;
  local_1bc = local_38;
  local_1c8 = uVar20;
  local_1c4 = uVar18;
  local_1c0 = uVar20;
  if (puVar39 == local_d8) {
    FUN_011cf65c(&local_d8);
    local_1fc = local_d4;
  }
  puVar27 = (uint *)(local_1fc + (int)puVar39 * 8);
  puVar39 = (uint *)((int)puVar39 + 1);
  *puVar27 = local_1c8;
  puVar27[1] = local_1c4;
  puVar27[2] = local_1c0;
  puVar27[3] = (uint)local_1bc;
  puVar27[4] = (uint)local_1b8;
  puVar27[5] = local_1b4;
  puVar27[6] = local_1b0;
  puVar27[7] = local_1ac;
  local_d0 = puVar39;
  FUN_01161600(&local_c8);
  goto LAB_01193860;
LAB_01193c68:
  local_a4 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          &DAT_00569b28,8);
  local_a8 = (undefined1 *)local_c4._4_4_;
  local_ac = (uint)(int *)local_c4;
  local_b0 = local_c8;
  local_b4 = local_160;
  local_b8 = local_164;
  local_bc = local_168;
  local_c8 = local_180;
  local_c4._0_4_ = (int *)local_17c;
  local_c4._4_4_ = local_178;
  puVar27 = (uint *)thunk_FUN_016d4a50(0x2c);
  if (puVar27 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x2c);
  }
  *puVar27 = (uint)local_c8;
  puVar27[1] = (uint)(int *)local_c4;
  puVar27[2] = (uint)local_c4._4_4_;
  puVar27[3] = local_bc;
  puVar27[4] = local_b8;
  puVar27[5] = local_b4;
  puVar27[6] = (uint)local_b0;
  puVar27[7] = local_ac;
  puVar27[8] = (uint)local_a8;
  *(undefined8 *)(puVar27 + 9) = local_a4;
  FUN_01161600(&local_168);
  local_34 = (undefined **)&DAT_018891a8;
LAB_011939d8:
  param_1[1] = puVar27;
  param_1[2] = local_34;
  *param_1 = 1;
  return;
}

