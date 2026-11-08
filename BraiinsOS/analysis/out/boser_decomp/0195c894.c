// FUN_0195c894 @ 0195c894 size=1332 calls_out=12 calls_in=2
// strings: 

void FUN_0195c894(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int extraout_r3;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int local_2570;
  uint local_2560;
  int local_255c;
  undefined1 auStack_2558 [8];
  undefined4 local_2550;
  undefined4 local_2530;
  undefined1 local_2529;
  uint *local_2020;
  undefined1 *local_201c;
  undefined1 auStack_2018 [1344];
  undefined1 auStack_1ad8 [1336];
  undefined4 *local_15a0;
  undefined1 auStack_1598 [1336];
  undefined1 auStack_1060 [1344];
  int *local_b20;
  int local_b1c;
  int **local_b18;
  int *local_b08;
  undefined4 local_af8;
  undefined1 auStack_af4 [1340];
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  int *local_5a8;
  int local_5a4;
  undefined1 auStack_588 [1344];
  int *local_48;
  undefined1 auStack_41 [29];
  
  puVar12 = (undefined4 *)((uint)&local_b20 | 0x10);
  do {
    do {
      local_2560 = DAT_01d50470;
      local_255c = DAT_01d50474;
      uVar7 = DAT_01d50470 + 1;
      iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar7;
    DAT_01d50474 = iVar9;
  } while (bVar2 && bVar3);
  local_201c = auStack_41;
  local_2020 = &local_2560;
  local_2529 = 0;
  local_2530 = param_1;
  uVar13 = thunk_FUN_01bee35a();
  local_2550 = (undefined4)((ulonglong)uVar13 >> 0x20);
  puVar8 = (uint *)((int)uVar13 + extraout_r3);
  if ((char)puVar8[0xe] != '\x01') {
    if ((char)puVar8[0xe] == '\x02') {
      FUN_0194ff54(auStack_2558);
      uVar4 = 1;
      goto LAB_0195c93c;
    }
    FUN_019a2bcc(puVar8,&LAB_019efb68);
    *(undefined1 *)(puVar8 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_2018,auStack_2558,0x540);
  if (0x7ffffffe < *puVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar8 = *puVar8 + 1;
  uVar7 = puVar8[1];
  FUN_01bed4e2(auStack_1ad8,auStack_2558,0x540);
  if (uVar7 == 2) {
    FUN_0194ff54(auStack_1ad8);
    *puVar8 = *puVar8 - 1;
    uVar4 = 0;
LAB_0195c93c:
    local_b20 = (int *)CONCAT31(local_b20._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_b20,&DAT_01d26cc0);
  }
  FUN_01bed4e2(auStack_1598,auStack_2558,0x538);
  piVar6 = (int *)*local_15a0;
  iVar9 = local_15a0[1];
  if ((uVar7 & 1) == 0) {
    piVar11 = (int *)puVar8[2];
    do {
      iVar5 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_0195cdac;
    piVar10 = (int *)piVar11[0x82];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0195cdac;
      local_2570 = piVar11[0x83];
    }
    FUN_01bed4e2((uint)auStack_588 | 4,auStack_1598,0x538);
    local_af8 = 0;
    FUN_01bed4e2(auStack_af4,auStack_588,0x53c);
    local_b18 = (int **)&PTR_FUN_01d26184;
    puVar12[4] = piVar6;
    puVar12[5] = iVar9;
    local_5a4 = local_2570;
    local_b20 = (int *)0xcc;
    *puVar12 = 0;
    puVar12[1] = 0;
    local_b1c = 0;
    local_5b8 = 0;
    local_5b4 = 0;
    local_5b0 = 0;
    local_48 = (int *)0x0;
    local_b08 = piVar11;
    local_5a8 = piVar10;
    iVar5 = FUN_01be5878(&local_48,0x20,0x580);
    piVar10 = local_48;
    if ((iVar5 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x580);
    }
    FUN_01bed4e2(local_48,&local_b20,0x580);
    iVar5 = FUN_01a2cc10(piVar11 + 0x40,piVar10,piVar10);
    local_b20 = piVar6;
    local_b1c = iVar9;
    if (piVar11[0x80] != 0) {
      (**(code **)(piVar11[0x81] + 0x14))
                (piVar11[0x80] + (*(int *)(piVar11[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_b20);
    }
    if (iVar5 != 0) {
      FUN_019dc904(puVar8[2],iVar5);
    }
  }
  else {
    piVar11 = (int *)puVar8[2];
    do {
      iVar5 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_0195cdac:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x195cdac);
      (*pcVar1)();
    }
    piVar10 = (int *)piVar11[0x50];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0195cdac;
      local_2570 = piVar11[0x51];
    }
    FUN_01bed4e2((uint)auStack_1060 | 4,auStack_1598,0x538);
    local_af8 = 0;
    FUN_01bed4e2(auStack_af4,auStack_1060,0x53c);
    puVar12[4] = piVar6;
    puVar12[5] = iVar9;
    *puVar12 = 0;
    puVar12[1] = 0;
    local_b1c = 0;
    local_5b8 = 0;
    local_5b4 = 0;
    local_5b0 = 0;
    local_48 = (int *)0x0;
    local_b18 = (int **)&PTR_FUN_01d26044;
    local_b20 = (int *)0xcc;
    local_5a4 = local_2570;
    local_b08 = piVar11;
    local_5a8 = piVar10;
    iVar5 = FUN_01be5878(&local_48,0x20,0x580);
    piVar10 = local_48;
    if ((iVar5 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x580);
    }
    FUN_01bed4e2(local_48,&local_b20,0x580);
    iVar5 = FUN_01a2ce94(piVar11 + 0x14,piVar10,piVar10);
    local_b20 = piVar6;
    local_b1c = iVar9;
    if (piVar11[0x4e] != 0) {
      (**(code **)(piVar11[0x4f] + 0x14))
                (piVar11[0x4e] + (*(int *)(piVar11[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_b20);
    }
    if (iVar5 != 0) {
      local_48 = (int *)((uint)local_48 & 0xffffff00);
      local_b20 = piVar11 + 2;
      local_b1c = iVar5;
      local_b18 = &local_48;
      FUN_019ee860(&local_b20);
    }
  }
  *puVar8 = *puVar8 - 1;
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

