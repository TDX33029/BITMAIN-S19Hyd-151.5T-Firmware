// FUN_00715270 @ 00715270 size=776 calls_out=8 calls_in=1
// strings: /etc/bosminer_pausedevent open/bosminer/bosminer/src/paused.rs:55 | SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba

void FUN_00715270(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint local_90;
  undefined4 *local_8c;
  uint local_88;
  undefined4 *local_84;
  undefined4 **local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined **local_70;
  undefined *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined *local_50;
  undefined **local_4c;
  undefined *local_48;
  undefined4 *local_44;
  uint *local_40;
  code *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 ***local_28;
  int local_24;
  
  local_34 = 0x1b6;
  local_38 = 0;
  local_30 = 0x1000100;
  local_2c = 1;
  FUN_015ec1bc(&local_90,&local_38,
               "/etc/bosminer_pausedevent open/bosminer/bosminer/src/paused.rs:55",0x14);
  if ((char)local_90 == '\x04') {
    FUN_016dffb2(local_8c);
    return;
  }
  local_84 = local_8c;
  local_88 = local_90;
  if ((DAT_018d9130 < 4) && (DAT_018d92cc != '\0')) {
    if (DAT_018d92cc == '\x01') {
LAB_0071535c:
      DataMemoryBarrier(0xb);
      pcVar6 = s_SetGloba_00414c05;
      puVar1 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar6 = DAT_018daa74;
        puVar1 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar4 = (**(code **)(puVar1 + 0x14))(pcVar6,DAT_018d92c4);
      if (iVar4 == 0) goto LAB_00715500;
    }
    else if (DAT_018d92cc != '\x02') {
      cVar3 = FUN_0169ac90(&DAT_018d92c4);
      if (cVar3 == '\0') goto LAB_00715500;
      if (cVar3 != '\x02') goto LAB_0071535c;
    }
    local_24 = DAT_018d92c4;
    if (*(int *)(DAT_018d92c4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185a21c);
    }
    local_64 = *(undefined4 *)(DAT_018d92c4 + 0x20);
    local_60 = *(undefined4 *)(DAT_018d92c4 + 0x24);
    local_5c = *(undefined4 *)(DAT_018d92c4 + 0x28);
    local_4c = &local_48;
    local_74 = &local_68;
    local_70 = &local_50;
    local_78 = (undefined4 *)(DAT_018d92c4 + 0x1c);
    local_68 = *local_78;
    local_6c = &DAT_018abb78;
    local_40 = &local_88;
    local_58 = 0;
    local_50 = &DAT_0058dedf;
    local_44 = &DAT_0157d360;
    local_80 = &local_74;
    local_28 = &local_80;
    local_3c = FUN_015ef5b4;
    local_48 = &DAT_0185a22c;
    local_7c = 1;
    local_34 = 0;
    local_38 = 1;
    DataMemoryBarrier(0xb);
    pcVar6 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar6 = DAT_018daa74;
      puVar1 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar4 = (**(code **)(puVar1 + 0x28))(pcVar6,&local_38);
    if (iVar4 != 0) {
      (**(code **)(puVar1 + 0x2c))(pcVar6,&local_38);
    }
    puVar2 = local_84;
  }
  else {
LAB_00715500:
    puVar2 = local_84;
  }
  local_84 = puVar2;
  if ((char)local_88 == '\x03') {
    uVar7 = *puVar2;
    puVar8 = (undefined4 *)puVar2[1];
    pcVar5 = (code *)*puVar8;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar7);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
    thunk_FUN_016d3fb4(puVar2);
  }
  if ((local_90 & 0xff) == 4) {
    FUN_016dffb2(local_8c);
    return;
  }
  return;
}

