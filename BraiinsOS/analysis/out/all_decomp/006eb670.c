// FUN_006eb670 @ 006eb670 size=632 calls_out=7 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_006eb670(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_8c;
  undefined4 **local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined **local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined *local_58;
  int *local_54;
  int local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_30;
  int local_2c;
  
  FUN_0157a2e8((int)*(undefined8 *)(param_2 + 0x58),&local_a8);
  if ((char)local_a8 != '\x06') {
    *param_1 = local_a8;
    param_1[1] = local_a4;
    param_1[2] = uStack_a0;
    param_1[3] = uStack_9c;
    param_1[4] = uStack_98;
    param_1[5] = uStack_94;
    return;
  }
  local_8c = local_a4;
  if ((3 < DAT_018d9130) || (DAT_018d9284 == '\0')) goto LAB_006eb8b8;
  if (DAT_018d9284 == '\x01') {
LAB_006eb714:
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4,DAT_018d927c);
    if (iVar3 == 0) goto LAB_006eb8b8;
  }
  else if (DAT_018d9284 != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018d927c);
    if (cVar2 == '\0') goto LAB_006eb8b8;
    if (cVar2 != '\x02') goto LAB_006eb714;
  }
  local_2c = DAT_018d927c;
  if (*(int *)(DAT_018d927c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018598a4);
  }
  local_48 = &local_8c;
  local_6c = *(undefined4 *)(DAT_018d927c + 0x20);
  local_68 = *(undefined4 *)(DAT_018d927c + 0x24);
  local_64 = *(undefined4 *)(DAT_018d927c + 0x28);
  local_7c = &local_70;
  local_78 = &local_58;
  local_80 = (undefined4 *)(DAT_018d927c + 0x1c);
  local_70 = *local_80;
  local_54 = &local_50;
  local_60 = 0;
  local_74 = &DAT_018abb78;
  local_58 = &DAT_0058cb34;
  local_4c = &DAT_0157d360;
  local_50 = param_2 + 0x40;
  local_88 = &local_7c;
  local_30 = &local_88;
  local_44 = &LAB_0157cb88;
  local_84 = 1;
  local_3c = 0;
  local_40 = 1;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar4,&local_40);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar4,&local_40);
  }
LAB_006eb8b8:
  *(undefined1 *)param_1 = 0;
  FUN_011e1b28(&local_8c);
  return;
}

