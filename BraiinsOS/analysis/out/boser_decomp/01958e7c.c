// FUN_01958e7c @ 01958e7c size=1176 calls_out=12 calls_in=2
// strings: 

uint FUN_01958e7c(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int *piVar13;
  undefined8 uVar14;
  int local_4a4;
  uint local_498;
  uint local_494;
  undefined1 auStack_490 [144];
  uint *local_400;
  undefined1 *local_3fc;
  undefined1 auStack_3f8 [152];
  undefined1 auStack_360 [144];
  undefined4 *local_2d0;
  undefined1 auStack_2c8 [144];
  undefined1 auStack_238 [152];
  int *local_1a0;
  int local_19c;
  undefined **local_198;
  int *local_188;
  undefined4 local_178;
  undefined1 auStack_174 [148];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int *local_d0;
  uint local_cc;
  undefined1 auStack_c0 [148];
  uint local_2c;
  undefined1 uStack_25;
  
  puVar11 = (undefined4 *)((uint)&local_1a0 | 0x10);
  do {
    do {
      local_498 = DAT_01d50470;
      local_494 = DAT_01d50474;
      uVar8 = DAT_01d50470 + 1;
      uVar9 = DAT_01d50474 + (0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    uVar10 = DAT_01d50470 | DAT_01d50474;
    DAT_01d50470 = uVar8;
    DAT_01d50474 = uVar9;
  } while (uVar10 == 0);
  uVar4 = FUN_01bed4e2(auStack_490,param_1,0x90);
  uVar14 = thunk_FUN_01bee35a(uVar4,0x20);
  puVar12 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  local_3fc = &uStack_25;
  local_400 = &local_498;
  if ((char)puVar12[0xe] != '\x01') {
    if ((char)puVar12[0xe] == '\x02') {
      FUN_0194fad8(auStack_490);
      uVar3 = 1;
      goto LAB_01958f1c;
    }
    FUN_019a2bcc(puVar12,&LAB_019efb68);
    *(undefined1 *)(puVar12 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_3f8,auStack_490,0x98);
  if (0x7ffffffe < *puVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar12 = *puVar12 + 1;
  uVar8 = puVar12[1];
  FUN_01bed4e2(auStack_360,auStack_490,0x98);
  if (uVar8 == 2) {
    FUN_0194fad8(auStack_360);
    *puVar12 = *puVar12 - 1;
    uVar3 = 0;
LAB_01958f1c:
    local_1a0 = (int *)CONCAT31(local_1a0._1_3_,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_1a0,param_2);
  }
  FUN_01bed4e2(auStack_2c8,auStack_490,0x90);
  piVar6 = (int *)*local_2d0;
  uVar4 = local_2d0[1];
  if ((uVar8 & 1) == 0) {
    piVar13 = (int *)puVar12[2];
    do {
      iVar5 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_019592fc;
    piVar7 = (int *)piVar13[0x82];
    if (piVar7 != (int *)0x0) {
      do {
        iVar5 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_019592fc;
      local_4a4 = piVar13[0x83];
    }
    FUN_01bed4e2((uint)auStack_c0 | 4,auStack_2c8,0x90);
    local_178 = 0;
    FUN_01bed4e2(auStack_174,auStack_c0,0x94);
    local_198 = &PTR_LAB_01d26094;
    local_1a0 = (int *)0xcc;
    local_cc = local_4a4;
    puVar11[4] = piVar6;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[5] = uVar4;
    local_19c = 0;
    local_d8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_2c = 0;
    local_188 = piVar13;
    local_d0 = piVar7;
    iVar5 = FUN_01be5878(&local_2c,0x20,0xe0);
    uVar8 = local_2c;
    if ((iVar5 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xe0);
    }
    FUN_01bed4e2(local_2c,&local_1a0,0xe0);
    iVar5 = FUN_01a2cc10(piVar13 + 0x40,uVar8,uVar8);
    local_1a0 = piVar6;
    local_19c = uVar4;
    if (piVar13[0x80] != 0) {
      (**(code **)(piVar13[0x81] + 0x14))
                (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
    }
    if (iVar5 != 0) {
      FUN_019dc904(puVar12[2],iVar5);
    }
  }
  else {
    piVar13 = (int *)puVar12[2];
    do {
      iVar5 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_019592fc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19592fc);
      (*pcVar1)();
    }
    piVar7 = (int *)piVar13[0x50];
    if (piVar7 != (int *)0x0) {
      do {
        iVar5 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_019592fc;
      uVar10 = piVar13[0x51];
    }
    FUN_01bed4e2((uint)auStack_238 | 4,auStack_2c8,0x90);
    local_178 = 0;
    FUN_01bed4e2(auStack_174,auStack_238,0x94);
    *puVar11 = 0;
    puVar11[1] = 0;
    local_19c = 0;
    local_d8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_2c = 0;
    local_198 = &PTR_LAB_01d261d4;
    puVar11[4] = piVar6;
    puVar11[5] = uVar4;
    local_1a0 = (int *)0xcc;
    local_188 = piVar13;
    local_d0 = piVar7;
    local_cc = uVar10;
    iVar5 = FUN_01be5878(&local_2c,0x20,0xe0);
    uVar8 = local_2c;
    if ((iVar5 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xe0);
    }
    FUN_01bed4e2(local_2c,&local_1a0,0xe0);
    iVar5 = FUN_01a2ce94(piVar13 + 0x14,uVar8,uVar8);
    if (piVar13[0x4e] != 0) {
      local_1a0 = piVar6;
      local_19c = uVar4;
      (**(code **)(piVar13[0x4f] + 0x14))
                (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1a0);
    }
    if (iVar5 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_1a0 = piVar13 + 2;
      local_19c = iVar5;
      local_198 = (undefined **)&local_2c;
      FUN_019ee860(&local_1a0);
    }
  }
  *puVar12 = *puVar12 - 1;
  return uVar8;
}

