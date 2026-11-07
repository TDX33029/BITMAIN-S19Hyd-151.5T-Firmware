// FUN_008f4a90 @ 008f4a90 size=728 calls_out=5 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_008f4a90(int *param_1,int *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_a8 [2];
  byte local_a0;
  int local_9c [5];
  undefined1 auStack_88 [8];
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
  undefined1 **local_4c;
  undefined1 *local_48;
  undefined1 *puStack_44;
  int *piStack_40;
  code *pcStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ***local_28;
  int local_24;
  
  local_a8[0] = *param_1;
  iVar3 = param_1[1];
  iVar5 = param_1[2];
  iVar9 = param_1[3];
  iVar15 = param_1[4];
  iVar4 = param_1[5];
  iVar6 = param_1[6];
  iVar10 = param_1[7];
  iVar13 = param_1[8];
  iVar16 = param_1[9];
  iVar7 = param_2[1];
  iVar11 = param_2[2];
  iVar14 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar7;
  param_1[2] = iVar11;
  param_1[3] = iVar14;
  iVar7 = param_2[5];
  iVar11 = param_2[6];
  iVar14 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar7;
  param_1[6] = iVar11;
  param_1[7] = iVar14;
  *(char *)(param_1 + 8) = (char)param_1[0xe];
  if (local_a8[0] == 7) {
    return;
  }
  piVar12 = (int *)((uint)local_a8 | 4);
  *piVar12 = iVar3;
  piVar12[1] = iVar5;
  piVar12[2] = iVar9;
  piVar12[3] = iVar15;
  piVar12[4] = iVar4;
  piVar12[5] = iVar6;
  piVar12[6] = iVar10;
  piVar12[7] = iVar13;
  piVar12[8] = iVar16;
  if ((3 < DAT_018d9130) || (DAT_018d9710 == '\0')) goto joined_r0x008f4d2c;
  if (DAT_018d9710 == '\x01') {
LAB_008f4b68:
    DataMemoryBarrier(0xb);
    pcVar8 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar8 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar8 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar3 = (**(code **)(puVar1 + 0x14))(pcVar8,DAT_018d9708);
    if (iVar3 == 0) goto joined_r0x008f4d2c;
  }
  else if (DAT_018d9710 != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018d9708);
    if (cVar2 == '\0') goto joined_r0x008f4d2c;
    if (cVar2 != '\x02') goto LAB_008f4b68;
  }
  local_24 = DAT_018d9708;
  if (*(int *)(DAT_018d9708 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01866ebc);
  }
  local_64 = *(undefined4 *)(DAT_018d9708 + 0x20);
  local_60 = *(undefined4 *)(DAT_018d9708 + 0x24);
  local_5c = *(undefined4 *)(DAT_018d9708 + 0x28);
  local_74 = &local_68;
  local_70 = &local_50;
  local_78 = (undefined4 *)(DAT_018d9708 + 0x1c);
  local_68 = *local_78;
  local_4c = &local_48;
  local_50 = &DAT_0034796c;
  local_58 = 0;
  local_6c = &DAT_018abb78;
  puStack_44 = &LAB_008f4e10;
  pcStack_3c = FUN_008ec630;
  local_48 = auStack_88;
  local_28 = &local_80;
  local_80 = &local_74;
  local_7c = 1;
  local_34 = 0;
  local_38 = 1;
  DataMemoryBarrier(0xb);
  pcVar8 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar8 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar8 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  piStack_40 = local_a8;
  iVar3 = (**(code **)(puVar1 + 0x28))(pcVar8,&local_38);
  if (iVar3 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar8,&local_38);
  }
joined_r0x008f4d2c:
  if (local_a8[0] == 0) {
    piVar12 = local_9c;
    cVar2 = local_a0 - 4;
    if (local_a0 < 4) {
      cVar2 = '\x04';
    }
    if ((cVar2 != '\x05') && (cVar2 != '\x04' || local_a0 != 3)) {
      return;
    }
  }
  else if (local_a8[0] != 2) {
    return;
  }
  (*(code *)**(undefined4 **)*piVar12)();
  return;
}

