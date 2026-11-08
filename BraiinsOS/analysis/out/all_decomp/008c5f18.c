// FUN_008c5f18 @ 008c5f18 size=604 calls_out=5 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_008c5f18(int *param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
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
  int *local_4c;
  int local_48;
  code *pcStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_28;
  int local_24;
  
  if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_003458dc,0x35,&DAT_018644d8);
  }
  if ((2 < DAT_018d9130) || (DAT_018d9578 == '\0')) goto LAB_008c6124;
  if (DAT_018d9578 == '\x01') {
LAB_008c5fa0:
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4,DAT_018d9570);
    if (iVar3 == 0) goto LAB_008c6124;
  }
  else if (DAT_018d9578 != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018d9570);
    if (cVar2 == '\0') goto LAB_008c6124;
    if (cVar2 != '\x02') goto LAB_008c5fa0;
  }
  local_24 = DAT_018d9570;
  if (*(int *)(DAT_018d9570 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018644e8);
  }
  local_64 = *(undefined4 *)(DAT_018d9570 + 0x20);
  local_60 = *(undefined4 *)(DAT_018d9570 + 0x24);
  local_5c = *(undefined4 *)(DAT_018d9570 + 0x28);
  local_74 = &local_68;
  local_70 = &local_50;
  local_78 = (undefined4 *)(DAT_018d9570 + 0x1c);
  local_68 = *local_78;
  local_4c = &local_48;
  local_6c = &DAT_018abb78;
  local_58 = 0;
  local_50 = &DAT_00575876;
  pcStack_44 = FUN_008c61b4;
  puStack_3c = &LAB_00fac484;
  local_48 = param_2 + 4;
  local_80 = &local_74;
  local_7c = 1;
  local_34 = 0;
  local_38 = 1;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  iStack_40 = param_2;
  local_28 = (undefined1 *)&local_80;
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar4,&local_38);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar4,&local_38);
  }
LAB_008c6124:
  *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) & 0xffffffc0 | (uint)*(byte *)(param_2 + 4);
  return;
}

