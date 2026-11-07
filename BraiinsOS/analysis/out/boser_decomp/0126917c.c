// FUN_0126917c @ 0126917c size=1296 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_0126917c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar15 = param_1[3];
  uVar3 = iVar15 + 1;
  if (iVar15 == -1) {
LAB_01269664:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar17 = param_1[1];
  uVar9 = uVar17 + 1;
  uVar5 = uVar17;
  if (7 < uVar17) {
    uVar5 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar5 >> 1 < uVar3) {
    if (uVar3 < uVar5 + 1) {
      uVar3 = uVar5 + 1;
    }
    if (uVar3 < 0xf) {
      iVar12 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar12 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01269664;
      iVar12 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar12 = (0xffffffffU >> LZCOUNT((iVar12 + (uVar3 * 8 - iVar12 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,4,4,iVar12);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    iVar12 = 0;
    if (iVar15 != 0) {
      puVar16 = (uint *)*param_1;
      iVar18 = 0;
      uVar3 = ~*puVar16 & 0x80808080;
      puVar8 = puVar16;
      iVar12 = iVar15;
      do {
        if (uVar3 == 0) {
          do {
            puVar8 = puVar8 + 1;
            iVar18 = iVar18 + 4;
          } while ((*puVar8 & 0x80808080) == 0x80808080);
          uVar3 = *puVar8 & 0x80808080 ^ 0x80808080;
        }
        iVar7 = iVar18 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar5 = FUN_0126680c(param_3,param_4,param_5,param_6,
                             *(undefined4 *)(puVar16[-1 - iVar7] + 4),
                             *(undefined4 *)(puVar16[-1 - iVar7] + 8));
        uVar9 = local_30 & uVar5;
        uVar17 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
        if (uVar17 == 0) {
          iVar11 = 4;
          do {
            uVar9 = uVar9 + iVar11;
            iVar11 = iVar11 + 4;
            uVar9 = uVar9 & local_30;
            uVar17 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
          } while (uVar17 == 0);
        }
        uVar9 = uVar9 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                       (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar9)) {
          uVar9 = *local_34 & 0x80808080;
          uVar9 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar5 >> 0x19);
        *(byte *)((int)local_34 + uVar9) = bVar2;
        iVar12 = iVar12 + -1;
        *(byte *)((int)local_34 + (uVar9 - 4 & local_30) + 4) = bVar2;
        local_34[-1 - uVar9] = puVar16[-1 - iVar7];
      } while (iVar12 != 0);
      iVar12 = iVar15;
    }
    local_38 = iVar12;
    local_3c = local_2c - iVar12;
    iVar15 = 0;
    do {
      puVar8 = (uint *)param_1[iVar15];
      param_1[iVar15] = (&local_44)[iVar15];
      iVar12 = iVar15 + 1;
      (&local_44)[iVar15] = puVar8;
      iVar15 = iVar12;
    } while (iVar12 != 4);
    if ((local_40 != 0) && (iVar15 = local_40 * 4 + 4, local_40 + iVar15 != -5)) {
      thunk_FUN_01be4678((int)local_44 - iVar15);
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
      iVar15 = 0;
      do {
        puVar8[-iVar15] = (~(puVar8[-iVar15] >> 7) & 0x1010101) + (puVar8[-iVar15] | 0x7f7f7f7f);
        iVar15 = iVar15 + -1;
      } while (-iVar15 != uVar3);
      if (uVar9 < 4) {
        FUN_01bed864(puVar8 + 1,puVar8);
      }
      else {
        *(uint *)((int)puVar8 + uVar9) = *puVar8;
      }
      uVar3 = 0;
      uVar5 = uVar17;
      do {
        puVar16 = puVar8;
        if (*(char *)((int)puVar8 + uVar3) == -0x80) {
          uVar9 = ~uVar3;
          puVar14 = puVar8;
          while( true ) {
            uVar4 = FUN_0126680c(param_3,param_4,param_5,param_6,
                                 *(undefined4 *)(puVar14[-1 - uVar3] + 4),
                                 *(undefined4 *)(puVar14[-1 - uVar3] + 8));
            uVar6 = uVar5 & uVar4;
            uVar13 = *(uint *)((int)puVar14 + uVar6) & 0x80808080;
            uVar10 = uVar6;
            if (uVar13 == 0) {
              iVar15 = 4;
              do {
                uVar10 = uVar10 + iVar15;
                iVar15 = iVar15 + 4;
                uVar10 = uVar10 & uVar5;
                uVar13 = *(uint *)((int)puVar14 + uVar10) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar10 = uVar10 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                     uVar5;
            if (-1 < *(char *)((int)puVar14 + uVar10)) {
              uVar10 = *puVar14 & 0x80808080;
              uVar10 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar4 >> 0x18);
            if (((uVar10 - uVar6 ^ uVar3 - uVar6) & uVar5) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar14 + uVar3) = bVar2;
              puVar16 = (uint *)*param_1;
              *(byte *)((int)puVar16 + (uVar5 & uVar3 - 4) + 4) = bVar2;
              goto LAB_01269394;
            }
            cVar1 = *(char *)((int)puVar14 + uVar10);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar14 + uVar10) = bVar2;
            puVar16 = (uint *)*param_1;
            *(byte *)((int)puVar16 + (uVar10 - 4 & uVar5) + 4) = bVar2;
            uVar10 = ~uVar10;
            if (cVar1 == -1) break;
            uVar5 = puVar8[uVar9];
            puVar8[uVar9] = puVar14[uVar10];
            puVar14[uVar10] = uVar5;
            puVar14 = (uint *)*param_1;
            uVar5 = param_1[1];
          }
          uVar5 = param_1[1];
          *(undefined1 *)((int)puVar16 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar16 + (uVar5 & uVar3 - 4) + 4) = 0xff;
          puVar14[uVar10] = puVar8[uVar9];
        }
LAB_01269394:
        bVar19 = uVar3 != uVar17;
        uVar3 = uVar3 + 1;
        puVar8 = puVar16;
      } while (bVar19);
      uVar3 = param_1[1];
      iVar15 = param_1[3];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - iVar15;
  }
  return 0x80000001;
}

