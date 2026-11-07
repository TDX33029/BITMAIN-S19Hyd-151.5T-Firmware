// FUN_013d4788 @ 013d4788 size=556 calls_out=10 calls_in=1
// strings: 

void FUN_013d4788(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  int local_cc [7];
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_cc[0] = FUN_013d2518(param_2);
  if (local_cc[0] != 0x7c) {
    FUN_013ff7ac(local_cc,&DAT_00567dac,&DAT_01894c28);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13d49b4);
    (*pcVar1)();
  }
  iVar9 = *param_2;
  iVar2 = *(int *)(iVar9 + 0x10);
  puVar8 = (undefined4 *)(iVar9 + 0x50);
  uVar4 = *(undefined4 *)(iVar9 + 0x54);
  uVar5 = *(undefined4 *)(iVar9 + 0x58);
  param_3[6] = *puVar8;
  param_3[7] = uVar4;
  param_3[8] = uVar5;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894df8);
  }
  *(undefined4 *)(iVar9 + 0x10) = 0xffffffff;
  if ((*(int *)(iVar9 + 0x1c) == 0) ||
     (iVar2 = *(int *)(iVar9 + 0x18) + *(int *)(iVar9 + 0x1c) * 0x70,
     *(int *)(iVar2 + -0x70) != -0x80000000)) {
    local_2c = *(undefined4 *)(iVar9 + 0x58);
    local_40 = param_3[3];
    uStack_3c = param_3[4];
    uStack_38 = param_3[5];
    uStack_34 = *puVar8;
    uStack_30 = *(undefined4 *)(iVar9 + 0x54);
    puVar3 = (undefined8 *)thunk_FUN_016d4a50(8);
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    local_b0._0_4_ = *param_3;
    local_b0._4_4_ = param_3[1];
    local_a8 = (undefined8 *)param_3[2];
    local_a4 = param_3[3];
    local_a0 = param_3[4];
    uStack_9c = param_3[5];
    uStack_98 = param_3[6];
    uStack_94 = param_3[7];
    uStack_90 = param_3[8];
    uVar10 = FUN_013f667c(&local_b0);
    *puVar3 = uVar10;
    local_a0 = local_40;
    uStack_9c = uStack_3c;
    uStack_98 = uStack_38;
    uStack_94 = uStack_34;
    uStack_90 = uStack_30;
    uStack_8c = local_2c;
    iVar2 = *(int *)(iVar9 + 0x1c);
    local_a4 = 1;
    local_b0._4_4_ = 1;
    local_b0._0_4_ = 0x80000000;
    local_a8 = puVar3;
    if (iVar2 == *(int *)(iVar9 + 0x14)) {
      FUN_01401394(iVar9 + 0x14);
    }
    FUN_016dd1aa(*(int *)(iVar9 + 0x18) + iVar2 * 0x70,&local_b0,0x70);
    *(int *)(iVar9 + 0x1c) = iVar2 + 1;
  }
  else {
    local_b0._0_4_ = *param_3;
    local_b0._4_4_ = param_3[1];
    local_a8 = (undefined8 *)param_3[2];
    local_a4 = param_3[3];
    local_a0 = param_3[4];
    uStack_9c = param_3[5];
    uStack_98 = param_3[6];
    uStack_94 = param_3[7];
    uStack_90 = param_3[8];
    uVar10 = FUN_013f667c();
    iVar7 = *(int *)(iVar2 + -100);
    local_b0 = uVar10;
    if (iVar7 == *(int *)(iVar2 + -0x6c)) {
      FUN_01401514();
    }
    *(undefined8 *)(*(int *)(iVar2 + -0x68) + iVar7 * 8) = uVar10;
    *(int *)(iVar2 + -100) = iVar7 + 1;
  }
  *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
  FUN_013d2d20(param_2);
  uVar4 = *puVar8;
  uVar5 = *(undefined4 *)(iVar9 + 0x54);
  uVar6 = *(undefined4 *)(iVar9 + 0x58);
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  *param_1 = 0x22;
  return;
}

