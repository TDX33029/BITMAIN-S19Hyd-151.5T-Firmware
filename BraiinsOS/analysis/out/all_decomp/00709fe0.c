// FUN_00709fe0 @ 00709fe0 size=512 calls_out=6 calls_in=3
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00709fe0(uint param_1,int *param_2)

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
  
  if (((2 < param_1) || (3 < DAT_018d9130)) || (DAT_018d9320 == '\0')) goto LAB_0070a1ac;
  if (DAT_018d9320 == '\x01') {
LAB_0070a060:
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4,DAT_018d9318);
    if (iVar3 == 0) goto LAB_0070a1ac;
  }
  else if (DAT_018d9320 != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018d9318);
    if (cVar2 == '\0') goto LAB_0070a1ac;
    if (cVar2 != '\x02') goto LAB_0070a060;
  }
  local_24 = DAT_018d9318;
  if (*(int *)(DAT_018d9318 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01859ecc);
  }
  local_68 = &local_5c;
  local_5c = &local_50;
  local_4c = *(undefined4 *)(DAT_018d9318 + 0x20);
  local_48 = *(undefined4 *)(DAT_018d9318 + 0x24);
  local_44 = *(undefined4 *)(DAT_018d9318 + 0x28);
  local_60 = (undefined4 *)(DAT_018d9318 + 0x1c);
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
LAB_0070a1ac:
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(param_2[1]);
  }
  return;
}

