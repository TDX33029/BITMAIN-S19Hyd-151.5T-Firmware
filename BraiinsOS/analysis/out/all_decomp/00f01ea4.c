// FUN_00f01ea4 @ 00f01ea4 size=548 calls_out=6 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00f01ea4(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *local_7c;
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
  undefined4 ***local_44;
  undefined4 **local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ***local_28;
  int local_24;
  
  local_7c = (undefined4 *)FUN_00f2229c();
  if (3 < DAT_018d9130) goto LAB_00f02080;
  uVar2 = (uint)DAT_018da9c4;
  if (1 < uVar2 - 1) {
    if (uVar2 == 0) goto LAB_00f02080;
    uVar2 = FUN_0169ac90(&DAT_018da9bc);
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 0) goto LAB_00f02080;
  }
  if (uVar2 != 2) {
    DataMemoryBarrier(0xb);
    pcVar4 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar4);
    if (iVar3 == 0) goto LAB_00f02080;
  }
  if (*(int *)(DAT_018da9bc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c56c);
  }
  local_5c = *(undefined4 *)(DAT_018da9bc + 0x20);
  local_58 = *(undefined4 *)(DAT_018da9bc + 0x24);
  local_54 = *(undefined4 *)(DAT_018da9bc + 0x28);
  local_6c = &local_60;
  local_68 = &local_48;
  local_44 = &local_40;
  local_70 = (undefined4 *)(DAT_018da9bc + 0x1c);
  local_60 = *local_70;
  local_40 = &local_7c;
  local_78 = &local_6c;
  local_50 = 0;
  local_64 = &DAT_018abb78;
  local_48 = &DAT_00599b00;
  local_3c = &LAB_00604520;
  local_74 = 1;
  local_38 = 1;
  local_28 = &local_78;
  local_34 = 0;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_24 = DAT_018da9bc;
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar4,&local_38);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar4,&local_38);
  }
LAB_00f02080:
  (**(code **)*local_7c)();
  return;
}

