// FUN_00a17780 @ 00a17780 size=868 calls_out=14 calls_in=2
// strings: 

void FUN_00a17780(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  int iVar10;
  int *unaff_r7;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[8]) {
  case '\0':
    unaff_r7 = (int *)0xffffffff;
    param_2[3] = *param_2;
    param_2[4] = param_2[1];
    param_2[5] = param_2[2];
    param_2[6] = *param_2 + 0x14;
    param_2[7] = -1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187afa0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187afa0);
  }
  uVar15 = FUN_00aa0cf8(param_2 + 6,param_3);
  uVar6 = (uint)((ulonglong)uVar15 >> 0x20);
  iVar3 = (int)uVar15;
  if (iVar3 == 0) {
    *param_1 = 2;
    *(undefined1 *)(param_2 + 8) = 3;
    return;
  }
  iVar4 = param_2[6];
  if (iVar4 != 0) {
    FUN_00aa0a58(iVar4,param_2[7],1);
    uVar6 = extraout_r1;
  }
  uVar5 = param_2[4];
  uVar8 = *(uint *)(iVar3 + 0x28);
  if (uVar5 < uVar8) {
    uVar6 = param_2[5];
  }
  if (uVar5 >= uVar8 || uVar8 <= uVar6) {
    FUN_00aa13c0(iVar3);
    uVar9 = 1;
    goto LAB_00a1781c;
  }
  if (uVar6 < uVar5) {
    local_28 = ~uVar5 + uVar8;
    local_30 = uVar5 - uVar6;
    local_38 = 1;
    local_44 = *(int *)(iVar3 + 0x24);
    local_3c = local_44 + uVar5 * 0x60;
    local_34 = local_44 + uVar6 * 0x60;
    local_2c = local_3c + 0x60;
    local_40 = uVar6;
    FUN_00a84d74(&local_50,&local_44);
    iVar11 = *(int *)(iVar3 + 0x28) + 1;
    iVar4 = *(int *)(iVar3 + 0x24);
    while (iVar11 = iVar11 + -1, iVar11 != 0) {
      FUN_0096e5e8(iVar4);
      iVar4 = iVar4 + 0x60;
    }
LAB_00a17954:
    if (*(int *)(iVar3 + 0x20) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x24));
    }
    *(int *)(iVar3 + 0x20) = local_50;
    *(undefined4 *)(iVar3 + 0x24) = uStack_4c;
    *(undefined4 *)(iVar3 + 0x28) = uStack_48;
  }
  else if (uVar5 < uVar6) {
    local_38 = uVar6 - uVar5;
    local_28 = uVar8 - (uVar6 + 1);
    local_44 = *(int *)(iVar3 + 0x24);
    local_30 = 1;
    local_34 = local_44 + uVar5 * 0x60;
    local_2c = local_44 + (uVar6 + 1) * 0x60;
    local_3c = local_34 + 0x60;
    local_40 = uVar5;
    FUN_00a84d74(&local_50,&local_44);
    iVar11 = *(int *)(iVar3 + 0x28) + 1;
    iVar4 = *(int *)(iVar3 + 0x24);
    while (iVar11 = iVar11 + -1, iVar11 != 0) {
      FUN_0096e5e8(iVar4);
      iVar4 = iVar4 + 0x60;
    }
    goto LAB_00a17954;
  }
  uVar6 = param_2[5];
  if (*(uint *)(iVar3 + 0x28) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar6,*(uint *)(iVar3 + 0x28),&DAT_0187afb0);
  }
  unaff_r7 = *(int **)(*(int *)(iVar3 + 0x24) + uVar6 * 0x60 + 0x50);
  do {
    iVar4 = *unaff_r7;
    bVar2 = (bool)hasExclusiveAccess(unaff_r7);
  } while (!bVar2);
  *unaff_r7 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa17af4);
    (*pcVar1)();
  }
  FUN_00994994(*(undefined4 *)(param_2[3] + 0x48));
  iVar4 = *(int *)(param_2[3] + 0x58);
  uVar14 = *(undefined4 *)(param_2[3] + 0x54);
  if (iVar4 == 0) {
    iVar11 = 1;
  }
  else {
    iVar11 = thunk_FUN_016d4a50(iVar4);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar4);
    }
  }
  FUN_016dd1aa(iVar11,uVar14,iVar4);
  local_44 = iVar4;
  local_40 = iVar11;
  local_3c = iVar4;
  if (*(int *)(iVar3 + 0x28) != 0) {
    piVar12 = (int *)(*(int *)(iVar3 + 0x24) + 0x50);
    iVar13 = 0;
    iVar10 = *(int *)(iVar3 + 0x28) * 0x60;
    do {
      DataMemoryBarrier(0xb);
      if (DAT_018d7c7c == 0) {
        iVar7 = *(int *)(*piVar12 + 0x14);
        uVar15 = (**(code **)(iVar7 + 0x40))
                           (*(int *)(*piVar12 + 0x10) + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8)
        ;
        FUN_00a9c004(DAT_018d7c9c,&local_44,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),iVar13);
      }
      iVar13 = iVar13 + 1;
      piVar12 = piVar12 + 0x18;
      iVar10 = iVar10 + -0x60;
    } while (iVar10 != 0);
  }
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(iVar11);
  }
  uVar9 = 0;
  FUN_00aa13c0(iVar3);
LAB_00a1781c:
  *(int **)(param_1 + 4) = unaff_r7;
  param_1[1] = 0;
  *param_1 = uVar9;
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}

