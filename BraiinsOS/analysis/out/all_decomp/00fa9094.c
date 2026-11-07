// FUN_00fa9094 @ 00fa9094 size=528 calls_out=6 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00fa9094(int param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_30;
  int local_2c;
  
  if ((DAT_018d9130 < 3) && (DAT_018da3d0 != '\0')) {
    if (DAT_018da3d0 != '\x01') {
      if (DAT_018da3d0 == '\x02') goto LAB_00fa9164;
      cVar2 = FUN_0169ac90(&DAT_018da3c8);
      if (cVar2 == '\0') goto LAB_00fa9270;
      if (cVar2 == '\x02') goto LAB_00fa9164;
    }
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4,DAT_018da3c8);
    if (iVar3 != 0) {
LAB_00fa9164:
      local_2c = DAT_018da3c8;
      if (*(int *)(DAT_018da3c8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01880bc4);
      }
      local_68 = &local_48;
      local_5c = *(undefined4 *)(DAT_018da3c8 + 0x20);
      local_58 = *(undefined4 *)(DAT_018da3c8 + 0x24);
      local_54 = *(undefined4 *)(DAT_018da3c8 + 0x28);
      local_70 = (undefined4 *)(DAT_018da3c8 + 0x1c);
      local_60 = *local_70;
      local_6c = &local_60;
      local_78 = &local_6c;
      local_50 = 0;
      local_74 = 1;
      local_64 = &DAT_018abb78;
      local_44 = 0x81;
      local_48 = &DAT_0035e4f1;
      local_3c = 0;
      local_40 = 1;
      DataMemoryBarrier(0xb);
      pcVar4 = s_SetGloba_00414c05;
      puVar1 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_30 = (undefined1 *)&local_78;
      iVar3 = (**(code **)(puVar1 + 0x28))(pcVar4,&local_40);
      if (iVar3 != 0) {
        (**(code **)(puVar1 + 0x2c))(pcVar4,&local_40);
      }
      FUN_01662df8(*(undefined4 *)(param_1 + 4));
      return;
    }
  }
LAB_00fa9270:
  FUN_01662df8(*(undefined4 *)(param_1 + 4));
  return;
}

