// FUN_009de848 @ 009de848 size=980 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_009de848(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  int extraout_r3;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint *puStack_30;
  uint *local_2c;
  
  uVar17 = FUN_016a0564(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2);
  puVar15 = (undefined4 *)(param_1 + 0x118);
  if ((int)uVar17 == 0) {
    uVar17 = thunk_FUN_016de0ee(0,*(undefined4 *)(param_1 + 0x11c),*puVar15,0x80);
    uVar7 = (uint)((ulonglong)uVar17 >> 0x20);
    puVar11 = (uint *)((int)uVar17 + extraout_r3);
    uVar12 = *puVar11;
    uVar14 = puVar11[1];
    uVar13 = extraout_r2_00;
    if ((extraout_r2_00 & uVar7) == 0xffffffff) goto LAB_009dea50;
  }
  else {
    if ((*(char *)(param_1 + 0x110) == '\0') ||
       (uVar13 = *(uint *)(param_2 + 8), uVar13 < *(uint *)(param_1 + 0x20))) {
LAB_009de9bc:
      if (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 0x10)) {
        uVar17 = thunk_FUN_016de0ee(*(uint *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x11c),
                                    *puVar15);
        uVar7 = (uint)((ulonglong)uVar17 >> 0x20);
        if ((extraout_r2_01 & uVar7) == 0xffffffff) {
          return 1;
        }
        puVar11 = (uint *)((int)uVar17 + 0x80);
        uVar12 = *puVar11;
        uVar14 = *(uint *)((int)uVar17 + 0x84);
        uVar13 = extraout_r2_01;
        goto LAB_009dea48;
      }
      uVar7 = FUN_016a0564(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_2);
      uVar16 = uVar7;
    }
    else {
      uVar18 = CONCAT44((int)((ulonglong)uVar17 >> 0x20),(uint)*(byte *)(param_2 + 0x3c));
      if ((*(byte *)(param_2 + 0x3c) & 2) == 0) goto LAB_009de8f8;
      uVar7 = *(uint *)(param_1 + 0x60);
      puVar11 = (uint *)(param_1 + 0x60);
      if (uVar7 < 0x3ffffffe) {
        if (*puVar11 != uVar7) goto LAB_009deaa0;
        bVar5 = (bool)hasExclusiveAccess(puVar11);
        if (bVar5) {
          *puVar11 = uVar7 + 1;
          DataMemoryBarrier(0xb);
          if (*(char *)(param_1 + 0x68) == '\0') goto LAB_009deab8;
          goto LAB_009de8d4;
        }
      }
      while( true ) {
        FUN_015bebb8(puVar11);
        if (*(char *)(param_1 + 0x68) == '\0') {
LAB_009deab8:
          if (*(int *)(param_1 + 0x7c) != 0) {
            iVar8 = *(int *)(param_2 + 0x24);
            uVar12 = FUN_009ee0ac(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                                  *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                                  iVar8,*(undefined4 *)(param_2 + 0x28));
            uVar7 = uVar12 >> 0x19;
            local_50 = 0;
            while( true ) {
              uVar12 = *(uint *)(param_1 + 0x74) & uVar12;
              uVar16 = *(uint *)(*(int *)(param_1 + 0x70) + uVar12);
              uVar14 = uVar16 ^ uVar7 * 0x1010101;
              uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
              while (uVar14 != 0) {
                uVar1 = uVar14 >> 8;
                uVar2 = uVar14 >> 0x10;
                uVar3 = uVar14 >> 0x18;
                uVar4 = uVar14 << 0x18;
                uVar14 = uVar14 - 1 & uVar14;
                if (iVar8 == *(int *)(*(int *)(param_1 + 0x70) + -0x18 +
                                     (uVar12 + ((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 |
                                                              (uVar2 & 0xff) << 8 | uVar3) >> 3) &
                                     *(uint *)(param_1 + 0x74)) * -0x18)) {
                  DataMemoryBarrier(0xb);
                  do {
                    uVar13 = *puVar11;
                    bVar5 = (bool)hasExclusiveAccess(puVar11);
                  } while (!bVar5);
                  *puVar11 = uVar13 - 1;
                  uVar7 = uVar13 - 1 & 0xbfffffff;
                  uVar16 = 1;
                  if (uVar7 == 0x80000000) {
                    uVar7 = FUN_015e9814(puVar11);
                  }
                  goto LAB_009dea04;
                }
              }
              if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
              local_50 = local_50 + 4;
              uVar12 = uVar12 + local_50;
            }
          }
          DataMemoryBarrier(0xb);
          do {
            uVar7 = *puVar11 - 1;
            bVar5 = (bool)hasExclusiveAccess(puVar11);
          } while (!bVar5);
          *puVar11 = uVar7;
        }
        else {
LAB_009de8d4:
          DataMemoryBarrier(0xb);
          do {
            uVar7 = *puVar11 - 1;
            bVar5 = (bool)hasExclusiveAccess(puVar11);
          } while (!bVar5);
          *puVar11 = uVar7;
        }
        uVar18 = CONCAT44(uVar7,uVar7) & 0xffffffffbfffffff;
        if ((uVar7 & 0xbfffffff) == 0x80000000) {
          uVar18 = FUN_015e9814(puVar11);
        }
LAB_009de8f8:
        iVar8 = thunk_FUN_016de0ee((int)uVar18,(int)(uVar18 >> 0x20),0x2a8);
        puVar9 = (uint *)(param_1 + 0x90);
        puVar11 = (uint *)(iVar8 + extraout_r2);
        if ((*puVar11 & 1) == 0) {
          FUN_0162b20c(&local_38);
          puVar11 = puVar9;
        }
        else {
          local_38 = puVar11[1];
          local_34 = puVar11[2];
          puStack_30 = (uint *)puVar11[3];
          local_2c = (uint *)puVar11[4];
          puVar11 = puStack_30;
        }
        uVar7 = puVar9[local_34];
        DataMemoryBarrier(0xb);
        cVar6 = '\0';
        puVar10 = local_2c;
        if (uVar7 != 0) {
          puVar10 = (uint *)(uVar7 + (int)local_2c * 0x14);
          cVar6 = (char)puVar10[4];
        }
        if (uVar7 == 0 || cVar6 == '\0') {
          local_40 = 4;
          local_3c = 0;
          local_44 = 0;
          local_48 = 0;
          puVar10 = (uint *)FUN_009f14cc(puVar9,&local_38,&local_48);
          uVar7 = *puVar10;
        }
        else {
          uVar7 = *puVar10;
        }
        if (uVar7 < 0x7fffffff) break;
        FUN_00fb71b0(&DAT_0186b7fc);
LAB_009deaa0:
        ClearExclusiveLocal();
      }
      iVar8 = puVar10[3] << 2;
      *puVar10 = uVar7 + 1;
      puVar11 = (uint *)puVar10[2];
      do {
        if (iVar8 == 0) {
          *puVar10 = uVar7;
          goto LAB_009de9bc;
        }
        uVar12 = *puVar11;
        iVar8 = iVar8 + -4;
        puVar11 = puVar11 + 1;
      } while (uVar13 < uVar12);
      *puVar10 = uVar7;
      uVar16 = 1;
    }
LAB_009dea04:
    uVar17 = thunk_FUN_016de0ee(uVar7,*(undefined4 *)(param_1 + 0x11c),*puVar15);
    uVar7 = (uint)((ulonglong)uVar17 >> 0x20);
    iVar8 = (int)uVar17;
    if ((extraout_r2_02 & uVar7) == 0xffffffff) {
      return 1;
    }
    puVar11 = (uint *)(iVar8 + 0x80);
    uVar12 = *puVar11;
    uVar14 = *(uint *)(iVar8 + 0x84);
    uVar13 = extraout_r2_02;
    if (uVar16 != 0) {
      *puVar11 = uVar12 & ~extraout_r2_02;
      *(uint *)(iVar8 + 0x84) = uVar14 & ~uVar7;
      return 1;
    }
  }
LAB_009dea48:
  uVar12 = uVar12 | uVar13;
  uVar14 = uVar14 | uVar7;
LAB_009dea50:
  *puVar11 = uVar12;
  puVar11[1] = uVar14;
  return 1;
}

