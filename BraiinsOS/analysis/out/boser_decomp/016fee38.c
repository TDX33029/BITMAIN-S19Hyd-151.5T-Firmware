// FUN_016fee38 @ 016fee38 size=1028 calls_out=12 calls_in=0
// strings: 

void FUN_016fee38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 uVar12;
  int *local_a0;
  int local_9c;
  int **local_98;
  int *local_88;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_50;
  int local_4c;
  int *local_28;
  
  puVar9 = (undefined4 *)((uint)&local_a0 | 0x10);
  do {
    do {
      iVar8 = DAT_01d50474;
      piVar7 = DAT_01d50470;
      piVar5 = (int *)((int)DAT_01d50470 + 1);
      iVar6 = DAT_01d50474 + (uint)((int *)0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == (int *)0x0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = piVar5;
    DAT_01d50474 = iVar6;
  } while (bVar2 && bVar3);
  uVar12 = thunk_FUN_01bee35a(&DAT_01d50470,0x20);
  puVar11 = (uint *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      FUN_01139b38(param_2,param_3);
      uVar4 = 1;
      goto LAB_016feeb0;
    }
    FUN_019a2bcc(puVar11,&LAB_019efb68);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  if (0x7ffffffe < *puVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar11 = *puVar11 + 1;
  if (puVar11[1] == 2) {
    FUN_01139b38(param_2,param_3);
    *puVar11 = *puVar11 - 1;
    uVar4 = 0;
LAB_016feeb0:
    local_a0 = (int *)CONCAT31(local_a0._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_a0,&DAT_01d1eef0);
  }
  local_70 = param_2;
  local_6c = param_3;
  if ((puVar11[1] & 1) == 0) {
    piVar5 = (int *)puVar11[2];
    do {
      iVar6 = *piVar5;
      local_4c = iVar6 + 1;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = local_4c;
    if (iVar6 < 0) goto LAB_016ff220;
    local_50 = (int *)piVar5[0x82];
    if (local_50 != (int *)0x0) {
      do {
        iVar6 = *local_50;
        bVar2 = (bool)hasExclusiveAccess(local_50);
      } while (!bVar2);
      *local_50 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_016ff220;
      local_4c = piVar5[0x83];
    }
    local_98 = (int **)&PTR_LAB_01d198e0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[4] = piVar7;
    puVar9[5] = iVar8;
    local_78 = 0;
    local_9c = 0;
    local_a0 = (int *)0xcc;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_28 = (int *)0x0;
    local_88 = piVar5;
    iVar6 = FUN_01be5878(&local_28,0x20,0x60);
    piVar10 = local_28;
    if ((iVar6 != 0) || (local_28 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_28,&local_a0,0x60);
    iVar6 = FUN_01765024(piVar5 + 0x40,piVar10,piVar10);
    local_a0 = piVar7;
    local_9c = iVar8;
    if (piVar5[0x80] != 0) {
      (**(code **)(piVar5[0x81] + 0x14))
                (piVar5[0x80] + (*(int *)(piVar5[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
    }
    if (iVar6 != 0) {
      FUN_019dc904(puVar11[2],iVar6);
    }
  }
  else {
    piVar5 = (int *)puVar11[2];
    do {
      iVar6 = *piVar5;
      local_4c = iVar6 + 1;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = local_4c;
    if (iVar6 < 0) {
LAB_016ff220:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x16ff220);
      (*pcVar1)();
    }
    local_50 = (int *)piVar5[0x50];
    if (local_50 != (int *)0x0) {
      do {
        iVar6 = *local_50;
        bVar2 = (bool)hasExclusiveAccess(local_50);
      } while (!bVar2);
      *local_50 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_016ff220;
      local_4c = piVar5[0x51];
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[4] = piVar7;
    puVar9[5] = iVar8;
    local_98 = (int **)&PTR_FUN_01d19908;
    local_78 = 0;
    local_9c = 0;
    local_a0 = (int *)0xcc;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_28 = (int *)0x0;
    local_88 = piVar5;
    iVar6 = FUN_01be5878(&local_28,0x20,0x60);
    piVar10 = local_28;
    if ((iVar6 != 0) || (local_28 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_28,&local_a0,0x60);
    iVar6 = FUN_01764da0(piVar5 + 0x14,piVar10,piVar10);
    local_a0 = piVar7;
    local_9c = iVar8;
    if (piVar5[0x4e] != 0) {
      (**(code **)(piVar5[0x4f] + 0x14))
                (piVar5[0x4e] + (*(int *)(piVar5[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
    }
    if (iVar6 != 0) {
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      local_a0 = piVar5 + 2;
      local_9c = iVar6;
      local_98 = &local_28;
      FUN_019ee860(&local_a0);
    }
  }
  *puVar11 = *puVar11 - 1;
  if (*piVar10 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar10);
    if (bVar2) {
      *piVar10 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar10[2] + 0x10))(piVar10);
  return;
}

