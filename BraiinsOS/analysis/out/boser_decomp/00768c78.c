// FUN_00768c78 @ 00768c78 size=840 calls_out=12 calls_in=2
// strings: 

void FUN_00768c78(undefined2 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  int local_c0;
  int local_b8;
  undefined1 uStack_b4;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined8 local_a8;
  byte local_a0;
  undefined1 uStack_9f;
  undefined2 uStack_9e;
  code *local_9c;
  undefined **local_98;
  uint *local_88;
  int local_84;
  undefined4 local_78;
  int local_70;
  int local_6c;
  int local_68;
  undefined2 local_64;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint *local_48;
  int local_44;
  
  uVar13 = param_2[1];
  iVar14 = param_2[2];
  uVar2 = *(undefined2 *)(param_2 + 3);
  FUN_01304e7c(&local_a0,uVar13,iVar14);
  if (local_a0 == 1) {
    local_a8._0_4_ = uVar13;
    local_a8._4_4_ = iVar14;
    FUN_013046c0(&local_a0,&local_a8);
    uVar6 = uStack_9f;
    if ((local_a8._4_4_ == 0) && ((local_a0 & 1) != 0)) {
      FUN_01bed4e2(&local_b8,&uStack_9e,0xf);
      *param_1 = 1;
      *(undefined1 *)(param_1 + 2) = uVar6;
      FUN_01bed4e2((int)param_1 + 5,&local_b8,0xf);
      param_1[0xe] = uVar2;
      *(undefined4 *)(param_1 + 10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      goto LAB_00768d48;
    }
    uVar10 = 0;
    if (iVar14 < 0) {
LAB_00768d68:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,iVar14);
    }
    if (iVar14 == 0) {
      iVar8 = 1;
      local_c0 = 0;
    }
    else {
      uVar10 = 1;
      iVar8 = FUN_01298504(iVar14,1);
      local_c0 = iVar14;
      if (iVar8 == 0) goto LAB_00768d68;
    }
    FUN_01bed4e2(iVar8,uVar13,iVar14);
    uVar16 = FUN_019ef7f4(&DAT_01d29434);
    local_84 = (int)(uVar16 >> 0x20);
    iVar9 = 0x218;
    if ((uVar16 & 1) != 0) {
      iVar9 = 0x148;
    }
    uVar10 = *(undefined4 *)(local_84 + iVar9);
    puVar15 = (undefined4 *)((uint)&local_a0 | 0x10);
    do {
      do {
        iVar9 = DAT_01d50474;
        uVar5 = DAT_01d50470;
        uVar11 = DAT_01d50470 + 1;
        iVar12 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar3 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar3);
      bVar3 = DAT_01d50470 == 0;
      bVar4 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar11;
      DAT_01d50474 = iVar12;
    } while (bVar3 && bVar4);
    iVar12 = 0x200;
    if ((uVar16 & 1) != 0) {
      iVar12 = 0x138;
    }
    local_84 = local_84 + iVar12;
    local_88 = *(uint **)(local_84 + 8);
    local_a8 = uVar16;
    if (local_88 != (uint *)0x0) {
      do {
        uVar11 = *local_88;
        bVar3 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar3);
      *local_88 = uVar11 + 1;
      if ((int)uVar11 < 0) {
LAB_00768e7c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x768e7c);
        (*pcVar1)();
      }
      local_84 = *(int *)(local_84 + 0xc);
      do {
        uVar11 = *local_88;
        bVar3 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar3);
      *local_88 = uVar11 + 1;
      if (0x7fffffff < uVar11) goto LAB_00768e7c;
    }
    puVar15[4] = uVar5;
    puVar15[5] = iVar9;
    local_70 = local_c0;
    local_a0 = 0xcc;
    uStack_9f = 0;
    uStack_9e = 0;
    local_98 = &PTR_LAB_01d29bf8;
    *puVar15 = 0;
    puVar15[1] = 0;
    local_78 = 0;
    local_9c = (code *)0x0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_b8 = 0;
    local_6c = iVar8;
    local_68 = iVar14;
    local_64 = uVar2;
    local_48 = local_88;
    local_44 = local_84;
    iVar8 = FUN_01be5878(&local_b8,0x20,0x60);
    iVar14 = local_b8;
    if ((iVar8 != 0) || (local_b8 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_b8,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar10,iVar14,1,uVar16);
    if ((local_a0 & 0xfe) != 4) {
      uStack_b4 = SUB41(local_9c,0);
      local_b1 = (undefined1)((uint)local_9c >> 0x18);
      local_b8 = CONCAT31((int3)(CONCAT22(uStack_9e,CONCAT11(uStack_9f,local_a0)) >> 8),local_a0);
      local_b3 = (undefined2)((uint)local_9c >> 8);
      local_9c = FUN_019a7d7c;
      local_a0 = (byte)&local_b8;
      uStack_9f = (undefined1)((uint)&local_b8 >> 8);
      uStack_9e = (undefined2)((uint)&local_b8 >> 0x10);
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_a0,&DAT_01d29434);
    }
    FUN_00668d74(&local_a8);
    *(int *)(param_1 + 2) = iVar14;
    uVar7 = 3;
  }
  else {
    *(uint *)(param_1 + 1) = CONCAT13(local_9c._0_1_,CONCAT21(uStack_9e,uStack_9f));
    uVar7 = 0;
    param_1[3] = uVar2;
  }
  *param_1 = uVar7;
LAB_00768d48:
  FUN_019bb7e0(*param_2,uVar13);
  return;
}

