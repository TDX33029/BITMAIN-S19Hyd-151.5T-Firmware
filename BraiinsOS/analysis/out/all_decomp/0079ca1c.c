// FUN_0079ca1c @ 0079ca1c size=904 calls_out=7 calls_in=1
// strings: .nicehash.com | .nicehash.com | xnsub

void FUN_0079ca1c(int *param_1,byte *param_2)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined1 local_160;
  int local_15c;
  int local_158;
  undefined1 auStack_140 [204];
  int local_74 [3];
  byte *local_68;
  undefined1 *local_64;
  
  bVar1 = *param_2;
  uVar10 = 0;
  iVar9 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    local_64 = &LAB_00954d30;
    local_68 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00583b1e,&local_68,&DAT_0185cfcc);
  case 1:
    if (*(int *)(param_2 + 0xcc) == -0x80000000) {
      local_15c = 1;
      uVar11 = *(uint *)(param_2 + 0xf8);
      uVar14 = *(undefined4 *)(param_2 + 0xf4);
      if (0xd < uVar11) goto LAB_0079ca7c;
LAB_0079cb68:
      if ((uVar11 == 0xd) && (iVar5 = thunk_FUN_016dd50a(".nicehash.com",uVar14,0xd), iVar5 == 0)) {
        local_160 = 1;
      }
      else {
LAB_0079cb88:
        local_160 = 0;
        if (*(int *)(param_2 + 0xd8) != -0x80000000) {
          FUN_00fb6cfc(&local_68,*(undefined4 *)(param_2 + 0xdc),*(undefined4 *)(param_2 + 0xe0),
                       "xnsub",5);
          FUN_00953db0(local_74,&local_68);
          local_160 = (undefined1)local_74[0];
        }
      }
    }
    else {
      iVar9 = *(int *)(param_2 + 0xd4);
      uVar14 = *(undefined4 *)(param_2 + 0xd0);
      if (iVar9 == 0) {
        local_15c = 1;
      }
      else {
        local_15c = thunk_FUN_016d4a50(iVar9);
        if (local_15c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar9);
        }
      }
      FUN_016dd1aa(local_15c,uVar14,iVar9);
      uVar11 = *(uint *)(param_2 + 0xf8);
      uVar14 = *(undefined4 *)(param_2 + 0xf4);
      if (uVar11 < 0xe) goto LAB_0079cb68;
LAB_0079ca7c:
      FUN_00fb6cfc(&local_68,uVar14,uVar11,".nicehash.com",0xd);
      FUN_00953db0(local_74,&local_68);
      local_160 = 1;
      if (local_74[0] == 0) goto LAB_0079cb88;
    }
    uVar10 = 0;
    uVar14 = *(undefined4 *)(param_2 + 0xe8);
    iVar15 = *(int *)(param_2 + 0xec);
    iVar5 = iVar9;
    if (iVar15 != 0) goto LAB_0079cafc;
    goto LAB_0079cbf4;
  case 2:
    FUN_016dd1aa((uint)auStack_140 | 7,param_2 + 8,0xc0);
    uVar10 = 1;
    break;
  case 3:
    FUN_016dd1aa(auStack_140,param_2 + 1,0x20);
    uVar10 = 2;
  }
  iVar9 = 0;
  uVar14 = *(undefined4 *)(param_2 + 0xe8);
  iVar15 = *(int *)(param_2 + 0xec);
  iVar5 = -0x80000000;
  if (iVar15 == 0) {
LAB_0079cbf4:
    iVar4 = 1;
  }
  else {
LAB_0079cafc:
    iVar4 = thunk_FUN_016d4a50(iVar15);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar15);
    }
  }
  FUN_016dd1aa(iVar4,uVar14,iVar15);
  if (*(int *)(param_2 + 0xcc) == -0x80000000) {
    iVar13 = -0x80000000;
    uVar14 = *(undefined4 *)(param_2 + 0xf4);
    iVar12 = *(int *)(param_2 + 0xf8);
  }
  else {
    iVar13 = *(int *)(param_2 + 0xd4);
    uVar14 = *(undefined4 *)(param_2 + 0xd0);
    if (iVar13 == 0) {
      local_158 = 1;
    }
    else {
      local_158 = thunk_FUN_016d4a50(iVar13);
      if (local_158 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar13);
      }
    }
    FUN_016dd1aa(local_158,uVar14,iVar13);
    uVar14 = *(undefined4 *)(param_2 + 0xf4);
    iVar12 = *(int *)(param_2 + 0xf8);
  }
  if (iVar12 == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(iVar12);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar12);
    }
  }
  FUN_016dd1aa(iVar6,uVar14,iVar12);
  sVar2 = *(short *)(param_2 + 200);
  uVar3 = *(undefined2 *)(param_2 + 0xca);
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  uVar8 = 0xd05;
  param_1[0x36] = iVar13;
  param_1[0x3b] = iVar15;
  if (bVar1 - 2 < 3) {
    uVar8 = 0xd08;
  }
  if (sVar2 != 0) {
    uVar8 = uVar3;
  }
  param_1[0x3c] = iVar12;
  *(undefined2 *)(param_1 + 0x42) = uVar8;
  *(undefined1 *)(param_1 + 3) = local_160;
  *param_1 = iVar5;
  param_1[1] = local_15c;
  param_1[2] = iVar9;
  param_1[0x3d] = iVar6;
  *puVar7 = 0x72657375;
  param_1[0x3e] = iVar12;
  param_1[0x37] = local_158;
  param_1[0x38] = iVar13;
  param_1[0x39] = iVar15;
  param_1[0x3a] = iVar4;
  param_1[0x3f] = 4;
  param_1[0x40] = (int)puVar7;
  param_1[0x41] = 4;
  *(undefined1 *)(param_1 + 4) = uVar10;
  FUN_016dd1aa((int)param_1 + 0x11,auStack_140,199);
  return;
}

