// FUN_0112f57c @ 0112f57c size=1628 calls_out=10 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | SetGloba | SetGloba | lDefaultError

void FUN_0112f57c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined1 *local_a8;
  uint uStack_a4;
  uint local_a0;
  int local_9c;
  undefined1 ****local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  undefined1 ****local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  uint local_64;
  uint local_60;
  int iStack_5c;
  undefined1 ****local_58;
  int local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined1 ***local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined1 **local_38;
  char **local_34;
  undefined *local_30;
  char *local_2c;
  undefined4 local_28;
  
  if ((DAT_018d9130 < 3) || (bVar1 = false, DAT_018dd947 == '\0')) {
    if ((DAT_018d9130 < 3) && (DAT_018da7fc != '\0')) {
      if (DAT_018da7fc == '\x01') {
LAB_0112f608:
        DataMemoryBarrier(0xb);
        puVar7 = &DAT_018ae394;
        pcVar6 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar6 = DAT_018daa74;
          puVar7 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar5 = (**(code **)(puVar7 + 0x14))(pcVar6,DAT_018da7f4);
        if (iVar5 == 0) goto LAB_0112f69c;
      }
      else if (DAT_018da7fc != '\x02') {
        cVar3 = FUN_0169ac90(&DAT_018da7f4);
        if (cVar3 == '\0') goto LAB_0112f69c;
        if (cVar3 != '\x02') goto LAB_0112f608;
      }
      local_60 = DAT_018da7f4 + 0x1c;
      local_64 = 0;
      local_68 = (undefined1 *)0x4;
      FUN_016948f0(&local_88,DAT_018da7f4,&local_68);
    }
    else {
LAB_0112f69c:
      local_60 = 2;
      local_50 = DAT_018da7f4;
      if (DAT_018dd947 == '\0') {
        local_80 = DAT_018da7f4 + 0x1c;
        local_84 = 0;
        local_88 = (undefined1 *)0x4;
        FUN_01694880(&local_68,&local_88);
      }
      local_88 = local_68;
      local_84 = local_64;
      local_80 = local_60;
      local_7c = iStack_5c;
      local_78 = local_58;
      iStack_74 = local_54;
      iStack_70 = local_50;
      uStack_6c = uStack_4c;
    }
    local_a8 = local_88;
    uStack_a4 = local_84;
    local_a0 = local_80;
    local_9c = local_7c;
    local_98 = local_78;
    iStack_94 = iStack_74;
    iStack_90 = iStack_70;
    uStack_8c = uStack_6c;
    if (local_80 != 2) {
      iVar5 = local_7c;
      if ((local_80 & 1) != 0) {
        iVar5 = local_7c + ((int)local_78[2] - 1U & 0xfffffff8) + 8;
      }
      (*(code *)local_78[0xc])(iVar5,&local_a8);
    }
    bVar1 = true;
  }
  FUN_0111208c(&local_68,param_4);
  puVar2 = local_68;
  if (local_68 != &DAT_8000000c) {
    FUN_016dd1aa((int)param_1 + 5,(uint)&local_68 | 1,0x23);
    *(char *)(param_1 + 1) = (char)puVar2;
    *param_1 = 3;
    goto joined_r0x0112f97c;
  }
  if ((local_64 & 0xff) == 0) {
    if ((DAT_018d9130 < 5) && (DAT_018da808 != '\0')) {
      puVar7 = &DAT_018ae394;
      if (DAT_018da808 == '\x01') {
LAB_0112f9e8:
        DataMemoryBarrier(0xb);
        pcVar6 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar6 = DAT_018daa74;
          puVar7 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar5 = (**(code **)(puVar7 + 0x14))(pcVar6,DAT_018da800);
        if (iVar5 == 0) goto LAB_0112fb48;
      }
      else if (DAT_018da808 != '\x02') {
        cVar3 = FUN_0169ac90(&DAT_018da800);
        if (cVar3 == '\0') goto LAB_0112fb48;
        if (cVar3 != '\x02') goto LAB_0112f9e8;
      }
      local_54 = DAT_018da800;
      if (*(int *)(DAT_018da800 + 0x20) == 0) {
        puVar7 = &DAT_01888304;
        goto LAB_0112fbc8;
      }
      local_34 = &local_2c;
      local_84 = *(uint *)(DAT_018da800 + 0x20);
      local_80 = *(uint *)(DAT_018da800 + 0x24);
      local_7c = *(int *)(DAT_018da800 + 0x28);
      local_3c = (undefined4 *)(DAT_018da800 + 0x1c);
      local_88 = (undefined1 *)*local_3c;
      local_38 = &local_88;
      local_44 = &local_38;
      local_58 = &local_44;
      local_78 = (undefined1 ****)0x0;
      local_40 = 1;
      local_30 = &DAT_018abb78;
      local_28 = 0x3b;
      local_2c = "Pool refused to enable #xnsub";
      local_64 = 0;
      local_68 = (undefined1 *)0x1;
      DataMemoryBarrier(0xb);
      pcVar6 = s_SetGloba_00414c05;
      puVar7 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar6 = DAT_018daa74;
        puVar7 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar5 = (**(code **)(puVar7 + 0x28))(pcVar6,&local_68);
      if (iVar5 != 0) {
        (**(code **)(puVar7 + 0x2c))(pcVar6,&local_68);
      }
      uVar4 = 0;
    }
    else {
LAB_0112fb48:
      uVar4 = 0;
    }
  }
  else if ((DAT_018d9130 < 3) && (DAT_018da814 != '\0')) {
    if (DAT_018da814 == '\x01') {
LAB_0112f7d0:
      puVar7 = &DAT_018ae394;
      DataMemoryBarrier(0xb);
      pcVar6 = s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pcVar6 = DAT_018daa74;
        puVar7 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar5 = (**(code **)(puVar7 + 0x14))(pcVar6,DAT_018da80c);
      if (iVar5 == 0) goto LAB_0112fb40;
    }
    else if (DAT_018da814 != '\x02') {
      cVar3 = FUN_0169ac90(&DAT_018da80c);
      if (cVar3 == '\0') goto LAB_0112fb40;
      if (cVar3 != '\x02') goto LAB_0112f7d0;
    }
    local_54 = DAT_018da80c;
    if (*(int *)(DAT_018da80c + 0x20) == 0) {
      puVar7 = &DAT_01888314;
LAB_0112fbc8:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,puVar7);
    }
    local_84 = *(uint *)(DAT_018da80c + 0x20);
    local_80 = *(uint *)(DAT_018da80c + 0x24);
    local_34 = &local_2c;
    local_7c = *(int *)(DAT_018da80c + 0x28);
    local_3c = (undefined4 *)(DAT_018da80c + 0x1c);
    local_88 = (undefined1 *)*local_3c;
    local_38 = &local_88;
    local_44 = &local_38;
    local_58 = &local_44;
    local_78 = (undefined1 ****)0x0;
    local_40 = 1;
    local_30 = &DAT_018abb78;
    local_28 = 0x35;
    local_2c = 
    "Support for #xnsub enabledhandle_authorize_or_subscribe_errorService not readyhandle_open_extended_mining_channelhandle_open_standard_mining_channelevent open/protocols/stratum-proxy/src/translation.rs:1256event open/protocols/stratum-proxy/src/translation.rs:1244event open/protocols/stratum-proxy/src/translation.rs:1252event open/protocols/stratum-proxy/src/translation.rs:1260event open/protocols/stratum-proxy/src/translation.rs:1268event open/protocols/stratum-proxy/src/translation.rs:1248event open/protocols/stratum-proxy/src/translation.rs:1264event open/protocols/stratum-proxy/src/translation.rs:1272"
    ;
    local_64 = 0;
    local_68 = (undefined1 *)0x1;
    DataMemoryBarrier(0xb);
    pcVar6 = s_SetGloba_00414c05;
    puVar7 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar6 = DAT_018daa74;
      puVar7 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar5 = (**(code **)(puVar7 + 0x28))(pcVar6,&local_68);
    if (iVar5 != 0) {
      (**(code **)(puVar7 + 0x2c))(pcVar6,&local_68);
    }
    uVar4 = 1;
  }
  else {
LAB_0112fb40:
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 0x203) = uVar4;
  *param_1 = 0x11;
joined_r0x0112f97c:
  if (bVar1) {
    if (local_a0 != 2) {
      iVar5 = local_9c;
      if ((local_a0 & 1) != 0) {
        iVar5 = local_9c + ((int)local_98[2] - 1U & 0xfffffff8) + 8;
      }
      (*(code *)local_98[0xd])(iVar5,&local_a8);
    }
    FUN_005c3320(&local_a8);
    return;
  }
  return;
}

