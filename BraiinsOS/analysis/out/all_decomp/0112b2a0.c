// FUN_0112b2a0 @ 0112b2a0 size=1656 calls_out=18 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | Unexpected submit result | SetGloba | SetGloba

void FUN_0112b2a0(undefined4 *param_1,uint *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined4 local_c4;
  undefined4 *local_c0;
  code *pcStack_bc;
  int *local_b8;
  int local_b4;
  undefined4 ****local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 *local_a0;
  code *local_9c;
  int *local_98;
  int local_94;
  undefined4 ****local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 ***local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 **local_74;
  undefined **local_70;
  undefined *local_6c;
  undefined *local_68;
  int **local_64;
  int local_60;
  uint local_5c;
  int *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  code *local_4c;
  int *local_48;
  int local_44;
  undefined4 ****local_40;
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_c4 = param_4;
  if ((DAT_018d9130 < 3) || (bVar1 = false, DAT_018dd947 == '\0')) {
    if ((DAT_018d9130 < 3) && (DAT_018da700 != '\0')) {
      if (DAT_018da700 == '\x01') {
LAB_0112b330:
        DataMemoryBarrier(0xb);
        puVar12 = &DAT_018ae394;
        pcVar13 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar13 = DAT_018daa74, puVar12 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar6 = (**(code **)(puVar12 + 0x14))(pcVar13,DAT_018da6f8);
        if (iVar6 == 0) goto LAB_0112b3c4;
      }
      else if (DAT_018da700 != '\x02') {
        cVar5 = FUN_0169ac90(&DAT_018da6f8);
        if (cVar5 == '\0') goto LAB_0112b3c4;
        if (cVar5 != '\x02') goto LAB_0112b330;
      }
      local_48 = (int *)(DAT_018da6f8 + 0x1c);
      local_4c = (code *)0x0;
      local_50 = (undefined4 *)&DAT_00000004;
      FUN_016948f0(&local_a0,DAT_018da6f8,&local_50);
    }
    else {
LAB_0112b3c4:
      local_48 = (int *)&SUB_00000002;
      local_38 = DAT_018da6f8;
      if (DAT_018dd947 == '\0') {
        local_98 = (int *)(DAT_018da6f8 + 0x1c);
        local_9c = (code *)0x0;
        local_a0 = (undefined4 *)0x4;
        FUN_01694880(&local_50,&local_a0);
      }
      local_a0 = local_50;
      local_9c = local_4c;
      local_98 = local_48;
      local_94 = local_44;
      local_90 = local_40;
      iStack_8c = local_3c;
      iStack_88 = local_38;
      uStack_84 = uStack_34;
    }
    local_c0 = local_a0;
    pcStack_bc = local_9c;
    local_b8 = local_98;
    local_b4 = local_94;
    local_b0 = local_90;
    iStack_ac = iStack_8c;
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    if (local_98 != (int *)&SUB_00000002) {
      iVar6 = local_94;
      if (((uint)local_98 & 1) != 0) {
        iVar6 = local_94 + ((int)local_90[2] - 1U & 0xfffffff8) + 8;
      }
      (*(code *)local_90[0xc])(iVar6,&local_c0);
    }
    bVar1 = true;
  }
  FUN_0111208c(&local_50,local_c4);
  puVar2 = local_50;
  if (local_50 != (undefined4 *)&DAT_8000000c) {
    FUN_016dd1aa((int)param_1 + 5,(uint)&local_50 | 1,0x23);
    *(char *)(param_1 + 1) = (char)puVar2;
    *param_1 = 3;
    goto LAB_0112b854;
  }
  if ((~param_2[10] & 6) != 0) {
    iVar6 = thunk_FUN_016d4a50(0x18);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x18);
    }
    FUN_016dd1aa(iVar6,"Unexpected submit result",0x18);
    param_1[2] = iVar6;
    *param_1 = 1;
    param_1[1] = 0x18;
    param_1[3] = 0x18;
    goto LAB_0112b854;
  }
  uVar10 = param_2[0xb];
  uVar9 = param_2[0xc];
  cVar5 = (char)local_4c;
  if (uVar9 == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(uVar9);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,uVar9);
    }
  }
  FUN_016dd1aa(iVar6,uVar10,uVar9);
  if (cVar5 == '\0') {
    if ((DAT_018d9130 < 3) && (DAT_018da70c != '\0')) {
      if (DAT_018da70c == '\x01') {
LAB_0112b678:
        DataMemoryBarrier(0xb);
        pcVar13 = s_SetGloba_00414c05;
        puVar12 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar13 = DAT_018daa74, puVar12 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar7 = (**(code **)(puVar12 + 0x14))(pcVar13,DAT_018da704);
        if (iVar7 == 0) goto LAB_0112b7ec;
      }
      else if (DAT_018da70c != '\x02') {
        cVar5 = FUN_0169ac90(&DAT_018da704);
        if (cVar5 == '\0') goto LAB_0112b7ec;
        if (cVar5 != '\x02') goto LAB_0112b678;
      }
      local_3c = DAT_018da704;
      if (*(int *)(DAT_018da704 + 0x20) == 0) {
        uVar8 = 0x22;
        puVar12 = &DAT_01887c88;
        pcVar13 = &DAT_00411c02;
LAB_0112b8f4:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(pcVar13,uVar8,puVar12);
      }
      local_9c = *(code **)(DAT_018da704 + 0x20);
      local_98 = *(int **)(DAT_018da704 + 0x24);
      local_94 = *(int *)(DAT_018da704 + 0x28);
      local_78 = (undefined4 *)(DAT_018da704 + 0x1c);
      local_a0 = (undefined4 *)*local_78;
      local_64 = &local_58;
      local_68 = &DAT_00584cb2;
      local_58 = &local_60;
      local_90 = (undefined4 ****)0x0;
      local_6c = &DAT_018abb78;
      local_70 = &local_68;
      local_74 = &local_a0;
      local_80 = &local_74;
      local_40 = &local_80;
      local_54 = &DAT_0157d360;
      local_7c = 1;
      local_4c = (code *)0x0;
      local_50 = (undefined4 *)&DAT_00000001;
      DataMemoryBarrier(0xb);
      pcVar13 = s_SetGloba_00414c05;
      puVar12 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar13 = DAT_018daa74, puVar12 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_60 = iVar6;
      local_5c = uVar9;
      iVar7 = (**(code **)(puVar12 + 0x28))(pcVar13,&local_50);
      if (iVar7 != 0) {
        (**(code **)(puVar12 + 0x2c))(pcVar13,&local_50);
      }
    }
LAB_0112b7ec:
    local_74 = (undefined4 **)*param_3;
    local_70 = (undefined **)param_3[1];
    local_a0 = &local_c4;
    local_9c = FUN_01137100;
    FUN_00600d2c(&local_50,&DAT_00590271,&local_a0);
    FUN_01128834(param_1,param_2,0,&local_74,&local_50);
  }
  else {
    if ((*param_2 & 1) == 0) {
      uVar8 = 0x17;
      puVar12 = &DAT_01887c98;
      pcVar13 = "BUG: difficulty missing";
      goto LAB_0112b8f4;
    }
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    FUN_01128d34(&local_50,param_2,*param_3,param_3[1]);
    piVar4 = local_48;
    pcVar3 = local_4c;
    if (local_50 == (undefined4 *)&DAT_00000011) {
      if ((*local_48 == 1) && (local_48[2] != 0)) {
        thunk_FUN_016d3fb4(local_48[1]);
      }
      piVar4[2] = uVar10;
      *piVar4 = 2;
      piVar4[3] = uVar11;
      piVar4[4] = 0;
      piVar4[5] = (int)pcVar3;
      piVar4[6] = 1;
      FUN_01128f08(param_1,param_2);
    }
    else {
      param_1[3] = local_44;
      param_1[4] = local_40;
      param_1[5] = local_3c;
      param_1[6] = local_38;
      param_1[7] = uStack_34;
      param_1[8] = uStack_30;
      param_1[9] = uStack_2c;
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = local_48;
    }
  }
  if (uVar9 != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
LAB_0112b854:
  if (bVar1) {
    if (local_b8 != (int *)&SUB_00000002) {
      iVar6 = local_b4;
      if (((uint)local_b8 & 1) != 0) {
        iVar6 = local_b4 + ((int)local_b0[2] - 1U & 0xfffffff8) + 8;
      }
      (*(code *)local_b0[0xd])(iVar6,&local_c0);
    }
    FUN_005c3320(&local_c0);
  }
  return;
}

