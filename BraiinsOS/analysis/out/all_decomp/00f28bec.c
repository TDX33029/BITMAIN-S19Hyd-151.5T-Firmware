// FUN_00f28bec @ 00f28bec size=1244 calls_out=8 calls_in=0
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Type propagation algorithm not settling */

void FUN_00f28bec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int *piVar14;
  code *pcVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined4 local_a0;
  undefined2 *local_88;
  undefined2 **local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined2 *local_70;
  undefined2 *local_6c;
  undefined2 *local_68;
  undefined4 local_64;
  undefined2 *local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined4 local_54;
  undefined2 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  undefined2 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  
  (*(code *)param_5[0xe])(&local_70,param_4);
  if (local_70 == (undefined2 *)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
    puVar16 = (undefined2 *)3;
  }
  else {
    bVar2 = local_70 == (undefined2 *)0x0;
    puVar16 = local_68;
    puVar9 = local_6c;
  }
  (*(code *)param_5[0xf])(&local_70,param_4);
  if (local_70 == (undefined2 *)0x80000000) {
    local_a0 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50();
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
  }
  else {
    local_a0 = local_68;
    bVar3 = local_70 == (undefined2 *)0x0;
    puVar10 = local_6c;
  }
  (*(code *)param_5[0xc])(&local_70,param_4);
  if (local_70 == (undefined2 *)0x80000000) {
    local_88 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_88 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_88 + 1) = 0x41;
    *local_88 = 0x2f4e;
    bVar4 = false;
    puVar18 = (undefined2 *)3;
  }
  else {
    local_88 = local_6c;
    bVar4 = local_70 == (undefined2 *)0x0;
    puVar18 = local_68;
  }
  (*(code *)param_5[0xd])(&local_70,param_4);
  if (local_70 == (undefined2 *)0x80000000) {
    puVar11 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar11 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(puVar11 + 1) = 0x41;
    *puVar11 = 0x2f4e;
    bVar5 = false;
    puVar17 = (undefined2 *)3;
  }
  else {
    bVar5 = local_70 == (undefined2 *)0x0;
    puVar11 = local_6c;
    puVar17 = local_68;
  }
  (*(code *)param_5[10])(&local_34,param_4);
  if (local_34 == (int *)0x80000000) {
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(puVar12 + 1) = 0x41;
    *puVar12 = 0x2f4e;
    bVar6 = false;
    local_4c = (undefined1 *)3;
  }
  else {
    bVar6 = local_34 == (int *)0x0;
    puVar12 = local_30;
    local_4c = local_2c;
  }
  local_60 = local_88;
  local_30 = (undefined2 *)&DAT_0187d0c8;
  local_34 = &local_40;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_64 = local_a0;
  local_3c = 1;
  local_2c = &DAT_60000020;
  local_70 = puVar9;
  local_6c = puVar16;
  local_68 = puVar10;
  local_5c = puVar18;
  local_58 = puVar11;
  local_54 = puVar17;
  local_50 = puVar12;
  iVar13 = FUN_00faace8(&local_34,param_2,param_3);
  uVar8 = local_3c;
  iVar7 = local_40;
  if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_80,
                 &DAT_0187d0e0,&DAT_018af130);
  }
  local_78 = &local_48;
  local_80 = &local_70;
  local_44 = local_38;
  local_74 = 1;
  local_48 = local_3c;
  local_7c = 5;
  FUN_00ec0200(&local_34,&local_80);
  piVar14 = (int *)FUN_00ed4af8(param_1,local_30,local_2c);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar14 + 2);
  } while (!bVar1);
  piVar14[2] = param_6;
  piVar14[3] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar14;
    bVar1 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar1);
  *piVar14 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  if (local_34 != (int *)0x0) {
    thunk_FUN_016d3fb4(local_30);
  }
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  if (!bVar6) {
    thunk_FUN_016d3fb4(puVar12);
  }
  if (!bVar5) {
    thunk_FUN_016d3fb4(puVar11);
  }
  if (!bVar4) {
    thunk_FUN_016d3fb4(local_88);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar10);
  }
  if (bVar2) {
    pcVar15 = (code *)*param_5;
  }
  else {
    thunk_FUN_016d3fb4(puVar9);
    pcVar15 = (code *)*param_5;
  }
  if (pcVar15 != (code *)0x0) {
    (*pcVar15)(param_4);
  }
  if (param_5[1] != 0) {
    thunk_FUN_016d3fb4(param_4);
  }
  return;
}

