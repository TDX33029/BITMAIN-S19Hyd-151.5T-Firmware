// FUN_00b374c0 @ 00b374c0 size=792 calls_out=8 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined1 FUN_00b374c0(undefined1 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined **local_58;
  undefined *local_54;
  undefined *local_50;
  int **ppiStack_4c;
  int *piStack_48;
  undefined4 *puStack_44;
  undefined4 local_40;
  int local_3c;
  undefined4 **local_30;
  int local_2c;
  
  local_3c = *(int *)(param_3 + 0x38c);
  puVar5 = (undefined4 *)(*(int *)(param_2 + 0x3bc) + -4);
  iVar6 = *(int *)(param_2 + 0x3c0) << 2;
  while (iVar6 != 0) {
    puVar5 = puVar5 + 1;
    piVar9 = (int *)*puVar5;
    iVar6 = iVar6 + -4;
    if (piVar9[0xe3] == local_3c) {
      do {
        iVar6 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar6 + 1;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb377d4);
        (*pcVar1)();
      }
      piVar9 = (int *)*puVar5;
      local_5c = (undefined4 *)CONCAT13(local_5c._3_1_,(int3)piVar9[0xd4]);
      uVar8 = *(undefined4 *)((int)piVar9 + 0x353);
      FUN_016dd1aa(&local_88,(int)piVar9 + 0x357,0x19);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(piVar9);
      }
      *(undefined2 *)(param_1 + 1) = (undefined2)local_5c;
      param_1[3] = local_5c._2_1_;
      *(undefined4 *)(param_1 + 4) = uVar8;
      FUN_016dd1aa(param_1 + 8,&local_88,0x19);
      *param_1 = 1;
      return 1;
    }
  }
  local_40 = 6;
  puVar5 = (undefined4 *)FUN_008e9748(&local_40);
  puVar5 = (undefined4 *)*puVar5;
  *param_1 = 0;
  (*(code *)*puVar5)();
  if ((DAT_018d9130 < 4) && (DAT_018d9a4c != '\0')) {
    if (DAT_018d9a4c != '\x01') {
      if (DAT_018d9a4c == '\x02') goto LAB_00b37698;
      cVar4 = FUN_0169ac90(&DAT_018d9a44);
      if (cVar4 == '\0') {
        return DAT_018dd947;
      }
      if (cVar4 == '\x02') goto LAB_00b37698;
    }
    DataMemoryBarrier(0xb);
    pcVar7 = s_SetGloba_00414c05;
    puVar3 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar6 = (**(code **)(puVar3 + 0x14))(pcVar7,DAT_018d9a44);
    if (iVar6 != 0) {
LAB_00b37698:
      local_2c = DAT_018d9a44;
      if (*(int *)(DAT_018d9a44 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018700e0);
      }
      local_84 = *(undefined4 *)(DAT_018d9a44 + 0x20);
      local_80 = *(undefined4 *)(DAT_018d9a44 + 0x24);
      local_7c = *(undefined4 *)(DAT_018d9a44 + 0x28);
      local_58 = &local_50;
      local_60 = (undefined4 *)(DAT_018d9a44 + 0x1c);
      local_88 = *local_60;
      ppiStack_4c = &piStack_48;
      local_50 = &DAT_00578ca0;
      puStack_44 = &DAT_00f5c97c;
      local_68 = &local_5c;
      local_30 = &local_68;
      local_78 = 0;
      local_54 = &DAT_018abb78;
      local_64 = 1;
      local_3c = 0;
      local_40 = 1;
      DataMemoryBarrier(0xb);
      pcVar7 = s_SetGloba_00414c05;
      puVar3 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_5c = &local_88;
      piStack_48 = (int *)(param_3 + 0x38c);
      iVar6 = (**(code **)(puVar3 + 0x28))(pcVar7,&local_40);
      if (iVar6 != 0) {
        (**(code **)(puVar3 + 0x2c))(pcVar7,&local_40);
      }
      return DAT_018dd947;
    }
  }
  return DAT_018dd947;
}

