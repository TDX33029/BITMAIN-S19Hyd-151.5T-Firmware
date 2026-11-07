// FUN_00b923b0 @ 00b923b0 size=1864 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b923b0(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  uint *local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  char local_2c;
  
  iVar16 = param_1[3];
  uVar3 = iVar16 + 1;
  if (iVar16 == -1) {
LAB_00b9276c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
  }
  uVar14 = param_1[1];
  uVar8 = uVar14 + 1;
  uVar5 = uVar14;
  if (7 < uVar14) {
    uVar5 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
  }
  if (uVar5 >> 1 < uVar3) {
    uVar5 = uVar5 + 1;
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    if (uVar3 < 0xf) {
      uVar5 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar5 = 4;
      }
    }
    else {
      bVar20 = 0x1ffffffe < uVar3;
      bVar19 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar13 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar4 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar5 = LZCOUNT((iVar13 + ((uint)(iVar4 - iVar13) >> 1) >> 2) - 1);
        bVar20 = 0x1ffffffd < 0xffffffffU >> uVar5;
        bVar19 = 0xffffffffU >> uVar5 == 0x1ffffffe;
      }
      if (bVar20 && !bVar19) goto LAB_00b9276c;
      uVar5 = (uVar3 >> (uVar5 & 0xff)) + 1;
    }
    uVar3 = uVar5 + 4;
    uVar8 = uVar3 + uVar5 * 8;
    if ((uVar8 < uVar3) || (0x7ffffffc < uVar8)) goto LAB_00b9276c;
    iVar4 = FUN_01298504(uVar8,4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,uVar8);
    }
    puVar15 = (uint *)(iVar4 + uVar5 * 8);
    FUN_01bed93e(puVar15,0xff,uVar3);
    uVar8 = uVar5 - 1;
    uVar3 = uVar8;
    if (7 < uVar8) {
      uVar3 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
    }
    local_4c = 0;
    local_54 = uVar8;
    local_58 = puVar15;
    iVar4 = 0;
    if (iVar16 != 0) {
      puVar6 = (uint *)*param_1;
      iVar13 = 0;
      uVar5 = ~*puVar6 & 0x80808080;
      iVar4 = iVar16;
      puVar9 = puVar6;
      local_50 = uVar3;
      do {
        if (uVar5 == 0) {
          do {
            puVar9 = puVar9 + 1;
            iVar13 = iVar13 + 4;
          } while ((*puVar9 & 0x80808080) == 0x80808080);
          uVar5 = *puVar9 & 0x80808080 ^ 0x80808080;
        }
        local_40 = 0;
        local_3c = 0;
        uVar14 = iVar13 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
        local_38 = 0;
        local_34 = 0;
        local_2c = '\0';
        local_30 = &DAT_01d519f0;
        local_48 = param_3;
        local_44 = param_4;
        FUN_00b8c814(&local_48,*(undefined4 *)(puVar6[uVar14 * -2 + -2] + 4),
                     *(undefined4 *)(puVar6[uVar14 * -2 + -2] + 8));
        if (local_2c == '\0') {
          uVar7 = local_48;
        }
        else {
          uVar7 = (local_44 ^ local_3c) * (local_30[1] ^ local_34) ^
                  (local_48 ^ local_40) * (*local_30 ^ local_38) ^
                  (uint)((ulonglong)(local_44 ^ local_3c) * (ulonglong)(*local_30 ^ local_38) >>
                        0x20) ^
                  (uint)((ulonglong)(local_48 ^ local_40) * (ulonglong)(local_30[1] ^ local_34) >>
                        0x20);
        }
        uVar10 = uVar8 & uVar7;
        uVar12 = *(uint *)((int)puVar15 + uVar10) & 0x80808080;
        if (uVar12 == 0) {
          iVar18 = 4;
          do {
            uVar10 = uVar10 + iVar18 & uVar8;
            iVar18 = iVar18 + 4;
            uVar12 = *(uint *)((int)puVar15 + uVar10) & 0x80808080;
          } while (uVar12 == 0);
        }
        uVar10 = uVar10 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 uVar8;
        if (-1 < *(char *)((int)puVar15 + uVar10)) {
          uVar10 = *puVar15 & 0x80808080;
          uVar10 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                 (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
        }
        uVar5 = uVar5 - 1 & uVar5;
        iVar4 = iVar4 + -1;
        bVar2 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar15 + uVar10) = bVar2;
        *(byte *)((int)puVar15 + (uVar10 - 4 & uVar8) + 4) = bVar2;
        uVar7 = (puVar6 + ~uVar14 * 2)[1];
        puVar15[~uVar10 * 2] = puVar6[~uVar14 * 2];
        (puVar15 + ~uVar10 * 2)[1] = uVar7;
      } while (iVar4 != 0);
      iVar4 = iVar16;
    }
    local_4c = iVar4;
    local_50 = uVar3 - iVar4;
    iVar16 = 0;
    do {
      puVar15 = (uint *)param_1[iVar16];
      param_1[iVar16] = (&local_58)[iVar16];
      iVar4 = iVar16 + 1;
      (&local_58)[iVar16] = puVar15;
      iVar16 = iVar4;
    } while (iVar4 != 4);
    if ((local_54 != 0) && (iVar16 = local_54 * 8 + 8, local_54 + iVar16 != -5)) {
      thunk_FUN_01be4678((int)local_58 - iVar16);
    }
  }
  else {
    puVar15 = (uint *)*param_1;
    if (uVar8 == 0) {
      FUN_01bed864(puVar15 + 1,puVar15);
      uVar3 = 0;
    }
    else {
      uVar3 = uVar8 >> 2;
      if ((uVar8 & 3) != 0) {
        uVar3 = (uVar8 >> 2) + 1;
      }
      iVar16 = 0;
      do {
        puVar15[-iVar16] = (~(puVar15[-iVar16] >> 7) & 0x1010101) + (puVar15[-iVar16] | 0x7f7f7f7f);
        iVar16 = iVar16 + -1;
      } while (-iVar16 != uVar3);
      if (uVar8 < 4) {
        FUN_01bed864(puVar15 + 1,puVar15);
      }
      else {
        *(uint *)((int)puVar15 + uVar8) = *puVar15;
      }
      iVar16 = 0;
      uVar5 = 0;
      uVar3 = uVar14;
      puVar9 = puVar15;
      do {
        puVar6 = puVar9;
        if (*(char *)((int)puVar9 + uVar5) == -0x80) {
          puVar17 = puVar9;
          puVar6 = puVar15;
          while( true ) {
            local_40 = 0;
            local_3c = 0;
            local_38 = 0;
            local_34 = 0;
            local_2c = '\0';
            local_30 = &DAT_01d519f0;
            local_48 = param_3;
            local_44 = param_4;
            FUN_00b8c814(&local_48,*(undefined4 *)(puVar17[uVar5 * -2 + -2] + 4),
                         *(undefined4 *)(puVar17[uVar5 * -2 + -2] + 8));
            if (local_2c != '\0') {
              local_48 = (local_44 ^ local_3c) * (local_30[1] ^ local_34) ^
                         (local_48 ^ local_40) * (*local_30 ^ local_38) ^
                         (uint)((ulonglong)(local_44 ^ local_3c) * (ulonglong)(*local_30 ^ local_38)
                               >> 0x20) ^
                         (uint)((ulonglong)(local_48 ^ local_40) *
                                (ulonglong)(local_30[1] ^ local_34) >> 0x20);
            }
            uVar3 = param_1[1];
            uVar7 = uVar3 & local_48;
            uVar10 = *(uint *)((int)puVar6 + uVar7) & 0x80808080;
            uVar8 = uVar7;
            if (uVar10 == 0) {
              iVar4 = 4;
              do {
                uVar8 = uVar8 + iVar4 & uVar3;
                iVar4 = iVar4 + 4;
                uVar10 = *(uint *)((int)puVar6 + uVar8) & 0x80808080;
              } while (uVar10 == 0);
            }
            uVar8 = uVar8 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                    uVar3;
            if (-1 < *(char *)((int)puVar6 + uVar8)) {
              uVar8 = *puVar6 & 0x80808080;
              uVar8 = (uint)LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
            }
            bVar2 = (byte)(local_48 >> 0x18);
            if (((uVar8 - uVar7 ^ uVar5 - uVar7) & uVar3) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar5) = bVar2;
              *(byte *)((int)puVar6 + (uVar3 & uVar5 - 4) + 4) = bVar2;
              puVar15 = puVar6;
              goto LAB_00b926bc;
            }
            cVar1 = *(char *)((int)puVar6 + uVar8);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar8) = bVar2;
            *(byte *)((int)puVar6 + (uVar8 - 4 & uVar3) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar4 = -8;
            do {
              uVar11 = *(undefined4 *)((int)puVar9 + iVar4 + iVar16);
              *(undefined4 *)((int)puVar9 + iVar4 + iVar16) =
                   *(undefined4 *)((int)puVar6 + iVar4 + uVar8 * -8);
              *(undefined4 *)((int)puVar6 + iVar4 + uVar8 * -8) = uVar11;
              iVar4 = iVar4 + 4;
            } while (iVar4 != 0);
            puVar17 = (uint *)*param_1;
            puVar6 = puVar17;
          }
          puVar15 = (uint *)*param_1;
          uVar3 = param_1[1];
          *(undefined1 *)((int)puVar15 + uVar5) = 0xff;
          *(undefined1 *)((int)puVar15 + (uVar3 & uVar5 - 4) + 4) = 0xff;
          uVar7 = (puVar9 + ~uVar5 * 2)[1];
          puVar6[~uVar8 * 2] = puVar9[~uVar5 * 2];
          (puVar6 + ~uVar8 * 2)[1] = uVar7;
          puVar6 = puVar15;
        }
LAB_00b926bc:
        iVar16 = iVar16 + -8;
        bVar19 = uVar5 != uVar14;
        uVar5 = uVar5 + 1;
        puVar9 = puVar6;
      } while (bVar19);
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return;
}

