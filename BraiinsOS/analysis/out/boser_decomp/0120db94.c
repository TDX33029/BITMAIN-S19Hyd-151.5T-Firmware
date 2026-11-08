// FUN_0120db94 @ 0120db94 size=1152 calls_out=12 calls_in=4
// strings: 

uint FUN_0120db94(undefined4 param_1,int param_2)

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
  uint local_2c8;
  int local_2c4;
  undefined1 auStack_2c0 [88];
  uint *local_268;
  undefined1 *local_264;
  undefined1 auStack_260 [96];
  undefined1 auStack_200 [88];
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
  uint *local_a4;
  undefined1 auStack_88 [92];
  uint local_2c;
  undefined1 uStack_25;
  
  puVar12 = (undefined4 *)((uint)&local_140 | 0x10);
  do {
    do {
      local_2c8 = DAT_01d50470;
      local_2c4 = DAT_01d50474;
      uVar8 = DAT_01d50470 + 1;
      iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar8;
    DAT_01d50474 = iVar9;
  } while (bVar2 && bVar3);
  uVar5 = FUN_01bed4e2(auStack_2c0,param_1,0x58);
  uVar14 = thunk_FUN_01bee35a(uVar5,0x20);
  puVar10 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  local_264 = &uStack_25;
  local_268 = &local_2c8;
  if ((char)puVar10[0xe] != '\x01') {
    if ((char)puVar10[0xe] == '\x02') {
      FUN_0120cfd0(auStack_2c0);
      uVar4 = 1;
      goto LAB_0120dc34;
    }
    FUN_019a2bcc(puVar10,&LAB_019efb68);
    *(undefined1 *)(puVar10 + 0xe) = 1;
  }
  FUN_01bed4e2(auStack_260,auStack_2c0,0x60);
  if (0x7ffffffe < *puVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar10 = *puVar10 + 1;
  uVar8 = puVar10[1];
  FUN_01bed4e2(auStack_200,auStack_2c0,0x60);
  if (uVar8 == 2) {
    FUN_0120cfd0(auStack_200);
    *puVar10 = *puVar10 - 1;
    uVar4 = 0;
LAB_0120dc34:
    local_140 = (int *)CONCAT31(local_140._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_140,param_2);
  }
  piVar6 = (int *)*local_1a8;
  uVar5 = local_1a8[1];
  if ((uVar8 & 1) == 0) {
    piVar13 = (int *)puVar10[2];
    do {
      iVar9 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_0120dffc;
    piVar7 = (int *)piVar13[0x82];
    puVar11 = puVar10;
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_0120dffc;
      puVar11 = (uint *)piVar13[0x83];
    }
    FUN_01bed4e2((uint)auStack_88 | 4,param_1,0x58);
    local_118 = 0;
    FUN_01bed4e2(auStack_114,auStack_88,0x5c);
    local_138 = &PTR_LAB_01c22b38;
    local_140 = (int *)0xcc;
    puVar12[4] = piVar6;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_13c = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_2c = 0;
    local_128 = piVar13;
    local_a8 = piVar7;
    local_a4 = puVar11;
    iVar9 = FUN_01be5878(&local_2c,0x20,0xa0);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_2c,&local_140,0xa0);
    iVar9 = FUN_01a88f0c(piVar13 + 0x40,uVar8,uVar8);
    local_140 = piVar6;
    local_13c = uVar5;
    if (piVar13[0x80] != 0) {
      (**(code **)(piVar13[0x81] + 0x14))
                (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_140);
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
LAB_0120dffc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x120dffc);
      (*pcVar1)();
    }
    piVar7 = (int *)piVar13[0x50];
    if (piVar7 != (int *)0x0) {
      do {
        iVar9 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_0120dffc;
      param_2 = piVar13[0x51];
    }
    FUN_01bed4e2((uint)auStack_1a0 | 4,param_1,0x58);
    local_118 = 0;
    FUN_01bed4e2(auStack_114,auStack_1a0,0x5c);
    local_138 = &PTR_LAB_01c229f8;
    puVar12[4] = piVar6;
    local_140 = (int *)0xcc;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = uVar5;
    local_13c = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_2c = 0;
    local_128 = piVar13;
    local_a8 = piVar7;
    local_a4 = (uint *)param_2;
    iVar9 = FUN_01be5878(&local_2c,0x20,0xa0);
    uVar8 = local_2c;
    if ((iVar9 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_2c,&local_140,0xa0);
    iVar9 = FUN_01a89190(piVar13 + 0x14,uVar8,uVar8);
    if (piVar13[0x4e] != 0) {
      local_140 = piVar6;
      local_13c = uVar5;
      (**(code **)(piVar13[0x4f] + 0x14))
                (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_140);
    }
    if (iVar9 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_140 = piVar13 + 2;
      local_13c = iVar9;
      local_138 = (undefined **)&local_2c;
      FUN_019ee860(&local_140);
    }
  }
  *puVar10 = *puVar10 - 1;
  return uVar8;
}

