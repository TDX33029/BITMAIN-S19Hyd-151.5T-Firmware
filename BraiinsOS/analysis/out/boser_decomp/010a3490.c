// FUN_010a3490 @ 010a3490 size=1168 calls_out=12 calls_in=3
// strings: 

uint FUN_010a3490(undefined4 param_1,int param_2)

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
  uint local_bc8;
  int local_bc4;
  undefined1 auStack_bc0 [472];
  uint *local_9e8;
  undefined1 *local_9e4;
  undefined1 auStack_9e0 [480];
  undefined1 auStack_800 [472];
  undefined4 *local_628;
  undefined1 auStack_620 [480];
  int *local_440;
  int local_43c;
  undefined **local_438;
  int *local_428;
  undefined4 local_418;
  undefined1 auStack_414 [476];
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  int *local_228;
  uint *local_224;
  undefined1 auStack_208 [476];
  uint local_2c;
  undefined1 uStack_25;
  
  puVar12 = (undefined4 *)((uint)&local_440 | 0x10);
  do {
    do {
      local_bc8 = DAT_01d50470;
      local_bc4 = DAT_01d50474;
      uVar8 = DAT_01d50470 + 1;
      iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar8;
    DAT_01d50474 = iVar9;
  } while (bVar2 && bVar3);
  uVar5 = FUN_01bed4e2(auStack_bc0,param_1,0x1d8);
  uVar14 = thunk_FUN_01bee35a(uVar5,0x20);
  puVar10 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  local_9e4 = &uStack_25;
  local_9e8 = &local_bc8;
  if ((char)puVar10[0xe] != '\x01') {
    if ((char)puVar10[0xe] == '\x02') {
      FUN_010e932c(auStack_bc0);
      uVar4 = 1;
      goto LAB_010a3534;
    }
    FUN_019a2bcc(puVar10,&LAB_019efb68);
    *(undefined1 *)(puVar10 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_9e0,auStack_bc0,0x1e0);
  if (0x7ffffffe < *puVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar10 = *puVar10 + 1;
  uVar8 = puVar10[1];
  FUN_01bed4e2(auStack_800,auStack_bc0,0x1e0);
  if (uVar8 == 2) {
    FUN_010e932c(auStack_800);
    *puVar10 = *puVar10 - 1;
    uVar4 = 0;
LAB_010a3534:
    local_440 = (int *)CONCAT31(local_440._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0107998c(&local_440,param_2);
  }
  piVar6 = (int *)*local_628;
  uVar5 = local_628[1];
  if ((uVar8 & 1) == 0) {
    piVar13 = (int *)puVar10[2];
    do {
      iVar9 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_010a3908;
    piVar7 = (int *)piVar13[0x82];
    puVar11 = puVar10;
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_010a3908;
      puVar11 = (uint *)piVar13[0x83];
    }
    FUN_01bed4e2((uint)auStack_208 | 4,param_1,0x1d8);
    local_418 = 0;
    FUN_01bed4e2(auStack_414,auStack_208,0x1dc);
    local_438 = &PTR_LAB_01c1a9a4;
    local_440 = (int *)0xcc;
    puVar12[4] = piVar6;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_43c = 0;
    local_230 = 0;
    local_234 = 0;
    local_238 = 0;
    local_2c = 0;
    local_428 = piVar13;
    local_228 = piVar7;
    local_224 = puVar11;
    iVar9 = FUN_01be5878(&local_2c,0x20,0x220);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x220);
    }
    FUN_01bed4e2(local_2c,&local_440,0x220);
    iVar9 = FUN_01a88f0c(piVar13 + 0x40,uVar8,uVar8);
    local_440 = piVar6;
    local_43c = uVar5;
    if (piVar13[0x80] != 0) {
      (**(code **)(piVar13[0x81] + 0x14))
                (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_440);
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
LAB_010a3908:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a3908);
      (*pcVar1)();
    }
    piVar7 = (int *)piVar13[0x50];
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_010a3908;
      param_2 = piVar13[0x51];
    }
    FUN_01bed4e2((uint)auStack_620 | 4,param_1,0x1d8);
    local_418 = 0;
    FUN_01bed4e2(auStack_414,auStack_620,0x1dc);
    local_438 = (undefined **)&DAT_01c1a6fc;
    puVar12[4] = piVar6;
    local_440 = (int *)0xcc;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_43c = 0;
    local_230 = 0;
    local_234 = 0;
    local_238 = 0;
    local_2c = 0;
    local_428 = piVar13;
    local_228 = piVar7;
    local_224 = (uint *)param_2;
    iVar9 = FUN_01be5878(&local_2c,0x20,0x220);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x220);
    }
    FUN_01bed4e2(local_2c,&local_440,0x220);
    iVar9 = FUN_01a89190(piVar13 + 0x14,uVar8,uVar8);
    if (piVar13[0x4e] != 0) {
      local_440 = piVar6;
      local_43c = uVar5;
      (**(code **)(piVar13[0x4f] + 0x14))
                (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_440);
    }
    if (iVar9 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_440 = piVar13 + 2;
      local_43c = iVar9;
      local_438 = (undefined **)&local_2c;
      FUN_019ee860(&local_440);
    }
  }
  *puVar10 = *puVar10 - 1;
  return uVar8;
}

