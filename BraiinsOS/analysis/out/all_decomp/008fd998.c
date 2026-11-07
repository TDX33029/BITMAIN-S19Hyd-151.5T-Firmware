// FUN_008fd998 @ 008fd998 size=808 calls_out=3 calls_in=1
// strings: 

void FUN_008fd998(uint *param_1,int param_2)

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
  uint local_60 [4];
  undefined *local_50;
  undefined1 auStack_4c [12];
  undefined *local_40;
  undefined *local_3c;
  undefined **local_38;
  undefined1 *local_34;
  undefined **local_30;
  code *local_2c;
  undefined **local_28;
  code *local_24;
  
  local_50 = (undefined *)param_2;
  if (0x256 < param_2 - 2U) {
    local_40 = &DAT_00348284;
    local_3c = &DAT_00348288;
    local_28 = &local_3c;
    local_30 = &local_40;
    local_38 = (undefined **)(local_60 + 4);
    local_24 = FUN_00933120;
    local_2c = FUN_00933120;
    local_34 = &LAB_00fac484;
    FUN_00600d2c(auStack_4c,&DAT_0057c6fe,&local_38);
    uVar9 = FUN_009337e4(auStack_4c);
    *param_1 = uVar9;
    param_1[2] = (uint)&DAT_3b9aca00;
    return;
  }
  puVar7 = (undefined1 *)0x0;
  dVar15 = (double)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  uVar6 = (uint)((ulonglong)(dVar15 / 500.0) >> 0x20);
  local_60[0] = SUB84(dVar15 / 500.0,0);
  uVar9 = uVar6 >> 0x14;
  if (uVar9 < 0x3e0) {
    uVar6 = 0;
    uVar9 = 0;
  }
  else {
    local_60[1] = uVar6 & 0xfffff | 0x100000;
    if (uVar9 < 0x3ff) {
      local_60[3] = 0;
      uVar6 = uVar9 - 0x3d3 & 0x1f;
      local_60[2] = 0;
      iVar5 = -(uVar9 - 0x3d3 >> 3 & 0xc);
      uVar9 = *(uint *)((int)local_60 + iVar5 + 8);
      uVar11 = *(uint *)((int)local_60 + iVar5 + 4);
      uVar14 = uVar6 ^ 0x1f;
      lVar2 = (ulonglong)(uVar9 << uVar6 | (uVar11 >> 1) >> uVar14) * 1000000000;
      uVar10 = (uint)lVar2;
      lVar3 = (ulonglong)(*(uint *)((int)local_60 + iVar5) << uVar6) * 1000000000;
      uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar4 = (ulonglong)(uVar11 << uVar6 | (*(uint *)((int)local_60 + iVar5) >> 1) >> uVar14) *
              1000000000;
      uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar1 = lVar4 + CONCAT44(uVar10,uVar13);
      uVar11 = 0;
      uVar9 = (int)((ulonglong)lVar2 >> 0x20) +
              (*(int *)((int)local_60 + iVar5 + 0xc) << uVar6 | (uVar9 >> 1) >> uVar14) * 1000000000
              + (uint)(CARRY4(uVar10,uVar12) ||
                      CARRY4(uVar10 + uVar12,(uint)CARRY4((uint)lVar4,uVar13)));
      if ((uVar1 & 0x8000000000000000) != 0) {
        uVar11 = (uint)(((int)lVar3 != 0 || (int)(uVar1 >> 0x20) != -0x80000000) || (int)uVar1 != 0)
                 | uVar9 & 1;
      }
      puVar8 = (undefined1 *)(uVar11 + uVar9);
      puVar7 = (undefined1 *)0x0;
      if (puVar8 != &DAT_3b9aca00) {
        puVar7 = puVar8;
      }
      uVar6 = 0;
      uVar9 = (uint)(puVar8 == &DAT_3b9aca00);
    }
    else if (uVar9 < 0x433) {
      uVar11 = (uVar6 >> 0x14) - 0x3ff;
      uVar10 = local_60[0] >> (0x20 - uVar11 & 0xff) | uVar6 << (uVar11 & 0xff);
      uVar12 = (uVar6 >> 0x14) - 0x41f;
      uVar6 = local_60[0] << (uVar11 & 0xff);
      if (-1 < (int)uVar12) {
        uVar6 = 0;
        uVar10 = local_60[0] << (uVar12 & 0xff);
      }
      uVar1 = (ulonglong)(uVar10 & 0xfffff) * 1000000000 + ((ulonglong)uVar6 * 1000000000 >> 0x20);
      uVar13 = 0;
      uVar10 = (uint)uVar1 >> 0x14;
      uVar9 = 0x433 - uVar9;
      uVar11 = local_60[1] >> (uVar9 & 0xff);
      uVar12 = local_60[0] >> (uVar9 & 0xff) | local_60[1] << (0x20 - (uVar9 & 0xffff) & 0xff);
      uVar9 = (uVar9 & 0xffff) - 0x20;
      if (-1 < (int)uVar9) {
        uVar12 = local_60[1] >> (uVar9 & 0xff);
        uVar11 = 0;
      }
      if ((uVar1 & 0x80000) != 0) {
        uVar13 = (uint)((int)((ulonglong)uVar6 * 1000000000) != 0 ||
                       ((uint)uVar1 & 0xfffff) != 0x80000) | uVar10 & 1;
      }
      puVar8 = (undefined1 *)(uVar13 + (uVar10 | (int)(uVar1 >> 0x20) << 0xc));
      puVar7 = (undefined1 *)0x0;
      if (puVar8 != &DAT_3b9aca00) {
        puVar7 = puVar8;
      }
      uVar6 = uVar11 + (0xfffffffe < uVar12);
      uVar9 = uVar12 + 1;
      if (puVar8 != &DAT_3b9aca00) {
        uVar6 = uVar11;
        uVar9 = uVar12;
      }
    }
    else {
      if (0x43e < uVar9) {
        local_3c = (undefined *)CONCAT31(local_3c._1_3_,1);
        local_34 = &LAB_00fba54c;
        local_38 = &local_3c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_38,&DAT_018868b4);
      }
      uVar9 = uVar9 - 0x433;
      uVar10 = (uVar9 & 0xffff) - 0x20;
      uVar6 = local_60[0] >> (0x20 - (uVar9 & 0xffff) & 0xff) | local_60[1] << (uVar9 & 0xff);
      uVar9 = local_60[0] << (uVar9 & 0xff);
      if (-1 < (int)uVar10) {
        uVar6 = local_60[0] << (uVar10 & 0xff);
        uVar9 = 0;
      }
    }
  }
  *param_1 = uVar9;
  param_1[1] = uVar6;
  param_1[2] = (uint)puVar7;
  return;
}

