// FUN_0167cb88 @ 0167cb88 size=1208 calls_out=5 calls_in=4
// strings: 

uint FUN_0167cb88(int *param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar5 = param_1[3] + param_2;
  if (CARRY4(param_1[3],param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_018ada90);
  }
  uVar3 = param_1[1];
  uVar7 = uVar3 + 1;
  if (7 < uVar3) {
    uVar3 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar3 >> 1 < uVar5) {
    if (uVar5 < uVar3 + 1) {
      uVar5 = uVar3 + 1;
    }
    FUN_0167ca80(&local_34,uVar5);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    iVar16 = param_1[3];
    if (iVar16 == 0) {
      iVar16 = 0;
    }
    else {
      puVar12 = (uint *)*param_1;
      iVar14 = 0;
      uVar5 = ~*puVar12 & 0x80808080;
      do {
        if (uVar5 == 0) {
          do {
            puVar12 = puVar12 + 1;
            iVar14 = iVar14 + 4;
          } while ((*puVar12 & 0x80808080) == 0x80808080);
          uVar5 = *puVar12 & 0x80808080 ^ 0x80808080;
        }
        iVar17 = iVar14 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
        uVar3 = *(uint *)(*param_1 + iVar17 * -4 + -4);
        if (param_4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar3,param_4,&DAT_018ada80);
        }
        uVar15 = *(uint *)(param_3 + uVar3 * 0xc0 + 0xb8);
        uVar7 = local_30 & uVar15;
        uVar3 = *(uint *)((int)local_34 + uVar7) & 0x80808080;
        if (uVar3 == 0) {
          iVar8 = 4;
          do {
            uVar7 = uVar7 + iVar8;
            iVar8 = iVar8 + 4;
            uVar7 = uVar7 & local_30;
            uVar3 = *(uint *)((int)local_34 + uVar7) & 0x80808080;
          } while (uVar3 == 0);
        }
        uVar3 = uVar7 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & local_30
        ;
        if (-1 < *(char *)((int)local_34 + uVar3)) {
          uVar3 = *local_34 & 0x80808080;
          uVar3 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3;
        }
        uVar5 = uVar5 - 1 & uVar5;
        iVar16 = iVar16 + -1;
        bVar2 = (byte)(uVar15 >> 0x19);
        *(byte *)((int)local_34 + uVar3) = bVar2;
        *(byte *)((int)local_34 + (uVar3 - 4 & local_30) + 4) = bVar2;
        local_34[-1 - uVar3] = *(uint *)(*param_1 + iVar17 * -4 + -4);
      } while (iVar16 != 0);
      iVar16 = param_1[3];
    }
    iVar17 = *param_1;
    iVar14 = param_1[1];
    *param_1 = (int)local_34;
    param_1[1] = local_30;
    param_1[2] = local_2c - iVar16;
    param_1[3] = iVar16;
    if (iVar14 == 0) {
      return 0x80000001;
    }
    iVar16 = iVar14 * 4 + 4;
    if (iVar14 + iVar16 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4(iVar17 - iVar16);
    return 0x80000001;
  }
  puVar6 = (undefined4 *)*param_1;
  if (uVar7 != 0) {
    uVar5 = uVar7 >> 2;
    if ((uVar7 & 3) != 0) {
      uVar5 = (uVar7 >> 2) + 1;
    }
    iVar16 = 0;
    do {
      puVar6[-iVar16] = (~((uint)puVar6[-iVar16] >> 7) & 0x1010101) + (puVar6[-iVar16] | 0x7f7f7f7f)
      ;
      iVar16 = iVar16 + -1;
    } while (-iVar16 != uVar5);
    if (3 < uVar7) {
      *(undefined4 *)((int)puVar6 + uVar7) = *puVar6;
      goto LAB_0167cdd0;
    }
  }
  FUN_016dd52c(puVar6 + 1);
LAB_0167cdd0:
  uVar3 = param_1[1];
  uVar5 = 0;
  if (uVar3 != 0xffffffff) {
    do {
      puVar12 = (uint *)*param_1;
      if (*(char *)((int)puVar12 + uVar5) == -0x80) {
        uVar7 = ~uVar5;
        puVar13 = puVar12;
        while( true ) {
          uVar15 = puVar13[-1 - uVar5];
          if (param_4 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar15,param_4,&DAT_018ada80);
          }
          uVar9 = param_1[1];
          uVar4 = *(uint *)(param_3 + uVar15 * 0xc0 + 0xb8);
          uVar11 = uVar9 & uVar4;
          uVar10 = *(uint *)((int)puVar13 + uVar11) & 0x80808080;
          uVar15 = uVar11;
          if (uVar10 == 0) {
            iVar16 = 4;
            do {
              uVar15 = uVar15 + iVar16;
              iVar16 = iVar16 + 4;
              uVar15 = uVar15 & uVar9;
              uVar10 = *(uint *)((int)puVar13 + uVar15) & 0x80808080;
            } while (uVar10 == 0);
          }
          uVar15 = uVar15 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar9;
          if (-1 < *(char *)((int)puVar13 + uVar15)) {
            uVar15 = *puVar13 & 0x80808080;
            uVar15 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                   (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar4 >> 0x18);
          if (((uVar15 - uVar11 ^ uVar5 - uVar11) & uVar9) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar13 + uVar5) = bVar2;
            *(byte *)(*param_1 + (uVar9 & uVar5 - 4) + 4) = bVar2;
            goto LAB_0167cf18;
          }
          cVar1 = *(char *)((int)puVar13 + uVar15);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar13 + uVar15) = bVar2;
          *(byte *)(*param_1 + (uVar15 - 4 & uVar9) + 4) = bVar2;
          uVar15 = ~uVar15;
          if (cVar1 == -1) break;
          uVar4 = puVar12[uVar7];
          puVar12[uVar7] = puVar13[uVar15];
          puVar13[uVar15] = uVar4;
          puVar13 = (uint *)*param_1;
        }
        uVar4 = param_1[1];
        *(undefined1 *)(*param_1 + uVar5) = 0xff;
        *(undefined1 *)(*param_1 + (uVar4 & uVar5 - 4) + 4) = 0xff;
        puVar13[uVar15] = puVar12[uVar7];
      }
LAB_0167cf18:
      bVar18 = uVar5 != uVar3;
      uVar5 = uVar5 + 1;
    } while (bVar18);
    uVar5 = param_1[1];
    if (7 < uVar5) {
      uVar5 = (uVar5 + 1 & 0xfffffff8) - (uVar5 + 1 >> 3);
    }
  }
  param_1[2] = uVar5 - param_1[3];
  return 0x80000001;
}

