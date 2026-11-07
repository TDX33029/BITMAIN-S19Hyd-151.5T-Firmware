// FUN_00c5c8f0 @ 00c5c8f0 size=1296 calls_out=6 calls_in=1
// strings: 

uint FUN_00c5c8f0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar20 = param_1[3];
  uVar12 = uVar20 + 1;
  if (0xfffffffe < uVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar18 = param_1[1];
  uVar10 = uVar18 + 1;
  uVar3 = uVar18;
  if (7 < uVar18) {
    uVar3 = (uVar10 & 0xfffffff8) - (uVar10 >> 3);
  }
  if (uVar3 >> 1 < uVar12) {
    if (uVar12 < uVar3 + 1) {
      uVar12 = uVar3 + 1;
    }
    FUN_00c4dc40(&local_34,0xd8,8,uVar12);
    if (local_34 != (uint *)0x0) {
      if (uVar20 == 0) {
        uVar20 = 0;
      }
      else {
        puVar19 = (uint *)*param_1;
        uVar3 = ~*puVar19 & 0x80808080;
        uVar4 = *param_2;
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        iVar15 = 0;
        puVar16 = puVar19;
        uVar12 = uVar20;
        do {
          if (uVar3 == 0) {
            do {
              puVar16 = puVar16 + 1;
              iVar15 = iVar15 + 4;
            } while ((*puVar16 & 0x80808080) == 0x80808080);
            uVar3 = *puVar16 & 0x80808080 ^ 0x80808080;
          }
          uVar10 = iVar15 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                           (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
          uVar18 = FUN_00c4fb58(uVar4,uVar5,uVar6,uVar7,puVar19[uVar10 * -0x36 + -0x36]);
          uVar8 = local_30 & uVar18;
          uVar13 = *(uint *)((int)local_34 + uVar8) & 0x80808080;
          if (uVar13 == 0) {
            iVar9 = 4;
            do {
              uVar8 = uVar8 + iVar9;
              iVar9 = iVar9 + 4;
              uVar8 = uVar8 & local_30;
              uVar13 = *(uint *)((int)local_34 + uVar8) & 0x80808080;
            } while (uVar13 == 0);
          }
          uVar8 = uVar8 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                         (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                  local_30;
          if (-1 < *(char *)((int)local_34 + uVar8)) {
            uVar8 = *local_34 & 0x80808080;
            uVar8 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                  (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
          }
          uVar3 = uVar3 - 1 & uVar3;
          bVar2 = (byte)(uVar18 >> 0x19);
          *(byte *)((int)local_34 + uVar8) = bVar2;
          uVar12 = uVar12 - 1;
          *(byte *)((int)local_34 + (uVar8 - 4 & local_30) + 4) = bVar2;
          FUN_016dd1aa(local_34 + ~uVar8 * 0x36,puVar19 + ~uVar10 * 0x36,0xd8);
        } while (uVar12 != 0);
      }
      iVar15 = *param_1;
      iVar9 = param_1[1];
      *param_1 = (int)local_34;
      param_1[1] = local_30;
      local_30 = 0x80000001;
      param_1[2] = local_2c - uVar20;
      param_1[3] = uVar20;
      if ((iVar9 != 0) && (iVar11 = iVar9 * 0xd8 + 0xd8, iVar9 + iVar11 != -5)) {
        thunk_FUN_016d3fb4(iVar15 - iVar11);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar10 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar10 >> 2;
      puVar16 = (uint *)*param_1;
      if ((uVar10 & 3) != 0) {
        uVar12 = (uVar10 >> 2) + 1;
      }
      iVar15 = 0;
      do {
        puVar16[-iVar15] = (~(puVar16[-iVar15] >> 7) & 0x1010101) + (puVar16[-iVar15] | 0x7f7f7f7f);
        iVar15 = iVar15 + -1;
      } while (-iVar15 != uVar12);
      if (uVar10 < 4) {
        FUN_016dd52c(puVar16 + 1,puVar16);
      }
      else {
        *(uint *)((int)puVar16 + uVar10) = *puVar16;
      }
      uVar4 = *param_2;
      iVar15 = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar12 = 0;
      do {
        puVar19 = puVar16;
        if (*(char *)((int)puVar16 + uVar12) == -0x80) {
          puVar17 = puVar16;
          while( true ) {
            uVar3 = FUN_00c4fb58(uVar4,uVar5,uVar6,uVar7,puVar17[uVar12 * -0x36 + -0x36]);
            uVar10 = param_1[1];
            uVar8 = uVar10 & uVar3;
            uVar13 = *(uint *)((int)puVar17 + uVar8) & 0x80808080;
            uVar20 = uVar8;
            if (uVar13 == 0) {
              iVar9 = 4;
              do {
                uVar20 = uVar20 + iVar9 & uVar10;
                iVar9 = iVar9 + 4;
                uVar13 = *(uint *)((int)puVar17 + uVar20) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar20 = uVar20 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                     uVar10;
            if (-1 < *(char *)((int)puVar17 + uVar20)) {
              uVar20 = *puVar17 & 0x80808080;
              uVar20 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                     (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar20 - uVar8 ^ uVar12 - uVar8) & uVar10) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar12) = bVar2;
              puVar19 = (uint *)*param_1;
              *(byte *)((int)puVar19 + (uVar10 & uVar12 - 4) + 4) = bVar2;
              goto LAB_00c5ccbc;
            }
            cVar1 = *(char *)((int)puVar17 + uVar20);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar20) = bVar2;
            puVar19 = (uint *)*param_1;
            *(byte *)((int)puVar19 + (uVar20 - 4 & uVar10) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar9 = -0xd8;
            do {
              uVar14 = *(undefined4 *)((int)puVar16 + iVar9 + iVar15);
              *(undefined4 *)((int)puVar16 + iVar9 + iVar15) =
                   *(undefined4 *)((int)puVar17 + iVar9 + uVar20 * -0xd8);
              *(undefined4 *)((int)puVar17 + iVar9 + uVar20 * -0xd8) = uVar14;
              iVar9 = iVar9 + 4;
            } while (iVar9 != 0);
            puVar17 = (uint *)*param_1;
          }
          *(undefined1 *)((int)puVar19 + uVar12) = 0xff;
          *(undefined1 *)((int)puVar19 + (param_1[1] & uVar12 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar17 + ~uVar20 * 0x36,puVar16 + ~uVar12 * 0x36,0xd8);
        }
LAB_00c5ccbc:
        iVar15 = iVar15 + -0xd8;
        bVar21 = uVar12 != uVar18;
        uVar12 = uVar12 + 1;
        puVar16 = puVar19;
      } while (bVar21);
      uVar12 = param_1[1];
      if (7 < uVar12) {
        uVar12 = (uVar12 + 1 & 0xfffffff8) - (uVar12 + 1 >> 3);
      }
    }
    local_30 = 0x80000001;
    param_1[2] = uVar12 - param_1[3];
  }
  return local_30;
}

