// FUN_00d9d95c @ 00d9d95c size=1600 calls_out=16 calls_in=1
// strings: a Display implementation returned an error unexpectedly | /var/log/bosminer/bosminer_panic.log | %Y-%m-%dT%H:%M:%S | a Display implementation returned an error unexpectedly

void FUN_00d9d95c(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_r3;
  undefined4 *puVar8;
  code *pcVar9;
  int *piVar10;
  undefined8 uVar11;
  uint *local_e8;
  undefined1 auStack_e4 [20];
  uint **local_d0;
  undefined4 *local_cc;
  uint *puStack_c8;
  undefined4 local_c0 [2];
  undefined *local_b8;
  int local_b4;
  uint **local_b0;
  code *local_ac;
  uint **local_a8;
  code *local_a4;
  undefined4 *local_a0;
  undefined1 *local_9c;
  undefined4 *local_98;
  char *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 *local_80;
  uint *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 *local_6c [2];
  undefined4 *local_64;
  undefined4 ***local_60;
  code *local_5c;
  undefined **local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  uint ***local_48;
  undefined4 *local_44;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  uint *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  
  FUN_01602d08(&local_e8);
  puVar2 = (undefined4 *)param_2[2];
  local_58 = (undefined **)0x0;
  local_5c = (code *)0x1;
  local_a0 = puVar2 + 3;
  local_60 = (undefined4 ***)0x0;
  local_78 = (uint *)*puVar2;
  local_74 = puVar2[1];
  local_a8 = (uint **)(puVar2 + 2);
  local_9c = &LAB_00fac484;
  local_a4 = (code *)&LAB_00fac484;
  local_ac = (code *)&DAT_0157d360;
  local_b0 = &local_78;
  iVar3 = FUN_00fa948c(&local_60,&DAT_0187825c,&DAT_00599d3e,&local_b0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_64,
                 &DAT_01878294,&DAT_018af130);
  }
  puVar8 = (undefined4 *)*param_2;
  pcVar9 = *(code **)(param_2[1] + 0xc);
  local_d0 = (uint **)local_60;
  local_cc = (undefined4 *)local_5c;
  puStack_c8 = (uint *)local_58;
  (*pcVar9)(&local_b0,puVar8);
  uVar4 = 4;
  puVar2 = puVar8;
  if ((local_b0 != (uint **)0xd6cb5d6d || local_a8 != (uint **)0x57a64178) ||
      (local_ac != (code *)0x63eb502c || local_a4 != (code *)0xb98b1b71)) {
    (*pcVar9)(&local_b0,puVar8);
    uVar4 = (uint)local_b0 ^ 0x50f052f7 | (uint)local_a8 ^ 0xdf97b325 |
            (uint)local_ac ^ 0x9909b2a5 | (uint)local_a4 ^ 0xb55cb20e;
    if (uVar4 != 0) {
      uVar7 = 0xc;
      puVar5 = &DAT_00410a53;
      goto LAB_00d9dadc;
    }
    puVar2 = puVar8 + 1;
    uVar4 = 8;
  }
  uVar7 = *(undefined4 *)((int)puVar8 + uVar4);
  puVar5 = (undefined *)*puVar2;
LAB_00d9dadc:
  uVar11 = thunk_FUN_016de0ee(uVar4,puVar5,uVar7,0x248);
  local_c0[0] = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar4 = *(uint *)((int)uVar11 + extraout_r3);
  if (uVar4 < 3) {
    uVar11 = FUN_015f7ed0();
    puVar5 = *(undefined **)((int)uVar11 + 0x10);
  }
  else {
    piVar10 = (int *)(uVar4 - 8);
    do {
      iVar3 = *piVar10;
      iVar6 = iVar3 + 1;
      uVar11 = CONCAT44(iVar6,piVar10);
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = iVar6;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)software_udf(0xfdee,0xd9dfa4);
      (*pcVar9)();
    }
    puVar5 = *(undefined **)(uVar4 + 8);
  }
  local_b4 = (int)((ulonglong)uVar11 >> 0x20);
  piVar10 = (int *)uVar11;
  if (puVar5 == (undefined *)0x0) {
    ClearExclusiveLocal();
    if (DAT_018dd9a0 == 0 && DAT_018dd9a4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = &DAT_00569764;
      if (DAT_018dd9a0 != piVar10[2] || DAT_018dd9a4 != piVar10[3]) {
        puVar5 = (undefined *)0x0;
      }
      local_b4 = 4;
    }
  }
  else {
    local_b4 = piVar10[5] + -1;
  }
  if (puVar5 == (undefined *)0x0) {
    local_b4 = 9;
  }
  local_b8 = &DAT_00415090;
  if (puVar5 != (undefined *)0x0) {
    local_b8 = puVar5;
  }
  FUN_00f6f318(&local_30);
  FUN_00f6c49c(&local_60,local_30,local_2c);
  pcVar9 = local_5c;
  if (local_60 != (undefined4 ***)0x0) {
    if (local_60 == (undefined4 ***)0x1) {
      local_a4 = FUN_00f6c370;
      local_ac = FUN_00f6c370;
      local_b0 = &local_3c;
      local_3c = (undefined4 *)local_5c;
      local_78 = (uint *)local_58;
      local_a8 = &local_78;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005752dd,&local_b0,&DAT_018802dc);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0035d71c,0x25,&DAT_018802dc);
  }
  local_78 = local_30;
  local_74 = local_2c;
  local_70 = local_28;
  local_6c[0] = (undefined4 *)local_5c;
  FUN_00f6bd20(&local_3c,&local_78,local_5c);
  puVar8 = local_38;
  puVar2 = local_3c;
  local_28 = 0;
  local_30 = (uint *)0x0;
  local_54 = (undefined4 *)0x0;
  local_2c = (undefined4 *)&DAT_00000001;
  local_58 = (undefined **)&DAT_60000020;
  local_5c = (code *)&DAT_0187d0c8;
  local_60 = (undefined4 ***)&local_30;
  iVar3 = FUN_00f6c370(local_6c,&local_60);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_64,
                 &DAT_0187d0e0,&DAT_018af130);
  }
  local_a4 = (code *)local_30;
  local_a0 = local_2c;
  local_9c = (undefined1 *)local_28;
  local_8c = 4;
  local_90 = 0x11;
  uVar4 = (uint)local_6c[0] >> 8;
  local_80 = puVar2;
  local_84 = 0;
  local_88 = 0;
  local_98 = (undefined4 *)pcVar9;
  local_a8 = (uint **)local_34;
  local_ac = (code *)puVar8;
  local_b0 = (undefined4 **)0x1;
  local_94 = "%Y-%m-%dT%H:%M:%S";
  local_74 = 0x1b6;
  local_78 = (uint *)0x0;
  local_70 = 0x1000100;
  local_6c[0] = (undefined4 *)CONCAT31((uint3)uVar4 & 0xffff00,1);
  FUN_015ec1bc(&local_3c,&local_78,"/var/log/bosminer/bosminer_panic.log",0x24);
  if (((uint)local_3c & 0xff) == 4) {
    local_44 = &DAT_006043a8;
    local_48 = &local_d0;
    local_50 = local_c0;
    local_64 = local_38;
    local_58 = &local_b8;
    local_60 = &local_b0;
    local_4c = &DAT_0157d360;
    local_54 = &DAT_0157d360;
    local_5c = FUN_00f25d5c;
    FUN_00e9d860(&local_30,&local_64,&DAT_0056b36d,&local_60);
    puVar2 = local_2c;
    if ((4 < ((uint)local_30 & 0xff)) || (((uint)local_30 & 0xff) == 3)) {
      uVar7 = *local_2c;
      puVar8 = (undefined4 *)local_2c[1];
      pcVar9 = (code *)*puVar8;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      thunk_FUN_016d3fb4(puVar2);
    }
    local_5c = FUN_01604fb0;
    local_60 = (undefined4 ***)&local_e8;
    FUN_00e9d860(&local_30,&local_64,&DAT_005699f8,&local_60);
    puVar2 = local_2c;
    if ((4 < ((uint)local_30 & 0xff)) || (((uint)local_30 & 0xff) == 3)) {
      uVar7 = *local_2c;
      puVar8 = (undefined4 *)local_2c[1];
      pcVar9 = (code *)*puVar8;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      thunk_FUN_016d3fb4(puVar2);
    }
    FUN_016dffb2(local_64);
  }
  else if (2 < ((uint)local_3c & 0xff)) {
    uVar7 = *local_38;
    puVar2 = (undefined4 *)local_38[1];
    pcVar9 = (code *)*puVar2;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar7);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
    thunk_FUN_016d3fb4(local_38);
  }
  (**(code **)(param_1[1] + 0x14))(*param_1,param_2);
  if (local_a4 != (code *)0x80000000 && local_a4 != (code *)0x0) {
    thunk_FUN_016d3fb4(local_a0);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar10;
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *piVar10 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(piVar10);
  }
  if (local_d0 != (uint **)0x0) {
    thunk_FUN_016d3fb4(local_cc);
  }
  if ((uint *)0x1 < local_e8) {
    FUN_00ea0c8c(auStack_e4);
  }
  return;
}

