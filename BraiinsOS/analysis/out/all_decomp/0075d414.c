// FUN_0075d414 @ 0075d414 size=752 calls_out=5 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | event open/bosminer/bosminer/src/client/stratum_v2.rs:1039event open/bosminer/bosminer/src/client/stratum_v2.rs:968event open/bosminer/bosminer/src/client.rs:818open/bosminer/bosminer/src/client.rsevent open/bosminer/bosminer/src/client.rs:832event open/bosminer/bosminer/src/client.rs:1190event open/bosminer/bosminer/src/client.rs:1200 | SetGloba | lDefaultError

undefined1 FUN_0075d414(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined4 unaff_lr;
  undefined4 local_ac;
  undefined4 **local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined **local_94;
  undefined *local_90;
  undefined4 *local_8c;
  undefined4 **local_88;
  undefined *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined *local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_30;
  int local_2c;
  
  uVar4 = *(uint *)(param_1 + 8);
  puVar3 = param_3;
  if (uVar4 != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((uVar4 & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    unaff_lr = 0x75d460;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar2,param_1);
    puVar3 = extraout_r2;
  }
  if ((3 < DAT_018d9130) || (DAT_018d9368 == '\0')) goto LAB_0075d6bc;
  puVar5 = &DAT_018ae394;
  pcVar6 = s_SetGloba_00414c05;
  if (DAT_018d9368 == '\x01') {
LAB_0075d4d0:
    DataMemoryBarrier(0xb);
    if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    unaff_lr = 0x75d520;
    iVar2 = (**(code **)(puVar5 + 0x14))(pcVar6,DAT_018d9360);
    puVar3 = extraout_r2_01;
    if (iVar2 == 0) goto LAB_0075d6bc;
  }
  else if (DAT_018d9368 != '\x02') {
    unaff_lr = 0x75d4bc;
    cVar1 = FUN_0169ac90(&DAT_018d9360,DAT_018dd947);
    if (cVar1 == '\0') goto LAB_0075d6bc;
    puVar3 = extraout_r2_00;
    if (cVar1 != '\x02') goto LAB_0075d4d0;
  }
  local_2c = DAT_018d9360;
  local_54 = *(uint *)(DAT_018d9360 + 0x20);
  local_4c = param_3;
  if (local_54 != 0) {
    puVar3 = (undefined4 *)(DAT_018d9360 + 0x1c);
    local_ac = *puVar3;
    local_80 = *puVar3;
    local_7c = *(undefined4 *)(DAT_018d9360 + 0x20);
    local_78 = *(undefined4 *)(DAT_018d9360 + 0x24);
    local_74 = *(undefined4 *)(DAT_018d9360 + 0x28);
    local_64 = &local_60;
    local_70 = 0;
    unaff_lr = *(undefined4 *)(DAT_018d9360 + 0x24);
    local_4c = *(undefined4 **)(DAT_018d9360 + 0x28);
    local_68 = &DAT_00590e71;
    local_5c = &DAT_0157d360;
    local_60 = param_2;
  }
  if (local_54 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185ba0c);
  }
  local_88 = &local_44;
  local_8c = &local_58;
  local_94 = &local_68;
  local_98 = &local_80;
  local_58 = local_ac;
  local_a4 = &local_98;
  local_a0 = 2;
  local_30 = &local_a4;
  local_48 = 1;
  local_84 = &DAT_0185b9fc;
  local_90 = &DAT_018abb78;
  local_3c = 0;
  local_40 = 1;
  DataMemoryBarrier(0xb);
  pcVar6 = s_SetGloba_00414c05;
  puVar5 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_9c = puVar3;
  local_50 = unaff_lr;
  local_44 = param_3;
  iVar2 = (**(code **)(puVar5 + 0x28))(pcVar6,&local_40);
  if (iVar2 != 0) {
    (**(code **)(puVar5 + 0x2c))(pcVar6,&local_40);
  }
LAB_0075d6bc:
  if (uVar4 != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 8) == 1) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar2,param_1);
  }
  return DAT_018dd947;
}

