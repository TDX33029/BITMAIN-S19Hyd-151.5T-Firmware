// FUN_01412ce8 @ 01412ce8 size=1340 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_01412ce8(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar13 = param_1[3];
  uVar3 = iVar13 + 1;
  if (iVar13 == -1) {
LAB_014131fc:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar15 = param_1[1];
  uVar8 = uVar15 + 1;
  uVar5 = uVar15;
  if (7 < uVar15) {
    uVar5 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
  }
  if (uVar5 >> 1 < uVar3) {
    if (uVar3 < uVar5 + 1) {
      uVar3 = uVar5 + 1;
    }
    if (uVar3 < 0xf) {
      iVar9 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar9 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_014131fc;
      iVar9 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar9 = (0xffffffffU >> LZCOUNT((iVar9 + (uVar3 * 8 - iVar9 >> 1) >> 2) - 1)) + 1;
    }
    FUN_01412c2c(&local_34,0x18,4,iVar9);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    iVar9 = 0;
    local_3c = local_2c;
    local_40 = local_30;
    local_44 = local_34;
    if (iVar13 != 0) {
      puVar11 = (uint *)*param_1;
      iVar14 = 0;
      uVar3 = ~*puVar11 & 0x80808080;
      puVar7 = puVar11;
      iVar9 = iVar13;
      do {
        if (uVar3 == 0) {
          do {
            puVar7 = puVar7 + 1;
            iVar14 = iVar14 + 4;
          } while ((*puVar7 & 0x80808080) == 0x80808080);
          uVar3 = *puVar7 & 0x80808080 ^ 0x80808080;
        }
        iVar6 = iVar14 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar5 = local_30 & puVar11[iVar6 * -6 + -4];
        uVar8 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
        if (uVar8 == 0) {
          iVar17 = 4;
          do {
            uVar5 = uVar5 + iVar17;
            iVar17 = iVar17 + 4;
            uVar5 = uVar5 & local_30;
            uVar8 = *(uint *)((int)local_34 + uVar5) & 0x80808080;
          } while (uVar8 == 0);
        }
        uVar5 = uVar5 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                       (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & local_30
        ;
        if (-1 < *(char *)((int)local_34 + uVar5)) {
          uVar5 = *local_34 & 0x80808080;
          uVar5 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        uVar8 = uVar5 - 4 & local_30;
        bVar2 = (byte)(puVar11[iVar6 * -6 + -4] >> 0x19);
        *(byte *)((int)local_34 + uVar5) = bVar2;
        iVar13 = iVar13 + -1;
        *(byte *)((int)local_34 + uVar8 + 4) = bVar2;
        FUN_01bed4e2(local_34 + uVar5 * -6 + -6,puVar11 + iVar6 * -6 + -6,0x18,uVar8,local_2c,iVar9)
        ;
      } while (iVar13 != 0);
    }
    local_38 = iVar9;
    local_3c = local_2c - iVar9;
    iVar13 = 0;
    do {
      puVar7 = (uint *)param_1[iVar13];
      param_1[iVar13] = (&local_44)[iVar13];
      iVar9 = iVar13 + 1;
      (&local_44)[iVar13] = puVar7;
      iVar13 = iVar9;
    } while (iVar9 != 4);
    if ((local_40 != 0) && (iVar13 = local_40 * 0x18 + 0x18, local_40 + iVar13 != -5)) {
      thunk_FUN_01be4678((int)local_44 - iVar13);
    }
  }
  else {
    if (uVar8 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar8 >> 2;
      if ((uVar8 & 3) != 0) {
        uVar3 = (uVar8 >> 2) + 1;
      }
      puVar7 = (uint *)*param_1;
      iVar13 = 0;
      do {
        puVar7[-iVar13] = (~(puVar7[-iVar13] >> 7) & 0x1010101) + (puVar7[-iVar13] | 0x7f7f7f7f);
        iVar13 = iVar13 + -1;
      } while (-iVar13 != uVar3);
      if (uVar8 < 4) {
        FUN_01bed864(puVar7 + 1,puVar7);
      }
      else {
        *(uint *)((int)puVar7 + uVar8) = *puVar7;
      }
      iVar13 = 0;
      uVar3 = 0;
      uVar5 = uVar15;
      do {
        puVar11 = puVar7;
        if (*(char *)((int)puVar7 + uVar3) == -0x80) {
          puVar12 = puVar7;
          while( true ) {
            uVar4 = uVar5 & puVar12[uVar3 * -6 + -4];
            uVar16 = *(uint *)((int)puVar12 + uVar4) & 0x80808080;
            uVar8 = uVar4;
            if (uVar16 == 0) {
              iVar9 = 4;
              do {
                uVar8 = uVar8 + iVar9 & uVar5;
                uVar16 = *(uint *)((int)puVar12 + uVar8) & 0x80808080;
                iVar9 = iVar9 + 4;
              } while (uVar16 == 0);
            }
            uVar8 = uVar8 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                    uVar5;
            if (-1 < *(char *)((int)puVar12 + uVar8)) {
              uVar8 = *puVar12 & 0x80808080;
              uVar8 = (uint)LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
            }
            bVar2 = (byte)(puVar12[uVar3 * -6 + -4] >> 0x18);
            if (((uVar8 - uVar4 ^ uVar3 - uVar4) & uVar5) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar12 + uVar3) = bVar2;
              puVar11 = (uint *)*param_1;
              *(byte *)((int)puVar11 + (uVar5 & uVar3 - 4) + 4) = bVar2;
              goto LAB_01412f20;
            }
            cVar1 = *(char *)((int)puVar12 + uVar8);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar12 + uVar8) = bVar2;
            puVar11 = (uint *)*param_1;
            *(byte *)((int)puVar11 + (uVar8 - 4 & uVar5) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar9 = -0x18;
            do {
              uVar10 = *(undefined4 *)((int)puVar7 + iVar9 + iVar13);
              *(undefined4 *)((int)puVar7 + iVar9 + iVar13) =
                   *(undefined4 *)((int)puVar12 + iVar9 + uVar8 * -0x18);
              *(undefined4 *)((int)puVar12 + iVar9 + uVar8 * -0x18) = uVar10;
              iVar9 = iVar9 + 4;
            } while (iVar9 != 0);
            puVar12 = (uint *)*param_1;
            uVar5 = param_1[1];
          }
          *(undefined1 *)((int)puVar11 + uVar3) = 0xff;
          uVar5 = param_1[1];
          *(undefined1 *)((int)puVar11 + (uVar5 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar12 + uVar8 * -6 + -6,puVar7 + (uVar3 + 1) * -6,0x18);
        }
LAB_01412f20:
        iVar13 = iVar13 + -0x18;
        bVar18 = uVar3 != uVar15;
        puVar7 = puVar11;
        uVar3 = uVar3 + 1;
      } while (bVar18);
      uVar3 = param_1[1];
      iVar13 = param_1[3];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - iVar13;
  }
  return 0x80000001;
}

