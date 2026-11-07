// FUN_01517058 @ 01517058 size=1720 calls_out=17 calls_in=0
// strings: 

void FUN_01517058(uint *param_1,undefined4 *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  uint local_e0;
  int local_cc;
  int *local_c8;
  int local_c4;
  int *local_c0;
  int *local_bc;
  uint local_b8;
  int *local_b4;
  uint local_b0;
  int *local_ac;
  uint local_a8;
  int *local_a4;
  uint local_a0;
  int *local_9c;
  uint local_98;
  undefined4 local_94;
  int *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int *local_78;
  undefined4 *local_74;
  uint local_70;
  int local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  piVar12 = *(int **)(param_3 + 0xc);
  uVar17 = 0;
  iVar9 = (int)piVar12 * 0xc;
  if ((int *)0xaaaaaaa < piVar12) {
LAB_0151709c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar17,iVar9);
  }
  uVar16 = 0;
  if (iVar9 == 0) {
    local_cc = 4;
    local_c8 = (int *)0x0;
  }
  else {
    uVar17 = 4;
    local_cc = FUN_01298504(iVar9,4);
    local_c8 = piVar12;
    if (local_cc == 0) goto LAB_0151709c;
  }
  local_c0 = (int *)0x0;
  local_c4 = local_cc;
  if (((int *)0x3ffffff < piVar12) || (uVar17 = (int)piVar12 * 0x40, 0x7ffffffc < uVar17)) {
LAB_01517158:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar16,uVar17);
  }
  if (uVar17 == 0) {
    local_e0 = 4;
    local_bc = (int *)0x0;
  }
  else {
    uVar16 = 4;
    local_e0 = FUN_01298504(uVar17,4);
    if (local_e0 == 0) goto LAB_01517158;
    local_bc = piVar12;
  }
  puVar20 = &local_88;
  piVar18 = (int *)0x0;
  local_a4 = *(int **)(param_3 + 8);
  iVar10 = param_2[2];
  local_a8 = *(uint *)(param_3 + 4);
  iVar9 = param_2[1];
  if (local_a8 == 0) {
    piVar12 = (int *)0x0;
  }
  uVar16 = param_2[4];
  iVar5 = param_2[5];
  local_b0 = (uint)(local_a8 != 0);
  local_b4 = (int *)0x0;
  local_9c = (int *)0x0;
  local_ac = (int *)0x0;
  bVar4 = false;
  piVar13 = (int *)0x0;
  local_b8 = local_e0;
  local_a0 = local_b0;
  local_98 = local_a8;
  local_94 = local_a4;
  local_90 = piVar12;
  do {
    while( true ) {
      uVar21 = FUN_01a41998(&local_b0);
      iVar7 = (int)uVar21;
      if (iVar7 == 0) {
        iVar9 = (int)local_b4 << 6;
        uVar17 = local_b8;
        goto LAB_01517398;
      }
      uVar11 = *(undefined4 *)(iVar7 + 4);
      piVar12 = *(int **)(iVar7 + 8);
      if (iVar10 == 0) break;
      iVar14 = iVar9;
      iVar19 = iVar10 << 5;
      while ((*(int **)(iVar14 + 8) != piVar12 ||
             (iVar6 = thunk_FUN_01bed842(*(undefined4 *)(iVar14 + 4),uVar11,piVar12), iVar6 != 0)))
      {
        iVar14 = iVar14 + 0x20;
        iVar19 = iVar19 + -0x20;
        if (iVar19 == 0) goto LAB_01517320;
      }
      local_48 = 0x80000000;
      local_44 = uVar11;
      local_40 = piVar12;
      local_3c = param_4;
      FUN_015737d4(puVar20,iVar14 + 0xc,(int)((ulonglong)uVar21 >> 0x20),&local_48,param_5,param_6);
      if (piVar18 == local_bc) {
        FUN_0155ab78(&local_bc);
        local_e0 = local_b8;
      }
      piVar12 = piStack_54;
      puVar8 = (undefined4 *)(local_e0 + (int)piVar18 * 0x40);
      piVar18 = (int *)((int)piVar18 + 1);
      *puVar8 = local_88;
      puVar8[1] = uStack_84;
      puVar8[2] = uStack_80;
      puVar8[3] = local_7c;
      puVar8[4] = local_78;
      puVar8[5] = local_74;
      puVar8[6] = local_70;
      puVar8[7] = local_6c;
      puVar8[8] = uStack_68;
      puVar8[9] = uStack_64;
      puVar8[10] = local_60;
      puVar8[0xb] = uStack_5c;
      puVar8[0xc] = uStack_58;
      puVar8[0xd] = piStack_54;
      puVar8[0xe] = uStack_50;
      puVar8[0xf] = uStack_4c;
      local_b4 = piVar18;
      if (*(int *)(iVar7 + 8) == iVar5) {
        iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar7 + 4),uVar16,iVar5);
        bVar4 = (bool)(iVar7 == 0 | bVar4);
      }
    }
LAB_01517320:
    FUN_006666fc(puVar20,uVar11,piVar12);
    if (piVar13 == local_c8) {
      FUN_019abd3c(&local_c8);
      local_cc = local_c4;
    }
    local_c0 = (int *)((int)piVar13 + 1);
    puVar8 = (undefined4 *)(local_cc + (int)piVar13 * 0xc);
    *puVar8 = local_88;
    puVar8[1] = uStack_84;
    puVar8[2] = uStack_80;
    piVar13 = local_c0;
  } while( true );
  while( true ) {
    pcVar1 = (char *)(uVar17 + 0x3c);
    iVar9 = iVar9 + -0x40;
    uVar17 = uVar17 + 0x40;
    if (*pcVar1 == '\0') break;
LAB_01517398:
    if (iVar9 == 0) {
      local_ac = local_bc;
      uVar17 = 0x80000000;
      local_a0 = 0;
      local_a4 = local_b4;
      local_a8 = local_b8;
      goto LAB_015173f0;
    }
  }
  local_a4 = local_bc;
  uVar17 = 0;
  local_9c = local_b4;
  local_a0 = local_b8;
  local_98 = 0;
  local_a8 = 0;
  local_ac = (int *)&SUB_00000004;
LAB_015173f0:
  local_b0 = uVar17;
  if (piVar13 != (int *)0x0) {
    piVar18 = (int *)param_2[6];
    if (param_5 == 0) {
      uVar16 = 0;
      iVar9 = param_5;
      puVar8 = param_2;
    }
    else {
      uVar17 = param_2[7];
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_5 + 0xc));
      }
      piVar12 = *(int **)(param_5 + 0xc);
      do {
        iVar9 = *piVar12;
        bVar3 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar3);
      *piVar12 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_01517710;
      piVar18 = piVar18 + 2;
      puVar8 = *(undefined4 **)(param_5 + 0x10);
      uVar15 = (*(int **)(param_5 + 4))[1];
      if (uVar17 < uVar15) {
        uVar15 = 0;
      }
      else {
        iVar9 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar18,uVar15);
        if (iVar9 != 0) {
          uVar15 = 0;
        }
        piVar18 = (int *)((int)piVar18 + uVar15);
      }
      uVar21 = FUN_016bc0ec(piVar18,uVar17 - uVar15);
      uVar17 = (uint)uVar21;
      uVar16 = 2;
      piVar18 = (int *)param_2[6];
      iVar9 = (int)((ulonglong)uVar21 >> 0x20);
    }
    do {
      iVar10 = *piVar18;
      bVar3 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar3);
    *piVar18 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_01517710;
    puVar20 = (undefined4 *)param_2[7];
    local_7c = 3;
    local_88 = uVar16;
    local_78 = piVar12;
    local_74 = puVar8;
    local_70 = uVar17;
    local_6c = iVar9;
    uVar21 = FUN_01531840(param_4);
    local_48 = FUN_01595b0c(piVar18,puVar20,&local_88,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20),
                            param_3,&local_c8);
    FUN_01508738(&local_88,&local_48);
    FUN_01562ef4(&local_b0,&local_88);
    FUN_015019e4(&local_48);
  }
  if (!bVar4) {
    uVar17 = LZCOUNT(piVar13);
    piVar18 = (int *)param_2[8];
    if (param_5 == 0) {
      uVar16 = 0;
    }
    else {
      uVar17 = param_2[9];
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_5 + 0xc));
      }
      piVar12 = *(int **)(param_5 + 0xc);
      do {
        iVar9 = *piVar12;
        bVar4 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar4);
      *piVar12 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_01517710;
      piVar18 = piVar18 + 2;
      puVar20 = *(undefined4 **)(param_5 + 0x10);
      uVar15 = (*(int **)(param_5 + 4))[1];
      if (uVar17 < uVar15) {
        uVar15 = 0;
      }
      else {
        iVar9 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar18,uVar15);
        if (iVar9 != 0) {
          uVar15 = 0;
        }
        piVar18 = (int *)((int)piVar18 + uVar15);
      }
      uVar21 = FUN_016bc0ec(piVar18,uVar17 - uVar15);
      param_5 = (int)((ulonglong)uVar21 >> 0x20);
      uVar17 = (uint)uVar21;
      uVar16 = 2;
      piVar18 = (int *)param_2[8];
    }
    do {
      iVar9 = *piVar18;
      bVar4 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar4);
    *piVar18 = iVar9 + 1;
    if (iVar9 < 0) {
LAB_01517710:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x1517710);
      (*pcVar2)();
    }
    uVar11 = param_2[9];
    local_7c = 3;
    local_88 = uVar16;
    local_78 = piVar12;
    local_74 = puVar20;
    local_70 = uVar17;
    local_6c = param_5;
    uVar21 = FUN_01531840(param_4);
    FUN_006666fc(&local_30,param_2[4],param_2[5]);
    puVar20 = (undefined4 *)((uint)&local_48 | 4);
    *puVar20 = local_30;
    puVar20[1] = uStack_2c;
    puVar20[2] = uStack_28;
    local_48 = CONCAT31(local_48._1_3_,3);
    local_30 = FUN_015963e0(piVar18,uVar11,&local_88,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20),
                            param_3,&local_48);
    FUN_01508738(&local_88,&local_30);
    FUN_01562ef4(&local_b0,&local_88);
    FUN_015019e4(&local_30);
  }
  *param_1 = local_b0;
  param_1[1] = (uint)local_ac;
  param_1[2] = local_a8;
  param_1[3] = (uint)local_a4;
  param_1[4] = local_a0;
  param_1[5] = (uint)local_9c;
  param_1[6] = local_98;
  if (piVar13 == (int *)0x0) {
    FUN_006a41c0(&local_c8);
  }
  return;
}

