// FUN_00875934 @ 00875934 size=848 calls_out=14 calls_in=0
// strings: 

void FUN_00875934(int *param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int unaff_r7;
  int *local_11c;
  undefined8 *local_118;
  int *local_114;
  int local_110;
  undefined8 *local_10c;
  int local_108;
  byte local_101;
  int **local_100;
  undefined4 *local_fc;
  undefined4 uStack_f8;
  byte *local_b0;
  int local_a4;
  undefined8 *local_a0;
  int local_9c;
  int *local_98;
  undefined8 *local_94;
  int *local_90;
  code *pcStack_8c;
  undefined4 local_58;
  int *local_54;
  undefined2 local_50;
  undefined4 local_48;
  int **local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x6c)) {
  case 0:
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 100);
    *(undefined1 *)(param_2 + 0x5c) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861ad0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861ad0);
  }
  FUN_00875d64(&local_98,param_2);
  piVar4 = local_90;
  puVar3 = local_94;
  piVar2 = local_98;
  if (local_98 == (int *)0x80000001) {
    *param_1 = -0x7fffffff;
    uVar5 = 3;
    goto LAB_00875bf4;
  }
  if (*(char *)(param_2 + 0x5c) == '\x03') {
    FUN_00a07b4c(param_2);
  }
  iVar7 = -0x80000000;
  if (piVar2 == (int *)&DAT_80000000) {
    puVar8 = puVar3;
  }
  else {
    local_114 = piVar4;
    local_118 = puVar3;
    local_11c = piVar2;
    FUN_00fb6cfc(&local_98,puVar3,piVar4,&DAT_004144ea,1);
    local_54 = piVar4;
    local_58 = 0;
    local_50 = 1;
    FUN_016dd1aa(&local_100,&local_98,0x50);
    local_b0 = &local_101;
    local_101 = 2;
    FUN_0089f47c(&local_98,&local_100);
    if (local_98 == (int *)&SUB_00000002 && local_94 == (undefined8 *)0x0 ||
        ((uint)local_98 & 1) == 0) {
      unaff_r7 = 0;
      puVar8 = (undefined8 *)(uint)local_101;
      iVar7 = 0;
      puVar6 = (undefined8 *)&DAT_00000008;
      if (puVar8 != (undefined8 *)&SUB_00000002) goto LAB_00875b8c;
LAB_00875a74:
      puVar8 = puVar6;
      if (iVar7 == -0x80000000) goto LAB_00875b9c;
      local_98 = (int *)(param_2 + 0x68);
      local_110 = iVar7;
      local_10c = puVar8;
      local_108 = unaff_r7;
      if (unaff_r7 == *local_98) {
        if (piVar2 != (int *)0x0) {
          thunk_FUN_016d3fb4(puVar3);
        }
        goto LAB_00875be8;
      }
      pcStack_8c = FUN_008357a8;
      local_90 = &local_110;
      local_94 = (undefined8 *)&LAB_00fac484;
      FUN_00600d2c(&local_100,&DAT_005744ee,&local_98);
      local_40 = local_100;
      local_3c = local_fc;
      local_38 = uStack_f8;
      puVar8 = (undefined8 *)FUN_00808de4(&local_40);
      if (local_110 != 0) {
        thunk_FUN_016d3fb4(local_10c);
      }
    }
    else {
      uVar1 = CONCAT44(pcStack_8c,local_90);
      puVar6 = (undefined8 *)thunk_FUN_016d4a50(0x20);
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,0x20);
      }
      *puVar6 = uVar1;
      unaff_r7 = 1;
      local_a4 = 4;
      local_9c = 1;
      local_a0 = puVar6;
      FUN_016dd1aa(&local_98,&local_100,0x58);
      iVar7 = 8;
      while (FUN_0089f47c(&local_40,&local_98,local_48),
            (local_40 != (int **)&SUB_00000002 || local_3c != (undefined4 *)0x0) &&
            ((uint)local_40 & 1) != 0) {
        uVar1 = CONCAT44(uStack_34,local_38);
        if (unaff_r7 == local_a4) {
          FUN_007f5a44(&local_a4,unaff_r7,1,8,8);
          puVar6 = local_a0;
        }
        puVar8 = (undefined8 *)((int)puVar6 + iVar7);
        unaff_r7 = unaff_r7 + 1;
        iVar7 = iVar7 + 8;
        *puVar8 = uVar1;
        local_9c = unaff_r7;
      }
      puVar8 = (undefined8 *)(uint)local_101;
      iVar7 = local_a4;
      puVar6 = local_a0;
      if (puVar8 == (undefined8 *)&SUB_00000002) goto LAB_00875a74;
LAB_00875b8c:
      if (iVar7 != 0) {
        thunk_FUN_016d3fb4(puVar6);
      }
LAB_00875b9c:
      local_fc = &DAT_006043a8;
      local_100 = &local_11c;
      FUN_00600d2c(&local_98,&DAT_005737e0,&local_100);
      puVar8 = (undefined8 *)FUN_007e4d10((uint)puVar8 & 1,&local_98);
    }
    if (piVar2 != (int *)0x0) {
      thunk_FUN_016d3fb4(puVar3);
    }
    iVar7 = -0x80000000;
  }
LAB_00875be8:
  uVar5 = 1;
  *param_1 = iVar7;
  param_1[1] = (int)puVar8;
  param_1[2] = unaff_r7;
LAB_00875bf4:
  *(undefined1 *)(param_2 + 0x6c) = uVar5;
  return;
}

