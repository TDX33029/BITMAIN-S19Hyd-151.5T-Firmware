// FUN_00710c74 @ 00710c74 size=512 calls_out=6 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00710c74(uint param_1,int *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 **local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  int *local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_28;
  int local_24;
  
  if (((2 < param_1) || (2 < DAT_018d9130)) || (DAT_018d932c == '\0')) goto LAB_00710e40;
  if (DAT_018d932c == '\x01') {
LAB_00710cf4:
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4,DAT_018d9324);
    if (iVar3 == 0) goto LAB_00710e40;
  }
  else if (DAT_018d932c != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018d9324);
    if (cVar2 == '\0') goto LAB_00710e40;
    if (cVar2 != '\x02') goto LAB_00710cf4;
  }
  local_24 = DAT_018d9324;
  if (*(int *)(DAT_018d9324 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185cf3c);
  }
  local_68 = &local_5c;
  local_5c = &local_50;
  local_4c = *(undefined4 *)(DAT_018d9324 + 0x20);
  local_48 = *(undefined4 *)(DAT_018d9324 + 0x24);
  local_44 = *(undefined4 *)(DAT_018d9324 + 0x28);
  local_60 = (undefined4 *)(DAT_018d9324 + 0x1c);
  local_50 = *local_60;
  local_40 = 0;
  local_64 = 1;
  local_54 = &DAT_01859e9c;
  local_34 = 0;
  local_38 = 1;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_58 = param_2;
  local_28 = (undefined1 *)&local_68;
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar4,&local_38);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar4,&local_38);
  }
LAB_00710e40:
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(param_2[1]);
  }
  return;
}

