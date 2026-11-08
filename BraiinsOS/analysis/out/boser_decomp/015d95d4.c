// FUN_015d95d4 @ 015d95d4 size=1344 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_015d95d4(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar17 = param_1[3];
  uVar3 = uVar17 + param_2;
  if (CARRY4(uVar17,param_2)) {
LAB_015d9aec:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar19 = param_1[1];
  uVar11 = uVar19 + 1;
  uVar8 = uVar19;
  if (7 < uVar19) {
    uVar8 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
  }
  if (uVar8 >> 1 < uVar3) {
    if (uVar3 < uVar8 + 1) {
      uVar3 = uVar8 + 1;
    }
    if (uVar3 < 0xf) {
      iVar13 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar13 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_015d9aec;
      iVar13 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar13 = (0xffffffffU >> LZCOUNT((iVar13 + (uVar3 * 8 - iVar13 >> 1) >> 2) - 1)) + 1;
    }
    FUN_014533a8(&local_34,4,4,iVar13);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    local_48 = 4;
    local_4c = 4;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    uVar3 = 0;
    local_50 = param_1 + 4;
    if (uVar17 != 0) {
      puVar12 = (uint *)*param_1;
      iVar13 = 0;
      uVar8 = ~*puVar12 & 0x80808080;
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar3 = uVar17;
      puVar10 = puVar12;
      do {
        if (uVar8 == 0) {
          do {
            puVar10 = puVar10 + 1;
            iVar13 = iVar13 + 4;
          } while ((*puVar10 & 0x80808080) == 0x80808080);
          uVar8 = *puVar10 & 0x80808080 ^ 0x80808080;
        }
        uVar19 = iVar13 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                         (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3);
        uVar11 = FUN_015f7484(uVar4,uVar5,uVar6,uVar7,*(undefined4 *)(puVar12[-1 - uVar19] + 4),
                              *(undefined4 *)(puVar12[-1 - uVar19] + 8));
        uVar9 = local_30 & uVar11;
        uVar15 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
        if (uVar15 == 0) {
          iVar18 = 4;
          do {
            uVar9 = uVar9 + iVar18;
            iVar18 = iVar18 + 4;
            uVar9 = uVar9 & local_30;
            uVar15 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
          } while (uVar15 == 0);
        }
        uVar9 = uVar9 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                       (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar9)) {
          uVar9 = *local_34 & 0x80808080;
          uVar9 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
        }
        uVar8 = uVar8 - 1 & uVar8;
        bVar2 = (byte)(uVar11 >> 0x19);
        *(byte *)((int)local_34 + uVar9) = bVar2;
        uVar3 = uVar3 - 1;
        *(byte *)((int)local_34 + (uVar9 - 4 & local_30) + 4) = bVar2;
        local_34[~uVar9] = puVar12[~uVar19];
      } while (uVar3 != 0);
      uVar3 = uVar17;
    }
    local_38 = uVar3;
    local_3c = local_2c - uVar3;
    iVar13 = 0;
    do {
      puVar10 = (uint *)param_1[iVar13];
      param_1[iVar13] = (&local_44)[iVar13];
      iVar18 = iVar13 + 1;
      (&local_44)[iVar13] = puVar10;
      iVar13 = iVar18;
    } while (iVar18 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar11 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar11 >> 2;
      if ((uVar11 & 3) != 0) {
        uVar3 = (uVar11 >> 2) + 1;
      }
      puVar10 = (uint *)*param_1;
      iVar13 = 0;
      do {
        puVar10[-iVar13] = (~(puVar10[-iVar13] >> 7) & 0x1010101) + (puVar10[-iVar13] | 0x7f7f7f7f);
        iVar13 = iVar13 + -1;
      } while (-iVar13 != uVar3);
      if (uVar11 < 4) {
        FUN_01bed864(puVar10 + 1,puVar10);
      }
      else {
        *(uint *)((int)puVar10 + uVar11) = *puVar10;
      }
      uVar4 = *param_3;
      uVar7 = param_3[3];
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar3 = 0;
      uVar17 = uVar19;
      do {
        puVar12 = puVar10;
        if (*(char *)((int)puVar10 + uVar3) == -0x80) {
          uVar8 = ~uVar3;
          puVar16 = puVar10;
          while( true ) {
            uVar9 = FUN_015f7484(uVar4,uVar5,uVar6,uVar7,*(undefined4 *)(puVar16[-1 - uVar3] + 4),
                                 *(undefined4 *)(puVar16[-1 - uVar3] + 8));
            uVar15 = uVar17 & uVar9;
            uVar14 = *(uint *)((int)puVar16 + uVar15) & 0x80808080;
            uVar11 = uVar15;
            if (uVar14 == 0) {
              iVar13 = 4;
              do {
                uVar11 = uVar11 + iVar13 & uVar17;
                iVar13 = iVar13 + 4;
                uVar14 = *(uint *)((int)puVar16 + uVar11) & 0x80808080;
              } while (uVar14 == 0);
            }
            uVar11 = uVar11 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                     uVar17;
            if (-1 < *(char *)((int)puVar16 + uVar11)) {
              uVar11 = *puVar16 & 0x80808080;
              uVar11 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                     (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar9 >> 0x18);
            if (((uVar11 - uVar15 ^ uVar3 - uVar15) & uVar17) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar3) = bVar2;
              puVar12 = (uint *)*param_1;
              *(byte *)((int)puVar12 + (uVar17 & uVar3 - 4) + 4) = bVar2;
              goto LAB_015d9818;
            }
            cVar1 = *(char *)((int)puVar16 + uVar11);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar16 + uVar11) = bVar2;
            puVar12 = (uint *)*param_1;
            *(byte *)((int)puVar12 + (uVar11 - 4 & uVar17) + 4) = bVar2;
            uVar11 = ~uVar11;
            if (cVar1 == -1) break;
            uVar17 = puVar10[uVar8];
            puVar10[uVar8] = puVar16[uVar11];
            puVar16[uVar11] = uVar17;
            puVar16 = (uint *)*param_1;
            uVar17 = param_1[1];
          }
          uVar17 = param_1[1];
          *(undefined1 *)((int)puVar12 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar12 + (uVar17 & uVar3 - 4) + 4) = 0xff;
          puVar16[uVar11] = puVar10[uVar8];
        }
LAB_015d9818:
        bVar20 = uVar3 != uVar19;
        uVar3 = uVar3 + 1;
        puVar10 = puVar12;
      } while (bVar20);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}

