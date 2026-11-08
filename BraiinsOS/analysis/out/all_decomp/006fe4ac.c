// FUN_006fe4ac @ 006fe4ac size=832 calls_out=4 calls_in=2
// strings: 

void FUN_006fe4ac(int *param_1,double *param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 extraout_s1;
  double dVar21;
  uint local_40 [4];
  undefined1 local_2d;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return;
  }
  puVar6 = (uint *)thunk_FUN_016d4a50(param_3 * 0x28);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,param_3 * 0x28);
  }
  puVar16 = puVar6;
  iVar19 = param_3;
  do {
    dVar21 = *param_2;
    if (dVar21 < 0.0) {
      local_2d = 0;
LAB_006fe7a8:
      local_28 = &LAB_00fba54c;
      local_2c = &local_2d;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_2c,&DAT_018868b4);
    }
    uVar11 = (uint)((ulonglong)dVar21 >> 0x20);
    uVar9 = SUB84(dVar21,0);
    puVar17 = (undefined1 *)0x0;
    uVar10 = (uVar11 & 0x7fffffff) >> 0x14;
    if (uVar10 < 0x3e0) {
      uVar11 = 0;
      uVar10 = 0;
    }
    else {
      uVar7 = uVar11 & 0xfffff | 0x100000;
      uVar13 = uVar10 - 0x3ff;
      if (uVar10 < 0x3ff) {
        local_40[3] = 0;
        local_40[2] = 0;
        uVar11 = uVar10 - 0x3d3 & 0x1f;
        uVar12 = uVar11 ^ 0x1f;
        iVar5 = -(uVar10 - 0x3d3 >> 3 & 0xc);
        uVar10 = *(uint *)((int)local_40 + iVar5 + 8);
        uVar14 = *(uint *)((int)local_40 + iVar5 + 4);
        lVar2 = (ulonglong)(uVar10 << uVar11 | (uVar14 >> 1) >> uVar12) * 1000000000;
        uVar18 = (uint)lVar2;
        lVar3 = (ulonglong)(*(uint *)((int)local_40 + iVar5) << uVar11) * 1000000000;
        uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar15 = 0;
        lVar4 = (ulonglong)(uVar14 << uVar11 | (*(uint *)((int)local_40 + iVar5) >> 1) >> uVar12) *
                1000000000;
        uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar1 = lVar4 + CONCAT44(uVar18,uVar13);
        uVar10 = (int)((ulonglong)lVar2 >> 0x20) +
                 (*(int *)((int)local_40 + iVar5 + 0xc) << uVar11 | (uVar10 >> 1) >> uVar12) *
                 1000000000 +
                 (uint)(CARRY4(uVar18,uVar14) ||
                       CARRY4(uVar18 + uVar14,(uint)CARRY4((uint)lVar4,uVar13)));
        if ((uVar1 & 0x8000000000000000) != 0) {
          uVar15 = (uint)(((int)lVar3 != 0 || (int)(uVar1 >> 0x20) != -0x80000000) ||
                         (int)uVar1 != 0) | uVar10 & 1;
        }
        puVar8 = (undefined1 *)(uVar15 + uVar10);
        puVar17 = (undefined1 *)0x0;
        if (puVar8 != &DAT_3b9aca00) {
          puVar17 = puVar8;
        }
        uVar11 = (uint)(puVar8 == &DAT_3b9aca00);
        uVar10 = 0;
        local_40[0] = uVar9;
        local_40[1] = uVar7;
      }
      else if (uVar10 < 0x433) {
        uVar12 = 0x433 - uVar10;
        uVar14 = uVar9 >> (0x20 - uVar13 & 0xff) | uVar11 << (uVar13 & 0xff);
        uVar11 = uVar9 << (uVar13 & 0xff);
        if (-1 < (int)(uVar10 - 0x41f)) {
          uVar11 = 0;
          uVar14 = uVar9 << (uVar10 - 0x41f & 0xff);
        }
        uVar1 = (ulonglong)(uVar14 & 0xfffff) * 1000000000 +
                ((ulonglong)uVar11 * 1000000000 >> 0x20);
        uVar14 = 0;
        uVar10 = (uint)uVar1 >> 0x14;
        uVar9 = uVar9 >> (uVar12 & 0xff) | uVar7 << (0x20 - (uVar12 & 0xffff) & 0xff);
        uVar13 = (uVar12 & 0xffff) - 0x20;
        if (-1 < (int)uVar13) {
          uVar9 = uVar7 >> (uVar13 & 0xff);
        }
        uVar7 = uVar7 >> (uVar12 & 0xff);
        if (-1 < (int)uVar13) {
          uVar7 = 0;
        }
        if ((uVar1 & 0x80000) != 0) {
          uVar14 = (uint)((int)((ulonglong)uVar11 * 1000000000) != 0 ||
                         ((uint)uVar1 & 0xfffff) != 0x80000) | uVar10 & 1;
        }
        puVar8 = (undefined1 *)(uVar14 + (uVar10 | (int)(uVar1 >> 0x20) << 0xc));
        puVar17 = (undefined1 *)0x0;
        if (puVar8 != &DAT_3b9aca00) {
          puVar17 = puVar8;
        }
        uVar11 = uVar9 + 1;
        uVar10 = uVar7 + (0xfffffffe < uVar9);
        if (puVar8 != &DAT_3b9aca00) {
          uVar11 = uVar9;
          uVar10 = uVar7;
        }
      }
      else {
        if (0x43e < uVar10) {
          local_2d = 1;
          goto LAB_006fe7a8;
        }
        uVar10 = uVar10 - 0x433;
        uVar13 = (uVar10 & 0xffff) - 0x20;
        uVar11 = uVar9 << (uVar10 & 0xff);
        uVar10 = uVar9 >> (0x20 - (uVar10 & 0xffff) & 0xff) | uVar7 << (uVar10 & 0xff);
        if (-1 < (int)uVar13) {
          uVar11 = 0;
          uVar10 = uVar9 << (uVar13 & 0xff);
        }
      }
    }
    uVar20 = FUN_011119a8(param_2);
    *(ulonglong *)(puVar16 + 6) = CONCAT44(extraout_s1,uVar20);
    *puVar16 = uVar11;
    puVar16[1] = uVar10;
    param_2 = param_2 + 5;
    iVar19 = iVar19 + -1;
    puVar16[2] = (uint)puVar17;
    puVar16[4] = 1;
    puVar16[5] = 0;
    puVar16 = puVar16 + 10;
    if (iVar19 == 0) {
      *param_1 = param_3;
      param_1[1] = (int)puVar6;
      param_1[2] = param_3;
      return;
    }
  } while( true );
}

