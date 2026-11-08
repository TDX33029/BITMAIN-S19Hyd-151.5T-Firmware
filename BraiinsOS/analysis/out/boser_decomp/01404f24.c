// FUN_01404f24 @ 01404f24 size=1444 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

uint FUN_01404f24(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  bool bVar21;
  int local_58;
  int *local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  local_58 = param_1[3];
  uVar3 = local_58 + 1;
  if (local_58 == -1) {
LAB_014054a4:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar16 = param_1[1];
  uVar7 = uVar16 + 1;
  uVar4 = uVar16;
  if (7 < uVar16) {
    uVar4 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar4 >> 1 < uVar3) {
    if (uVar3 < uVar4 + 1) {
      uVar3 = uVar4 + 1;
    }
    if (uVar3 < 0xf) {
      iVar9 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar9 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_014054a4;
      iVar9 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar9 = (0xffffffffU >> LZCOUNT((iVar9 + (uVar3 * 8 - iVar9 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,0x118,8,iVar9);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_40 = local_30;
    local_4c = (undefined1 *)0x118;
    local_48 = 8;
    iVar9 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    local_50 = param_1 + 4;
    if (local_58 != 0) {
      puVar20 = (uint *)*param_1;
      uVar12 = *param_2;
      iVar9 = 0;
      uVar3 = ~*puVar20 & 0x80808080;
      uVar13 = param_2[1];
      uVar14 = param_2[2];
      uVar8 = param_2[3];
      do {
        if (uVar3 == 0) {
          do {
            puVar20 = puVar20 + 1;
            iVar9 = iVar9 + 4;
          } while ((*puVar20 & 0x80808080) == 0x80808080);
          uVar3 = *puVar20 & 0x80808080 ^ 0x80808080;
        }
        uVar17 = iVar9 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar4 = FUN_013fc3fc(uVar12,uVar13,uVar14,uVar8,uVar17 * -0x118 + *param_1 + -0x118);
        uVar7 = local_30 & uVar4;
        uVar16 = *(uint *)((int)local_34 + uVar7) & 0x80808080;
        if (uVar16 == 0) {
          iVar18 = 4;
          do {
            uVar7 = uVar7 + iVar18;
            iVar18 = iVar18 + 4;
            uVar7 = uVar7 & local_30;
            uVar16 = *(uint *)((int)local_34 + uVar7) & 0x80808080;
          } while (uVar16 == 0);
        }
        uVar7 = uVar7 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                       (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar7)) {
          uVar7 = *local_34 & 0x80808080;
          uVar7 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar4 >> 0x19);
        *(byte *)((int)local_34 + uVar7) = bVar2;
        *(byte *)((int)local_34 + (uVar7 - 4 & local_30) + 4) = bVar2;
        local_58 = local_58 + -1;
        FUN_01bed4e2(local_34 + ~uVar7 * 0x46,~uVar17 * 0x118 + *param_1,0x118);
      } while (local_58 != 0);
      iVar9 = param_1[3];
    }
    local_38 = iVar9;
    local_3c = local_2c - iVar9;
    iVar9 = 0;
    do {
      puVar20 = (uint *)param_1[iVar9];
      param_1[iVar9] = (int)(&local_44)[iVar9];
      iVar18 = iVar9 + 1;
      (&local_44)[iVar9] = puVar20;
      iVar9 = iVar18;
    } while (iVar18 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar7 >> 2;
      if ((uVar7 & 3) != 0) {
        uVar3 = (uVar7 >> 2) + 1;
      }
      puVar5 = (undefined4 *)*param_1;
      iVar9 = 0;
      do {
        puVar5[-iVar9] = (~((uint)puVar5[-iVar9] >> 7) & 0x1010101) + (puVar5[-iVar9] | 0x7f7f7f7f);
        iVar9 = iVar9 + -1;
      } while (-iVar9 != uVar3);
      if (uVar7 < 4) {
        FUN_01bed864(puVar5 + 1);
      }
      else {
        *(undefined4 *)((int)puVar5 + uVar7) = *puVar5;
      }
      iVar9 = 0;
      uVar8 = *param_2;
      uVar12 = param_2[1];
      uVar13 = param_2[2];
      uVar14 = param_2[3];
      local_4c = &LAB_014054fc;
      local_48 = 0x118;
      uVar3 = 0;
      local_50 = param_1;
      do {
        iVar18 = *param_1;
        if (*(char *)(iVar18 + uVar3) == -0x80) {
          iVar19 = iVar18 + iVar9;
          iVar6 = ~uVar3 * 0x118 + iVar18;
          while( true ) {
            uVar7 = FUN_013fc3fc(uVar8,uVar12,uVar13,uVar14,uVar3 * -0x118 + iVar18 + -0x118);
            puVar20 = (uint *)*param_1;
            uVar10 = param_1[1];
            uVar17 = uVar10 & uVar7;
            uVar15 = *(uint *)((int)puVar20 + uVar17) & 0x80808080;
            uVar4 = uVar17;
            if (uVar15 == 0) {
              iVar18 = 4;
              do {
                uVar4 = uVar4 + iVar18 & uVar10;
                iVar18 = iVar18 + 4;
                uVar15 = *(uint *)((int)puVar20 + uVar4) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar4 = uVar4 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                    uVar10;
            if (-1 < *(char *)((int)puVar20 + uVar4)) {
              uVar4 = *puVar20 & 0x80808080;
              uVar4 = (uint)LZCOUNT((*puVar20 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar7 >> 0x18);
            if (((uVar4 - uVar17 ^ uVar3 - uVar17) & uVar10) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar20 + uVar3) = bVar2;
              *(byte *)(*param_1 + (uVar10 & uVar3 - 4) + 4) = bVar2;
              goto LAB_014051a8;
            }
            cVar1 = *(char *)((int)puVar20 + uVar4);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar20 + uVar4) = bVar2;
            *(byte *)(*param_1 + (uVar4 - 4 & uVar10) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar18 = -0x118;
            do {
              uVar11 = *(undefined4 *)(iVar19 + iVar18);
              *(undefined4 *)(iVar19 + iVar18) =
                   *(undefined4 *)((int)puVar20 + iVar18 + uVar4 * -0x118);
              *(undefined4 *)((int)puVar20 + iVar18 + uVar4 * -0x118) = uVar11;
              iVar18 = iVar18 + 4;
            } while (iVar18 != 0);
            iVar18 = *param_1;
          }
          uVar7 = param_1[1];
          *(undefined1 *)(*param_1 + uVar3) = 0xff;
          *(undefined1 *)(*param_1 + (uVar7 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar20 + ~uVar4 * 0x46,iVar6,0x118);
        }
LAB_014051a8:
        iVar9 = iVar9 + -0x118;
        bVar21 = uVar3 != uVar16;
        uVar3 = uVar3 + 1;
      } while (bVar21);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}

