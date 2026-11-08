// FUN_0112fc94 @ 0112fc94 size=576 calls_out=5 calls_in=0
// strings: SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_0112fc94(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
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
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_30;
  int local_2c;
  
  *(undefined1 *)(param_2 + 0x203) = 0;
  if ((DAT_018d9130 < 5) && (DAT_018da7f0 != '\0')) {
    if (DAT_018da7f0 != '\x01') {
      if (DAT_018da7f0 == '\x02') goto LAB_0112fd84;
      cVar2 = FUN_0169ac90(&DAT_018da7e8);
      if (cVar2 == '\0') goto LAB_0112fea0;
      if (cVar2 == '\x02') goto LAB_0112fd84;
    }
    DataMemoryBarrier(0xb);
    pcVar3 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar3 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar3 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar4 = (**(code **)(puVar1 + 0x14))(pcVar3,DAT_018da7e8);
    if (iVar4 != 0) {
LAB_0112fd84:
      local_2c = DAT_018da7e8;
      if (*(int *)(DAT_018da7e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01888234);
      }
      local_64 = *(undefined4 *)(DAT_018da7e8 + 0x20);
      local_60 = *(undefined4 *)(DAT_018da7e8 + 0x24);
      local_5c = *(undefined4 *)(DAT_018da7e8 + 0x28);
      local_74 = &local_68;
      local_70 = &local_50;
      local_78 = (undefined4 *)(DAT_018da7e8 + 0x1c);
      local_68 = *local_78;
      local_4c = &local_48;
      local_80 = &local_74;
      local_58 = 0;
      local_6c = &DAT_018abb78;
      local_50 = &DAT_00573f8b;
      local_44 = &DAT_006043a8;
      local_7c = 1;
      local_3c = 0;
      local_40 = 1;
      DataMemoryBarrier(0xb);
      pcVar3 = s_SetGloba_00414c05;
      puVar1 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar3 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar3 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_48 = param_4;
      local_30 = (undefined1 *)&local_80;
      iVar4 = (**(code **)(puVar1 + 0x28))(pcVar3,&local_40);
      if (iVar4 != 0) {
        (**(code **)(puVar1 + 0x2c))(pcVar3,&local_40);
      }
      *param_1 = 0x11;
      return;
    }
  }
LAB_0112fea0:
  *param_1 = 0x11;
  return;
}

