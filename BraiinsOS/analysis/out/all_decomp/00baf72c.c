// FUN_00baf72c @ 00baf72c size=1272 calls_out=5 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

uint FUN_00baf72c(int param_1,ushort param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined *puVar8;
  ushort local_7a;
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
  ushort **local_44;
  ushort *local_40;
  code *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ***local_28;
  int local_24;
  
  puVar4 = (uint *)(*(int *)(param_1 + 0x18) + 8);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x18) + 8);
  do {
    while( true ) {
      local_7a = param_2;
      if ((uVar5 & 0x10000) != 0) goto LAB_00baf9a8;
      uVar7 = *puVar4;
      if (uVar7 == uVar5) break;
      ClearExclusiveLocal();
      uVar5 = uVar7;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar4);
    uVar5 = uVar7;
  } while (!bVar1);
  *puVar4 = param_2 | 0x10000;
  if ((DAT_018d9130 < 3) && (DAT_018d9ad0 != '\0')) {
    if (DAT_018d9ad0 == '\x01') {
LAB_00baf7f0:
      DataMemoryBarrier(0xb);
      puVar8 = &DAT_018ae394;
      pcVar6 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar3 = (**(code **)(puVar8 + 0x14))(pcVar6,DAT_018d9ac8);
      if (iVar3 == 0) goto LAB_00baf9a8;
    }
    else if (DAT_018d9ad0 != '\x02') {
      cVar2 = FUN_0169ac90(&DAT_018d9ac8);
      if (cVar2 == '\0') goto LAB_00baf9a8;
      if (cVar2 != '\x02') goto LAB_00baf7f0;
    }
    local_24 = DAT_018d9ac8;
    if (*(int *)(DAT_018d9ac8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018712e4);
    }
    local_54 = *(undefined4 *)(DAT_018d9ac8 + 0x28);
    local_5c = *(undefined4 *)(DAT_018d9ac8 + 0x20);
    local_58 = *(undefined4 *)(DAT_018d9ac8 + 0x24);
    local_6c = &local_60;
    local_68 = &local_48;
    local_70 = (undefined4 *)(DAT_018d9ac8 + 0x1c);
    local_60 = *local_70;
    local_64 = &DAT_018abb78;
    local_44 = &local_40;
    local_50 = 0;
    local_48 = &DAT_005774ef;
    local_40 = &local_7a;
    local_78 = &local_6c;
    local_28 = &local_78;
    local_3c = FUN_00fac370;
    local_74 = 1;
    local_34 = 0;
    local_38 = 1;
    DataMemoryBarrier(0xb);
    pcVar6 = s_SetGloba_00414c05;
    puVar8 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar8 + 0x28))(pcVar6,&local_38);
    if (iVar3 != 0) {
      (**(code **)(puVar8 + 0x2c))(pcVar6,&local_38);
    }
  }
LAB_00baf9a8:
  puVar4 = (uint *)(*(int *)(param_1 + 0x1c) + 8);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x1c) + 8);
  do {
    while( true ) {
      if ((uVar5 & 0x10000) != 0) {
        return local_7a | 0x10000;
      }
      uVar7 = *puVar4;
      if (uVar7 == uVar5) break;
      ClearExclusiveLocal();
      uVar5 = uVar7;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar4);
    uVar5 = uVar7;
  } while (!bVar1);
  *puVar4 = local_7a | 0x10000;
  if ((DAT_018d9130 < 3) && (DAT_018d9adc != '\0')) {
    if (DAT_018d9adc != '\x01') {
      if (DAT_018d9adc == '\x02') goto LAB_00bafac8;
      cVar2 = FUN_0169ac90(&DAT_018d9ad4);
      if (cVar2 == '\0') goto LAB_00bafbe0;
      if (cVar2 == '\x02') goto LAB_00bafac8;
    }
    DataMemoryBarrier(0xb);
    pcVar6 = s_SetGloba_00414c05;
    puVar8 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar8 + 0x14))(pcVar6,DAT_018d9ad4);
    if (iVar3 != 0) {
LAB_00bafac8:
      if (*(int *)(DAT_018d9ad4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018712f4);
      }
      local_5c = *(undefined4 *)(DAT_018d9ad4 + 0x20);
      local_58 = *(undefined4 *)(DAT_018d9ad4 + 0x24);
      local_54 = *(undefined4 *)(DAT_018d9ad4 + 0x28);
      local_6c = &local_60;
      local_68 = &local_48;
      local_44 = &local_40;
      local_70 = (undefined4 *)(DAT_018d9ad4 + 0x1c);
      local_60 = *local_70;
      local_40 = &local_7a;
      local_78 = &local_6c;
      local_28 = &local_78;
      local_50 = 0;
      local_64 = &DAT_018abb78;
      local_48 = &DAT_0058a097;
      local_3c = FUN_00fac370;
      local_74 = 1;
      local_34 = 0;
      local_38 = 1;
      DataMemoryBarrier(0xb);
      pcVar6 = s_SetGloba_00414c05;
      puVar8 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_24 = DAT_018d9ad4;
      iVar3 = (**(code **)(puVar8 + 0x28))(pcVar6,&local_38);
      if (iVar3 != 0) {
        (**(code **)(puVar8 + 0x2c))(pcVar6,&local_38);
      }
      return (uint)DAT_018dd947;
    }
  }
LAB_00bafbe0:
  return (uint)DAT_018dd947;
}

