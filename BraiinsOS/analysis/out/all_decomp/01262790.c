// FUN_01262790 @ 01262790 size=1932 calls_out=11 calls_in=2
// strings: 

int * FUN_01262790(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint local_7c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  uVar13 = *(uint *)(param_1 + 8);
  if (uVar13 < 0x7fffffff) {
    puVar21 = (uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 8) = uVar13 + 1;
    if (*(int *)(param_1 + 0x1c) != 0) {
      local_2c = *(uint *)(param_1 + 0x24);
      local_38 = *(uint *)(param_1 + 0x28);
      uStack_34 = *(uint *)(param_1 + 0x2c);
      local_48 = *(int *)(param_1 + 0x30);
      uStack_30 = *puVar21;
      local_40 = *(undefined4 *)(param_1 + 0x38);
      local_44 = *(undefined4 *)(param_1 + 0x34);
      uStack_3c = *(undefined4 *)(param_1 + 0x3c);
      FUN_011df94c(&local_48,param_2);
      uVar7 = local_38 ^ 0xff;
      iVar20 = *(int *)(param_1 + 0x10);
      uVar11 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 | (uStack_34 >> 0x10 & 0xff) << 8
               | uStack_34 >> 0x18;
      lVar4 = (ulonglong)uVar11 * 0xb36a80d2;
      uVar15 = (uint)lVar4;
      uVar11 = (uVar7 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18) * -0x4c957f2e +
               uVar11 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
      uVar12 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
               uVar15 >> 0x18) ^
               uStack_34 * 0x2df45158 +
               uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
      uVar14 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
               local_2c >> 0x18;
      uVar15 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
      lVar4 = (ulonglong)uVar14 * (ulonglong)uVar15;
      uVar7 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
              uVar12 >> 0x18;
      lVar5 = (ulonglong)~uStack_30 * (ulonglong)uVar7;
      uVar11 = (uint)lVar5;
      uVar7 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
              uVar15 >> 0x18) * ~uStack_30 + uVar7 * ~local_2c + (int)((ulonglong)lVar5 >> 0x20);
      uVar16 = *(uint *)(param_1 + 0x14);
      uVar12 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18) ^
               uVar12 * uVar14 +
               uVar15 * (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 |
                         (uStack_30 >> 0x10 & 0xff) << 8 | uStack_30 >> 0x18) +
               (int)((ulonglong)lVar4 >> 0x20);
      uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18) ^ (uint)lVar4;
      uVar11 = uVar12;
      if ((uVar15 & 0x20) != 0) {
        uVar11 = uVar7;
        uVar7 = uVar12;
      }
      uVar11 = uVar7 << (uVar15 & 0x1f) | (uVar11 >> 1) >> (~uVar15 & 0x1f);
      uVar7 = uVar11 >> 0x19;
      iVar19 = 0;
      while( true ) {
        uVar11 = uVar16 & uVar11;
        uVar12 = *(uint *)(iVar20 + uVar11);
        uVar15 = uVar12 ^ uVar7 * 0x1010101;
        for (uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff; uVar15 != 0;
            uVar15 = uVar15 - 1 & uVar15) {
          uVar14 = uVar11 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                   uVar16;
          piVar8 = (int *)(iVar20 + -0x18 + uVar14 * -0x18);
          if ((param_3 == piVar8[1]) &&
             (iVar9 = thunk_FUN_016dd50a(param_2,*piVar8 + 8), iVar9 == 0)) {
            iVar20 = iVar20 + uVar14 * -0x18;
            piVar8 = *(int **)(iVar20 + -0x10);
            do {
              iVar19 = *piVar8;
              bVar3 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar3);
            *piVar8 = iVar19 + 1;
            if (-1 < iVar19) {
              piVar8 = *(int **)(iVar20 + -0x10);
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
              return piVar8;
            }
            goto LAB_01262eec;
          }
          local_7c = uVar12;
        }
        if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
        iVar19 = iVar19 + 4;
        uVar11 = uVar11 + iVar19;
      }
    }
    *(uint *)(param_1 + 8) = uVar13;
    FUN_012391d8(&local_48,param_2);
    uVar6 = local_44;
    iVar20 = local_48;
    if (local_48 == -0x7fffffff) {
      return (int *)0x0;
    }
    if (local_48 == -0x80000000) {
      uVar23 = FUN_011e1508(local_44,local_40);
    }
    else {
      uVar23 = FUN_011e1508(local_44,local_40);
      if (iVar20 != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
    }
    piVar8 = (int *)uVar23;
    if (*(int *)(param_1 + 8) == 0) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar24 = FUN_011e1508(param_2,param_3);
      uVar13 = (uint)((ulonglong)uVar24 >> 0x20);
      piVar10 = (int *)uVar24;
      do {
        iVar20 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar20 + 1;
      if (iVar20 < 0) {
LAB_01262eec:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1262eec);
        (*pcVar1)();
      }
      bVar3 = false;
      local_40 = *(undefined4 *)(param_1 + 0x38);
      uStack_3c = *(undefined4 *)(param_1 + 0x3c);
      local_38 = *(uint *)(param_1 + 0x28);
      uStack_34 = *(uint *)(param_1 + 0x2c);
      local_48 = *(int *)(param_1 + 0x30);
      uStack_30 = *puVar21;
      local_2c = *(uint *)(param_1 + 0x24);
      local_44 = *(undefined4 *)(param_1 + 0x34);
      FUN_011df94c(&local_48,piVar10 + 2,uVar13);
      uVar7 = local_38 ^ 0xff;
      uVar11 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 | (uStack_34 >> 0x10 & 0xff) << 8
               | uStack_34 >> 0x18;
      lVar4 = (ulonglong)uVar11 * 0xb36a80d2;
      uVar15 = (uint)lVar4;
      uVar15 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
               uVar15 >> 0x18) ^
               uStack_34 * 0x2df45158 +
               uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
      uVar12 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
               uVar15 >> 0x18;
      lVar5 = (ulonglong)~uStack_30 * (ulonglong)uVar12;
      uVar16 = (uint)lVar5;
      uVar11 = (uVar7 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18) * -0x4c957f2e +
               uVar11 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
      uVar14 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
      uVar11 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
               local_2c >> 0x18;
      uVar7 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
              uVar14 >> 0x18) * ~uStack_30 + uVar12 * ~local_2c + (int)((ulonglong)lVar5 >> 0x20);
      lVar4 = (ulonglong)uVar11 * (ulonglong)uVar14;
      uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18) ^ (uint)lVar4;
      uVar15 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18) ^
               uVar15 * uVar11 +
               uVar14 * (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 |
                         (uStack_30 >> 0x10 & 0xff) << 8 | uStack_30 >> 0x18) +
               (int)((ulonglong)lVar4 >> 0x20);
      uVar11 = uVar15;
      if ((uVar14 & 0x20) != 0) {
        uVar11 = uVar7;
        uVar7 = uVar15;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_011aa3dc(param_1 + 0x10,puVar21);
      }
      uVar15 = *(uint *)(param_1 + 0x14);
      uVar11 = uVar7 << (uVar14 & 0x1f) | (uVar11 >> 1) >> (~uVar14 & 0x1f);
      puVar21 = *(uint **)(param_1 + 0x10);
      iVar20 = 0;
      uVar7 = uVar11;
      do {
        uVar7 = uVar15 & uVar7;
        uVar14 = *(uint *)((int)puVar21 + uVar7);
        uVar12 = uVar14 ^ (uVar11 >> 0x19) * 0x1010101;
        for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
            uVar12 = uVar12 - 1 & uVar12) {
          uVar16 = uVar7 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                          (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar15;
          if ((uVar13 == puVar21[uVar16 * -6 + -5]) &&
             (iVar19 = thunk_FUN_016dd50a(piVar10 + 2,puVar21[uVar16 * -6 + -6] + 8), iVar19 == 0))
          {
            piVar18 = (int *)puVar21[uVar16 * -6 + -4];
            uVar7 = puVar21[uVar16 * -6 + -3];
            piVar22 = (int *)puVar21[uVar16 * -6 + -1];
            piVar17 = (int *)puVar21[uVar16 * -6 + -2];
            puVar21[uVar16 * -6 + -1] = 0;
            puVar21[uVar16 * -6 + -2] = 0;
            *(undefined8 *)(puVar21 + uVar16 * -6 + -4) = uVar23;
            DataMemoryBarrier(0xb);
            do {
              iVar20 = *piVar10;
              bVar3 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar3);
            *piVar10 = iVar20 + -1;
            if (iVar20 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0143daec(piVar10,uVar13);
            }
            if (piVar18 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar20 = *piVar18;
                bVar3 = (bool)hasExclusiveAccess(piVar18);
              } while (!bVar3);
              *piVar18 = iVar20 + -1;
              if (iVar20 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0143daec(piVar18,uVar7);
              }
              if (piVar17 != (int *)0x0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar20 = *piVar17;
                  bVar3 = (bool)hasExclusiveAccess(piVar17);
                } while (!bVar3);
                *piVar17 = iVar20 + -1;
                if (iVar20 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_011e08bc(piVar17);
                }
              }
              if (piVar22 != (int *)0x0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar20 = *piVar22;
                  bVar3 = (bool)hasExclusiveAccess(piVar22);
                } while (!bVar3);
                *piVar22 = iVar20 + -1;
                if (iVar20 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_011e0b70(piVar22);
                }
              }
            }
            goto LAB_01262e54;
          }
        }
        uVar12 = uVar14 & 0x80808080;
        if (bVar3) {
LAB_01262d30:
          if ((uVar12 & uVar14 << 1) != 0) {
            uVar13 = (uint)*(char *)((int)puVar21 + local_7c);
            if (-1 < (int)uVar13) {
              uVar13 = *puVar21 & 0x80808080;
              uVar7 = LZCOUNT((*puVar21 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                              (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18);
              uVar13 = (uint)*(byte *)((int)puVar21 + (uVar7 >> 3));
              local_7c = uVar7 >> 3;
            }
            *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uVar13 & 1);
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
            bVar2 = (byte)(uVar11 >> 0x19);
            *(byte *)((int)puVar21 + local_7c) = bVar2;
            *(byte *)((int)puVar21 + (uVar15 & local_7c - 4) + 4) = bVar2;
            puVar21[local_7c * -6 + -1] = 0;
            puVar21[local_7c * -6 + -2] = 0;
            *(undefined8 *)(puVar21 + local_7c * -6 + -4) = uVar23;
            *(undefined8 *)(puVar21 + local_7c * -6 + -6) = uVar24;
LAB_01262e54:
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
            return piVar8;
          }
          bVar3 = true;
        }
        else {
          if (uVar12 != 0) {
            local_7c = uVar7 + ((uint)LZCOUNT((uVar14 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10
                                              | (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3)
                       & uVar15;
            goto LAB_01262d30;
          }
          bVar3 = false;
        }
        iVar20 = iVar20 + 4;
        uVar7 = iVar20 + uVar7;
      } while( true );
    }
  }
  else {
    FUN_00fb71b0(&DAT_0188ad68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb715c(&DAT_0188ad78);
}

