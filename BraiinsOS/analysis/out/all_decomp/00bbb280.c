// FUN_00bbb280 @ 00bbb280 size=688 calls_out=2 calls_in=3
// strings: 

void FUN_00bbb280(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint in_fpscr;
  double dVar15;
  double dVar16;
  uint auStack_48 [5];
  undefined1 local_31;
  undefined1 *local_30;
  undefined1 *local_2c;
  
  dVar16 = (double)FUN_01845f30(param_5,param_6);
  dVar15 = (double)VectorUnsignedToFloat(param_7,(byte)(in_fpscr >> 0x16) & 3);
  dVar15 = (double)CONCAT44(param_2,param_1) * (dVar15 / 1000000000.0 + dVar16);
  if (dVar15 < 0.0) {
    local_31 = 0;
LAB_00bbb4f8:
    local_30 = &local_31;
    local_2c = &LAB_00fba54c;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_30,&DAT_018868b4);
  }
  uVar6 = (uint)((ulonglong)dVar15 >> 0x20);
  auStack_48[0] = SUB84(dVar15,0);
  puVar7 = (undefined1 *)0x0;
  uVar9 = (uVar6 & 0x7fffffff) >> 0x14;
  if (uVar9 < 0x3e0) {
    uVar6 = 0;
    uVar9 = 0;
  }
  else {
    auStack_48[1] = uVar6 & 0xfffff | 0x100000;
    uVar14 = uVar9 - 0x3ff;
    if (uVar9 < 0x3ff) {
      auStack_48[3] = 0;
      uVar6 = uVar9 - 0x3d3 & 0x1f;
      auStack_48[2] = 0;
      iVar5 = -(uVar9 - 0x3d3 >> 3 & 0xc);
      uVar10 = *(uint *)((int)auStack_48 + iVar5 + 8);
      uVar14 = *(uint *)((int)auStack_48 + iVar5 + 4);
      uVar9 = uVar6 ^ 0x1f;
      lVar2 = (ulonglong)(uVar10 << uVar6 | (uVar14 >> 1) >> uVar9) * 1000000000;
      uVar11 = (uint)lVar2;
      lVar3 = (ulonglong)(*(uint *)((int)auStack_48 + iVar5) << uVar6) * 1000000000;
      uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar4 = (ulonglong)(uVar14 << uVar6 | (*(uint *)((int)auStack_48 + iVar5) >> 1) >> uVar9) *
              1000000000;
      uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar1 = lVar4 + CONCAT44(uVar11,uVar13);
      uVar12 = 0;
      uVar6 = (int)((ulonglong)lVar2 >> 0x20) +
              (*(int *)((int)auStack_48 + iVar5 + 0xc) << uVar6 | (uVar10 >> 1) >> uVar9) *
              1000000000 +
              (uint)(CARRY4(uVar11,uVar14) ||
                    CARRY4(uVar11 + uVar14,(uint)CARRY4((uint)lVar4,uVar13)));
      if ((uVar1 & 0x8000000000000000) != 0) {
        uVar12 = (uint)(((int)lVar3 != 0 || (int)(uVar1 >> 0x20) != -0x80000000) || (int)uVar1 != 0)
                 | uVar6 & 1;
      }
      puVar8 = (undefined1 *)(uVar12 + uVar6);
      puVar7 = (undefined1 *)0x0;
      if (puVar8 != &DAT_3b9aca00) {
        puVar7 = puVar8;
      }
      uVar6 = 0;
      uVar9 = (uint)(puVar8 == &DAT_3b9aca00);
    }
    else if (uVar9 < 0x433) {
      uVar10 = auStack_48[0] >> (0x20 - uVar14 & 0xff) | uVar6 << (uVar14 & 0xff);
      uVar6 = auStack_48[0] << (uVar14 & 0xff);
      if (-1 < (int)(uVar9 - 0x41f)) {
        uVar10 = auStack_48[0] << (uVar9 - 0x41f & 0xff);
        uVar6 = 0;
      }
      uVar9 = 0x433 - uVar9;
      uVar12 = 0;
      uVar1 = (ulonglong)(uVar10 & 0xfffff) * 1000000000 + ((ulonglong)uVar6 * 1000000000 >> 0x20);
      uVar14 = (uint)uVar1 >> 0x14;
      uVar10 = auStack_48[0] >> (uVar9 & 0xff) | auStack_48[1] << (0x20 - (uVar9 & 0xffff) & 0xff);
      uVar11 = (uVar9 & 0xffff) - 0x20;
      if (-1 < (int)uVar11) {
        uVar10 = auStack_48[1] >> (uVar11 & 0xff);
      }
      auStack_48[1] = auStack_48[1] >> (uVar9 & 0xff);
      if (-1 < (int)uVar11) {
        auStack_48[1] = 0;
      }
      if ((uVar1 & 0x80000) != 0) {
        uVar12 = (uint)((int)((ulonglong)uVar6 * 1000000000) != 0 ||
                       ((uint)uVar1 & 0xfffff) != 0x80000) | uVar14 & 1;
      }
      puVar8 = (undefined1 *)(uVar12 + (uVar14 | (int)(uVar1 >> 0x20) << 0xc));
      puVar7 = (undefined1 *)0x0;
      if (puVar8 != &DAT_3b9aca00) {
        puVar7 = puVar8;
      }
      uVar6 = auStack_48[1] + (0xfffffffe < uVar10);
      uVar9 = uVar10 + 1;
      if (puVar8 != &DAT_3b9aca00) {
        uVar6 = auStack_48[1];
        uVar9 = uVar10;
      }
    }
    else {
      if (0x43e < uVar9) {
        local_31 = 1;
        goto LAB_00bbb4f8;
      }
      uVar9 = uVar9 - 0x433;
      uVar6 = auStack_48[0] >> (0x20 - (uVar9 & 0xffff) & 0xff) | auStack_48[1] << (uVar9 & 0xff);
      uVar14 = (uVar9 & 0xffff) - 0x20;
      if (-1 < (int)uVar14) {
        uVar6 = auStack_48[0] << (uVar14 & 0xff);
      }
      uVar9 = auStack_48[0] << (uVar9 & 0xff);
      if (-1 < (int)uVar14) {
        uVar9 = 0;
      }
    }
  }
  *param_3 = uVar9;
  param_3[1] = uVar6;
  param_3[2] = (uint)puVar7;
  return;
}

