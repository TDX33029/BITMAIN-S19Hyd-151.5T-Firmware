// FUN_00ee1828 @ 00ee1828 size=520 calls_out=6 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | ServerControl dropped; cancelling server tasks | lDefaultError | SetGloba

void FUN_00ee1828(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 **local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  char **local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_30;
  int local_2c;
  
  if (2 < DAT_018d9130) goto LAB_00ee19e4;
  uVar2 = (uint)DAT_018daacc;
  if (1 < uVar2 - 1) {
    if (uVar2 == 0) goto LAB_00ee19e4;
    uVar2 = FUN_0169ac90(&DAT_018daac4);
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 0) goto LAB_00ee19e4;
  }
  if (uVar2 != 2) {
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4);
    if (iVar3 == 0) {
LAB_00ee19e4:
      FUN_01662df8(*(undefined4 *)(param_1 + 4));
      return;
    }
  }
  if (*(int *)(DAT_018daac4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c14c);
  }
  local_68 = &local_48;
  local_5c = *(undefined4 *)(DAT_018daac4 + 0x20);
  local_58 = *(undefined4 *)(DAT_018daac4 + 0x24);
  local_54 = *(undefined4 *)(DAT_018daac4 + 0x28);
  local_70 = (undefined4 *)(DAT_018daac4 + 0x1c);
  local_60 = *local_70;
  local_6c = &local_60;
  local_78 = &local_6c;
  local_50 = 0;
  local_3c = 0;
  local_74 = 1;
  local_64 = &DAT_018abb78;
  local_44 = 0x5d;
  local_48 = "ServerControl dropped, cancelling server tasks";
  local_40 = 1;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_30 = (undefined1 *)&local_78;
  local_2c = DAT_018daac4;
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar4,&local_40);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar4,&local_40);
  }
  FUN_01662df8(*(undefined4 *)(param_1 + 4));
  return;
}

