// FUN_0112ac78 @ 0112ac78 size=728 calls_out=9 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | BUG: initial target still not defined when attempting to finalize OpenStandardMiningChannelhandle_unknown_v1event open/protocols/stratum-proxy/src/translation.rs:1446event open/protocols/stratum-proxy/src/translation.rs:1443event open/protocols/stratum-proxy/src/translation.rs:596abort_open_channelevent open/protocols/stratum-proxy/src/translation.rs:610handle_submit_errorhandle_stratum_errorhandle_submit_resultevent open/protocols/stratum-proxy/src/translation.rs:856

void FUN_0112ac78(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  int local_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 local_7c;
  uint local_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 local_5c;
  int local_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  if ((2 < DAT_018d9130) && (bVar1 = false, DAT_018dd947 != '\0')) goto LAB_0112ae4c;
  if ((DAT_018d9130 < 3) && (DAT_018da694 != '\0')) {
    if (DAT_018da694 == '\x01') {
LAB_0112ad04:
      DataMemoryBarrier(0xb);
      puVar11 = &DAT_018ae394;
      pcVar13 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar13 = DAT_018daa74, puVar11 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar3 = (**(code **)(puVar11 + 0x14))(pcVar13,DAT_018da68c);
      if (iVar3 == 0) goto LAB_0112ad98;
    }
    else if (DAT_018da694 != '\x02') {
      cVar2 = FUN_0169ac90(&DAT_018da68c);
      if (cVar2 == '\0') goto LAB_0112ad98;
      if (cVar2 != '\x02') goto LAB_0112ad04;
    }
    local_78 = DAT_018da68c + 0x1c;
    local_7c = 0;
    local_80 = 4;
    FUN_016948f0(&local_a0,DAT_018da68c,&local_80);
  }
  else {
LAB_0112ad98:
    local_68 = DAT_018da68c;
    local_78 = 2;
    if (DAT_018dd947 == '\0') {
      local_98 = DAT_018da68c + 0x1c;
      local_9c = 0;
      local_a0 = 4;
      FUN_01694880(&local_80,&local_a0);
    }
    local_a0 = local_80;
    local_9c = local_7c;
    local_98 = local_78;
    iStack_94 = iStack_74;
    local_90 = local_70;
    uStack_8c = uStack_6c;
    iStack_88 = local_68;
    uStack_84 = uStack_64;
  }
  local_c0 = local_a0;
  uStack_bc = local_9c;
  local_b8 = local_98;
  local_b4 = iStack_94;
  local_b0 = local_90;
  uStack_ac = uStack_8c;
  iStack_a8 = iStack_88;
  uStack_a4 = uStack_84;
  if (local_98 != 2) {
    iVar3 = iStack_94;
    if ((local_98 & 1) != 0) {
      iVar3 = iStack_94 + (*(int *)(local_90 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_90 + 0x30))(iVar3,&local_c0);
  }
  bVar1 = true;
LAB_0112ae4c:
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: initial target still not defined when attempting to finalize OpenStandardMiningChannelhandle_unknown_v1event open/protocols/stratum-proxy/src/translation.rs:1446event open/protocols/stratum-proxy/src/translation.rs:1443event open/protocols/stratum-proxy/src/translation.rs:596abort_open_channelevent open/protocols/stratum-proxy/src/translation.rs:610handle_submit_errorhandle_stratum_errorhandle_submit_resultevent open/protocols/stratum-proxy/src/translation.rs:856"
                 ,0x5b,&DAT_018879d8);
  }
  puVar4 = (uint *)((uint)&local_80 | 4);
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar9 = param_2[5];
  uVar8 = param_2[6];
  uVar10 = param_2[7];
  uVar12 = param_2[8];
  uVar14 = param_2[9];
  *puVar4 = param_2[2];
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar9;
  puVar4[4] = uVar8;
  puVar4[5] = uVar10;
  puVar4[6] = uVar12;
  puVar4[7] = uVar14;
  local_80 = 0x14;
  local_5c = 0;
  FUN_0161cae8(&local_a0,&local_80);
  FUN_01134840(&local_80,param_2 + 0x6c,&local_a0);
  uVar7 = 0x11;
  if (local_80 != -0x80000000) {
    local_40 = local_80;
    uStack_3c = local_7c;
    uStack_38 = local_78;
    iStack_34 = iStack_74;
    iStack_30 = local_70;
    uStack_2c = uStack_6c;
    uVar7 = 0xb;
    FUN_011330d8(param_1 + 1);
  }
  *param_1 = uVar7;
  if (bVar1) {
    if (local_b8 != 2) {
      iVar3 = local_b4;
      if ((local_b8 & 1) != 0) {
        iVar3 = local_b4 + (*(int *)(local_b0 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_b0 + 0x34))(iVar3,&local_c0);
    }
    FUN_005c3320(&local_c0);
  }
  return;
}

