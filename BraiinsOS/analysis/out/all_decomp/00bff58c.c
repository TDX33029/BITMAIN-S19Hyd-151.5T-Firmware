// FUN_00bff58c @ 00bff58c size=612 calls_out=6 calls_in=1
// strings: 

void FUN_00bff58c(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int unaff_r8;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  int *local_4c;
  int local_48;
  int *local_44;
  undefined1 local_40 [4];
  uint local_3c;
  uint local_38;
  undefined1 *local_34;
  code *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  local_4c = *(int **)(param_2 + 0x4c);
  iVar4 = *(int *)(*(int *)(*local_4c + 0x10) + 0x58);
  if (*(int *)(iVar4 + 0x10) == 1) {
    iVar4 = *(int *)(iVar4 + 0x14);
    uVar8 = 1;
    unaff_r8 = iVar4 + 1;
    if (iVar4 == -1) {
      unaff_r8 = -1;
    }
  }
  else {
    uVar8 = 0;
  }
  local_48 = param_2;
  local_44 = (int *)(param_2 + 0x10);
  FUN_00bfdfa8(&local_34,&local_4c,param_2 + 0x30);
  if (local_34 == (undefined1 *)0x2) {
LAB_00bff7bc:
    local_30 = FUN_013c828c;
    local_34 = local_40;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005735ed,&local_34,&DAT_018714e0);
  }
  if (((uint)local_34 & 1) != 0) {
    if (local_2c <= local_30) {
      uVar2 = *(uint *)(param_2 + 0x28);
      bVar11 = uVar2 == 1;
      if (bVar11) {
        uVar2 = *(uint *)(param_2 + 0x2c);
      }
      if (bVar11 && (uint *)uVar2 == local_2c) {
        FUN_00bfdec8(&local_34,param_2 + 0x28,local_30,local_2c,&local_4c);
        if (local_34 == (undefined1 *)0x2) goto LAB_00bff7bc;
        if (((uint)local_34 & 1) == 0) goto LAB_00bff69c;
      }
    }
    local_3c = *(uint *)(param_2 + 0x44);
    local_38 = *(uint *)(param_2 + 0x3c);
    bVar12 = local_3c + 1 <= local_2c;
    bVar11 = local_2c == (uint *)(local_3c + 1);
    if (!bVar12 || bVar11) {
      bVar12 = local_38 <= local_3c;
      bVar11 = local_3c == local_38;
    }
    if (bVar12 && !bVar11) {
      local_2c = &local_38;
      local_34 = local_40;
      local_28 = &LAB_00fac484;
      local_30 = FUN_005ffff4;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
    }
    *(uint **)(param_2 + 0x40) = local_2c;
    *(undefined4 *)(param_2 + 0x28) = 1;
    *(uint **)(param_2 + 0x2c) = local_2c;
  }
LAB_00bff69c:
  if (*(int *)(param_2 + 0x10) == 0) {
    *param_1 = 2;
    return;
  }
  piVar6 = *(int **)(param_2 + 0x24);
  do {
    iVar4 = *piVar6;
    bVar11 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar11);
  *piVar6 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xbff7f0);
    (*pcVar1)();
  }
  uVar10 = *(uint *)(param_2 + 0x20);
  uVar3 = 0;
  bVar12 = 0x3ffffffe < uVar10;
  bVar11 = uVar10 == 0x3fffffff;
  uVar2 = uVar10 * 4;
  if (uVar10 < 0x40000000) {
    bVar12 = 0x7ffffffb < uVar2;
    bVar11 = uVar2 == 0x7ffffffc;
  }
  if (!(!bVar12 || bVar11)) {
LAB_00bff6e0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,uVar2);
  }
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  if (uVar2 == 0) {
    iVar4 = 4;
    uVar9 = 0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(uVar2);
    uVar9 = uVar10;
    if (iVar4 == 0) {
      uVar3 = 4;
      goto LAB_00bff6e0;
    }
  }
  FUN_016dd1aa(iVar4,uVar7,uVar2);
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  *param_1 = 1;
  param_1[3] = iVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar9;
  param_1[6] = uVar8;
  param_1[4] = uVar10;
  param_1[5] = piVar6;
  param_1[7] = unaff_r8;
  param_1[8] = uVar7;
  param_1[9] = uVar5;
  return;
}

