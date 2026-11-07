// FUN_009e7438 @ 009e7438 size=1572 calls_out=21 calls_in=1
// strings: boser::web::graphql::bosminer::license::LicenseType | LicenseTypeevent open/boser/boser/src/monitor/bosminer.rs:90 | LicenseTypeevent open/boser/boser/src/monitor/bosminer.rs:90 | __fake_type__ | LicenseTypeevent open/boser/boser/src/monitor/bosminer.rs:90 | boser::web::graphql::bosminer::license::LicenseType

void FUN_009e7438(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  int **local_1e4;
  undefined4 local_1e0;
  char *local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d1;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  int local_1c0;
  undefined4 ***local_120;
  char *local_11c;
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
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_70 [16];
  char ***local_60;
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
  local_1dc = "boser::web::graphql::bosminer::license::LicenseType";
  local_1d8 = 0x33;
  local_1e0 = 0xb;
  local_1e4 = (int **)0x3ea808;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                       "LicenseTypeevent open/boser/boser/src/monitor/bosminer.rs:90",0xb);
  if (iVar1 == 0) {
    iVar1 = FUN_01298504(0xb,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(iVar1,"LicenseTypeevent open/boser/boser/src/monitor/bosminer.rs:90",0xb);
    local_58 = 0xb;
    local_60 = (char ***)0xb;
    local_5c = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_120,4,"boser::web::graphql::bosminer::license::LicenseType",0x33);
    FUN_006c2a34(&local_1d0,(undefined4 *)(param_2 + 0x40),&local_60,&local_120);
    if (local_1c0 != -0x7ffffffa) {
      FUN_00abf870(&local_1d0);
    }
    local_118 = (char **)0xb;
    local_120 = (undefined4 ***)0x80000000;
    local_11c = "LicenseTypeevent open/boser/boser/src/monitor/bosminer.rs:90";
    uVar3 = FUN_0160ec7c(local_70,&local_120);
    uVar11 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar10 = (uint *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
    if ((char)puVar10[4] == '\0') {
      FUN_019ae6ac(&local_120);
      *puVar10 = (uint)local_120;
      puVar10[1] = (uint)local_11c;
      puVar10[2] = (uint)local_118;
      puVar10[3] = (uint)local_114;
      *(undefined1 *)(puVar10 + 4) = 1;
    }
    local_60 = (char ***)*puVar10;
    local_5c = (undefined1 *)puVar10[1];
    local_58 = puVar10[2];
    uStack_54 = puVar10[3];
    *puVar10 = (int)local_60 + 1;
    puVar10[1] = (int)local_5c + (uint)((int **)0xfffffffe < local_60);
    local_48 = 0;
    local_50 = 0;
    local_4c = 4;
    puStack_44 = &DAT_0056d238;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uVar3 = 7;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)((int)puVar4 + 3) = 0x4e574f4e;
      *puVar4 = 0x4e4b4e55;
      local_28 = 7;
      local_30 = 7;
      local_2c = puVar4;
      pcVar5 = (char *)thunk_FUN_01be5118(7);
      if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      builtin_strncpy(pcVar5,"UNKNOWN",7);
      local_f0 = 0x80000001;
      local_104 = 8;
      local_e0 = local_e0 & 0xffffff00;
      local_e4 = (undefined4 *)0x0;
      local_fc = 0x80000000;
      local_118 = (char **)0x7;
      local_120 = (undefined4 ***)0x7;
      local_100 = (int **)0x0;
      local_108 = (char *)0x0;
      local_10c = (code *)0x0;
      local_110 = (int ***)0x4;
      local_114 = (code *)0x0;
      local_11c = pcVar5;
      FUN_006e0c4c(&local_1d0,&local_60,&local_30,&local_120);
      FUN_00ac5708(&local_1d0);
      uVar3 = 8;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0x44524144;
        *puVar4 = 0x4e415453;
        local_28 = 8;
        local_30 = 8;
        local_2c = puVar4;
        pcVar5 = (char *)thunk_FUN_01be5118(8);
        if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,8);
        }
        local_f0 = 0x80000001;
        builtin_strncpy(pcVar5,"STANDARD",8);
        local_e0 = local_e0 & 0xffffff00;
        local_e4 = (undefined4 *)0x0;
        local_fc = 0x80000000;
        local_118 = (char **)0x8;
        local_120 = (undefined4 ***)0x8;
        local_100 = (int **)0x0;
        local_104 = 8;
        local_108 = (char *)0x0;
        local_10c = (code *)0x0;
        local_110 = (int ***)0x4;
        local_114 = (code *)0x0;
        local_11c = pcVar5;
        FUN_006e0c4c(&local_1d0,&local_60,&local_30,&local_120);
        FUN_00ac5708(&local_1d0);
        uVar3 = 6;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(6);
        if (puVar4 != (undefined4 *)0x0) {
          *(undefined2 *)(puVar4 + 1) = 0x4d4f;
          *puVar4 = 0x54535543;
          local_28 = 6;
          local_30 = 6;
          local_2c = puVar4;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(6);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,6);
          }
          *(undefined2 *)(puVar4 + 1) = 0x4d4f;
          *puVar4 = 0x54535543;
          local_f0 = 0x80000001;
          local_104 = 8;
          local_e0 = local_e0 & 0xffffff00;
          local_e4 = (undefined4 *)0x0;
          local_fc = 0x80000000;
          local_118 = (char **)0x6;
          local_120 = (undefined4 ***)0x6;
          local_100 = (int **)0x0;
          local_108 = (char *)0x0;
          local_10c = (code *)0x0;
          local_110 = (int ***)0x4;
          local_114 = (code *)0x0;
          local_11c = (char *)puVar4;
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
          local_a4 = 8;
          local_b0 = 4;
          local_9c = 0;
          local_a0 = 0;
          local_a8 = 0;
          local_ac = 0;
          local_b4 = 0;
          local_d0 = 0;
          local_cc = 0x80000000;
          local_104 = 0x33;
          local_110 = (int ***)&DAT_80000004;
          local_108 = "boser::web::graphql::bosminer::license::LicenseType";
          iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                               "LicenseTypeevent open/boser/boser/src/monitor/bosminer.rs:90",0xb);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01c226c0);
          }
          FUN_00abf870();
          FUN_01bed4e2(iVar1,&local_120,0xb0);
          goto LAB_009e791c;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar3);
  }
  uVar11 = FUN_006a71d4();
  iVar7 = (int)((ulonglong)uVar11 >> 0x20);
  iVar2 = (int)uVar11;
  if (iVar2 == 0) goto LAB_009e791c;
  local_1d0 = uVar11;
  if (iVar7 == 0x33) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::license::LicenseType",iVar2,0x33);
    if (iVar2 != 0) goto LAB_009e78e8;
  }
  else {
    if (iVar7 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_009e791c;
    }
LAB_009e78e8:
    iVar2 = FUN_015db690(param_2 + 0x20,
                         "LicenseTypeevent open/boser/boser/src/monitor/bosminer.rs:90",0xb);
    if (iVar2 == 0) {
      local_110 = &local_1e4;
      puVar9 = &DAT_01c226d0;
      puVar6 = &DAT_00572c5c;
      local_118 = &local_1dc;
      local_114 = (code *)&DAT_0132b6a0;
      local_120 = (undefined4 ***)&local_1d0;
      goto LAB_009e79d4;
    }
  }
  uVar8 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar8 == 4) {
LAB_009e791c:
    local_5c = &LAB_012b97d8;
    local_60 = (char ***)&local_120;
    local_118 = (char **)0xb;
    local_11c = "LicenseTypeevent open/boser/boser/src/monitor/bosminer.rs:90";
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
  puVar9 = &DAT_01c226e0;
  local_60 = (char ***)CONCAT31(local_60._1_3_,(char)uVar8);
  puVar6 = &DAT_005b5680;
  local_114 = FUN_006a7514;
  local_120 = &local_1e4;
LAB_009e79d4:
  local_11c = (char *)&DAT_0132b6a0;
  local_10c = local_114;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar6,&local_120,puVar9);
}

