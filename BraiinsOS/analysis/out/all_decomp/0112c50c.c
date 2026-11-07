// FUN_0112c50c @ 0112c50c size=652 calls_out=10 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | Cannot negotiate upstream V1 version maskBUG: incorrect error message

void FUN_0112c50c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined4 local_68;
  int local_64;
  uint local_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_2c;
  undefined8 local_24;
  undefined4 uStack_1c;
  
  if ((2 < DAT_018d9130) && (bVar1 = false, DAT_018dd947 != '\0')) goto LAB_0112c6dc;
  if ((DAT_018d9130 < 3) && (DAT_018da760 != '\0')) {
    if (DAT_018da760 == '\x01') {
LAB_0112c594:
      DataMemoryBarrier(0xb);
      puVar4 = &DAT_018ae394;
      pcVar5 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar3 = (**(code **)(puVar4 + 0x14))(pcVar5,DAT_018da758);
      if (iVar3 == 0) goto LAB_0112c628;
    }
    else if (DAT_018da760 != '\x02') {
      cVar2 = FUN_0169ac90(&DAT_018da758);
      if (cVar2 == '\0') goto LAB_0112c628;
      if (cVar2 != '\x02') goto LAB_0112c594;
    }
    local_40 = DAT_018da758 + 0x1c;
    local_44 = 0;
    local_48 = 4;
    FUN_016948f0(&local_68,DAT_018da758,&local_48);
  }
  else {
LAB_0112c628:
    local_30 = DAT_018da758;
    local_40 = 2;
    if (DAT_018dd947 == '\0') {
      local_60 = DAT_018da758 + 0x1c;
      local_64 = 0;
      local_68 = 4;
      FUN_01694880(&local_48,&local_68);
    }
    local_68 = local_48;
    local_64 = local_44;
    local_60 = local_40;
    iStack_5c = local_3c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    iStack_50 = local_30;
    uStack_4c = uStack_2c;
  }
  local_48 = local_68;
  local_44 = local_64;
  local_40 = local_60;
  local_3c = iStack_5c;
  local_38 = local_58;
  uStack_34 = uStack_54;
  local_30 = iStack_50;
  uStack_2c = uStack_4c;
  if (local_60 != 2) {
    iVar3 = iStack_5c;
    if ((local_60 & 1) != 0) {
      iVar3 = iStack_5c + (*(int *)(local_58 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_58 + 0x30))(iVar3,&local_48);
  }
  bVar1 = true;
LAB_0112c6dc:
  iVar3 = thunk_FUN_016d4a50(0x29);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x29);
  }
  local_68 = 0x29;
  local_64 = iVar3;
  FUN_016dd1aa(iVar3,"Cannot negotiate upstream V1 version maskBUG: incorrect error message",0x29);
  local_60 = 0x29;
  local_24 = FUN_01139000(&local_68);
  uStack_1c = 0;
  FUN_0112c7fc(param_1,param_2,&local_24);
  if (bVar1) {
    if (local_40 != 2) {
      iVar3 = local_3c;
      if ((local_40 & 1) != 0) {
        iVar3 = local_3c + (*(int *)(local_38 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_38 + 0x34))(iVar3,&local_48);
    }
    FUN_005c3320(&local_48);
  }
  return;
}

