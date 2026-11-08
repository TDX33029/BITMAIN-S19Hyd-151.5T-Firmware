// FUN_00ad4efc @ 00ad4efc size=1380 calls_out=21 calls_in=2
// strings: boser::web::graphql::storage::DashboardDensity | __fake_type__ | boser::web::graphql::storage::DashboardDensity | boser::web::graphql::storage::DashboardDensity | boser::web::graphql::storage::DashboardDensity

void FUN_00ad4efc(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  int **local_1e4;
  undefined4 local_1e0;
  char *local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d1;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  int local_1c0;
  undefined4 ***local_120;
  undefined4 *local_11c;
  char **local_118;
  code *local_114;
  int ***local_110;
  code *local_10c;
  char *local_108;
  undefined4 local_104;
  int **local_100;
  uint local_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 *local_e4;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 ***local_60;
  undefined1 *local_5c;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *puStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  
  local_1d1 = 4;
  local_1dc = "boser::web::graphql::storage::DashboardDensity";
  local_1d8 = 0x2e;
  local_1e0 = 0x10;
  local_1e4 = (int **)&DAT_00568d08;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),&DAT_00568d08
                       ,0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_01298504(0x10,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x10);
    }
    FUN_01bed4e2(iVar1,&DAT_00568d08,0x10);
    local_58 = 0x10;
    local_60 = (undefined4 ***)0x10;
    local_5c = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_120,4,"boser::web::graphql::storage::DashboardDensity",0x2e);
    FUN_006c2a34(&local_1d0,(undefined4 *)(param_2 + 0x40),&local_60,&local_120);
    if (local_1c0 != -0x7ffffffa) {
      FUN_00abf870(&local_1d0);
    }
    local_118 = (char **)0x10;
    local_120 = (undefined4 ***)0x80000000;
    local_11c = (undefined4 *)&DAT_00568d08;
    uVar3 = FUN_0160ec7c(&local_70,&local_120);
    uVar10 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar9 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
    if ((char)puVar9[4] == '\0') {
      FUN_019ae6ac(&local_120);
      *puVar9 = (uint)local_120;
      puVar9[1] = (uint)local_11c;
      puVar9[2] = (uint)local_118;
      puVar9[3] = (uint)local_114;
      *(undefined1 *)(puVar9 + 4) = 1;
    }
    local_60 = (undefined4 ***)*puVar9;
    local_5c = (undefined1 *)puVar9[1];
    local_58 = puVar9[2];
    uStack_54 = puVar9[3];
    *puVar9 = (int)local_60 + 1;
    puVar9[1] = (int)local_5c + (uint)((int **)0xfffffffe < local_60);
    local_48 = 0;
    local_50 = 0;
    local_4c = 4;
    puStack_44 = &DAT_0056d238;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)((int)puVar4 + 3) = 0x544c5541;
      *puVar4 = 0x41464544;
      local_28 = 7;
      local_30 = 7;
      local_2c = puVar4;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar4 + 3) = 0x544c5541;
      local_f0 = 0x80000001;
      *puVar4 = 0x41464544;
      local_fc = 0x80000000;
      local_104 = 8;
      local_e0 = local_e0 & 0xffffff00;
      local_e4 = (undefined4 *)0x0;
      local_118 = (char **)0x7;
      local_120 = (undefined4 ***)0x7;
      local_100 = (int **)0x0;
      local_108 = (char *)0x0;
      local_10c = (code *)0x0;
      local_110 = (int ***)0x4;
      local_114 = (code *)0x0;
      local_11c = puVar4;
      FUN_006e0c4c(&local_1d0,&local_60,&local_30,&local_120);
      FUN_00ac5708(&local_1d0);
      puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined4 *)((int)puVar4 + 3) = 0x54434150;
        *puVar4 = 0x504d4f43;
        local_28 = 7;
        local_30 = 7;
        local_2c = puVar4;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,7);
        }
        *(undefined4 *)((int)puVar4 + 3) = 0x54434150;
        local_f0 = 0x80000001;
        *puVar4 = 0x504d4f43;
        local_fc = 0x80000000;
        local_104 = 8;
        local_e0 = local_e0 & 0xffffff00;
        local_e4 = (undefined4 *)0x0;
        local_118 = (char **)0x7;
        local_120 = (undefined4 ***)0x7;
        local_100 = (int **)0x0;
        local_108 = (char *)0x0;
        local_10c = (code *)0x0;
        local_110 = (int ***)0x4;
        local_114 = (code *)0x0;
        local_11c = puVar4;
        FUN_006e0c4c(&local_1d0,&local_60,&local_30,&local_120);
        FUN_00ac5708(&local_1d0);
        local_100 = (int **)local_60;
        local_fc = (uint)local_5c;
        uStack_f8 = local_58;
        uStack_f4 = uStack_54;
        local_f0 = local_50;
        uStack_ec = local_4c;
        uStack_e8 = local_48;
        local_e4 = puStack_44;
        local_e0 = uStack_40;
        uStack_dc = uStack_3c;
        uStack_d8 = uStack_38;
        uStack_d4 = uStack_34;
        local_c0 = local_70;
        uStack_bc = uStack_6c;
        uStack_b8 = uStack_68;
        local_a4 = 8;
        local_b0 = 4;
        local_9c = 0;
        local_a0 = 0;
        local_a8 = 0;
        local_ac = 0;
        local_b4 = 0;
        local_d0 = 0;
        local_cc = 0x80000000;
        local_104 = 0x2e;
        local_110 = (int ***)&DAT_80000004;
        local_108 = "boser::web::graphql::storage::DashboardDensity";
        iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                             &DAT_00568d08,0x10);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c226c0);
        }
        FUN_00abf870();
        FUN_01bed4e2(iVar1,&local_120,0xb0);
        goto LAB_00ad532c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,7);
  }
  uVar10 = FUN_006a71d4();
  iVar6 = (int)((ulonglong)uVar10 >> 0x20);
  iVar2 = (int)uVar10;
  if (iVar2 == 0) goto LAB_00ad532c;
  local_1d0 = uVar10;
  if (iVar6 == 0x2e) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::storage::DashboardDensity",iVar2,0x2e);
    if (iVar2 != 0) goto LAB_00ad52f8;
  }
  else {
    if (iVar6 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00ad532c;
    }
LAB_00ad52f8:
    iVar2 = FUN_015db690(param_2 + 0x20,&DAT_00568d08,0x10);
    if (iVar2 == 0) {
      local_110 = &local_1e4;
      puVar8 = &DAT_01c226d0;
      puVar5 = &DAT_00572c5c;
      local_118 = &local_1dc;
      local_114 = (code *)&DAT_0132b6a0;
      local_120 = (undefined4 ***)&local_1d0;
      goto LAB_00ad53e4;
    }
  }
  uVar7 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar7 == 4) {
LAB_00ad532c:
    local_5c = &LAB_012b97d8;
    local_60 = &local_120;
    local_118 = (char **)0x10;
    local_11c = (undefined4 *)&DAT_00568d08;
    local_120 = (undefined4 ***)0x80000000;
    FUN_00664898(&local_1d0,&DAT_0057a667,&local_60);
    if (local_120 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_120,local_11c);
    }
    *param_1 = local_1d0;
    *(undefined4 *)(param_1 + 1) = uStack_1c8;
    return;
  }
  local_110 = (int ***)&local_60;
  local_118 = (char **)&local_1d1;
  puVar8 = &DAT_01c226e0;
  local_60 = (undefined4 ***)CONCAT31(local_60._1_3_,(char)uVar7);
  puVar5 = &DAT_005b5680;
  local_114 = FUN_006a7514;
  local_120 = &local_1e4;
LAB_00ad53e4:
  local_11c = (undefined4 *)&DAT_0132b6a0;
  local_10c = local_114;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar5,&local_120,puVar8);
}

