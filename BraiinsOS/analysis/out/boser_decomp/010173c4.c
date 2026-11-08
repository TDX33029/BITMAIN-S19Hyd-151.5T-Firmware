// FUN_010173c4 @ 010173c4 size=1016 calls_out=6 calls_in=1
// strings: 

void FUN_010173c4(uint *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  bool bVar24;
  bool bVar25;
  undefined4 *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 **local_50;
  int local_4c [2];
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 **local_34;
  undefined4 **local_30;
  int *local_2c;
  undefined4 local_28;
  
  uVar21 = *(uint *)(param_2 + 8);
  uVar13 = 0;
  bVar25 = 0x3ffffffe < uVar21;
  bVar24 = uVar21 == 0x3fffffff;
  uVar11 = uVar21 * 4;
  if (uVar21 < 0x40000000) {
    bVar25 = 0x7ffffffb < uVar11;
    bVar24 = uVar11 == 0x7ffffffc;
  }
  if (bVar25 && !bVar24) {
LAB_010173e4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,uVar11);
  }
  uVar19 = 0;
  if (uVar11 == 0) {
    uVar2 = 4;
    uVar11 = 0;
  }
  else {
    puVar16 = *(undefined4 **)(param_2 + 4);
    uVar13 = 4;
    uVar2 = FUN_01298504(uVar11,4);
    if (uVar2 == 0) goto LAB_010173e4;
    if (uVar21 != 0) {
      puVar5 = puVar16 + uVar21;
      iVar9 = 0;
      uVar11 = uVar21;
      do {
        if (puVar16 == puVar5) break;
        piVar18 = (int *)*puVar16;
        uVar11 = uVar11 - 1;
        do {
          iVar14 = *piVar18;
          bVar24 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar24);
        *piVar18 = iVar14 + 1;
        if (iVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x10174b0);
          (*pcVar1)();
        }
        *(int **)(uVar2 + iVar9 * 4) = piVar18;
        puVar16 = puVar16 + 1;
        iVar9 = iVar9 + 1;
      } while (uVar11 != 0);
    }
    uVar11 = uVar21;
  }
  puVar16 = *(undefined4 **)(param_2 + 0x18);
  bVar25 = (undefined4 *)0x3ffffffe < puVar16;
  bVar24 = puVar16 == (undefined4 *)0x3fffffff;
  uVar22 = (int)puVar16 * 4;
  if (puVar16 < (undefined4 *)0x40000000) {
    bVar25 = 0x7ffffffb < uVar22;
    bVar24 = uVar22 == 0x7ffffffc;
  }
  if (bVar25 && !bVar24) {
LAB_010174a4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar19,uVar22);
  }
  iVar9 = 0;
  if (uVar22 == 0) {
    local_6c = 4;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar19 = 4;
    local_6c = FUN_01298504(uVar22,4);
    puVar5 = puVar16;
    if (local_6c == 0) goto LAB_010174a4;
  }
  uVar22 = *(uint *)(param_2 + 0xc);
  local_64 = 0;
  local_68 = 0;
  if (puVar16 == (undefined4 *)0x0) {
    uVar22 = 0;
    uVar20 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x14);
    uVar20 = uVar3 - uVar22;
    if (uVar3 < uVar22) {
      uVar20 = uVar3;
    }
    if ((undefined4 *)(uVar22 - uVar20) < puVar16) {
      iVar9 = (int)puVar16 - (int)(uVar22 - uVar20);
    }
    else {
      uVar22 = uVar20 + (int)puVar16;
    }
  }
  puVar16 = *(undefined4 **)(param_2 + 0x10);
  puVar4 = puVar16 + uVar22;
  puVar15 = puVar16 + uVar20;
  puVar7 = puVar16 + iVar9;
  puVar17 = (undefined4 *)(iVar9 + (uVar22 - uVar20));
  local_70 = puVar5;
  local_60 = puVar15;
  local_5c = puVar4;
  local_58 = puVar16;
  local_54 = puVar7;
  if (puVar5 < puVar17) {
    FUN_0132b898(&local_70,0,puVar17,4,4);
    uVar8 = local_64;
    uVar3 = local_68;
    puVar23 = local_70;
    if ((int)puVar5 - local_64 < local_68) {
      uVar10 = (int)puVar5 - local_68;
      uVar12 = local_64 - uVar10;
      if ((uVar12 < uVar10) && (uVar12 <= (uint)((int)local_70 - (int)puVar5))) {
        FUN_01bed4e2(local_6c + (int)puVar5 * 4,local_6c,uVar12 * 4);
      }
      else {
        uVar3 = (int)local_70 - uVar10;
        FUN_01bed864(local_6c + uVar3 * 4,local_6c + local_68 * 4,uVar10 * 4);
        local_68 = uVar3;
      }
    }
  }
  else {
    uVar3 = 0;
    uVar8 = 0;
    puVar23 = puVar5;
  }
  local_4c[0] = 0;
  local_50 = &local_70;
  puVar5 = puVar23;
  if ((undefined4 *)(uVar3 + uVar8) < puVar23) {
    puVar5 = (undefined4 *)0x0;
  }
  local_44 = (undefined4 *)((int)(uVar3 + uVar8) - (int)puVar5);
  local_2c = local_4c;
  local_34 = local_50;
  if (puVar17 <= (undefined4 *)((int)puVar23 - (int)local_44)) {
    local_28 = 0;
    local_30 = &local_44;
    FUN_00df1a1c(&local_60,&local_34);
    goto LAB_01017788;
  }
  if (puVar23 != local_44) {
    iVar14 = uVar20 << 2;
    iVar6 = 0;
    do {
      if (uVar22 * 4 == iVar14) {
        local_44 = (undefined4 *)((int)local_44 + iVar6);
        puVar15 = (undefined4 *)((int)puVar16 + iVar14);
        iVar9 = iVar9 << 2;
        puVar5 = puVar16;
        goto LAB_01017714;
      }
      iVar14 = iVar14 + 4;
      *(undefined4 *)(local_6c + uVar3 * 4 + uVar8 * 4 + (int)puVar5 * -4 + iVar6 * 4) =
           puVar15[iVar6];
      iVar6 = iVar6 + 1;
      local_4c[0] = local_4c[0] + 1;
    } while ((int)local_44 + (iVar6 - (int)puVar23) != 0);
    puVar15 = (undefined4 *)((int)puVar16 + iVar14);
  }
  goto LAB_0101774c;
  while( true ) {
    iVar9 = iVar9 + -4;
    puVar16 = puVar5 + 1;
    *(undefined4 *)(local_6c + (int)local_44 * 4) = *puVar5;
    local_44 = (undefined4 *)((int)local_44 + 1);
    local_4c[0] = local_4c[0] + 1;
    puVar5 = puVar16;
    if (puVar23 == local_44) break;
LAB_01017714:
    puVar16 = puVar5;
    if (iVar9 == 0) break;
  }
LAB_0101774c:
  local_4c[1] = 0;
  local_28 = 0;
  local_30 = (undefined4 **)(local_4c + 1);
  local_44 = puVar15;
  local_40 = puVar4;
  local_3c = puVar16;
  local_38 = puVar7;
  FUN_00df1a1c(&local_44,&local_34);
LAB_01017788:
  local_50[3] = (undefined4 *)((int)local_50[3] + local_4c[0]);
  param_1[3] = (uint)local_70;
  param_1[4] = local_6c;
  param_1[5] = local_68;
  param_1[6] = local_64;
  *param_1 = uVar11;
  param_1[1] = uVar2;
  param_1[2] = uVar21;
  return;
}

