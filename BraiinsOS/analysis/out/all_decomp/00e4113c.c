// FUN_00e4113c @ 00e4113c size=1392 calls_out=4 calls_in=0
// strings: PlusBackend | backend_descriptor | work_solver_stats | BasicWorkSolver | plus_hooksBoost | work_solver_stats

undefined4 FUN_00e4113c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 *local_a0;
  char local_9c;
  char local_9b;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 local_89;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined **local_68;
  int local_64;
  undefined *local_60;
  int local_5c;
  undefined *local_58;
  int local_54;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined *local_28;
  
  uVar8 = *param_2;
  pcVar7 = *(code **)(param_2[1] + 0xc);
  iVar3 = (*pcVar7)(uVar8,"PlusBackend",0xb);
  cVar2 = '\x01';
  local_a0 = param_2;
  if (iVar3 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar7)(uVar8,&DAT_00414a79,3);
      cVar2 = '\x01';
      if (iVar3 == 0) {
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"work_solver_stats",0x11);
        cVar2 = '\x01';
        if (iVar3 == 0) {
          iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          cVar2 = '\x01';
          if (iVar3 == 0) {
            local_2c = &local_88;
            local_34 = param_1 + 0x260;
            local_3c = param_1 + 0x218;
            local_44 = param_1 + 0x1d0;
            local_4c = param_1 + 0x1b0;
            local_5c = param_1 + 0x1c8;
            local_64 = param_1 + 0x1c0;
            local_6c = (undefined4 *)(param_1 + 0x180);
            local_74 = (undefined *)(param_1 + 0x2f0);
            local_28 = &DAT_0187abc0;
            local_30 = &DAT_0187a274;
            local_38 = &DAT_0187a274;
            local_40 = &DAT_0187a274;
            local_58 = &DAT_0187a244;
            local_60 = &DAT_0187a244;
            local_88 = (undefined4 *)(param_1 + 0x2a8);
            local_70 = (undefined4 *)&DAT_0187ab60;
            local_48 = &DAT_0187a264;
            local_50 = &DAT_0187a254;
            local_68 = &PTR_FUN_0187a234;
            local_54 = param_1 + 0x140;
            cVar2 = FUN_00fb36b8(param_2,"BasicWorkSolver",0xf,&DAT_0187abd0,10,&local_74,10);
          }
        }
      }
    }
    else {
      iVar3 = (*pcVar7)(uVar8,&DAT_00414a7e,3);
      cVar2 = '\x01';
      if (iVar3 == 0) {
        local_98 = *param_2;
        local_94 = param_2[1];
        local_80 = param_2[2];
        local_7c = param_2[3];
        local_90 = &local_89;
        local_88 = &local_98;
        local_89 = 1;
        local_84 = (undefined4 *)&DAT_01880dc4;
        iVar3 = FUN_00fb1f64(local_88,"work_solver_stats",0x11);
        if ((iVar3 == 0) && (iVar3 = FUN_00fb1f64(&local_98,&DAT_00414a7c,2), iVar3 == 0)) {
          local_2c = &local_78;
          local_34 = param_1 + 0x260;
          local_3c = param_1 + 0x218;
          local_44 = param_1 + 0x1d0;
          local_4c = param_1 + 0x1b0;
          local_5c = param_1 + 0x1c8;
          local_64 = param_1 + 0x1c0;
          local_6c = (undefined4 *)(param_1 + 0x180);
          local_74 = (undefined *)(param_1 + 0x2f0);
          local_28 = &DAT_0187abc0;
          local_30 = &DAT_0187a274;
          local_38 = &DAT_0187a274;
          local_40 = &DAT_0187a274;
          local_58 = &DAT_0187a244;
          local_60 = &DAT_0187a244;
          local_78 = (undefined4 *)(param_1 + 0x2a8);
          local_68 = &PTR_FUN_0187a234;
          local_48 = &DAT_0187a264;
          local_50 = &DAT_0187a254;
          local_70 = (undefined4 *)&DAT_0187ab60;
          local_54 = param_1 + 0x140;
          iVar3 = FUN_00fb36b8(&local_88,"BasicWorkSolver",0xf,&DAT_0187abd0,10,&local_74,10);
          if (iVar3 == 0) {
            cVar2 = (*(code *)local_84[3])(local_88,&DAT_00414a81,2);
          }
          else {
            cVar2 = '\x01';
          }
        }
      }
    }
  }
  local_9b = '\x01';
  local_9c = cVar2;
  FUN_00fb2258(&local_a0,"backend_descriptor",0x12,param_1,FUN_00d960bc);
  puVar1 = local_a0;
  if (local_9c != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_a0 + 10) & 0x80) == 0) {
    puVar4 = &DAT_0041950f;
    if (local_9b == '\0') {
      puVar4 = &DAT_00414a79;
    }
    uVar8 = 3;
    if (local_9b != '\0') {
      uVar8 = 2;
    }
    iVar3 = (**(code **)(local_a0[1] + 0xc))(*local_a0,puVar4,uVar8);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,"plus_hooksBoost",10);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    local_70 = &DAT_0157d360;
    local_74 = &DAT_01870428;
    iVar3 = FUN_00fa948c(*puVar1,puVar1[1],&DAT_0057716e,&local_74);
  }
  else {
    if ((local_9b == '\0') &&
       (iVar3 = (**(code **)(local_a0[1] + 0xc))(*local_a0,&DAT_00414a7e,3), iVar3 != 0)) {
      return 1;
    }
    local_6c = &local_98;
    local_74 = (undefined *)*puVar1;
    local_70 = (undefined4 *)puVar1[1];
    local_98 = CONCAT31(local_98._1_3_,1);
    iVar3 = FUN_00fb1f64(&local_74,"plus_hooksBoost",10);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_74,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    local_84 = &DAT_0157d360;
    local_88 = (undefined4 *)&DAT_01870428;
    iVar3 = FUN_00fa948c(&local_74,&DAT_01880dc4,&DAT_0057716e,&local_88);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_74,&DAT_00414a81,2);
  }
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(byte *)((int)puVar1 + 10) & 0x80) == 0) {
    uVar8 = *puVar1;
    uVar6 = 2;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar5 = " }";
  }
  else {
    uVar8 = *puVar1;
    uVar6 = 1;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar5 = "}";
  }
  uVar8 = (*pcVar7)(uVar8,pcVar5,uVar6);
  return uVar8;
}

