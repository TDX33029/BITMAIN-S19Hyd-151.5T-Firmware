// FUN_00b4cd34 @ 00b4cd34 size=1388 calls_out=21 calls_in=3
// strings: boser_bosminer::config::TunerMode | TunerMode | TunerMode | __fake_type__ | TunerMode | boser_bosminer::config::TunerMode

void FUN_00b4cd34(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  int local_2c;
  undefined4 local_28;
  
  local_1d1 = 4;
  local_1dc = "boser_bosminer::config::TunerMode";
  local_1d8 = 0x21;
  local_1e0 = 9;
  local_1e4 = (int **)0x4a3340;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"TunerMode",9
                      );
  if (iVar1 == 0) {
    iVar1 = FUN_01298504(9,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(iVar1,"TunerMode",9);
    local_58 = 9;
    local_60 = (char ***)0x9;
    local_5c = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_120,4,"boser_bosminer::config::TunerMode",0x21);
    FUN_006c2a34(&local_1d0,(undefined4 *)(param_2 + 0x40),&local_60,&local_120);
    if (local_1c0 != -0x7ffffffa) {
      FUN_006b2000(&local_1d0);
    }
    local_11c = "TunerMode";
    local_118 = (char **)0x9;
    local_120 = (undefined4 ***)0x80000000;
    uVar3 = FUN_0160ec7c(local_70,&local_120);
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
    local_60 = (char ***)*puVar9;
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
    uVar3 = 0xc;
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 != 0) {
      FUN_01bed4e2(iVar1,"POWER_TARGET",0xc);
      local_28 = 0xc;
      local_30 = 0xc;
      local_2c = iVar1;
      pcVar4 = (char *)thunk_FUN_01be5118(0xc);
      if (pcVar4 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xc);
      }
      FUN_01bed4e2(pcVar4,"POWER_TARGET",0xc);
      local_f0 = 0x80000001;
      local_fc = 0x80000000;
      local_104 = 8;
      local_e0 = local_e0 & 0xffffff00;
      local_e4 = (undefined4 *)0x0;
      local_118 = (char **)0xc;
      local_120 = (undefined4 ***)0xc;
      local_100 = (int **)0x0;
      local_108 = (char *)0x0;
      local_10c = (code *)0x0;
      local_110 = (int ***)0x4;
      local_114 = (code *)0x0;
      local_11c = pcVar4;
      FUN_006e0c4c(&local_1d0,&local_60,&local_30,&local_120);
      FUN_00ac5708(&local_1d0);
      uVar3 = 0xf;
      iVar1 = thunk_FUN_01be5118(0xf);
      if (iVar1 != 0) {
        FUN_01bed4e2(iVar1,"HASHRATE_TARGET",0xf);
        local_28 = 0xf;
        local_30 = 0xf;
        local_2c = iVar1;
        iVar1 = thunk_FUN_01be5118(0xf);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0xf);
        }
        FUN_01bed4e2(iVar1,"HASHRATE_TARGET",0xf);
        local_f0 = 0x80000001;
        local_fc = 0x80000000;
        local_104 = 8;
        local_e0 = local_e0 & 0xffffff00;
        local_e4 = (undefined4 *)0x0;
        local_118 = (char **)0xf;
        local_120 = (undefined4 ***)0xf;
        local_100 = (int **)0x0;
        local_108 = (char *)0x0;
        local_10c = (code *)0x0;
        local_110 = (int ***)0x4;
        local_114 = (code *)0x0;
        local_11c = (char *)iVar1;
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
        local_104 = 0x21;
        local_110 = (int ***)&DAT_80000004;
        local_108 = "boser_bosminer::config::TunerMode";
        iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                             "TunerMode",9);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c226c0);
        }
        FUN_006b2000();
        FUN_01bed4e2(iVar1,&local_120,0xb0);
        goto LAB_00b4d16c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar3);
  }
  uVar10 = FUN_006a71d4();
  iVar6 = (int)((ulonglong)uVar10 >> 0x20);
  iVar2 = (int)uVar10;
  if (iVar2 == 0) goto LAB_00b4d16c;
  local_1d0 = uVar10;
  if (iVar6 == 0x21) {
    iVar2 = thunk_FUN_01bed842("boser_bosminer::config::TunerMode",iVar2,0x21);
    if (iVar2 != 0) goto LAB_00b4d138;
  }
  else {
    if (iVar6 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b4d16c;
    }
LAB_00b4d138:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"TunerMode",9);
    if (iVar2 == 0) {
      local_110 = &local_1e4;
      puVar8 = &DAT_01c226d0;
      puVar5 = &DAT_00572c5c;
      local_118 = &local_1dc;
      local_114 = (code *)&DAT_0132b6a0;
      local_120 = (undefined4 ***)&local_1d0;
      goto LAB_00b4d224;
    }
  }
  uVar7 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar7 == 4) {
LAB_00b4d16c:
    local_5c = &LAB_012b97d8;
    local_60 = (char ***)&local_120;
    local_118 = (char **)0x9;
    local_11c = "TunerMode";
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
  local_60 = (char ***)CONCAT31(local_60._1_3_,(char)uVar7);
  puVar5 = &DAT_005b5680;
  local_114 = FUN_006a7514;
  local_120 = &local_1e4;
LAB_00b4d224:
  local_11c = (char *)&DAT_0132b6a0;
  local_10c = local_114;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar5,&local_120,puVar8);
}

