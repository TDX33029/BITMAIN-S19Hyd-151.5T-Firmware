// FUN_00f9db5c @ 00f9db5c size=712 calls_out=14 calls_in=3
// strings: 

void FUN_00f9db5c(undefined4 *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 extraout_r3;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_a8;
  int *local_a4;
  uint local_a0;
  undefined4 uStack_9c;
  int local_94;
  int local_90;
  undefined4 local_78;
  int *local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 *local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_34;
  int *local_30;
  undefined1 *local_2c;
  undefined4 uStack_28;
  
  piVar3 = (int *)thunk_FUN_01be5118(0x10);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  FUN_015e8ad4(&local_30,*(undefined4 *)(param_2 + 0x104),*(undefined4 *)(param_2 + 0x108));
  FUN_015e8ad4(&local_58,*(undefined4 *)(param_2 + 0x110),*(undefined4 *)(param_2 + 0x114));
  local_70 = local_30;
  uStack_6c = local_2c;
  uStack_68 = uStack_28;
  local_64 = local_58;
  uStack_60 = uStack_54;
  uStack_5c = uStack_50;
  local_78 = 3;
  iVar4 = thunk_FUN_01be5118(0x50);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  FUN_01bed4e2(iVar4,&local_a8,0x50);
  iVar5 = *(int *)(param_2 + 0x228);
  local_a4 = *(int **)(iVar5 + 0x44);
  piVar9 = local_a4 + 0x2a;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = *piVar9 + 1;
  do {
    iVar10 = *local_a4;
    bVar2 = (bool)hasExclusiveAccess(local_a4);
  } while (!bVar2);
  *local_a4 = iVar10 + 1;
  if (iVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf9de08);
    (*pcVar1)();
  }
  local_a0 = CONCAT31(local_a0._1_3_,*(undefined1 *)(iVar5 + 0x48));
  local_a8 = param_3;
  puVar6 = (uint *)thunk_FUN_01be5118(0xc);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar6 = local_a8;
  puVar6[1] = (uint)local_a4;
  puVar6[2] = local_a0;
  *piVar3 = iVar4;
  piVar3[1] = (int)&DAT_01c1b2c4;
  piVar3[2] = (int)puVar6;
  piVar3[3] = (int)&DAT_01c1b2e8;
  iVar4 = thunk_FUN_01bee35a();
  puVar6 = (uint *)(iVar4 + 0x2c0);
  local_b0 = 2;
  local_b8 = 2;
  local_b4 = extraout_r3;
  if (*(char *)(iVar4 + 0x2d0) == '\0') {
    FUN_019ae6ac(&local_a8);
    *puVar6 = local_a8;
    *(int **)(iVar4 + 0x2c4) = local_a4;
    *(uint *)(iVar4 + 0x2c8) = local_a0;
    *(undefined4 *)(iVar4 + 0x2cc) = uStack_9c;
    *(undefined1 *)(iVar4 + 0x2d0) = 1;
  }
  local_48 = *puVar6;
  iStack_44 = *(int *)(iVar4 + 0x2c4);
  uStack_40 = *(undefined4 *)(iVar4 + 0x2c8);
  uStack_3c = *(undefined4 *)(iVar4 + 0x2cc);
  *puVar6 = local_48 + 1;
  *(uint *)(iVar4 + 0x2c4) = iStack_44 + (uint)(0xfffffffe < local_48);
  local_58 = &DAT_0056d238;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  iVar4 = 0;
  do {
    (**(code **)(((undefined4 *)((int)piVar3 + iVar4))[1] + 0xc))
              (&local_a8,*(undefined4 *)((int)piVar3 + iVar4));
    iVar4 = iVar4 + 8;
    iVar10 = local_90 * 0xd8;
    iVar5 = local_94;
    while (iVar10 != 0) {
      local_34 = iVar5 + 0xcc;
      FUN_006666fc(&local_30,*(undefined4 *)(iVar5 + 0xd0),*(undefined4 *)(iVar5 + 0xd4));
      iVar7 = FUN_015dcc90(&local_58,&local_30);
      iVar5 = iVar5 + 0xd8;
      iVar10 = iVar10 + -0xd8;
      if (iVar7 != 0) {
        local_30 = &local_34;
        local_2c = &LAB_0193a90c;
        uVar8 = FUN_00b0bbf8(&local_30);
        FUN_01270b08(&local_a8);
        FUN_015d1344(&local_58);
        *param_1 = 0x80000000;
        param_1[1] = uVar8;
        FUN_007adbb4(&local_b8);
        return;
      }
    }
    FUN_01270b08(&local_a8);
  } while (iVar4 != 0x10);
  FUN_015d1344(&local_58);
  *param_1 = local_b8;
  param_1[1] = local_b4;
  param_1[2] = local_b0;
  return;
}

