// FUN_0077df34 @ 0077df34 size=1004 calls_out=5 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_0077df34(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined4 local_70;
  undefined4 local_68;
  undefined2 *local_58;
  undefined2 *local_54;
  undefined2 *local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  undefined4 local_44;
  undefined2 *local_40;
  undefined4 local_3c;
  undefined2 *puStack_38;
  undefined4 uStack_34;
  int local_30;
  undefined2 *local_2c;
  undefined4 local_28;
  
  (*(code *)param_3[0xe])(&local_58);
  if (local_58 == (undefined2 *)0x80000000) {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    puVar15 = (undefined2 *)3;
  }
  else {
    bVar2 = local_58 == (undefined2 *)0x0;
    puVar15 = local_50;
    puVar7 = local_54;
  }
  (*(code *)param_3[0xf])(&local_58,param_2);
  if (local_58 == (undefined2 *)0x80000000) {
    local_68 = 3;
    puVar8 = (undefined2 *)thunk_FUN_016d4a50();
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar3 = false;
  }
  else {
    local_68 = local_50;
    bVar3 = local_58 == (undefined2 *)0x0;
    puVar8 = local_54;
  }
  (*(code *)param_3[0xc])(&local_58,param_2);
  if (local_58 == (undefined2 *)0x80000000) {
    local_70 = 3;
    puVar9 = (undefined2 *)thunk_FUN_016d4a50();
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
    bVar4 = false;
  }
  else {
    local_70 = local_50;
    bVar4 = local_58 == (undefined2 *)0x0;
    puVar9 = local_54;
  }
  (*(code *)param_3[0xd])(&local_58,param_2);
  if (local_58 == (undefined2 *)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar5 = false;
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    puVar16 = (undefined2 *)3;
  }
  else {
    bVar5 = local_58 == (undefined2 *)0x0;
    puVar16 = local_50;
    puVar10 = local_54;
  }
  (*(code *)param_3[10])(&local_30,param_2);
  if (local_30 == -0x80000000) {
    puVar11 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar11 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar6 = false;
    *(undefined1 *)(puVar11 + 1) = 0x41;
    *puVar11 = 0x2f4e;
    local_28 = 3;
  }
  else {
    bVar6 = local_30 == 0;
    puVar11 = local_2c;
  }
  local_44 = local_70;
  local_4c = local_68;
  local_58 = puVar7;
  local_54 = puVar15;
  local_50 = puVar8;
  local_48 = puVar9;
  local_40 = puVar10;
  local_3c = puVar16;
  puStack_38 = puVar11;
  uStack_34 = local_28;
  piVar12 = (int *)FUN_00749168(param_1,&local_58,5);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar12 + 2);
  } while (!bVar1);
  piVar12[2] = (int)param_4;
  piVar12[3] = (int)param_4 >> 0x1f;
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar12;
    bVar1 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar1);
  *piVar12 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  if (!bVar6) {
    thunk_FUN_016d3fb4(puVar11);
  }
  if (!bVar5) {
    thunk_FUN_016d3fb4(puVar10);
  }
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar8);
  }
  if (bVar2) {
    pcVar14 = (code *)*param_3;
  }
  else {
    thunk_FUN_016d3fb4(puVar7);
    pcVar14 = (code *)*param_3;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(param_2);
  }
  if (param_3[1] != 0) {
    thunk_FUN_016d3fb4(param_2);
  }
  return;
}

