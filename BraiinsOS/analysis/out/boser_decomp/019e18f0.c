// FUN_019e18f0 @ 019e18f0 size=584 calls_out=11 calls_in=1
// strings: failed to create UnixStream

void FUN_019e18f0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  uint local_38;
  uint local_30;
  int *local_2c;
  uint local_28;
  
  local_2c = (int *)&DAT_ffffffff;
  local_30 = 0xffffffff;
  iVar5 = FUN_01be9cd2(1,0x80801,0,&local_30);
  piVar3 = local_2c;
  uVar1 = local_30;
  if (iVar5 < 0) {
    puVar10 = (undefined4 *)FUN_01be3244();
    local_2c = (int *)*puVar10;
    local_30 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("failed to create UnixStream",0x1b,&local_30,&DAT_01d29424,&DAT_01d29474);
  }
  if (local_30 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_00570c98,8,&DAT_01d05e20);
  }
  if (local_2c == (int *)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_00570c98,8,&DAT_01d05e20);
  }
  uVar6 = FUN_01bea9c2();
  uVar12 = uVar6 * 0x10;
  bVar16 = 0xffffffe < uVar6;
  bVar15 = uVar6 == 0xfffffff;
  uVar13 = 0;
  if (uVar6 < 0x10000000) {
    bVar16 = 0x7ffffffb < uVar12;
    bVar15 = uVar12 == 0x7ffffffc;
  }
  if (bVar16 && !bVar15) {
LAB_019e1964:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,uVar12);
  }
  if (uVar12 == 0) {
    iVar5 = 4;
    uVar7 = 0;
  }
  else {
    uVar13 = 4;
    iVar5 = FUN_01298504(uVar12,4);
    uVar7 = uVar6;
    if (iVar5 == 0) goto LAB_019e1964;
  }
  local_38 = 0;
  if (uVar6 != 0) {
    iVar14 = 0;
    uVar12 = uVar6;
    do {
      FUN_019d82c4(&local_30);
      piVar4 = local_2c;
      uVar2 = local_30;
      piVar8 = local_2c + 0x28;
      do {
        iVar11 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar11 + -1;
      if (iVar11 == 1) {
        FUN_019e03e8(local_2c + 0x22);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar4;
        bVar15 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar15);
      *piVar4 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(piVar4);
      }
      uVar12 = uVar12 - 1;
      puVar9 = (uint *)(iVar5 + iVar14 * 0x10);
      *puVar9 = uVar2;
      iVar14 = iVar14 + 1;
      *(undefined1 *)(puVar9 + 3) = 0;
      puVar9[2] = 3;
      *(undefined1 *)(puVar9 + 1) = 0;
    } while (uVar12 != 0);
    local_38 = uVar6;
  }
  local_28 = local_38;
  local_2c = (int *)iVar5;
  if (local_38 < uVar7) {
    local_30 = uVar7;
    iVar5 = FUN_01609230(&local_30,local_38,4,0x10);
    if (iVar5 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    local_38 = local_28;
  }
  *param_1 = piVar3;
  param_1[1] = uVar1;
  param_1[2] = local_2c;
  param_1[3] = local_38;
  return;
}

