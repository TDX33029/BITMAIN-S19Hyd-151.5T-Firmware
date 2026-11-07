// FUN_011d0748 @ 011d0748 size=3308 calls_out=6 calls_in=0
// strings: 

uint FUN_011d0748(int *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  bool bVar40;
  uint local_40;
  uint local_34;
  uint *local_30;
  
  iVar17 = *param_1;
  puVar21 = (uint *)(param_3 + 4);
  bVar1 = *param_2;
  piVar33 = (int *)(iVar17 + 8);
  if ((bVar1 & 6) == 4) {
    iVar4 = *param_3;
    pbVar8 = param_2;
    if (iVar4 != 0) {
      pbVar8 = (byte *)param_3[3];
    }
    if (iVar4 != 0 && pbVar8 != (byte *)0x0) {
      uVar37 = param_3[7];
      uVar20 = param_3[5];
      uVar6 = uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
              uVar37 >> 0x18;
      uVar23 = param_3[6] ^ (uint)piVar33;
      uVar24 = *puVar21;
      lVar2 = (ulonglong)uVar6 * 0xb36a80d2;
      uVar9 = (uint)lVar2;
      uVar6 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
              uVar23 >> 0x18) * -0x4c957f2e + uVar6 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar6 = (uint)((ulonglong)uVar23 * 0x2df45158) ^ (uint)param_2 ^
              (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18);
      uVar38 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18;
      uVar37 = uVar37 * 0x2df45158 +
               uVar23 * 0x2d7f954c + (int)((ulonglong)uVar23 * 0x2df45158 >> 0x20) ^
               (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
               uVar9 >> 0x18);
      uVar23 = uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
               uVar37 >> 0x18;
      lVar2 = (ulonglong)uVar23 * 0xb36a80d2;
      uVar9 = (uint)lVar2;
      uVar23 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20)
      ;
      uVar9 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
              uVar9 >> 0x18) ^
              uVar37 * 0x2df45158 +
              uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
      uVar37 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
      lVar2 = (ulonglong)uVar38 * (ulonglong)uVar37;
      uVar6 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
              uVar9 >> 0x18;
      lVar3 = (ulonglong)~uVar24 * (ulonglong)uVar6;
      uVar23 = (uint)lVar3;
      uVar6 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
              uVar37 >> 0x18) * ~uVar24 + uVar6 * ~uVar20 + (int)((ulonglong)lVar3 >> 0x20);
      uVar9 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
              uVar23 >> 0x18) ^
              uVar9 * uVar38 +
              uVar37 * (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8
                       | uVar24 >> 0x18) + (int)((ulonglong)lVar2 >> 0x20);
      uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18) ^ (uint)lVar2;
      uVar23 = uVar9;
      if ((uVar37 & 0x20) != 0) {
        uVar23 = uVar6;
        uVar6 = uVar9;
      }
      uVar23 = uVar6 << (uVar37 & 0x1f) | (uVar23 >> 1) >> (~uVar37 & 0x1f);
      uVar6 = uVar23 >> 0x19;
      local_40 = 0;
      while( true ) {
        uVar23 = param_3[1] & uVar23;
        uVar9 = *(uint *)(iVar4 + uVar23);
        uVar37 = uVar9 ^ uVar6 * 0x1010101;
        uVar37 = ~uVar37 & 0x80808080 & uVar37 + 0xfefefeff;
        while (uVar37 != 0) {
          uVar20 = uVar37 >> 8;
          uVar38 = uVar37 >> 0x10;
          uVar24 = uVar37 >> 0x18;
          uVar28 = uVar37 << 0x18;
          uVar37 = uVar37 - 1 & uVar37;
          uVar20 = uVar23 + ((uint)LZCOUNT(uVar28 | (uVar20 & 0xff) << 0x10 | (uVar38 & 0xff) << 8 |
                                           uVar24) >> 3) & param_3[1];
          pbVar8 = (byte *)(iVar4 + -0xc + uVar20 * -0xc);
          piVar29 = *(int **)pbVar8;
          if (piVar29 == piVar33) {
            pbVar8 = *(byte **)(pbVar8 + 4);
          }
          if (piVar29 == piVar33 && pbVar8 == param_2) {
            return *(byte *)(iVar4 + uVar20 * -0xc + -4) & 1;
          }
        }
        if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
        local_40 = local_40 + 4;
        uVar23 = uVar23 + local_40;
      }
    }
  }
  pbVar5 = (byte *)param_3[0x19];
  iVar25 = param_3[0x1a];
  iVar4 = iVar25 << 3;
  pbVar8 = pbVar5;
  do {
    if (iVar4 == 0) {
      if (iVar25 == param_3[0x18]) {
        FUN_013c3fcc(param_3 + 0x18);
        pbVar5 = (byte *)param_3[0x19];
      }
      *(int **)(pbVar5 + iVar25 * 8) = piVar33;
      *(byte **)(pbVar5 + iVar25 * 8 + 4) = param_2;
      param_3[0x1a] = iVar25 + 1;
      DataMemoryBarrier(0xb);
      if (*piVar33 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0038bd47,0x2b,&DAT_0188a014);
      }
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar17 + 0x20) != 0) {
        FUN_0120d9f0(iVar17 + 0x20,iVar17 + 0xc);
      }
      iVar17 = *(int *)(iVar17 + 0x24);
      uVar6 = 1;
      if ((int)*(uint *)(iVar17 + 8) < 0) {
        uVar6 = *(uint *)(iVar17 + 8) ^ 0x80000000;
      }
      if (uVar6 == 0) {
        uVar6 = (uint)(*(int *)(iVar17 + 0xc) == 0);
        goto LAB_011d0aec;
      }
      if (uVar6 != 1) {
        puVar26 = *(undefined4 **)(iVar17 + 0x10);
        iVar17 = *(int *)(iVar17 + 0x14) << 5;
        goto LAB_011d0a80;
      }
      iVar4 = *(int *)(iVar17 + 0x10);
      puVar26 = *(undefined4 **)(iVar17 + 0xc);
      if (iVar4 == 1) {
        uVar6 = (**(code **)(puVar26[1] + 0x10))(*puVar26,param_2,param_3);
        goto LAB_011d0aec;
      }
      if (iVar4 != 0) {
        puVar22 = puVar26 + iVar4 * 8;
        do {
          uVar6 = (**(code **)(puVar26[1] + 0x10))(*puVar26,param_2,param_3);
          if (uVar6 != 0) {
            puVar26 = puVar26 + 8;
          }
        } while (uVar6 != 0 && puVar26 != puVar22);
        goto LAB_011d0aec;
      }
      goto LAB_011d0ae8;
    }
    pbVar15 = pbVar8 + 8;
    piVar29 = *(int **)pbVar8;
    iVar4 = iVar4 + -8;
    if (piVar29 == piVar33) {
      pbVar8 = *(byte **)(pbVar8 + 4);
    }
    bVar40 = pbVar8 != param_2;
    pbVar8 = pbVar15;
  } while (piVar29 != piVar33 || bVar40);
  uVar6 = 1;
  goto LAB_011d0b54;
LAB_011d0ae8:
  uVar6 = 1;
  goto LAB_011d0aec;
  while( true ) {
    iVar4 = (**(code **)(puVar26[1] + 0x10))(*puVar26,param_2,param_3);
    iVar17 = iVar17 + -0x20;
    puVar26 = puVar26 + 8;
    if (iVar4 == 0) break;
LAB_011d0a80:
    if (iVar17 == 0) goto LAB_011d0ae8;
  }
  uVar6 = 0;
LAB_011d0aec:
  if (param_3[0x1a] != 0) {
    param_3[0x1a] = param_3[0x1a] + -1;
  }
  if ((bVar1 & 6) == 4) {
    local_30 = (uint *)*param_3;
    if (local_30 == (uint *)0x0) {
      puVar26 = (undefined4 *)FUN_011e4c9c();
      uVar18 = *puVar26;
      iVar17 = puVar26[1];
      puVar7 = (uint *)FUN_011e4df8();
      uVar23 = (**(code **)(iVar17 + 0xc))(uVar18);
      uVar10 = *puVar7;
      uVar24 = puVar7[1];
      uVar20 = puVar7[10];
      local_40 = puVar7[0xc];
      uVar28 = puVar7[8];
      uVar38 = puVar7[0xe];
      uVar37 = puVar7[2];
      uVar16 = puVar7[3];
      *param_3 = (int)&DAT_005674cc;
      uVar11 = puVar7[0xb];
      uVar12 = puVar7[0xd];
      uVar31 = puVar7[9];
      uVar39 = puVar7[0xf];
      param_3[2] = 0;
      uVar9 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
              uVar16 >> 0x18;
      param_3[1] = 0;
      param_3[3] = 0;
      lVar2 = (ulonglong)uVar9 * 0xb36a80d2;
      uVar27 = (uint)lVar2;
      uVar37 = uVar37 ^ uVar23;
      uVar23 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
               uVar37 >> 0x18) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20)
      ;
      uVar13 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) ^ (uint)((ulonglong)uVar37 * 0x2df45158);
      uVar14 = uVar13 ^ uVar38;
      uVar9 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
              uVar27 >> 0x18) ^
              uVar16 * 0x2df45158 +
              uVar37 * 0x2d7f954c + (int)((ulonglong)uVar37 * 0x2df45158 >> 0x20);
      uVar23 = uVar9 ^ uVar39;
      uVar37 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18;
      lVar2 = (ulonglong)uVar37 * 0xb36a80d2;
      uVar16 = (uint)lVar2;
      uVar37 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
               uVar14 >> 0x18) * -0x4c957f2e +
               uVar37 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar16 = uVar23 * 0x2df45158 +
               uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20) ^
               (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18) ^ uVar31;
      uVar27 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18;
      uVar32 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
               uVar24 >> 0x18;
      lVar2 = (ulonglong)uVar27 * 0xb36a80d2;
      uVar34 = (uint)lVar2;
      uVar23 = (uint)((ulonglong)uVar14 * 0x2df45158) ^
               (uVar37 * 0x1000000 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
               uVar37 >> 0x18) ^ uVar28;
      uVar37 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) * -0x4c957f2e +
               uVar27 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar14 = (uVar37 * 0x1000000 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
               uVar37 >> 0x18) ^ (uint)((ulonglong)uVar23 * 0x2df45158);
      uVar27 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18;
      uVar10 = ~uVar10;
      uVar23 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
               uVar34 >> 0x18) ^
               uVar16 * 0x2df45158 +
               uVar23 * 0x2d7f954c + (int)((ulonglong)uVar23 * 0x2df45158 >> 0x20);
      uVar37 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18;
      lVar2 = (ulonglong)uVar10 * (ulonglong)uVar37;
      uVar16 = (uint)lVar2;
      uVar23 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18) ^
               uVar23 * uVar32 +
               uVar14 * uVar27 + (int)((ulonglong)uVar32 * (ulonglong)uVar14 >> 0x20);
      uVar24 = ~uVar24;
      uVar37 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
               uVar14 >> 0x18) * uVar10 + uVar37 * uVar24 + (int)((ulonglong)lVar2 >> 0x20);
      uVar16 = (uVar37 * 0x1000000 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
               uVar37 >> 0x18) ^ (uint)((ulonglong)uVar32 * (ulonglong)uVar14);
      uVar37 = uVar16;
      if ((uVar14 & 0x20) != 0) {
        uVar37 = uVar23;
        uVar23 = uVar16;
      }
      param_3[10] = uVar37 << (uVar14 & 0x1f) | (uVar23 >> 1) >> (~uVar14 & 0x1f);
      uVar19 = uVar13 ^ local_40;
      uVar16 = uVar9 ^ uVar12;
      uVar34 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18;
      lVar2 = (ulonglong)uVar34 * 0xb36a80d2;
      uVar35 = (uint)lVar2;
      uVar35 = uVar16 * 0x2df45158 +
               uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20) ^
               (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
               uVar35 >> 0x18) ^ uVar11;
      uVar30 = uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
               uVar35 >> 0x18;
      lVar3 = (ulonglong)uVar30 * 0xb36a80d2;
      uVar36 = (uint)lVar3;
      uVar16 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
               uVar19 >> 0x18) * -0x4c957f2e +
               uVar34 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar16 = (uint)((ulonglong)uVar19 * 0x2df45158) ^
               (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18) ^ uVar20;
      uVar34 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18) * -0x4c957f2e +
               uVar30 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      uVar30 = (uVar34 * 0x1000000 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
               uVar34 >> 0x18) ^ (uint)((ulonglong)uVar16 * 0x2df45158);
      uVar16 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
               uVar36 >> 0x18) ^
               uVar35 * 0x2df45158 +
               uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20);
      uVar34 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18;
      lVar2 = (ulonglong)uVar10 * (ulonglong)uVar34;
      uVar19 = (uint)lVar2;
      uVar16 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
               uVar19 >> 0x18) ^
               uVar16 * uVar32 +
               uVar30 * uVar27 + (int)((ulonglong)uVar32 * (ulonglong)uVar30 >> 0x20);
      uVar34 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
               uVar30 >> 0x18) * uVar10 + uVar34 * uVar24 + (int)((ulonglong)lVar2 >> 0x20);
      uVar19 = (uVar34 * 0x1000000 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
               uVar34 >> 0x18) ^ (uint)((ulonglong)uVar32 * (ulonglong)uVar30);
      uVar34 = uVar19;
      if ((uVar30 & 0x20) != 0) {
        uVar34 = uVar16;
        uVar16 = uVar19;
      }
      param_3[8] = uVar34 << (uVar30 & 0x1f) | (uVar16 >> 1) >> (~uVar30 & 0x1f);
      param_3[0xb] = uVar23 << (uVar14 & 0x1f) | (uVar37 >> 1) >> (~uVar14 & 0x1f);
      param_3[9] = uVar16 << (uVar30 & 0x1f) | (uVar34 >> 1) >> (~uVar30 & 0x1f);
      uVar20 = uVar13 ^ uVar20;
      uVar11 = uVar9 ^ uVar11;
      uVar14 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18;
      lVar2 = (ulonglong)uVar14 * 0xb36a80d2;
      uVar23 = (uint)lVar2;
      uVar39 = uVar11 * 0x2df45158 +
               uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20) ^
               (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) ^ uVar39;
      uVar37 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18;
      lVar3 = (ulonglong)uVar37 * 0xb36a80d2;
      uVar16 = (uint)lVar3;
      uVar23 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) * -0x4c957f2e +
               uVar14 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar38 = (uint)((ulonglong)uVar20 * 0x2df45158) ^
               (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) ^ uVar38;
      uVar23 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
               uVar38 >> 0x18) * -0x4c957f2e +
               uVar37 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      uVar11 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) ^ (uint)((ulonglong)uVar38 * 0x2df45158);
      uVar23 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18) ^
               uVar39 * 0x2df45158 +
               uVar38 * 0x2d7f954c + (int)((ulonglong)uVar38 * 0x2df45158 >> 0x20);
      uVar37 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18;
      lVar2 = (ulonglong)uVar10 * (ulonglong)uVar37;
      uVar20 = (uint)lVar2;
      uVar23 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^
               uVar23 * uVar32 +
               uVar11 * uVar27 + (int)((ulonglong)uVar32 * (ulonglong)uVar11 >> 0x20);
      uVar37 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18) * uVar10 + uVar37 * uVar24 + (int)((ulonglong)lVar2 >> 0x20);
      uVar20 = (uVar37 * 0x1000000 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
               uVar37 >> 0x18) ^ (uint)((ulonglong)uVar32 * (ulonglong)uVar11);
      uVar37 = uVar20;
      if ((uVar11 & 0x20) != 0) {
        uVar37 = uVar23;
        uVar23 = uVar20;
      }
      uVar38 = uVar23 << (uVar11 & 0x1f) | (uVar37 >> 1) >> (~uVar11 & 0x1f);
      uVar13 = uVar13 ^ uVar28;
      uVar9 = uVar9 ^ uVar31;
      uVar20 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
               uVar9 >> 0x18;
      lVar2 = (ulonglong)uVar20 * 0xb36a80d2;
      uVar28 = (uint)lVar2;
      uVar20 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
               uVar13 >> 0x18) * -0x4c957f2e +
               uVar20 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar12 = uVar9 * 0x2df45158 +
               uVar13 * 0x2d7f954c + (int)((ulonglong)uVar13 * 0x2df45158 >> 0x20) ^
               (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
               uVar28 >> 0x18) ^ uVar12;
      uVar28 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18;
      lVar2 = (ulonglong)uVar28 * 0xb36a80d2;
      uVar14 = (uint)lVar2;
      uVar9 = (uint)((ulonglong)uVar13 * 0x2df45158) ^
              (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
              uVar20 >> 0x18) ^ local_40;
      uVar20 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
               uVar9 >> 0x18) * -0x4c957f2e + uVar28 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20)
      ;
      uVar28 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
      uVar9 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
              uVar14 >> 0x18) ^
              uVar12 * 0x2df45158 +
              uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
      uVar20 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
               uVar9 >> 0x18;
      lVar2 = (ulonglong)uVar10 * (ulonglong)uVar20;
      uVar12 = (uint)lVar2;
      uVar9 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
              uVar12 >> 0x18) ^
              uVar9 * uVar32 +
              uVar28 * uVar27 + (int)((ulonglong)uVar32 * (ulonglong)uVar28 >> 0x20);
      uVar20 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
               uVar28 >> 0x18) * uVar10 + uVar20 * uVar24 + (int)((ulonglong)lVar2 >> 0x20);
      uVar24 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^ (uint)((ulonglong)uVar32 * (ulonglong)uVar28);
      uVar20 = uVar24;
      if ((uVar28 & 0x20) != 0) {
        uVar20 = uVar9;
        uVar9 = uVar24;
      }
      local_34 = uVar20 << (uVar28 & 0x1f) | (uVar9 >> 1) >> (~uVar28 & 0x1f);
      uVar23 = uVar37 << (uVar11 & 0x1f) | (uVar23 >> 1) >> (~uVar11 & 0x1f);
      uVar37 = uVar9 << (uVar28 & 0x1f) | (uVar20 >> 1) >> (~uVar28 & 0x1f);
      local_30 = (uint *)*param_3;
      param_3[6] = uVar23;
      *puVar21 = local_34;
      param_3[7] = uVar38;
      param_3[5] = uVar37;
    }
    else {
      local_34 = *puVar21;
      uVar37 = param_3[5];
      uVar23 = param_3[6];
      uVar38 = param_3[7];
    }
    uVar20 = uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
             uVar38 >> 0x18;
    uVar23 = uVar23 ^ (uint)piVar33;
    lVar2 = (ulonglong)uVar20 * 0xb36a80d2;
    uVar9 = (uint)lVar2;
    uVar20 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar38 * 0x2df45158 +
            uVar23 * 0x2d7f954c + (int)((ulonglong)uVar23 * 0x2df45158 >> 0x20) ^
            (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18);
    uVar24 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18;
    lVar2 = (ulonglong)uVar24 * 0xb36a80d2;
    uVar38 = (uint)lVar2;
    uVar23 = (uint)((ulonglong)uVar23 * 0x2df45158) ^ (uint)param_2 ^
             (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18);
    uVar28 = uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
             uVar37 >> 0x18;
    uVar20 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18) * -0x4c957f2e + uVar24 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar20 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar23 * 0x2df45158);
    uVar23 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
             uVar38 >> 0x18) ^
             uVar9 * 0x2df45158 +
             uVar23 * 0x2d7f954c + (int)((ulonglong)uVar23 * 0x2df45158 >> 0x20);
    lVar2 = (ulonglong)uVar28 * (ulonglong)uVar20;
    uVar9 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
            uVar23 >> 0x18;
    lVar3 = (ulonglong)~local_34 * (ulonglong)uVar9;
    uVar38 = (uint)lVar3;
    uVar37 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) * ~local_34 + uVar9 * ~uVar37 + (int)((ulonglong)lVar3 >> 0x20);
    uVar9 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
            uVar38 >> 0x18) ^
            uVar23 * uVar28 +
            uVar20 * (local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 |
                      (local_34 >> 0x10 & 0xff) << 8 | local_34 >> 0x18) +
            (int)((ulonglong)lVar2 >> 0x20);
    uVar23 = (uVar37 * 0x1000000 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
             uVar37 >> 0x18) ^ (uint)lVar2;
    uVar37 = uVar9;
    if ((uVar20 & 0x20) != 0) {
      uVar37 = uVar23;
      uVar23 = uVar9;
    }
    uVar23 = uVar23 << (uVar20 & 0x1f) | (uVar37 >> 1) >> (~uVar20 & 0x1f);
    if (param_3[2] == 0) {
      FUN_011a75bc(param_3,puVar21);
      local_30 = (uint *)*param_3;
    }
    uVar9 = param_3[1];
    bVar40 = false;
    iVar17 = 0;
    uVar37 = uVar23;
    do {
      uVar37 = uVar9 & uVar37;
      uVar38 = *(uint *)((int)local_30 + uVar37);
      uVar20 = uVar38 ^ (uVar23 >> 0x19) * 0x1010101;
      uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff;
      while (uVar20 != 0) {
        uVar24 = uVar20 >> 8;
        uVar28 = uVar20 >> 0x10;
        uVar11 = uVar20 >> 0x18;
        uVar12 = uVar20 << 0x18;
        uVar20 = uVar20 - 1 & uVar20;
        uVar24 = uVar37 + ((uint)LZCOUNT(uVar12 | (uVar24 & 0xff) << 0x10 | (uVar28 & 0xff) << 8 |
                                         uVar11) >> 3) & uVar9;
        if (((int *)local_30[uVar24 * -3 + -3] == piVar33) &&
           ((byte *)local_30[uVar24 * -3 + -2] == param_2)) {
          *(char *)(local_30 + uVar24 * -3 + -1) = (char)uVar6;
          return uVar6 & 1;
        }
      }
      uVar20 = uVar38 & 0x80808080;
      if (bVar40) {
LAB_011d1314:
        if ((uVar20 & uVar38 << 1) != 0) {
          uVar37 = (uint)*(char *)((int)local_30 + local_40);
          if (-1 < (int)uVar37) {
            uVar37 = *local_30 & 0x80808080;
            uVar20 = LZCOUNT(uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 |
                             (uVar37 >> 0x10 & 0xff) << 8 | uVar37 >> 0x18);
            uVar37 = (uint)*(byte *)((int)local_30 + (uVar20 >> 3));
            local_40 = uVar20 >> 3;
          }
          iVar17 = param_3[2];
          iVar4 = param_3[3];
          bVar1 = (byte)(uVar23 >> 0x19);
          *(byte *)((int)local_30 + local_40) = bVar1;
          *(byte *)((int)local_30 + (uVar9 & local_40 - 4) + 4) = bVar1;
          param_3[2] = iVar17 - (uVar37 & 1);
          param_3[3] = iVar4 + 1;
          local_30[local_40 * -3 + -3] = (uint)piVar33;
          *(char *)(local_30 + local_40 * -3 + -1) = (char)uVar6;
          local_30[local_40 * -3 + -2] = (uint)param_2;
          return uVar6 & 1;
        }
        bVar40 = true;
      }
      else {
        if (uVar20 != 0) {
          local_40 = uVar37 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                             (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                     uVar9;
          goto LAB_011d1314;
        }
        bVar40 = false;
      }
      iVar17 = iVar17 + 4;
      uVar37 = iVar17 + uVar37;
    } while( true );
  }
LAB_011d0b54:
  return uVar6 & 1;
}

