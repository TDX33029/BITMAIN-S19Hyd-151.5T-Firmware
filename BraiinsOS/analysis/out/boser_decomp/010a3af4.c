// FUN_010a3af4 @ 010a3af4 size=1168 calls_out=12 calls_in=3
// strings: 

uint FUN_010a3af4(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  undefined8 uVar15;
  uint local_2c8;
  int local_2c4;
  undefined1 auStack_2c0 [80];
  char local_270;
  uint *local_268;
  undefined1 *local_264;
  undefined1 auStack_260 [96];
  undefined1 auStack_200 [80];
  char local_1b0;
  undefined4 *local_1a8;
  undefined1 auStack_1a0 [96];
  int *local_140;
  int local_13c;
  undefined **local_138;
  int *local_128;
  undefined4 local_118;
  undefined1 auStack_114 [92];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int *local_a8;
  uint local_a4;
  undefined1 auStack_88 [92];
  uint local_2c;
  undefined1 uStack_25;
  
  puVar10 = (undefined4 *)((uint)&local_140 | 0x10);
  do {
    do {
      local_2c8 = DAT_01d50470;
      local_2c4 = DAT_01d50474;
      uVar11 = DAT_01d50470 + 1;
      iVar12 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar11;
    DAT_01d50474 = iVar12;
  } while (bVar2 && bVar3);
  uVar4 = FUN_01bed4e2(auStack_2c0,param_1,0x58);
  uVar15 = thunk_FUN_01bee35a(uVar4,0x20);
  puVar13 = (uint *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
  local_264 = &uStack_25;
  local_268 = &local_2c8;
  if ((char)puVar13[0xe] != '\x01') {
    if ((char)puVar13[0xe] == '\x02') {
      uVar6 = 1;
      if (local_270 == '\x03') {
        FUN_01431b40(auStack_2c0);
      }
      goto LAB_010a3b9c;
    }
    FUN_019a2bcc(puVar13,&LAB_019efb68);
    *(undefined1 *)(puVar13 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_260,auStack_2c0,0x60);
  uVar7 = *puVar13;
  if (0x7ffffffe < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar13 = uVar7 + 1;
  uVar9 = puVar13[1];
  FUN_01bed4e2(auStack_200,auStack_2c0,0x60);
  if (uVar9 == 2) {
    if (local_1b0 == '\x03') {
      FUN_01431b40(auStack_200);
      uVar7 = *puVar13 - 1;
    }
    *puVar13 = uVar7;
    uVar6 = 0;
LAB_010a3b9c:
    local_140 = (int *)CONCAT31(local_140._1_3_,uVar6);
                    /* WARNING: Subroutine does not return */
    FUN_0107998c(&local_140,param_2);
  }
  piVar5 = (int *)*local_1a8;
  uVar4 = local_1a8[1];
  if ((uVar9 & 1) == 0) {
    piVar14 = (int *)puVar13[2];
    do {
      iVar12 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar12 + 1;
    if (iVar12 < 0) goto LAB_010a3f60;
    piVar8 = (int *)piVar14[0x82];
    if (piVar8 != (int *)0x0) {
      do {
        iVar12 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar12 + 1;
      if (iVar12 < 0) goto LAB_010a3f60;
      uVar11 = piVar14[0x83];
    }
    FUN_01bed4e2((uint)auStack_88 | 4,param_1,0x58);
    local_118 = 0;
    FUN_01bed4e2(auStack_114,auStack_88,0x5c);
    local_138 = &PTR_LAB_01c1a01c;
    local_140 = (int *)0xcc;
    puVar10[4] = piVar5;
    puVar10[5] = uVar4;
    *puVar10 = 0;
    puVar10[1] = 0;
    local_13c = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_2c = 0;
    local_128 = piVar14;
    local_a8 = piVar8;
    local_a4 = uVar11;
    iVar12 = FUN_01be5878(&local_2c,0x20,0xa0);
    uVar11 = local_2c;
    if ((iVar12 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_2c,&local_140,0xa0);
    iVar12 = FUN_01a88f0c(piVar14 + 0x40,uVar11,uVar11);
    local_140 = piVar5;
    local_13c = uVar4;
    if (piVar14[0x80] != 0) {
      (**(code **)(piVar14[0x81] + 0x14))
                (piVar14[0x80] + (*(int *)(piVar14[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_140);
    }
    if (iVar12 != 0) {
      FUN_019dc904(puVar13[2],iVar12);
    }
  }
  else {
    piVar14 = (int *)puVar13[2];
    do {
      iVar12 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar12 + 1;
    if (iVar12 < 0) {
LAB_010a3f60:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a3f60);
      (*pcVar1)();
    }
    piVar8 = (int *)piVar14[0x50];
    if (piVar8 != (int *)0x0) {
      do {
        iVar12 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar12 + 1;
      if (iVar12 < 0) goto LAB_010a3f60;
      uVar11 = piVar14[0x51];
    }
    FUN_01bed4e2((uint)auStack_1a0 | 4,param_1,0x58);
    local_118 = 0;
    FUN_01bed4e2(auStack_114,auStack_1a0,0x5c);
    local_138 = (undefined **)&DAT_01c1a6ac;
    puVar10[4] = piVar5;
    puVar10[5] = uVar4;
    local_140 = (int *)0xcc;
    *puVar10 = 0;
    puVar10[1] = 0;
    local_13c = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_2c = 0;
    local_128 = piVar14;
    local_a8 = piVar8;
    local_a4 = uVar11;
    iVar12 = FUN_01be5878(&local_2c,0x20,0xa0);
    uVar11 = local_2c;
    if ((iVar12 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_2c,&local_140,0xa0);
    iVar12 = FUN_01a89190(piVar14 + 0x14,uVar11,uVar11);
    if (piVar14[0x4e] != 0) {
      local_140 = piVar5;
      local_13c = uVar4;
      (**(code **)(piVar14[0x4f] + 0x14))
                (piVar14[0x4e] + (*(int *)(piVar14[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_140);
    }
    if (iVar12 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_140 = piVar14 + 2;
      local_13c = iVar12;
      local_138 = (undefined **)&local_2c;
      FUN_019ee860(&local_140);
    }
  }
  *puVar13 = *puVar13 - 1;
  return uVar11;
}

