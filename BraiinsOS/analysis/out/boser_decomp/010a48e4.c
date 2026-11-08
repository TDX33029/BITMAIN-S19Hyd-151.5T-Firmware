// FUN_010a48e4 @ 010a48e4 size=1152 calls_out=12 calls_in=2
// strings: 

uint FUN_010a48e4(undefined4 param_1,int param_2)

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
  uint local_308;
  int local_304;
  undefined1 auStack_300 [96];
  uint *local_2a0;
  undefined1 *local_29c;
  undefined1 auStack_298 [104];
  undefined1 auStack_230 [96];
  undefined4 *local_1d0;
  undefined1 auStack_1c8 [104];
  int *local_160;
  int local_15c;
  undefined **local_158;
  int *local_148;
  undefined4 local_138;
  undefined1 auStack_134 [100];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int *local_c0;
  uint *local_bc;
  undefined1 auStack_90 [100];
  uint local_2c;
  undefined1 uStack_25;
  
  puVar12 = (undefined4 *)((uint)&local_160 | 0x10);
  do {
    do {
      local_308 = DAT_01d50470;
      local_304 = DAT_01d50474;
      uVar8 = DAT_01d50470 + 1;
      iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar8;
    DAT_01d50474 = iVar9;
  } while (bVar2 && bVar3);
  uVar5 = FUN_01bed4e2(auStack_300,param_1,0x60);
  uVar14 = thunk_FUN_01bee35a(uVar5,0x20);
  puVar10 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  local_29c = &uStack_25;
  local_2a0 = &local_308;
  if ((char)puVar10[0xe] != '\x01') {
    if ((char)puVar10[0xe] == '\x02') {
      FUN_00f26bdc(auStack_300);
      uVar4 = 1;
      goto LAB_010a4984;
    }
    FUN_019a2bcc(puVar10,&LAB_019efb68);
    *(undefined1 *)(puVar10 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_298,auStack_300,0x68);
  if (0x7ffffffe < *puVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar10 = *puVar10 + 1;
  uVar8 = puVar10[1];
  FUN_01bed4e2(auStack_230,auStack_300,0x68);
  if (uVar8 == 2) {
    FUN_00f26bdc(auStack_230);
    *puVar10 = *puVar10 - 1;
    uVar4 = 0;
LAB_010a4984:
    local_160 = (int *)CONCAT31(local_160._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0107998c(&local_160,param_2);
  }
  piVar6 = (int *)*local_1d0;
  uVar5 = local_1d0[1];
  if ((uVar8 & 1) == 0) {
    piVar13 = (int *)puVar10[2];
    do {
      iVar9 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_010a4d4c;
    piVar7 = (int *)piVar13[0x82];
    puVar11 = puVar10;
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_010a4d4c;
      puVar11 = (uint *)piVar13[0x83];
    }
    FUN_01bed4e2((uint)auStack_90 | 4,param_1,0x60);
    local_138 = 0;
    FUN_01bed4e2(auStack_134,auStack_90,100);
    local_158 = &PTR_LAB_01c1a7c4;
    local_160 = (int *)0xcc;
    puVar12[4] = piVar6;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_15c = 0;
    local_c8 = 0;
    local_cc = 0;
    local_d0 = 0;
    local_2c = 0;
    local_148 = piVar13;
    local_c0 = piVar7;
    local_bc = puVar11;
    iVar9 = FUN_01be5878(&local_2c,0x20,0xc0);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xc0);
    }
    FUN_01bed4e2(local_2c,&local_160,0xc0);
    iVar9 = FUN_01a88f0c(piVar13 + 0x40,uVar8,uVar8);
    local_160 = piVar6;
    local_15c = uVar5;
    if (piVar13[0x80] != 0) {
      (**(code **)(piVar13[0x81] + 0x14))
                (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_160);
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
LAB_010a4d4c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a4d4c);
      (*pcVar1)();
    }
    piVar7 = (int *)piVar13[0x50];
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_010a4d4c;
      param_2 = piVar13[0x51];
    }
    FUN_01bed4e2((uint)auStack_1c8 | 4,param_1,0x60);
    local_138 = 0;
    FUN_01bed4e2(auStack_134,auStack_1c8,100);
    local_158 = (undefined **)&DAT_01c1a454;
    puVar12[4] = piVar6;
    local_160 = (int *)0xcc;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_15c = 0;
    local_c8 = 0;
    local_cc = 0;
    local_d0 = 0;
    local_2c = 0;
    local_148 = piVar13;
    local_c0 = piVar7;
    local_bc = (uint *)param_2;
    iVar9 = FUN_01be5878(&local_2c,0x20,0xc0);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xc0);
    }
    FUN_01bed4e2(local_2c,&local_160,0xc0);
    iVar9 = FUN_01a89190(piVar13 + 0x14,uVar8,uVar8);
    if (piVar13[0x4e] != 0) {
      local_160 = piVar6;
      local_15c = uVar5;
      (**(code **)(piVar13[0x4f] + 0x14))
                (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_160);
    }
    if (iVar9 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_160 = piVar13 + 2;
      local_15c = iVar9;
      local_158 = (undefined **)&local_2c;
      FUN_019ee860(&local_160);
    }
  }
  *puVar10 = *puVar10 - 1;
  return uVar8;
}

