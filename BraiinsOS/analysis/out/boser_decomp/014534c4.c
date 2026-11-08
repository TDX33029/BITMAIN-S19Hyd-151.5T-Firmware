// FUN_014534c4 @ 014534c4 size=1416 calls_out=7 calls_in=2
// strings: Hash table capacity overflow

uint FUN_014534c4(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  uint local_54;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  local_54 = param_1[3];
  uVar3 = local_54 + param_2;
  if (CARRY4(local_54,param_2)) {
LAB_01453a24:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar15 = param_1[1];
  uVar9 = uVar15 + 1;
  uVar5 = uVar15;
  if (7 < uVar15) {
    uVar5 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar5 >> 1 < uVar3) {
    if (uVar3 < uVar5 + 1) {
      uVar3 = uVar5 + 1;
    }
    if (uVar3 < 0xf) {
      iVar11 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar11 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01453a24;
      iVar11 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar11 = (0xffffffffU >> LZCOUNT((iVar11 + (uVar3 * 8 - iVar11 >> 1) >> 2) - 1)) + 1;
    }
    FUN_014533a8(&local_34,0x48,4,iVar11);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_38 = local_28;
    local_40 = local_30;
    iVar11 = 0;
    local_3c = local_2c;
    local_44 = local_34;
    if (local_54 != 0) {
      puVar16 = (uint *)*param_1;
      iVar11 = 0;
      uVar3 = ~*puVar16 & 0x80808080;
      puVar8 = puVar16;
      do {
        if (uVar3 == 0) {
          do {
            puVar8 = puVar8 + 1;
            iVar11 = iVar11 + 4;
          } while ((*puVar8 & 0x80808080) == 0x80808080);
          uVar3 = *puVar8 & 0x80808080 ^ 0x80808080;
        }
        iVar7 = iVar11 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar5 = FUN_01453ee8(param_3,param_4,param_5,param_6,puVar16 + iVar7 * -0x12 + -0x12);
        uVar9 = local_30 & uVar5;
        uVar15 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
        if (uVar15 == 0) {
          iVar10 = 4;
          do {
            uVar9 = uVar9 + iVar10;
            iVar10 = iVar10 + 4;
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
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar5 >> 0x19);
        *(byte *)((int)local_34 + uVar9) = bVar2;
        *(byte *)((int)local_34 + (uVar9 - 4 & local_30) + 4) = bVar2;
        local_54 = local_54 - 1;
        FUN_01bed4e2(local_34 + uVar9 * -0x12 + -0x12,puVar16 + iVar7 * -0x12 + -0x12,0x48);
      } while (local_54 != 0);
      iVar11 = param_1[3];
    }
    local_38 = iVar11;
    local_3c = local_2c - iVar11;
    iVar11 = 0;
    do {
      puVar8 = (uint *)param_1[iVar11];
      param_1[iVar11] = (&local_44)[iVar11];
      iVar7 = iVar11 + 1;
      (&local_44)[iVar11] = puVar8;
      iVar11 = iVar7;
    } while (iVar7 != 4);
    if ((local_40 != 0) && (iVar11 = local_40 * 0x48 + 0x48, local_40 + iVar11 != -5)) {
      thunk_FUN_01be4678((int)local_44 - iVar11);
    }
  }
  else {
    if (uVar9 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar9 >> 2;
      if ((uVar9 & 3) != 0) {
        uVar3 = (uVar9 >> 2) + 1;
      }
      puVar8 = (uint *)*param_1;
      iVar11 = 0;
      do {
        puVar8[-iVar11] = (~(puVar8[-iVar11] >> 7) & 0x1010101) + (puVar8[-iVar11] | 0x7f7f7f7f);
        iVar11 = iVar11 + -1;
      } while (-iVar11 != uVar3);
      if (uVar9 < 4) {
        FUN_01bed864(puVar8 + 1,puVar8);
      }
      else {
        *(uint *)((int)puVar8 + uVar9) = *puVar8;
      }
      iVar11 = 0;
      uVar3 = uVar15;
      uVar5 = 0;
      do {
        puVar16 = puVar8;
        if (*(char *)((int)puVar8 + uVar5) == -0x80) {
          puVar14 = puVar8;
          while( true ) {
            uVar4 = FUN_01453ee8(param_3,param_4,param_5,param_6,puVar14 + uVar5 * -0x12 + -0x12);
            uVar6 = uVar3 & uVar4;
            uVar12 = *(uint *)((int)puVar14 + uVar6) & 0x80808080;
            uVar9 = uVar6;
            if (uVar12 == 0) {
              iVar7 = 4;
              do {
                uVar9 = uVar9 + iVar7 & uVar3;
                iVar7 = iVar7 + 4;
                uVar12 = *(uint *)((int)puVar14 + uVar9) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar9 = uVar9 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                    uVar3;
            if (-1 < *(char *)((int)puVar14 + uVar9)) {
              uVar9 = *puVar14 & 0x80808080;
              uVar9 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar4 >> 0x18);
            if (((uVar9 - uVar6 ^ uVar5 - uVar6) & uVar3) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar14 + uVar5) = bVar2;
              puVar16 = (uint *)*param_1;
              *(byte *)((int)puVar16 + (uVar3 & uVar5 - 4) + 4) = bVar2;
              goto LAB_01453720;
            }
            cVar1 = *(char *)((int)puVar14 + uVar9);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar14 + uVar9) = bVar2;
            puVar16 = (uint *)*param_1;
            *(byte *)((int)puVar16 + (uVar9 - 4 & uVar3) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar7 = -0x48;
            do {
              uVar13 = *(undefined4 *)((int)puVar8 + iVar7 + iVar11);
              *(undefined4 *)((int)puVar8 + iVar7 + iVar11) =
                   *(undefined4 *)((int)puVar14 + iVar7 + uVar9 * -0x48);
              *(undefined4 *)((int)puVar14 + iVar7 + uVar9 * -0x48) = uVar13;
              iVar7 = iVar7 + 4;
            } while (iVar7 != 0);
            puVar14 = (uint *)*param_1;
            uVar3 = param_1[1];
          }
          *(undefined1 *)((int)puVar16 + uVar5) = 0xff;
          uVar3 = param_1[1];
          *(undefined1 *)((int)puVar16 + (uVar3 & uVar5 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar14 + uVar9 * -0x12 + -0x12,puVar8 + (uVar5 + 1) * -0x12,0x48);
        }
LAB_01453720:
        iVar11 = iVar11 + -0x48;
        bVar17 = uVar5 != uVar15;
        puVar8 = puVar16;
        uVar5 = uVar5 + 1;
      } while (bVar17);
      uVar3 = param_1[1];
      local_54 = param_1[3];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - local_54;
  }
  return 0x80000001;
}

