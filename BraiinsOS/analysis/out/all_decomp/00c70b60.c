// FUN_00c70b60 @ 00c70b60 size=1020 calls_out=5 calls_in=1
// strings: 

void FUN_00c70b60(uint *param_1,int param_2,int *param_3,uint *param_4,undefined4 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint in_fpscr;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  uint local_90 [4];
  undefined4 **local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 **local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint **local_58;
  undefined1 *local_54;
  int iStack_50;
  int iStack_4c;
  undefined4 **local_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  
  local_78 = *param_3;
  local_74 = param_3[1];
  local_60 = param_3[2];
  if (local_78 == 0) {
    local_60 = 0;
  }
  local_80 = (undefined4 **)(uint)(local_78 != 0);
  local_6c = 0;
  local_7c = 0;
  local_70 = local_80;
  local_68 = local_78;
  local_64 = local_74;
  uVar20 = FUN_00c3901c(&local_80);
  iVar7 = (int)((ulonglong)uVar20 >> 0x20);
  if ((int)uVar20 == 0 || iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00355962,0x1b,&DAT_01874380);
  }
  uVar6 = FUN_009d4500(*(undefined4 *)(iVar7 + 0x24),*(undefined4 *)(iVar7 + 0x28));
  local_58 = local_80;
  local_54 = (undefined1 *)local_7c;
  iStack_50 = local_78;
  iStack_4c = local_74;
  local_48 = local_70;
  uStack_44 = local_6c;
  iStack_40 = local_68;
  iStack_3c = local_64;
  iStack_38 = local_60;
  while( true ) {
    uVar20 = FUN_00c3901c(&local_58);
    iVar7 = (int)((ulonglong)uVar20 >> 0x20);
    if ((int)uVar20 == 0 || iVar7 == 0) break;
    uVar8 = FUN_009d4500(*(undefined4 *)(iVar7 + 0x24),*(undefined4 *)(iVar7 + 0x28));
    if (uVar8 <= uVar6) {
      uVar6 = uVar8;
    }
  }
  dVar16 = (double)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  dVar19 = (double)VectorUnsignedToFloat
                             (param_4[6] * *(int *)(param_2 + 0x6c),(byte)(in_fpscr >> 0x16) & 3);
  dVar17 = (double)FUN_01845f30(0,param_5);
  dVar18 = 1.96;
  if ((char)param_4[7] != '\0') {
    dVar18 = 2.5758;
  }
  dVar18 = dVar18 / (*(double *)(param_4 + 4) * SQRT((dVar16 * dVar19) / dVar17));
  dVar18 = dVar18 * dVar18;
  uVar8 = (uint)((ulonglong)dVar18 >> 0x20);
  local_90[0] = SUB84(dVar18,0);
  uVar6 = (uVar8 & 0x7fffffff) >> 0x14;
  if (uVar6 < 0x3e0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    local_90[1] = uVar8 & 0xfffff | 0x100000;
    uVar14 = uVar6 - 0x3ff;
    if (uVar6 < 0x3ff) {
      local_90[2] = 0;
      local_90[3] = 0;
      uVar8 = uVar6 - 0x3d3 & 0x1f;
      uVar10 = uVar8 ^ 0x1f;
      iVar7 = -(uVar6 - 0x3d3 >> 3 & 0xc);
      uVar12 = *(uint *)((int)local_90 + iVar7 + 4);
      uVar6 = *(uint *)((int)local_90 + iVar7 + 8);
      lVar2 = (ulonglong)(uVar6 << uVar8 | (uVar12 >> 1) >> uVar10) * 1000000000;
      uVar15 = (uint)lVar2;
      lVar3 = (ulonglong)(*(uint *)((int)local_90 + iVar7) << uVar8) * 1000000000;
      uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar4 = (ulonglong)(uVar12 << uVar8 | (*(uint *)((int)local_90 + iVar7) >> 1) >> uVar10) *
              1000000000;
      uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar1 = lVar4 + CONCAT44(uVar15,uVar14);
      uVar13 = 0;
      uVar6 = (int)((ulonglong)lVar2 >> 0x20) +
              (*(int *)((int)local_90 + iVar7 + 0xc) << uVar8 | (uVar6 >> 1) >> uVar10) * 1000000000
              + (uint)(CARRY4(uVar15,uVar12) ||
                      CARRY4(uVar15 + uVar12,(uint)CARRY4((uint)lVar4,uVar14)));
      if ((uVar1 & 0x8000000000000000) != 0) {
        uVar13 = (uint)(((int)lVar3 != 0 || (int)(uVar1 >> 0x20) != -0x80000000) || (int)uVar1 != 0)
                 | uVar6 & 1;
      }
      puVar11 = (undefined1 *)(uVar13 + uVar6);
      puVar9 = (undefined1 *)0x0;
      if (puVar11 != &DAT_3b9aca00) {
        puVar9 = puVar11;
      }
      uVar6 = (uint)(puVar11 == &DAT_3b9aca00);
      uVar8 = 0;
      goto LAB_00c70e6c;
    }
    if (uVar6 < 0x433) {
      uVar15 = local_90[0] >> (0x20 - uVar14 & 0xff) | uVar8 << (uVar14 & 0xff);
      uVar8 = local_90[0] << (uVar14 & 0xff);
      if (-1 < (int)(uVar6 - 0x41f)) {
        uVar8 = 0;
        uVar15 = local_90[0] << (uVar6 - 0x41f & 0xff);
      }
      uVar12 = 0;
      uVar1 = (ulonglong)(uVar15 & 0xfffff) * 1000000000 + ((ulonglong)uVar8 * 1000000000 >> 0x20);
      uVar14 = (uint)uVar1 >> 0x14;
      uVar6 = 0x433 - uVar6;
      uVar15 = local_90[0] >> (uVar6 & 0xff) | local_90[1] << (0x20 - (uVar6 & 0xffff) & 0xff);
      uVar10 = (uVar6 & 0xffff) - 0x20;
      if (-1 < (int)uVar10) {
        uVar15 = local_90[1] >> (uVar10 & 0xff);
      }
      local_90[1] = local_90[1] >> (uVar6 & 0xff);
      if (-1 < (int)uVar10) {
        local_90[1] = 0;
      }
      if ((uVar1 & 0x80000) != 0) {
        uVar12 = (uint)((int)((ulonglong)uVar8 * 1000000000) != 0 ||
                       ((uint)uVar1 & 0xfffff) != 0x80000) | uVar14 & 1;
      }
      puVar11 = (undefined1 *)(uVar12 + (uVar14 | (int)(uVar1 >> 0x20) << 0xc));
      puVar9 = (undefined1 *)0x0;
      if (puVar11 != &DAT_3b9aca00) {
        puVar9 = puVar11;
      }
      uVar6 = uVar15 + 1;
      uVar8 = local_90[1] + (0xfffffffe < uVar15);
      if (puVar11 != &DAT_3b9aca00) {
        uVar6 = uVar15;
        uVar8 = local_90[1];
      }
      goto LAB_00c70e6c;
    }
    if (0x43e < uVar6) {
      local_80 = (undefined4 **)CONCAT31(local_80._1_3_,1);
      local_54 = &LAB_00fba54c;
      local_58 = (uint **)&local_80;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_58,&DAT_018868b4);
    }
    uVar6 = uVar6 - 0x433;
    uVar8 = local_90[0] >> (0x20 - (uVar6 & 0xffff) & 0xff) | local_90[1] << (uVar6 & 0xff);
    uVar14 = (uVar6 & 0xffff) - 0x20;
    uVar6 = local_90[0] << (uVar6 & 0xff);
    if (-1 < (int)uVar14) {
      uVar8 = local_90[0] << (uVar14 & 0xff);
      uVar6 = 0;
    }
  }
  puVar9 = (undefined1 *)0x0;
LAB_00c70e6c:
  puVar11 = (undefined1 *)param_4[2];
  uVar14 = *param_4;
  uVar15 = param_4[1];
  if (puVar11 == &DAT_3b9aca00) {
    puVar11 = (undefined1 *)0x0;
    uVar14 = 0;
    uVar15 = 0;
  }
  bVar5 = puVar11 < puVar9;
  if (uVar14 != uVar6 || uVar15 != uVar8) {
    bVar5 = uVar15 <= uVar8 && (uint)(uVar6 <= uVar14) <= uVar15 - uVar8;
  }
  if (bVar5) {
    uVar15 = uVar8;
    uVar14 = uVar6;
    puVar11 = puVar9;
  }
  *param_1 = uVar14;
  param_1[1] = uVar15;
  param_1[2] = (uint)puVar11;
  return;
}

