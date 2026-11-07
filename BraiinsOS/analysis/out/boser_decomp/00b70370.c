// FUN_00b70370 @ 00b70370 size=1136 calls_out=9 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b70370(int *param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  int **local_100;
  undefined1 uStack_fc;
  undefined2 local_fb;
  undefined1 local_f9;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  int local_c4;
  undefined4 local_c0;
  int **local_a0;
  code *local_9c;
  undefined4 local_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  uint *local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  int local_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_c0 = CONCAT22(local_c0._2_2_,CONCAT11(local_c0._1_1_,(undefined1)local_c0));
  FUN_019ecb18(&local_a0);
  FUN_01bed4e2((uint)&local_100 | 3,&local_a0,0x28);
  local_98 = (undefined **)((uint)local_98 & 0xffffff00);
  local_9c = (code *)0x1;
  local_a0 = (int **)0x1;
  FUN_01bed4e2((int)&local_98 + 1,&local_100,0x2b);
  piVar6 = (int *)thunk_FUN_01be5118(0x34);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  *piVar6 = (int)local_a0;
  piVar6[1] = (int)local_9c;
  piVar6[2] = (int)local_98;
  piVar6[3] = iStack_94;
  piVar6[4] = local_90;
  piVar6[5] = iStack_8c;
  piVar6[6] = (int)local_88;
  piVar6[7] = local_84;
  piVar6[8] = local_80;
  piVar6[9] = iStack_7c;
  piVar6[10] = local_78;
  piVar6[0xb] = local_74;
  piVar6[0xc] = iStack_70;
  FUN_019ecb18(&local_a0);
  FUN_01bed4e2((uint)&local_d0 | 3,&local_a0,0x28);
  local_98 = (undefined **)((uint)local_98 & 0xffffff00);
  local_9c = (code *)0x1;
  local_a0 = (int **)0x1;
  FUN_01bed4e2((int)&local_98 + 1,&local_d0,0x2b);
  piVar7 = (int *)thunk_FUN_01be5118(0x34);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  puVar12 = (undefined4 *)((uint)&local_a0 | 0x10);
  *piVar7 = (int)local_a0;
  piVar7[1] = (int)local_9c;
  piVar7[2] = (int)local_98;
  piVar7[3] = iStack_94;
  piVar7[4] = local_90;
  piVar7[5] = iStack_8c;
  piVar7[6] = (int)local_88;
  piVar7[7] = local_84;
  piVar7[8] = local_80;
  piVar7[9] = iStack_7c;
  piVar7[10] = local_78;
  piVar7[0xb] = local_74;
  piVar7[0xc] = iStack_70;
  do {
    iVar8 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar8 + 1;
  if (iVar8 < 0) {
LAB_00b70608:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xb70608);
    (*pcVar1)();
  }
  do {
    iVar8 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar8 + 1;
  if (iVar8 < 0) goto LAB_00b70608;
  local_80 = 0;
  local_98 = (undefined **)0x0;
  local_9c = (code *)0x1;
  local_a0 = (int **)0x1;
  piVar9 = (int *)thunk_FUN_01be5118(0x24);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x24);
  }
  *piVar9 = (int)local_a0;
  piVar9[1] = (int)local_9c;
  piVar9[2] = (int)local_98;
  piVar9[3] = iStack_94;
  piVar9[4] = local_90;
  piVar9[5] = iStack_8c;
  piVar9[6] = (int)local_88;
  piVar9[7] = local_84;
  piVar9[8] = local_80;
  do {
    iVar8 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar8 + 1;
  if (iVar8 < 0) goto LAB_00b70608;
  local_c0 = CONCAT31(CONCAT21(local_c0._2_2_,param_4),param_3);
  local_d0 = piVar7;
  local_cc = piVar6;
  local_c8 = piVar9;
  local_c4 = param_2;
  uVar16 = FUN_019ef7f4(0x1c2442c);
  iVar8 = (int)(uVar16 >> 0x20);
  iVar10 = 0x218;
  if ((uVar16 & 1) != 0) {
    iVar10 = 0x148;
  }
  uVar15 = *(undefined4 *)(iVar8 + iVar10);
  do {
    do {
      iVar10 = DAT_01d50474;
      uVar4 = DAT_01d50470;
      uVar13 = DAT_01d50470 + 1;
      iVar14 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar13;
    DAT_01d50474 = iVar14;
  } while (bVar2 && bVar3);
  iVar14 = 0x200;
  if ((uVar16 & 1) != 0) {
    iVar14 = 0x138;
  }
  local_88 = *(uint **)(iVar8 + iVar14 + 8);
  local_84 = iVar8;
  if (local_88 != (uint *)0x0) {
    do {
      uVar13 = *local_88;
      bVar2 = (bool)hasExclusiveAccess(local_88);
    } while (!bVar2);
    *local_88 = uVar13 + 1;
    if ((int)uVar13 < 0) goto LAB_00b70608;
    local_84 = *(int *)(iVar8 + iVar14 + 0xc);
    do {
      uVar13 = *local_88;
      bVar2 = (bool)hasExclusiveAccess(local_88);
    } while (!bVar2);
    *local_88 = uVar13 + 1;
    if (0x7fffffff < uVar13) goto LAB_00b70608;
  }
  piVar11 = (int *)((uint)&local_40 | 4);
  *piVar11 = (int)local_d0;
  piVar11[1] = (int)local_cc;
  piVar11[2] = (int)local_c8;
  piVar11[3] = local_c4;
  piVar11[4] = local_c0;
  local_78 = 0;
  local_74 = local_40;
  iStack_70 = uStack_3c;
  uStack_6c = uStack_38;
  uStack_68 = uStack_34;
  uStack_64 = uStack_30;
  uStack_60 = uStack_2c;
  puVar12[4] = uVar4;
  puVar12[5] = iVar10;
  *puVar12 = 0;
  puVar12[1] = 0;
  local_98 = &PTR_LAB_01c228e0;
  local_a0 = (int **)0xcc;
  local_9c = (code *)0x0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_100 = (int **)0x0;
  local_48 = local_88;
  local_44 = local_84;
  iVar10 = FUN_01be5878(&local_100,0x20,0x60);
  ppiVar5 = local_100;
  if ((iVar10 != 0) || (local_100 == (int **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x20,0x60);
  }
  FUN_01bed4e2(local_100,&local_a0,0x60);
  FUN_019f02d4(&local_a0,uVar15,ppiVar5,1,uVar16);
  if (((uint)local_a0 & 0xfe) != 4) {
    uStack_fc = SUB41(local_9c,0);
    local_f9 = (undefined1)((uint)local_9c >> 0x18);
    local_100 = local_a0;
    local_fb = (undefined2)((uint)local_9c >> 8);
    local_9c = FUN_019a7d7c;
    local_a0 = (int **)&local_100;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005ab28b,&local_a0,0x1c2442c);
  }
  FUN_009298dc((int)uVar16,iVar8);
  if (*ppiVar5 == (int *)0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(ppiVar5);
    if (bVar2) {
      *ppiVar5 = (int *)0x84;
      goto LAB_00b7073c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)((int)ppiVar5[2] + 0x10))(ppiVar5);
LAB_00b7073c:
  *param_1 = (int)piVar6;
  param_1[1] = (int)piVar7;
  param_1[2] = (int)piVar9;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

