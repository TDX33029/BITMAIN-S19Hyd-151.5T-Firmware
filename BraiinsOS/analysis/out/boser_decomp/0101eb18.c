// FUN_0101eb18 @ 0101eb18 size=996 calls_out=8 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0101eb18(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int local_12c;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 *local_9c;
  int local_98;
  undefined4 local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  int iStack_84;
  int iStack_80;
  int local_78;
  undefined4 *puStack_74;
  int iStack_70;
  int local_68;
  undefined4 *local_64;
  int local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  
  while (FUN_00e7be78(&local_b8,param_2,param_3), uVar8 = local_8c, iVar7 = local_90,
        uVar12 = local_94, puVar10 = local_9c, local_68 = local_a0, iVar6 = local_a4,
        iVar5 = local_a8, iVar4 = local_ac, iVar3 = local_b0, iVar2 = local_b4, iVar1 = local_b8,
        local_b8 != -0x7fffffff) {
    if (local_b8 == -0x80000000) {
LAB_0101eed4:
      uVar12 = *(undefined4 *)(param_2 + 100);
      uVar16 = *(undefined4 *)(param_2 + 0x68);
      *param_1 = *(undefined4 *)(param_2 + 0x60);
      param_1[1] = uVar12;
      param_1[2] = uVar16;
      *(undefined4 *)(param_2 + 0x60) = 0;
      *(undefined4 *)(param_2 + 100) = 4;
      *(undefined4 *)(param_2 + 0x68) = 0;
      return;
    }
    puVar14 = local_9c;
    puVar13 = local_9c;
    if (local_98 != 0) {
      iVar17 = local_98 * 0x24;
      do {
        iVar17 = iVar17 + -0x24;
        local_48 = puVar14[4];
        uStack_44 = puVar14[5];
        puVar13 = puVar14 + 9;
        *puVar14 = *puVar14;
        puVar14[1] = puVar14[1];
        puVar14[2] = puVar14[2];
        puVar14[3] = puVar14[3];
        puVar14[4] = local_48;
        puVar14[5] = uStack_44;
        puVar14[6] = puVar14[6];
        puVar14[7] = puVar14[7];
        puVar14[8] = puVar14[8];
        puVar14 = puVar13;
      } while (iVar17 != 0);
      puVar14 = local_9c + local_98 * 9;
    }
    local_50 = 0;
    iVar17 = ((uint)((int)puVar13 - (int)local_9c) >> 2) * 0x38e38e39;
    local_30 = local_9c;
    local_4c = 4;
    local_54 = 4;
    local_58 = 4;
    local_2c = iVar17;
    FUN_01aa3700(puVar14,((uint)((int)(local_9c + local_98 * 9) - (int)puVar14) >> 2) * 0x38e38e39);
    local_64 = puVar10;
    local_60 = iVar17;
    FUN_00963584(&local_58);
    uVar16 = 0;
    iVar17 = local_12c;
    if (0x7ffffff < uVar8) {
LAB_0101ee94:
      local_12c = iVar17;
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,local_12c);
    }
    if (uVar8 == 0) {
      iVar17 = 0;
      local_12c = 4;
      local_2c = 4;
      local_30 = (undefined4 *)0x0;
    }
    else {
      uVar16 = 4;
      local_12c = FUN_01298504(uVar8 << 4,4);
      iVar17 = uVar8 << 4;
      if (local_12c == 0) goto LAB_0101ee94;
      iVar17 = 0;
      local_28 = 0;
      local_30 = (undefined4 *)uVar8;
      local_2c = local_12c;
      do {
        puVar14 = (undefined4 *)(iVar7 + iVar17 * 8);
        uVar16 = puVar14[1];
        FUN_01266f10(&local_58,*puVar14);
        puVar10 = (undefined4 *)(local_12c + iVar17 * 0x10);
        iVar17 = iVar17 + 1;
        *puVar10 = local_58;
        puVar10[1] = local_54;
        puVar10[2] = local_50;
        puVar10[3] = uVar16;
        local_4c = uVar16;
      } while (puVar14 + 2 != (undefined4 *)(iVar7 + uVar8 * 8));
    }
    local_28 = iVar17;
    FUN_0134c054(uVar12,iVar7,4,8);
    iVar9 = local_28;
    iVar17 = local_2c;
    puVar14 = local_30;
    iVar7 = local_60;
    puVar10 = local_64;
    local_88 = (uint)local_30;
    iStack_84 = local_2c;
    iStack_80 = local_28;
    local_78 = local_68;
    puStack_74 = local_64;
    iStack_70 = local_60;
    if (iVar1 == -0x80000000) goto LAB_0101eed4;
    if (iVar1 == -0x7fffffff) break;
    iVar15 = *(int *)(param_2 + 0x68);
    if (iVar15 == *(int *)(param_2 + 0x60)) {
      FUN_00f9d77c((undefined4 *)(param_2 + 0x60));
    }
    piVar11 = (int *)(*(int *)(param_2 + 100) + iVar15 * 0x30);
    *piVar11 = iVar1;
    piVar11[1] = iVar2;
    piVar11[2] = iVar3;
    piVar11[3] = iVar4;
    piVar11[4] = iVar5;
    piVar11[5] = iVar6;
    piVar11[6] = local_68;
    piVar11[7] = (int)puVar10;
    piVar11[8] = iVar7;
    piVar11[9] = (int)puVar14;
    piVar11[10] = iVar17;
    piVar11[0xb] = iVar9;
    *(int *)(param_2 + 0x68) = iVar15 + 1;
  }
  *param_1 = 0x80000000;
  return;
}

