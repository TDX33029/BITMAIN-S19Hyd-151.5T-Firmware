// FUN_005d4f4c @ 005d4f4c size=860 calls_out=16 calls_in=1
// strings: Other system task already in progress

void FUN_005d4f4c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined1 auStack_340 [96];
  undefined1 *local_2e0;
  undefined4 local_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 auStack_2c8 [232];
  undefined4 *local_1e0;
  undefined *local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4 [71];
  undefined4 local_b8;
  undefined1 auStack_b0 [96];
  undefined1 *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x984)) {
  case 0:
    *(undefined2 *)(param_2 + 0x985) = 0x100;
    iVar6 = param_2 + 0x130;
    piVar10 = *(int **)(param_2 + 0x980);
    FUN_01bed4e2(iVar6,param_2,0x130);
    FUN_00b7d6b4(&local_2e0,*(undefined4 *)(*piVar10 + 0x1c));
    if (local_2e0 == &DAT_80000016) {
      uVar12 = local_2dc;
LAB_005d50bc:
      puVar8 = (undefined4 *)FUN_00a52660(*(undefined4 *)(param_2 + 600));
      if (puVar8 == (undefined4 *)0x0) {
        puVar11 = (uint *)FUN_00f26344();
        puVar11[6] = 3;
        *puVar11 = 1;
        puVar11[1] = 1;
      }
      else {
        puVar11 = (uint *)*puVar8;
        do {
          uVar9 = *puVar11;
          bVar2 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar2);
        *puVar11 = uVar9 + 1;
        if (0x7fffffff < uVar9) goto LAB_005d529c;
      }
      *(undefined1 *)(param_2 + 0x986) = 0;
      FUN_01bed4e2(&local_1e0,iVar6,0x130);
      FUN_01bed4e2(auStack_2c8,param_2 + 0x170,0xe8);
      FUN_0142e6dc(&local_1e0);
      FUN_0178e884(local_b8);
      piVar10 = (int *)*piVar10;
      do {
        iVar6 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_005d529c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x5d529c);
        (*pcVar1)();
      }
      FUN_01bed4e2(param_2 + 0x260,auStack_2c8,0xe8);
      *(int **)(param_2 + 0x600) = piVar10;
      *(undefined1 *)(param_2 + 0x668) = 0;
      *(undefined4 *)(param_2 + 0x604) = uVar12;
      *(uint **)(param_2 + 0x608) = puVar11;
      goto switchD_005d4f6c_caseD_3;
    }
    local_50 = local_2e0;
    uStack_4c = local_2dc;
    uStack_48 = uStack_2d8;
    uStack_44 = uStack_2d4;
    uStack_40 = uStack_2d0;
    uStack_3c = uStack_2cc;
    local_2c = 0;
    local_34 = 0;
    local_1d4[0] = 0;
    local_30 = 1;
    local_1d8 = 0x60000020;
    local_1e0 = &local_34;
    local_1dc = &DAT_01c02660;
    iVar7 = FUN_0121efc4(&local_50,&local_1e0);
    iVar4 = local_2c;
    uVar3 = local_30;
    uVar12 = local_34;
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c02728,&DAT_01d30334);
    }
    if ((local_2c == 0x25) &&
       (iVar7 = thunk_FUN_01bed842(local_30,"Other system task already in progress",0x25),
       iVar7 == 0)) {
      local_2c = 0x25;
      local_34 = uVar12;
      local_30 = uVar3;
      FUN_01a70fd4(&local_1e0,10,&local_34);
    }
    else {
      local_34 = uVar12;
      local_30 = uVar3;
      local_2c = iVar4;
      FUN_01a70fd4(&local_1e0,0xd,&local_34);
    }
    FUN_005f6674(&local_2e0);
    uVar12 = local_1d8;
    puVar13 = local_1dc;
    puVar8 = local_1e0;
    FUN_01bed4e2(auStack_340,local_1d4,0x5c);
    if (puVar8 == (undefined4 *)&DAT_00000003 && puVar13 == (undefined *)0x0) goto LAB_005d50bc;
    FUN_01bed4e2(auStack_b0,auStack_340,0x5c);
    FUN_005f3ac8(iVar6);
    *(undefined1 *)(param_2 + 0x986) = 0;
    if (*(char *)(param_2 + 0x985) != '\0') {
      FUN_005f3ac8(param_2);
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c021f0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c021f0);
  case 3:
switchD_005d4f6c_caseD_3:
    FUN_006044b4(&local_1e0,param_2 + 0x260,param_3);
    uVar12 = local_1d8;
    puVar13 = local_1dc;
    puVar8 = local_1e0;
    if (local_1e0 == (undefined4 *)&SUB_00000004 && local_1dc == (undefined *)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar5 = 3;
      goto LAB_005d5210;
    }
    FUN_01bed4e2(auStack_b0,local_1d4,0x5c);
    FUN_005f58d8(param_2 + 0x260);
    *(undefined1 *)(param_2 + 0x986) = 0;
  }
  *param_1 = puVar8;
  param_1[1] = puVar13;
  param_1[2] = uVar12;
  FUN_01bed4e2(param_1 + 3,auStack_b0,0x5c);
  uVar5 = 1;
LAB_005d5210:
  *(undefined1 *)(param_2 + 0x984) = uVar5;
  return;
}

