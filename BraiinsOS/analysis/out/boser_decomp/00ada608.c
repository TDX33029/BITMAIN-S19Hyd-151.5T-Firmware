// FUN_00ada608 @ 00ada608 size=940 calls_out=11 calls_in=0
// strings: 

void FUN_00ada608(undefined1 *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  int *local_a0;
  int local_9c;
  undefined **local_98;
  int *local_88;
  undefined4 local_78;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_50;
  int local_4c;
  uint local_28;
  
  puVar10 = (undefined4 *)((uint)&local_a0 | 0x10);
  do {
    do {
      iVar9 = DAT_01d50474;
      piVar8 = DAT_01d50470;
      piVar6 = (int *)((int)DAT_01d50470 + 1);
      iVar7 = DAT_01d50474 + (uint)((int *)0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == (int *)0x0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = piVar6;
    DAT_01d50474 = iVar7;
  } while (bVar2 && bVar3);
  uVar12 = thunk_FUN_01bee35a(&DAT_01d50470,0x20);
  puVar11 = (uint *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
  if ((char)puVar11[0xe] != '\x01') {
    uVar4 = 1;
    if ((char)puVar11[0xe] == '\x02') goto LAB_00ada670;
    FUN_019a2bcc(puVar11,&LAB_019efb68);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  uVar5 = *puVar11;
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar11 = uVar5 + 1;
  if (puVar11[1] == 2) {
    *puVar11 = uVar5;
    uVar4 = 0;
LAB_00ada670:
    local_a0 = (int *)CONCAT31(local_a0._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_a0,&DAT_01c10500);
  }
  if ((puVar11[1] & 1) == 0) {
    piVar6 = (int *)puVar11[2];
    do {
      iVar7 = *piVar6;
      local_4c = iVar7 + 1;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = local_4c;
    if (iVar7 < 0) goto LAB_00ada9a8;
    local_50 = (int *)piVar6[0x82];
    if (local_50 != (int *)0x0) {
      do {
        iVar7 = *local_50;
        bVar2 = (bool)hasExclusiveAccess(local_50);
      } while (!bVar2);
      *local_50 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_00ada9a8;
      local_4c = piVar6[0x83];
    }
    local_98 = &PTR_LAB_01c0f1bc;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[4] = piVar8;
    puVar10[5] = iVar9;
    local_9c = 0;
    local_a0 = (int *)0xcc;
    local_78 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_28 = 0;
    local_88 = piVar6;
    iVar7 = FUN_01be5878(&local_28,0x20,0x60);
    uVar5 = local_28;
    if ((iVar7 != 0) || (local_28 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_28,&local_a0,0x60);
    iVar7 = FUN_01a88f0c(piVar6 + 0x40,uVar5,uVar5);
    local_a0 = piVar8;
    local_9c = iVar9;
    if (piVar6[0x80] != 0) {
      (**(code **)(piVar6[0x81] + 0x14))
                (piVar6[0x80] + (*(int *)(piVar6[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
    }
    if (iVar7 != 0) {
      FUN_019dc904(puVar11[2],iVar7);
    }
  }
  else {
    piVar6 = (int *)puVar11[2];
    do {
      iVar7 = *piVar6;
      local_4c = iVar7 + 1;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = local_4c;
    if (iVar7 < 0) {
LAB_00ada9a8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xada9a8);
      (*pcVar1)();
    }
    local_50 = (int *)piVar6[0x50];
    if (local_50 != (int *)0x0) {
      do {
        iVar7 = *local_50;
        bVar2 = (bool)hasExclusiveAccess(local_50);
      } while (!bVar2);
      *local_50 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_00ada9a8;
      local_4c = piVar6[0x51];
    }
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[4] = piVar8;
    puVar10[5] = iVar9;
    local_98 = &PTR_LAB_01c0f3c4;
    local_9c = 0;
    local_a0 = (int *)0xcc;
    local_78 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_28 = 0;
    local_88 = piVar6;
    iVar7 = FUN_01be5878(&local_28,0x20,0x60);
    uVar5 = local_28;
    if ((iVar7 != 0) || (local_28 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_28,&local_a0,0x60);
    iVar7 = FUN_01a89190(piVar6 + 0x14,uVar5,uVar5);
    if (piVar6[0x4e] != 0) {
      local_a0 = piVar8;
      local_9c = iVar9;
      (**(code **)(piVar6[0x4f] + 0x14))
                (piVar6[0x4e] + (*(int *)(piVar6[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
    }
    if (iVar7 != 0) {
      local_28 = local_28 & 0xffffff00;
      local_a0 = piVar6 + 2;
      local_9c = iVar7;
      local_98 = (undefined **)&local_28;
      FUN_019ee860(&local_a0);
    }
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(uint *)(param_1 + 0x14) = uVar5;
  uVar5 = *puVar11;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  *puVar11 = uVar5 - 1;
  return;
}

