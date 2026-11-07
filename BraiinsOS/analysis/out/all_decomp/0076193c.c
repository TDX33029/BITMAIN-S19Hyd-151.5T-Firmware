// FUN_0076193c @ 0076193c size=568 calls_out=7 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_0076193c(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_f0 [116];
  char local_7c;
  undefined4 **local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined **local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined *local_48;
  undefined1 **ppuStack_44;
  undefined1 *puStack_40;
  code *pcStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ***local_28;
  int local_24;
  
  if (*param_1 == -0x7fffffff) {
    return;
  }
  FUN_016dd1aa(auStack_f0,param_1,0x78);
  if (((local_7c != '\0') || (3 < DAT_018d9130)) || (DAT_018da4c0 == '\0')) goto LAB_00761b4c;
  if (DAT_018da4c0 == '\x01') {
LAB_007619dc:
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4,DAT_018da4b8);
    if (iVar3 == 0) goto LAB_00761b4c;
  }
  else if (DAT_018da4c0 != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018da4b8);
    if (cVar2 == '\0') goto LAB_00761b4c;
    if (cVar2 != '\x02') goto LAB_007619dc;
  }
  local_24 = DAT_018da4b8;
  if (*(int *)(DAT_018da4b8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018839e0);
  }
  local_5c = *(undefined4 *)(DAT_018da4b8 + 0x20);
  local_58 = *(undefined4 *)(DAT_018da4b8 + 0x24);
  local_54 = *(undefined4 *)(DAT_018da4b8 + 0x28);
  local_6c = &local_60;
  local_68 = &local_48;
  local_70 = (undefined4 *)(DAT_018da4b8 + 0x1c);
  local_60 = *local_70;
  ppuStack_44 = &puStack_40;
  local_48 = &DAT_00575f18;
  pcStack_3c = FUN_006bcf64;
  local_78 = &local_6c;
  local_28 = &local_78;
  local_50 = 0;
  local_64 = &DAT_018abb78;
  local_74 = 1;
  local_34 = 0;
  local_38 = 1;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  puStack_40 = auStack_f0;
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar4,&local_38);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar4,&local_38);
  }
LAB_00761b4c:
  FUN_00760550(auStack_f0);
  return;
}

