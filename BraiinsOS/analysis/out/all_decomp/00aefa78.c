// FUN_00aefa78 @ 00aefa78 size=876 calls_out=9 calls_in=3
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

bool FUN_00aefa78(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  int local_a0 [2];
  byte local_98;
  undefined4 local_94 [6];
  undefined4 **local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined **local_6c;
  undefined *local_68;
  undefined4 local_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *local_50;
  int **local_4c;
  int *local_48;
  code *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_30;
  int local_2c;
  
  puVar15 = (undefined4 *)((uint)local_a0 | 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x6d)) {
  case 0:
    *(undefined1 *)(param_1 + 10) = 0;
    *param_1 = 0x80000000;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_1 + 0x1b);
    param_1[4] = param_1[0x1a] + 0x338;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875cd8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875cd8,&switchD_00aefaa0::switchdataD_00aefaa4,param_2);
  }
  FUN_00b1f9e4(local_a0,param_1);
  iVar2 = local_a0[0];
  if (local_a0[0] == 8) {
    uVar14 = 3;
    goto LAB_00aefdac;
  }
  puVar4 = (undefined4 *)((uint)local_a0 | 4);
  uVar6 = *puVar4;
  uVar8 = puVar4[1];
  uVar10 = puVar4[2];
  uVar7 = puVar4[3];
  uVar9 = puVar4[4];
  uVar11 = puVar4[5];
  uVar12 = puVar4[6];
  FUN_00accc50(param_1);
  uVar14 = 1;
  if (local_a0[0] == 7) goto LAB_00aefdac;
  *puVar15 = uVar6;
  puVar15[1] = uVar8;
  puVar15[2] = uVar10;
  puVar15[3] = uVar7;
  puVar15[4] = uVar9;
  puVar15[5] = uVar11;
  puVar15[6] = uVar12;
  if ((DAT_018d9130 < 4) && (DAT_018d9fa4 != '\0')) {
    pcVar13 = s_SetGloba_00414c05;
    if (DAT_018d9fa4 == '\x01') {
LAB_00aefbc0:
      DataMemoryBarrier(0xb);
      puVar1 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar13 = DAT_018daa74;
        puVar1 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar5 = (**(code **)(puVar1 + 0x14))(pcVar13,DAT_018d9f9c);
      if (iVar5 == 0) goto LAB_00aefd74;
    }
    else if (DAT_018d9fa4 != '\x02') {
      cVar3 = FUN_0169ac90(&DAT_018d9f9c);
      if (cVar3 == '\0') goto LAB_00aefd74;
      if (cVar3 != '\x02') goto LAB_00aefbc0;
    }
    local_2c = DAT_018d9f9c;
    iStack_60 = *(int *)(DAT_018d9f9c + 0x20);
    if (iStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875ce8);
    }
    local_74 = (undefined4 *)(DAT_018d9f9c + 0x1c);
    local_64 = *local_74;
    local_6c = &local_50;
    local_70 = &local_64;
    local_7c = &local_70;
    uStack_5c = *(undefined4 *)(DAT_018d9f9c + 0x24);
    uStack_58 = *(undefined4 *)(DAT_018d9f9c + 0x28);
    uStack_54 = 0;
    local_78 = 1;
    local_68 = &DAT_018abb78;
    local_4c = &local_48;
    local_50 = &DAT_00356011;
    local_44 = FUN_008ec630;
    local_3c = 0;
    local_40 = 1;
    local_30 = &local_7c;
    DataMemoryBarrier(0xb);
    pcVar13 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar13 = DAT_018daa74;
      puVar1 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_48 = local_a0;
    iVar5 = (**(code **)(puVar1 + 0x28))(pcVar13,&local_40);
    if (iVar5 != 0) {
      (**(code **)(puVar1 + 0x2c))(pcVar13,&local_40);
    }
    if (local_a0[0] != 0) goto LAB_00aefd8c;
LAB_00aefd44:
    cVar3 = local_98 - 4;
    if (local_98 < 4) {
      cVar3 = '\x04';
    }
    puVar15 = local_94;
    if ((cVar3 != '\x05') && ((cVar3 != '\x04' || (local_98 != 3)))) goto LAB_00aefdac;
  }
  else {
LAB_00aefd74:
    if (local_a0[0] == 0) goto LAB_00aefd44;
LAB_00aefd8c:
    if (local_a0[0] != 2) goto LAB_00aefdac;
  }
  (*(code *)**(undefined4 **)*puVar15)();
LAB_00aefdac:
  *(undefined1 *)((int)param_1 + 0x6d) = uVar14;
  return iVar2 == 8;
}

