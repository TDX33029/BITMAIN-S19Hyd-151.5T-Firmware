// FUN_019f2e20 @ 019f2e20 size=968 calls_out=20 calls_in=0
// strings: waker missing | internal error: entered unreachable code: unexpected stage | [internal | assertion failed: self.is_empty()

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019f2e20(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint uStack_a0;
  uint uStack_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int *local_88;
  uint local_84;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  uint local_2c;
  
  puVar11 = (uint *)((uint)local_b8 | 4);
  uVar3 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
    if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    uVar15 = FUN_019ec558(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    local_70 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 0x80000000;
    if (local_70 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("[internal",0x2d,&DAT_01d29564);
    }
    uVar10 = *(undefined4 *)(param_1 + 0x38);
    uVar12 = *(undefined4 *)(param_1 + 0x3c);
    uVar13 = *(undefined4 *)(param_1 + 0x40);
    uVar14 = *(undefined4 *)(param_1 + 0x44);
    puVar9 = (undefined4 *)((uint)&local_70 | 4);
    *puVar9 = *(undefined4 *)(param_1 + 0x34);
    puVar9[1] = uVar10;
    puVar9[2] = uVar12;
    puVar9[3] = uVar13;
    puVar9[4] = uVar14;
    FUN_019ec5bc();
    local_98 = local_70;
    local_94 = iStack_6c;
    local_90 = iStack_68;
    local_8c = iStack_64;
    local_88 = piStack_60;
    local_84 = uStack_5c;
    if (iStack_68 != iStack_64) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.is_empty()",0x21,&DAT_01d29284);
    }
    uVar5 = local_70 - iStack_68;
    if (uVar5 < uStack_5c) {
      FUN_016092cc(&local_98,iStack_68,uStack_5c,1,1);
      uVar5 = local_98 - local_90;
    }
    if (uVar5 < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uStack_5c,uVar5,&DAT_01d29294);
    }
    iVar6 = local_94 + local_90;
    while (uVar5 = FUN_01bf0424(piStack_60[2],iVar6,uStack_5c), uVar5 == 0xffffffff) {
      puVar7 = (uint *)FUN_01be3244();
      uVar5 = *puVar7;
      local_58 = local_58 & 0xffffff00;
      local_54 = uVar5;
      cVar4 = FUN_005ef5e8(&local_58);
      if (cVar4 != '#') goto LAB_019f2f94;
      FUN_0069263c(0,uVar5);
    }
    local_58 = CONCAT31(local_58._1_3_,4);
    local_54 = uVar5;
LAB_019f2f94:
    uVar2 = local_54;
    uVar5 = local_58;
    local_90 = local_54;
    if ((local_58 & 0xff) != 4) {
      local_90 = 0;
    }
    if (local_8c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_8c,&DAT_00533278,0);
    }
    piVar8 = (int *)((uint)&local_50 | 4);
    *piVar8 = local_98;
    piVar8[1] = local_94;
    piVar8[2] = local_90;
    piVar8[3] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *local_88;
      bVar1 = (bool)hasExclusiveAccess(local_88);
    } while (!bVar1);
    *local_88 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db648(local_88);
    }
    local_b8[0] = 2;
    *puVar11 = uVar5;
    puVar11[1] = uVar2;
    local_ac = local_50;
    local_a8 = uStack_4c;
    local_a4 = local_48;
    uStack_a0 = uStack_44;
    uStack_9c = uStack_40;
    FUN_019ec558((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    local_98 = 2;
    FUN_019fa8d8(param_1 + 0x18,&local_98);
    local_30 = puVar11[5];
    local_2c = puVar11[6];
    local_3c = local_ac;
    local_38 = local_a8;
    uStack_34 = local_a4;
    local_48 = 2;
    uStack_44 = uVar5;
    uStack_40 = uVar2;
    local_50 = 1;
    FUN_019fa8d8(param_1 + 0x18,&local_50);
    break;
  case 1:
    FUN_019d7200(param_1 + 0x18);
    break;
  case 2:
    return;
  case 3:
    FUN_019d7bcc(param_1);
    return;
  }
  uVar5 = FUN_019d8b4c();
  if ((uVar5 & 8) == 0) {
    local_30 = 2;
    FUN_019fa8d8(param_1 + 0x18,&local_30);
  }
  else if ((uVar5 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x58) + 8))(*(undefined4 *)(param_1 + 0x5c));
    uVar5 = FUN_019d8c50(param_1);
    if ((uVar5 & 8) == 0) {
      if (*(int *)(param_1 + 0x58) != 0) {
        (**(code **)(*(int *)(param_1 + 0x58) + 0xc))(*(undefined4 *)(param_1 + 0x5c));
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  iVar6 = FUN_019d8bc0(param_1,1);
  if (iVar6 == 0) {
    return;
  }
  FUN_019d7bcc(param_1);
  return;
}

