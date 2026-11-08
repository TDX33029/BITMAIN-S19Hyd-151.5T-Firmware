// FUN_00f52df8 @ 00f52df8 size=1344 calls_out=6 calls_in=1
// strings: 

uint FUN_00f52df8(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar17 = param_1[3];
  uVar13 = uVar17 + 1;
  if (0xfffffffe < uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar20 = param_1[1];
  uVar12 = uVar20 + 1;
  uVar4 = uVar20;
  if (7 < uVar20) {
    uVar4 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
  }
  if (uVar4 >> 1 < uVar13) {
    if (uVar13 < uVar4 + 1) {
      uVar13 = uVar4 + 1;
    }
    FUN_00f52c74(&local_34,0x11,uVar13);
    if (local_34 != (uint *)0x0) {
      if (uVar17 == 0) {
        uVar17 = 0;
      }
      else {
        uVar6 = *param_2;
        iVar21 = 0;
        puVar18 = (uint *)*param_1;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar4 = ~*puVar18 & 0x80808080;
        uVar9 = param_2[3];
        uVar13 = uVar17;
        puVar16 = puVar18;
        do {
          if (uVar4 == 0) {
            do {
              puVar16 = puVar16 + 1;
              iVar21 = iVar21 + 4;
            } while ((*puVar16 & 0x80808080) == 0x80808080);
            uVar4 = *puVar16 & 0x80808080 ^ 0x80808080;
          }
          uVar15 = iVar21 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
          uVar12 = FUN_00f5b6c8(uVar6,uVar7,uVar8,uVar9,
                                *(undefined4 *)((int)puVar18 + uVar15 * -0x11 + -0x11),
                                *(undefined4 *)((int)puVar18 + uVar15 * -0x11 + -0xd),
                                *(undefined4 *)((int)puVar18 + uVar15 * -0x11 + -9),
                                *(undefined4 *)((int)puVar18 + uVar15 * -0x11 + -5));
          uVar20 = local_30 & uVar12;
          uVar14 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
          if (uVar14 == 0) {
            iVar11 = 4;
            do {
              uVar20 = uVar20 + iVar11;
              iVar11 = iVar11 + 4;
              uVar20 = uVar20 & local_30;
              uVar14 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
            } while (uVar14 == 0);
          }
          uVar20 = uVar20 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                           (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar20)) {
            uVar20 = *local_34 & 0x80808080;
            uVar20 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                   (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3;
          }
          uVar4 = uVar4 - 1 & uVar4;
          bVar3 = (byte)(uVar12 >> 0x19);
          *(byte *)((int)local_34 + uVar20) = bVar3;
          uVar13 = uVar13 - 1;
          *(byte *)((int)local_34 + (uVar20 - 4 & local_30) + 4) = bVar3;
          FUN_016dd1aa((int)local_34 + ~uVar20 * 0x11,(int)puVar18 + ~uVar15 * 0x11,0x11);
        } while (uVar13 != 0);
      }
      iVar21 = *param_1;
      iVar11 = param_1[1];
      param_1[1] = local_30;
      local_30 = 0x80000001;
      *param_1 = (int)local_34;
      param_1[2] = local_2c - uVar17;
      param_1[3] = uVar17;
      if ((iVar11 != 0) && (uVar13 = iVar11 * 0x11 + 0x14U & 0xfffffffc, iVar11 + uVar13 != -5)) {
        thunk_FUN_016d3fb4(iVar21 - uVar13);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar12 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar12 >> 2;
      puVar16 = (uint *)*param_1;
      if ((uVar12 & 3) != 0) {
        uVar13 = (uVar12 >> 2) + 1;
      }
      iVar21 = 0;
      do {
        puVar16[-iVar21] = (~(puVar16[-iVar21] >> 7) & 0x1010101) + (puVar16[-iVar21] | 0x7f7f7f7f);
        iVar21 = iVar21 + -1;
      } while (-iVar21 != uVar13);
      if (uVar12 < 4) {
        FUN_016dd52c(puVar16 + 1,puVar16);
      }
      else {
        *(uint *)((int)puVar16 + uVar12) = *puVar16;
      }
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar13 = 0;
      do {
        if (*(char *)((int)puVar16 + uVar13) == -0x80) {
          puVar19 = (undefined4 *)((int)puVar16 + ~uVar13 * 0x11);
          puVar18 = puVar16;
          while( true ) {
            uVar4 = FUN_00f5b6c8(uVar6,uVar7,uVar8,uVar9,
                                 *(undefined4 *)((int)puVar18 + uVar13 * -0x11 + -0x11),
                                 *(undefined4 *)((int)puVar18 + uVar13 * -0x11 + -0xd),
                                 *(undefined4 *)((int)puVar18 + uVar13 * -0x11 + -9),
                                 *(undefined4 *)((int)puVar18 + uVar13 * -0x11 + -5));
            uVar12 = param_1[1];
            uVar14 = uVar12 & uVar4;
            uVar15 = *(uint *)((int)puVar18 + uVar14) & 0x80808080;
            uVar17 = uVar14;
            if (uVar15 == 0) {
              iVar21 = 4;
              do {
                uVar17 = uVar17 + iVar21 & uVar12;
                iVar21 = iVar21 + 4;
                uVar15 = *(uint *)((int)puVar18 + uVar17) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar17 = uVar17 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                     uVar12;
            if (-1 < *(char *)((int)puVar18 + uVar17)) {
              uVar17 = *puVar18 & 0x80808080;
              uVar17 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                     (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3;
            }
            bVar3 = (byte)(uVar4 >> 0x18);
            if (((uVar17 - uVar14 ^ uVar13 - uVar14) & uVar12) < 4) {
              bVar3 = bVar3 >> 1;
              *(byte *)((int)puVar18 + uVar13) = bVar3;
              puVar16 = (uint *)*param_1;
              *(byte *)((int)puVar16 + (uVar12 & uVar13 - 4) + 4) = bVar3;
              goto LAB_00f53204;
            }
            cVar1 = *(char *)((int)puVar18 + uVar17);
            bVar3 = bVar3 >> 1;
            *(byte *)((int)puVar18 + uVar17) = bVar3;
            puVar16 = (uint *)*param_1;
            *(byte *)((int)puVar16 + (uVar17 - 4 & uVar12) + 4) = bVar3;
            puVar5 = (undefined4 *)((int)puVar18 + ~uVar17 * 0x11);
            if (cVar1 == -1) break;
            uVar10 = *puVar19;
            *puVar19 = *puVar5;
            *puVar5 = uVar10;
            uVar10 = puVar5[1];
            puVar5[1] = puVar19[1];
            puVar19[1] = uVar10;
            uVar10 = puVar19[2];
            puVar19[2] = puVar5[2];
            puVar5[2] = uVar10;
            uVar10 = puVar5[3];
            puVar5[3] = puVar19[3];
            puVar19[3] = uVar10;
            uVar2 = *(undefined1 *)(puVar19 + 4);
            *(undefined1 *)(puVar19 + 4) = *(undefined1 *)(puVar5 + 4);
            *(undefined1 *)(puVar5 + 4) = uVar2;
            puVar18 = (uint *)*param_1;
          }
          uVar17 = param_1[1];
          *(undefined1 *)((int)puVar16 + uVar13) = 0xff;
          *(undefined1 *)((int)puVar16 + (uVar17 & uVar13 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar5,puVar19,0x11);
        }
LAB_00f53204:
        bVar22 = uVar13 != uVar20;
        uVar13 = uVar13 + 1;
      } while (bVar22);
      uVar13 = param_1[1];
      if (7 < uVar13) {
        uVar13 = (uVar13 + 1 & 0xfffffff8) - (uVar13 + 1 >> 3);
      }
    }
    local_30 = 0x80000001;
    param_1[2] = uVar13 - param_1[3];
  }
  return local_30;
}

