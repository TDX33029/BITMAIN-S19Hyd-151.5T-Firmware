// FUN_00ac35e4 @ 00ac35e4 size=1456 calls_out=5 calls_in=1
// strings: SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError | SetGloba

uint FUN_00ac35e4(uint param_1,ushort param_2,ushort param_3)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ushort local_98;
  ushort local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined4 **local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined **local_80;
  undefined *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined *local_60;
  int *local_5c;
  int local_58;
  undefined4 *local_54;
  undefined2 *local_50;
  code *local_4c;
  ushort *local_48;
  code *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_30;
  int local_2c;
  
  uVar8 = *(uint *)(*(int *)(param_1 + 0x40) + 8);
  local_94 = (undefined2)uVar8;
  local_98 = param_2;
  local_96 = param_3;
  if ((uint)param_2 != (uVar8 & 0xffff)) {
    puVar5 = (uint *)(*(int *)(param_1 + 0x40) + 8);
    uVar8 = *puVar5;
    do {
      while( true ) {
        if ((uVar8 & 0x10000) != 0) goto LAB_00ac38a0;
        uVar7 = *puVar5;
        if (uVar7 == uVar8) break;
        ClearExclusiveLocal();
        uVar8 = uVar7;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar5);
      uVar8 = uVar7;
    } while (!bVar1);
    *puVar5 = (uint)param_2;
    if ((DAT_018d9130 < 3) && (DAT_018d9980 != '\0')) {
      if (DAT_018d9980 == '\x01') {
LAB_00ac36e4:
        DataMemoryBarrier(0xb);
        pcVar6 = s_SetGloba_00414c05;
        puVar2 = &DAT_018ae394;
        if (DAT_018dd984 == 2) {
          pcVar6 = DAT_018daa74;
          puVar2 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar4 = (**(code **)(puVar2 + 0x14))(pcVar6,DAT_018d9978);
        if (iVar4 == 0) goto LAB_00ac38a0;
      }
      else if (DAT_018d9980 != '\x02') {
        cVar3 = FUN_0169ac90(&DAT_018d9978);
        if (cVar3 == '\0') goto LAB_00ac38a0;
        if (cVar3 != '\x02') goto LAB_00ac36e4;
      }
      local_2c = DAT_018d9978;
      if (*(int *)(DAT_018d9978 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186ef9c);
      }
      local_74 = *(undefined4 *)(DAT_018d9978 + 0x20);
      local_70 = *(undefined4 *)(DAT_018d9978 + 0x24);
      local_6c = *(undefined4 *)(DAT_018d9978 + 0x28);
      local_88 = (undefined4 *)(DAT_018d9978 + 0x1c);
      local_78 = *local_88;
      local_5c = &local_58;
      local_68 = 0;
      local_50 = &local_94;
      local_58 = param_1 + 0x50;
      local_80 = &local_60;
      local_84 = &local_78;
      local_90 = &local_84;
      local_30 = &local_90;
      local_60 = &DAT_005829f4;
      local_44 = FUN_00fac370;
      local_4c = FUN_00fac370;
      local_54 = &DAT_006043a8;
      local_7c = &DAT_018abb78;
      local_8c = 1;
      local_3c = 0;
      local_40 = 1;
      DataMemoryBarrier(0xb);
      pcVar6 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar6 = DAT_018daa74;
        puVar2 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      local_48 = &local_98;
      iVar4 = (**(code **)(puVar2 + 0x28))(pcVar6,&local_40);
      if (iVar4 != 0) {
        (**(code **)(puVar2 + 0x2c))(pcVar6,&local_40);
      }
    }
  }
LAB_00ac38a0:
  uVar8 = *(uint *)(*(int *)(param_1 + 0x44) + 8);
  local_92 = (undefined2)uVar8;
  if ((uint)param_3 == (uVar8 & 0xffff)) {
    return param_1;
  }
  puVar5 = (uint *)(*(int *)(param_1 + 0x44) + 8);
  uVar8 = *puVar5;
  do {
    while( true ) {
      if ((uVar8 & 0x10000) != 0) {
        return param_1;
      }
      uVar7 = *puVar5;
      if (uVar7 == uVar8) break;
      ClearExclusiveLocal();
      uVar8 = uVar7;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar5);
    uVar8 = uVar7;
  } while (!bVar1);
  *puVar5 = (uint)param_3;
  if ((DAT_018d9130 < 3) && (DAT_018d998c != '\0')) {
    if (DAT_018d998c != '\x01') {
      if (DAT_018d998c == '\x02') goto LAB_00ac39fc;
      cVar3 = FUN_0169ac90(&DAT_018d9984);
      if (cVar3 == '\0') goto LAB_00ac3b50;
      if (cVar3 == '\x02') goto LAB_00ac39fc;
    }
    DataMemoryBarrier(0xb);
    pcVar6 = s_SetGloba_00414c05;
    puVar2 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar6 = DAT_018daa74;
      puVar2 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar4 = (**(code **)(puVar2 + 0x14))(pcVar6,DAT_018d9984);
    if (iVar4 != 0) {
LAB_00ac39fc:
      if (*(int *)(DAT_018d9984 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186efac);
      }
      local_58 = param_1 + 0x50;
      local_74 = *(undefined4 *)(DAT_018d9984 + 0x20);
      local_70 = *(undefined4 *)(DAT_018d9984 + 0x24);
      local_6c = *(undefined4 *)(DAT_018d9984 + 0x28);
      local_88 = (undefined4 *)(DAT_018d9984 + 0x1c);
      local_78 = *local_88;
      local_5c = &local_58;
      local_48 = &local_96;
      local_68 = 0;
      local_60 = &DAT_0057c731;
      local_44 = FUN_00fac370;
      local_4c = FUN_00fac370;
      local_50 = &local_92;
      local_54 = &DAT_006043a8;
      local_80 = &local_60;
      local_84 = &local_78;
      local_90 = &local_84;
      local_7c = &DAT_018abb78;
      local_8c = 1;
      local_40 = 1;
      local_30 = &local_90;
      local_3c = 0;
      DataMemoryBarrier(0xb);
      pcVar6 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar6 = DAT_018daa74;
        puVar2 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      local_2c = DAT_018d9984;
      iVar4 = (**(code **)(puVar2 + 0x28))(pcVar6,&local_40);
      if (iVar4 != 0) {
        (**(code **)(puVar2 + 0x2c))(pcVar6,&local_40);
      }
      return (uint)DAT_018dd947;
    }
  }
LAB_00ac3b50:
  return (uint)DAT_018dd947;
}

