// FUN_00a9c004 @ 00a9c004 size=1248 calls_out=8 calls_in=3
// strings: a Display implementation returned an error unexpectedly

void FUN_00a9c004(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5)

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
  int iVar12;
  int *piVar13;
  code *pcVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined4 local_9c;
  undefined4 local_94;
  undefined2 *local_8c;
  undefined2 *local_84;
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
  
  (*(code *)param_4[0xe])(&local_70,param_3);
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
    puVar9 = local_6c;
    puVar16 = local_68;
  }
  (*(code *)param_4[0xf])(&local_70,param_3);
  if (local_70 == (undefined2 *)0x80000000) {
    local_94 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50();
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar3 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
  }
  else {
    local_94 = local_68;
    bVar3 = local_70 == (undefined2 *)0x0;
    puVar10 = local_6c;
  }
  (*(code *)param_4[0xc])(&local_70,param_3);
  if (local_70 == (undefined2 *)0x80000000) {
    local_9c = 3;
    local_84 = (undefined2 *)thunk_FUN_016d4a50();
    if (local_84 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_84 + 1) = 0x41;
    *local_84 = 0x2f4e;
    bVar4 = false;
  }
  else {
    local_84 = local_6c;
    bVar4 = local_70 == (undefined2 *)0x0;
    local_9c = local_68;
  }
  (*(code *)param_4[0xd])(&local_70,param_3);
  if (local_70 == (undefined2 *)0x80000000) {
    local_8c = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_8c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_8c + 1) = 0x41;
    *local_8c = 0x2f4e;
    bVar5 = false;
    puVar15 = (undefined2 *)3;
  }
  else {
    local_8c = local_6c;
    bVar5 = local_70 == (undefined2 *)0x0;
    puVar15 = local_68;
  }
  (*(code *)param_4[10])(&local_34,param_3);
  if (local_34 == (int *)0x80000000) {
    puVar11 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar11 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar11 + 1) = 0x41;
    *puVar11 = 0x2f4e;
    bVar6 = false;
    local_4c = (undefined1 *)3;
  }
  else {
    bVar6 = local_34 == (int *)0x0;
    local_4c = local_2c;
    puVar11 = local_30;
  }
  local_58 = local_8c;
  local_60 = local_84;
  local_64 = local_94;
  local_3c = 1;
  local_30 = (undefined2 *)&DAT_0186decc;
  local_34 = &local_40;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_5c = local_9c;
  local_2c = &DAT_60000020;
  local_70 = puVar9;
  local_6c = puVar16;
  local_68 = puVar10;
  local_54 = puVar15;
  local_50 = puVar11;
  iVar12 = FUN_00faace8(&local_34,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar8 = local_3c;
  iVar7 = local_40;
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_80,
                 &DAT_0186def4,&DAT_018af130);
  }
  local_78 = &local_48;
  local_80 = &local_70;
  local_44 = local_38;
  local_74 = 1;
  local_48 = local_3c;
  local_7c = 5;
  FUN_00a8c51c(&local_34,&local_80);
  piVar13 = (int *)FUN_00a63b14(param_1,local_30,local_2c);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar13 + 2);
  } while (!bVar1);
  piVar13[2] = param_5;
  piVar13[3] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *piVar13;
    bVar1 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar1);
  *piVar13 = iVar12 + -1;
  if (iVar12 == 1) {
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
    thunk_FUN_016d3fb4(puVar11);
  }
  if (!bVar5) {
    thunk_FUN_016d3fb4(local_8c);
  }
  if (!bVar4) {
    thunk_FUN_016d3fb4(local_84);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar10);
  }
  if (bVar2) {
    pcVar14 = (code *)*param_4;
  }
  else {
    thunk_FUN_016d3fb4(puVar9);
    pcVar14 = (code *)*param_4;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(param_3);
  }
  if (param_4[1] != 0) {
    thunk_FUN_016d3fb4(param_3);
  }
  return;
}

