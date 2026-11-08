// FUN_010a2e3c @ 010a2e3c size=1152 calls_out=12 calls_in=2
// strings: 

uint FUN_010a2e3c(undefined4 param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  uint local_268;
  int local_264;
  undefined1 auStack_260 [72];
  uint *local_218;
  undefined1 *local_214;
  undefined1 auStack_210 [80];
  undefined1 auStack_1c0 [72];
  undefined4 *local_178;
  undefined1 auStack_170 [80];
  int *local_120;
  int local_11c;
  undefined **local_118;
  int *local_108;
  undefined4 local_f8;
  undefined1 auStack_f4 [76];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int *local_98;
  uint *local_94;
  undefined1 auStack_78 [76];
  uint local_2c;
  undefined1 uStack_25;
  
  puVar12 = (undefined4 *)((uint)&local_120 | 0x10);
  do {
    do {
      local_268 = DAT_01d50470;
      local_264 = DAT_01d50474;
      uVar8 = DAT_01d50470 + 1;
      iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar8;
    DAT_01d50474 = iVar9;
  } while (bVar2 && bVar3);
  uVar5 = FUN_01bed4e2(auStack_260,param_1,0x48);
  uVar14 = thunk_FUN_01bee35a(uVar5,0x20);
  puVar10 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  local_214 = &uStack_25;
  local_218 = &local_268;
  if ((char)puVar10[0xe] != '\x01') {
    if ((char)puVar10[0xe] == '\x02') {
      FUN_010ea41c(auStack_260);
      uVar4 = 1;
      goto LAB_010a2edc;
    }
    FUN_019a2bcc(puVar10,&LAB_019efb68);
    *(undefined1 *)(puVar10 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_210,auStack_260,0x50);
  if (0x7ffffffe < *puVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar10 = *puVar10 + 1;
  uVar8 = puVar10[1];
  FUN_01bed4e2(auStack_1c0,auStack_260,0x50);
  if (uVar8 == 2) {
    FUN_010ea41c(auStack_1c0);
    *puVar10 = *puVar10 - 1;
    uVar4 = 0;
LAB_010a2edc:
    local_120 = (int *)CONCAT31(local_120._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0107998c(&local_120,param_2);
  }
  piVar6 = (int *)*local_178;
  uVar5 = local_178[1];
  if ((uVar8 & 1) == 0) {
    piVar13 = (int *)puVar10[2];
    do {
      iVar9 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_010a32a4;
    piVar7 = (int *)piVar13[0x82];
    puVar11 = puVar10;
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_010a32a4;
      puVar11 = (uint *)piVar13[0x83];
    }
    FUN_01bed4e2((uint)auStack_78 | 4,param_1,0x48);
    local_f8 = 0;
    FUN_01bed4e2(auStack_f4,auStack_78,0x4c);
    local_118 = &PTR_LAB_01c1a06c;
    local_120 = (int *)0xcc;
    puVar12[4] = piVar6;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_11c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_2c = 0;
    local_108 = piVar13;
    local_98 = piVar7;
    local_94 = puVar11;
    iVar9 = FUN_01be5878(&local_2c,0x20,0xa0);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_2c,&local_120,0xa0);
    iVar9 = FUN_01a88f0c(piVar13 + 0x40,uVar8,uVar8);
    local_120 = piVar6;
    local_11c = uVar5;
    if (piVar13[0x80] != 0) {
      (**(code **)(piVar13[0x81] + 0x14))
                (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_120);
    }
    if (iVar9 != 0) {
      FUN_019dc904(puVar10[2],iVar9);
    }
  }
  else {
    piVar13 = (int *)puVar10[2];
    do {
      iVar9 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar9 + 1;
    if (iVar9 < 0) {
LAB_010a32a4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a32a4);
      (*pcVar1)();
    }
    piVar7 = (int *)piVar13[0x50];
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_010a32a4;
      param_2 = piVar13[0x51];
    }
    FUN_01bed4e2((uint)auStack_170 | 4,param_1,0x48);
    local_f8 = 0;
    FUN_01bed4e2(auStack_f4,auStack_170,0x4c);
    local_118 = (undefined **)&DAT_01c19f2c;
    puVar12[4] = piVar6;
    local_120 = (int *)0xcc;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_11c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_2c = 0;
    local_108 = piVar13;
    local_98 = piVar7;
    local_94 = (uint *)param_2;
    iVar9 = FUN_01be5878(&local_2c,0x20,0xa0);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_2c,&local_120,0xa0);
    iVar9 = FUN_01a89190(piVar13 + 0x14,uVar8,uVar8);
    if (piVar13[0x4e] != 0) {
      local_120 = piVar6;
      local_11c = uVar5;
      (**(code **)(piVar13[0x4f] + 0x14))
                (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_120);
    }
    if (iVar9 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_120 = piVar13 + 2;
      local_11c = iVar9;
      local_118 = (undefined **)&local_2c;
      FUN_019ee860(&local_120);
    }
  }
  *puVar10 = *puVar10 - 1;
  return uVar8;
}

