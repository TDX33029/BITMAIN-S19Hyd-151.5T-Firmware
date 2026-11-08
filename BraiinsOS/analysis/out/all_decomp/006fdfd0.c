// FUN_006fdfd0 @ 006fdfd0 size=668 calls_out=1 calls_in=5
// strings: 

void FUN_006fdfd0(uint param_1,uint param_2,uint *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint auStack_40 [5];
  undefined1 local_29;
  undefined1 *local_28;
  undefined1 *local_24;
  
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    local_29 = 0;
  }
  else {
    uVar7 = (param_2 & 0x7fffffff) >> 0x14;
    if (uVar7 < 0x3e0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      return;
    }
    auStack_40[1] = param_2 & 0xfffff | 0x100000;
    uVar10 = uVar7 - 0x3ff;
    if (uVar7 < 0x3ff) {
      auStack_40[0] = param_1;
      auStack_40[3] = 0;
      uVar10 = uVar7 - 0x3d3 & 0x1f;
      auStack_40[2] = 0;
      iVar5 = -(uVar7 - 0x3d3 >> 3 & 0xc);
      uVar7 = *(uint *)((int)auStack_40 + iVar5 + 8);
      uVar11 = *(uint *)((int)auStack_40 + iVar5 + 4);
      uVar14 = uVar10 ^ 0x1f;
      lVar2 = (ulonglong)(uVar7 << uVar10 | (uVar11 >> 1) >> uVar14) * 1000000000;
      uVar9 = (uint)lVar2;
      lVar3 = (ulonglong)(*(uint *)((int)auStack_40 + iVar5) << uVar10) * 1000000000;
      uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar4 = (ulonglong)(uVar11 << uVar10 | (*(uint *)((int)auStack_40 + iVar5) >> 1) >> uVar14) *
              1000000000;
      uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar1 = lVar4 + CONCAT44(uVar9,uVar13);
      uVar11 = 0;
      uVar7 = (int)((ulonglong)lVar2 >> 0x20) +
              (*(int *)((int)auStack_40 + iVar5 + 0xc) << uVar10 | (uVar7 >> 1) >> uVar14) *
              1000000000 +
              (uint)(CARRY4(uVar9,uVar12) || CARRY4(uVar9 + uVar12,(uint)CARRY4((uint)lVar4,uVar13))
                    );
      if ((uVar1 & 0x8000000000000000) != 0) {
        uVar11 = (uint)(((int)lVar3 != 0 || (int)(uVar1 >> 0x20) != -0x80000000) || (int)uVar1 != 0)
                 | uVar7 & 1;
      }
      puVar8 = (undefined1 *)(uVar11 + uVar7);
      puVar6 = (undefined1 *)0x0;
      if (puVar8 != &DAT_3b9aca00) {
        puVar6 = puVar8;
      }
      *param_3 = (uint)(puVar8 == &DAT_3b9aca00);
      param_3[1] = 0;
      param_3[2] = (uint)puVar6;
      return;
    }
    if (uVar7 < 0x433) {
      uVar11 = 0x433 - uVar7;
      uVar9 = param_1 >> (0x20 - uVar10 & 0xff) | param_2 << (uVar10 & 0xff);
      uVar10 = param_1 << (uVar10 & 0xff);
      uVar7 = uVar7 - 0x41f;
      if (-1 < (int)uVar7) {
        uVar10 = 0;
      }
      uVar12 = 0;
      if (-1 < (int)uVar7) {
        uVar9 = param_1 << (uVar7 & 0xff);
      }
      uVar1 = (ulonglong)(uVar9 & 0xfffff) * 1000000000 + ((ulonglong)uVar10 * 1000000000 >> 0x20);
      uVar7 = (uint)uVar1 >> 0x14;
      uVar13 = param_1 >> (uVar11 & 0xff) | auStack_40[1] << (0x20 - (uVar11 & 0xffff) & 0xff);
      uVar14 = (uVar11 & 0xffff) - 0x20;
      uVar9 = auStack_40[1] >> (uVar11 & 0xff);
      if (-1 < (int)uVar14) {
        uVar13 = auStack_40[1] >> (uVar14 & 0xff);
        uVar9 = 0;
      }
      if ((uVar1 & 0x80000) != 0) {
        uVar12 = (uint)((int)((ulonglong)uVar10 * 1000000000) != 0 ||
                       ((uint)uVar1 & 0xfffff) != 0x80000) | uVar7 & 1;
      }
      puVar8 = (undefined1 *)(uVar12 + (uVar7 | (int)(uVar1 >> 0x20) << 0xc));
      puVar6 = (undefined1 *)0x0;
      if (puVar8 != &DAT_3b9aca00) {
        puVar6 = puVar8;
      }
      uVar10 = uVar13 + 1;
      uVar7 = uVar9 + (0xfffffffe < uVar13);
      if (puVar8 != &DAT_3b9aca00) {
        uVar10 = uVar13;
        uVar7 = uVar9;
      }
      *param_3 = uVar10;
      param_3[1] = uVar7;
      param_3[2] = (uint)puVar6;
      return;
    }
    if (uVar7 < 0x43f) {
      uVar7 = uVar7 - 0x433;
      uVar9 = (uVar7 & 0xffff) - 0x20;
      uVar10 = param_1 << (uVar7 & 0xff);
      uVar7 = param_1 >> (0x20 - (uVar7 & 0xffff) & 0xff) | auStack_40[1] << (uVar7 & 0xff);
      if (-1 < (int)uVar9) {
        uVar10 = 0;
        uVar7 = param_1 << (uVar9 & 0xff);
      }
      *param_3 = uVar10;
      param_3[1] = uVar7;
      param_3[2] = 0;
      return;
    }
    local_29 = 1;
  }
  local_28 = &local_29;
  local_24 = &LAB_00fba54c;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00590e71,&local_28,&DAT_018868b4);
}

