// FUN_00c4d78c @ 00c4d78c size=1196 calls_out=5 calls_in=1
// strings: 

uint FUN_00c4d78c(int *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar14 = param_1[3];
  uVar10 = uVar14 + param_2;
  if (CARRY4(uVar14,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar17 = param_1[1];
  uVar20 = uVar17 + 1;
  uVar4 = uVar17;
  if (7 < uVar17) {
    uVar4 = (uVar20 & 0xfffffff8) - (uVar20 >> 3);
  }
  if (uVar4 >> 1 < uVar10) {
    if (uVar10 < uVar4 + 1) {
      uVar10 = uVar4 + 1;
    }
    FUN_00c4dc40(&local_34,1,4,uVar10);
    if (local_34 != (uint *)0x0) {
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        puVar18 = (uint *)*param_1;
        uVar4 = ~*puVar18 & 0x80808080;
        uVar5 = *param_3;
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar8 = param_3[3];
        iVar12 = 0;
        uVar10 = uVar14;
        puVar13 = puVar18;
        do {
          if (uVar4 == 0) {
            do {
              puVar13 = puVar13 + 1;
              iVar12 = iVar12 + 4;
            } while ((*puVar13 & 0x80808080) == 0x80808080);
            uVar4 = *puVar13 & 0x80808080 ^ 0x80808080;
          }
          uVar16 = iVar12 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
          uVar17 = FUN_00c4ddd4(uVar5,uVar6,uVar7,uVar8,
                                *(undefined1 *)((int)puVar18 + (-1 - uVar16)));
          uVar20 = local_30 & uVar17;
          uVar11 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
          if (uVar11 == 0) {
            iVar9 = 4;
            do {
              uVar20 = uVar20 + iVar9;
              iVar9 = iVar9 + 4;
              uVar20 = uVar20 & local_30;
              uVar11 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
            } while (uVar11 == 0);
          }
          uVar20 = uVar20 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar20)) {
            uVar20 = *local_34 & 0x80808080;
            uVar20 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                   (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3;
          }
          uVar4 = uVar4 - 1 & uVar4;
          bVar3 = (byte)(uVar17 >> 0x19);
          *(byte *)((int)local_34 + uVar20) = bVar3;
          uVar10 = uVar10 - 1;
          *(byte *)((int)local_34 + (uVar20 - 4 & local_30) + 4) = bVar3;
          *(undefined1 *)((int)local_34 + ~uVar20) = *(undefined1 *)((int)puVar18 + ~uVar16);
        } while (uVar10 != 0);
      }
      iVar12 = *param_1;
      iVar9 = param_1[1];
      param_1[1] = local_30;
      local_30 = 0x80000001;
      *param_1 = (int)local_34;
      param_1[2] = local_2c - uVar14;
      param_1[3] = uVar14;
      if ((iVar9 != 0) && (uVar10 = iVar9 + 4U & 0xfffffffc, iVar9 + uVar10 != -5)) {
        thunk_FUN_016d3fb4(iVar12 - uVar10);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar20 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar20 >> 2;
      if ((uVar20 & 3) != 0) {
        uVar10 = (uVar20 >> 2) + 1;
      }
      puVar13 = (uint *)*param_1;
      iVar12 = 0;
      do {
        puVar13[-iVar12] = (~(puVar13[-iVar12] >> 7) & 0x1010101) + (puVar13[-iVar12] | 0x7f7f7f7f);
        iVar12 = iVar12 + -1;
      } while (-iVar12 != uVar10);
      if (uVar20 < 4) {
        FUN_016dd52c(puVar13 + 1,puVar13,uVar20);
      }
      else {
        *(uint *)((int)puVar13 + uVar20) = *puVar13;
      }
      uVar5 = *param_3;
      uVar8 = param_3[3];
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      uVar10 = 0;
      do {
        puVar18 = puVar13;
        if (*(char *)((int)puVar13 + uVar10) == -0x80) {
          uVar14 = ~uVar10;
          puVar19 = puVar13;
          while( true ) {
            uVar20 = FUN_00c4ddd4(uVar5,uVar6,uVar7,uVar8,
                                  *(undefined1 *)((int)puVar19 + (-1 - uVar10)));
            uVar11 = param_1[1];
            uVar16 = uVar11 & uVar20;
            uVar15 = *(uint *)((int)puVar19 + uVar16) & 0x80808080;
            uVar4 = uVar16;
            if (uVar15 == 0) {
              iVar12 = 4;
              do {
                uVar4 = uVar4 + iVar12 & uVar11;
                iVar12 = iVar12 + 4;
                uVar15 = *(uint *)((int)puVar19 + uVar4) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar4 = uVar4 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                    uVar11;
            if (-1 < *(char *)((int)puVar19 + uVar4)) {
              uVar4 = *puVar19 & 0x80808080;
              uVar4 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
            }
            bVar3 = (byte)(uVar20 >> 0x18);
            if (((uVar4 - uVar16 ^ uVar10 - uVar16) & uVar11) < 4) {
              bVar3 = bVar3 >> 1;
              *(byte *)((int)puVar19 + uVar10) = bVar3;
              puVar18 = (uint *)*param_1;
              *(byte *)((int)puVar18 + (uVar11 & uVar10 - 4) + 4) = bVar3;
              goto LAB_00c4db14;
            }
            cVar1 = *(char *)((int)puVar19 + uVar4);
            bVar3 = bVar3 >> 1;
            *(byte *)((int)puVar19 + uVar4) = bVar3;
            puVar18 = (uint *)*param_1;
            *(byte *)((int)puVar18 + (uVar4 - 4 & uVar11) + 4) = bVar3;
            uVar4 = ~uVar4;
            if (cVar1 == -1) break;
            uVar2 = *(undefined1 *)((int)puVar13 + uVar14);
            *(undefined1 *)((int)puVar13 + uVar14) = *(undefined1 *)((int)puVar19 + uVar4);
            *(undefined1 *)((int)puVar19 + uVar4) = uVar2;
            puVar19 = (uint *)*param_1;
          }
          uVar20 = param_1[1];
          *(undefined1 *)((int)puVar18 + uVar10) = 0xff;
          *(undefined1 *)((int)puVar18 + (uVar20 & uVar10 - 4) + 4) = 0xff;
          *(undefined1 *)((int)puVar19 + uVar4) = *(undefined1 *)((int)puVar13 + uVar14);
        }
LAB_00c4db14:
        bVar21 = uVar10 != uVar17;
        uVar10 = uVar10 + 1;
        puVar13 = puVar18;
      } while (bVar21);
      uVar10 = param_1[1];
      if (7 < uVar10) {
        uVar10 = (uVar10 + 1 & 0xfffffff8) - (uVar10 + 1 >> 3);
      }
    }
    local_30 = 0x80000001;
    param_1[2] = uVar10 - param_1[3];
  }
  return local_30;
}

