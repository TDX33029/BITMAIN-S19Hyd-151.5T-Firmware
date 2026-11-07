// FUN_0112afb8 @ 0112afb8 size=644 calls_out=7 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError

void FUN_0112afb8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 local_7c;
  undefined4 *local_78;
  code *local_74;
  uint local_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  int local_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [12];
  
  local_7c = param_4;
  if ((2 < DAT_018d9130) && (bVar1 = false, DAT_018dd947 != '\0')) goto LAB_0112b190;
  if ((DAT_018d9130 < 3) && (DAT_018da6e8 != '\0')) {
    if (DAT_018da6e8 == '\x01') {
LAB_0112b048:
      DataMemoryBarrier(0xb);
      puVar5 = &DAT_018ae394;
      pcVar4 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar3 = (**(code **)(puVar5 + 0x14))(pcVar4,DAT_018da6e0);
      if (iVar3 == 0) goto LAB_0112b0dc;
    }
    else if (DAT_018da6e8 != '\x02') {
      cVar2 = FUN_0169ac90(&DAT_018da6e0);
      if (cVar2 == '\0') goto LAB_0112b0dc;
      if (cVar2 != '\x02') goto LAB_0112b048;
    }
    local_50 = DAT_018da6e0 + 0x1c;
    local_54 = 0;
    local_58 = (undefined4 *)0x4;
    FUN_016948f0(&local_78,DAT_018da6e0,&local_58);
  }
  else {
LAB_0112b0dc:
    local_40 = DAT_018da6e0;
    local_50 = 2;
    if (DAT_018dd947 == '\0') {
      local_70 = DAT_018da6e0 + 0x1c;
      local_74 = (code *)0x0;
      local_78 = (undefined4 *)0x4;
      FUN_01694880(&local_58,&local_78);
    }
    local_78 = local_58;
    local_74 = (code *)local_54;
    local_70 = local_50;
    iStack_6c = local_4c;
    local_68 = local_48;
    uStack_64 = uStack_44;
    iStack_60 = local_40;
    uStack_5c = uStack_3c;
  }
  local_58 = local_78;
  local_54 = local_74;
  local_50 = local_70;
  local_4c = iStack_6c;
  local_48 = local_68;
  uStack_44 = uStack_64;
  local_40 = iStack_60;
  uStack_3c = uStack_5c;
  if (local_70 != 2) {
    iVar3 = iStack_6c;
    if ((local_70 & 1) != 0) {
      iVar3 = iStack_6c + (*(int *)(local_68 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_68 + 0x30))(iVar3,&local_58);
  }
  bVar1 = true;
LAB_0112b190:
  local_34 = *param_3;
  local_30 = param_3[1];
  local_78 = &local_7c;
  local_74 = FUN_01136a44;
  FUN_00600d2c(auStack_2c,&DAT_00590271,&local_78);
  FUN_01128834(param_1,param_2,0,&local_34,auStack_2c);
  if (bVar1) {
    if (local_50 != 2) {
      iVar3 = local_4c;
      if ((local_50 & 1) != 0) {
        iVar3 = local_4c + (*(int *)(local_48 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_48 + 0x34))(iVar3,&local_58);
    }
    FUN_005c3320(&local_58);
  }
  return;
}

