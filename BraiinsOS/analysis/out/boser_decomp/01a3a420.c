// FUN_01a3a420 @ 01a3a420 size=1316 calls_out=14 calls_in=2
// strings: 

undefined4 FUN_01a3a420(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  uint local_aa8;
  int local_aa4;
  undefined1 auStack_aa0 [32];
  undefined4 local_a80;
  undefined4 local_a7c;
  undefined4 local_a78;
  undefined4 local_934;
  undefined4 local_930;
  undefined1 local_92a;
  uint *local_8f8;
  undefined1 *local_8f4;
  undefined1 auStack_8f0 [432];
  undefined1 auStack_740 [424];
  undefined4 *local_598;
  undefined1 auStack_590 [432];
  int *local_3e0;
  int local_3dc;
  int **local_3d8;
  int *local_3c8;
  undefined4 local_3b8;
  undefined1 auStack_3b4 [428];
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  int *local_1f8;
  uint local_1f4;
  undefined1 auStack_1d8 [428];
  int *local_2c;
  undefined1 uStack_25;
  
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)(param_1 + 6) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2bb90);
  }
  puVar6 = (undefined4 *)((uint)&local_3e0 | 0x10);
  uVar7 = param_1[2];
  local_a80 = *param_1;
  local_a7c = param_1[1];
  uVar15 = param_1[4];
  local_930 = param_1[5];
  do {
    do {
      local_aa8 = DAT_01d50470;
      local_aa4 = DAT_01d50474;
      uVar11 = DAT_01d50470 + 1;
      iVar13 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar11;
    DAT_01d50474 = iVar13;
  } while (bVar2 && bVar3);
  local_8f4 = &uStack_25;
  local_8f8 = &local_aa8;
  local_92a = 0;
  uVar16 = thunk_FUN_01bee35a(0,0x20);
  puVar14 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  local_a78 = uVar7;
  local_934 = uVar15;
  if ((char)puVar14[0xe] != '\x01') {
    if ((char)puVar14[0xe] == '\x02') {
      uVar8 = 1;
      FUN_01a215d4(auStack_aa0);
      goto LAB_01a3a4f8;
    }
    FUN_019a2bcc(puVar14,&LAB_019efb68);
    *(undefined1 *)(puVar14 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_8f0,auStack_aa0,0x1b0);
  if (0x7ffffffe < *puVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar14 = *puVar14 + 1;
  uVar9 = puVar14[1];
  FUN_01bed4e2(auStack_740,auStack_aa0,0x1b0);
  if (uVar9 == 2) {
    FUN_01a215d4(auStack_740);
    uVar8 = 0;
    *puVar14 = *puVar14 - 1;
LAB_01a3a4f8:
    local_3e0 = (int *)CONCAT31(local_3e0._1_3_,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_3e0,&DAT_01d2bb80);
  }
  piVar4 = (int *)*local_598;
  iVar13 = local_598[1];
  if ((uVar9 & 1) == 0) {
    piVar12 = (int *)puVar14[2];
    do {
      iVar5 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01a3a914;
    piVar10 = (int *)piVar12[0x82];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01a3a914;
      uVar11 = piVar12[0x83];
    }
    FUN_01bed4e2((uint)auStack_1d8 | 4,auStack_aa0,0x1a8);
    local_3b8 = 0;
    FUN_01bed4e2(auStack_3b4,auStack_1d8,0x1ac);
    local_3d8 = (int **)&PTR_LAB_01d2a478;
    local_3e0 = (int *)0xcc;
    puVar6[4] = piVar4;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[5] = iVar13;
    local_3dc = 0;
    local_200 = 0;
    local_204 = 0;
    local_208 = 0;
    local_2c = (int *)0x0;
    local_3c8 = piVar12;
    local_1f8 = piVar10;
    local_1f4 = uVar11;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x200);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x200);
    }
    FUN_01bed4e2(local_2c,&local_3e0,0x200);
    iVar5 = FUN_01a2cc10(piVar12 + 0x40,piVar10,piVar10);
    local_3e0 = piVar4;
    local_3dc = iVar13;
    if (piVar12[0x80] != 0) {
      (**(code **)(piVar12[0x81] + 0x14))
                (piVar12[0x80] + (*(int *)(piVar12[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_3e0);
    }
    if (iVar5 != 0) {
      FUN_019dc904(puVar14[2],iVar5);
    }
  }
  else {
    piVar12 = (int *)puVar14[2];
    do {
      iVar5 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_01a3a914:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1a3a914);
      (*pcVar1)();
    }
    piVar10 = (int *)piVar12[0x50];
    if (piVar10 != (int *)0x0) {
      do {
        iVar5 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01a3a914;
      uVar9 = piVar12[0x51];
    }
    FUN_01bed4e2((uint)auStack_590 | 4,auStack_aa0,0x1a8);
    local_3b8 = 0;
    FUN_01bed4e2(auStack_3b4,auStack_590,0x1ac);
    local_3d8 = (int **)&PTR_LAB_01d2a018;
    puVar6[4] = piVar4;
    local_3e0 = (int *)0xcc;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[5] = iVar13;
    local_3dc = 0;
    local_200 = 0;
    local_204 = 0;
    local_208 = 0;
    local_2c = (int *)0x0;
    local_3c8 = piVar12;
    local_1f8 = piVar10;
    local_1f4 = uVar9;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x200);
    piVar10 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x200);
    }
    FUN_01bed4e2(local_2c,&local_3e0,0x200);
    iVar5 = FUN_01a2ce94(piVar12 + 0x14,piVar10,piVar10);
    local_3e0 = piVar4;
    local_3dc = iVar13;
    if (piVar12[0x4e] != 0) {
      (**(code **)(piVar12[0x4f] + 0x14))
                (piVar12[0x4e] + (*(int *)(piVar12[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_3e0);
    }
    if (iVar5 != 0) {
      local_2c = (int *)((uint)local_2c & 0xffffff00);
      local_3e0 = piVar12 + 2;
      local_3dc = iVar5;
      local_3d8 = &local_2c;
      FUN_019ee860(&local_3e0);
    }
  }
  *puVar14 = *puVar14 - 1;
  if (*piVar10 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar10);
    if (bVar2) {
      *piVar10 = 0x84;
      goto LAB_01a3a8d0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar10[2] + 0x10))(piVar10);
LAB_01a3a8d0:
  *(undefined1 *)(param_1 + 6) = 1;
  return 0x1b;
}

