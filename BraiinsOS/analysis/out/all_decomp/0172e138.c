// FUN_0172e138 @ 0172e138 size=1496 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_0172e138(int *param_1,uint *param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  byte *pbVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  bool bVar22;
  uint *local_330;
  ushort *local_324;
  ushort *local_320;
  uint uStack_318;
  uint local_314 [19];
  ushort auStack_2c8 [104];
  uint auStack_1f8 [57];
  undefined4 uStack_114;
  uint local_110 [57];
  int local_2c;
  
  iVar14 = param_1[1];
  local_2c = DAT_018ddaf8;
  FUN_01707a74(auStack_2c8,param_5,iVar14,0);
  puVar16 = auStack_1f8 + 1;
  uVar1 = (iVar14 + 4U) / 5;
  FUN_016dd606(puVar16,0,0xe4);
  FUN_016dd606(local_110,0,0xe4);
  puVar10 = (uint *)*param_1;
  uVar7 = uVar1 - 4;
  local_324 = (ushort *)(uVar7 | 3);
  bVar22 = local_324 == (ushort *)0xffffffff;
  puVar17 = puVar16 + (int)puVar10;
  puVar12 = puVar10;
  if (bVar22) {
    puVar12 = local_314;
  }
  puVar20 = local_110 + (int)puVar10;
  puVar21 = puVar16 + (int)puVar10 * 2;
  if (bVar22) {
    local_330 = puVar12;
  }
  puVar4 = local_110 + (int)puVar10 * 2;
  if (!bVar22) {
    local_320 = auStack_2c8 + (uVar7 & 0xfffffffc);
    local_330 = local_314;
    while( true ) {
      uVar2 = local_320[3];
      uVar7 = (uint)(local_320[3] >> 0xf);
      if ((int)puVar12 * 8 != 0) {
        uVar19 = 0;
        pbVar18 = (byte *)(param_1[0xb] + -1 +
                          (int)(puVar12 + (int)puVar12 * ((int)local_324 >> 2) * 4) * 8);
        do {
          uVar11 = (int)((((int)(short)uVar2 ^ (int)(short)uVar2 >> 0x1f) + uVar7) * 0x10000) >>
                   0x11 ^ uVar19;
          pbVar6 = pbVar18 + (int)puVar12 * -8;
          bVar3 = (char)((byte)(uVar11 - 1 >> 0x18) & ~(byte)(uVar11 >> 0x18)) >> 7;
          pbVar8 = (byte *)((int)&uStack_114 + 3);
          do {
            pbVar6 = pbVar6 + 1;
            pbVar8 = pbVar8 + 1;
            *pbVar8 = *pbVar6 & bVar3 | *pbVar8 & ~bVar3;
          } while (pbVar6 != pbVar18);
          uVar19 = uVar19 + 1;
          pbVar18 = pbVar18 + (int)puVar12 * 8;
        } while (uVar19 != 0x10);
      }
      (*(code *)param_1[6])(local_330,puVar20);
      iVar14 = *param_1;
      if (iVar14 != 0) {
        puVar5 = &uStack_318;
        uVar7 = (int)(uVar7 - 1 & ~uVar7) >> 0x1f;
        puVar12 = puVar20;
        do {
          puVar5 = puVar5 + 1;
          puVar9 = puVar12 + 1;
          *puVar12 = *puVar5 & ~uVar7 | *puVar12 & uVar7;
          puVar12 = puVar9;
        } while (puVar9 != puVar20 + iVar14);
      }
      (*(code *)param_1[10])(puVar16);
      local_320 = local_320 + -4;
      local_324 = (ushort *)((int)local_324 - 4);
      if ((int)local_324 < 0) break;
      puVar12 = (uint *)*param_1;
    }
  }
  iVar14 = 2;
  do {
    iVar15 = 5;
    do {
      puVar12 = puVar17;
      puVar5 = puVar21;
      (*(code *)param_1[9])(puVar16);
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    local_320 = (ushort *)(((uVar1 - 1) - iVar14 & 0xfffffffc) + iVar14);
    if (-1 < (int)local_320) {
      local_324 = auStack_2c8 + (int)local_320;
      do {
        pbVar18 = (byte *)(int)(short)*local_324;
        uVar7 = (uint)(*local_324 >> 0xf);
        iVar15 = *param_1;
        if (iVar15 * 8 != 0) {
          uVar19 = (uint)pbVar18 ^ (int)pbVar18 >> 0x1f;
          uVar11 = 0;
          pbVar8 = (byte *)(param_1[0xb] + -1 + (iVar15 + iVar15 * ((int)local_320 >> 2) * 0x10) * 8
                           );
          do {
            uVar13 = uVar11 ^ (int)((uVar19 + uVar7) * 0x10000) >> 0x11;
            pbVar6 = pbVar8 + iVar15 * -8;
            bVar3 = (char)((byte)(uVar13 - 1 >> 0x18) & ~(byte)(uVar13 >> 0x18)) >> 7;
            pbVar18 = (byte *)((int)&uStack_114 + 3);
            do {
              pbVar6 = pbVar6 + 1;
              pbVar18 = pbVar18 + 1;
              *pbVar18 = *pbVar18 & ~bVar3 | *pbVar6 & bVar3;
            } while (pbVar6 != pbVar8);
            uVar11 = uVar11 + 1;
            pbVar8 = pbVar8 + iVar15 * 8;
          } while (uVar11 != 0x10);
        }
        (*(code *)param_1[6])(local_330,puVar20,pbVar18,(code *)param_1[6],puVar12,puVar5);
        iVar15 = *param_1;
        if (iVar15 != 0) {
          puVar5 = &uStack_318;
          uVar7 = (int)(uVar7 - 1 & ~uVar7) >> 0x1f;
          puVar12 = puVar20;
          do {
            puVar5 = puVar5 + 1;
            puVar9 = puVar12 + 1;
            *puVar12 = *puVar5 & ~uVar7 | *puVar12 & uVar7;
            puVar12 = puVar9;
          } while (puVar9 != puVar20 + iVar15);
        }
        puVar12 = puVar17;
        puVar5 = puVar21;
        (*(code *)param_1[10])(puVar16);
        local_324 = local_324 + -4;
        local_320 = (ushort *)((int)local_320 - 4);
      } while (local_320 != (ushort *)~((uint)~(iVar14 * 0x40000000) >> 0x1e));
    }
    bVar22 = iVar14 != 0;
    iVar14 = iVar14 + -1;
  } while (bVar22);
  iVar14 = param_1[0xb];
  (*(code *)param_1[6])(local_330,iVar14 + *param_1 * 4);
  (*(code *)param_1[10])
            (local_110,puVar20,puVar4,puVar16,puVar17,puVar21,1,iVar14,local_330,param_1[8]);
  iVar14 = *param_1;
  if (iVar14 != 0) {
    puVar16 = &uStack_114;
    puVar17 = auStack_1f8;
    uVar1 = (int)((*param_5 & 1) - 1 & ~(*param_5 & 1)) >> 0x1f;
    uVar7 = ~uVar1;
    puVar12 = param_2;
    do {
      puVar16 = puVar16 + 1;
      puVar17 = puVar17 + 1;
      puVar21 = puVar12 + 1;
      *puVar12 = *puVar16 & uVar1 | *puVar17 & uVar7;
      puVar12 = puVar21;
    } while (puVar21 != param_2 + iVar14);
    iVar14 = *param_1;
    if (iVar14 != 0) {
      puVar17 = auStack_1f8 + (int)puVar10;
      puVar16 = (uint *)(param_3 + -4);
      puVar12 = puVar20;
      do {
        puVar21 = puVar12 + 1;
        puVar17 = puVar17 + 1;
        puVar16 = puVar16 + 1;
        *puVar16 = *puVar17 & uVar7 | *puVar12 & uVar1;
        puVar12 = puVar21;
      } while (puVar20 + iVar14 != puVar21);
      iVar14 = *param_1;
      if (iVar14 != 0) {
        puVar10 = auStack_1f8 + (int)puVar10 * 2;
        puVar16 = (uint *)(param_4 + -4);
        puVar12 = puVar4;
        do {
          puVar17 = puVar12 + 1;
          puVar10 = puVar10 + 1;
          puVar16 = puVar16 + 1;
          *puVar16 = *puVar10 & uVar7 | *puVar12 & uVar1;
          puVar12 = puVar17;
        } while (puVar4 + iVar14 != puVar17);
      }
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

