// FUN_009259d4 @ 009259d4 size=836 calls_out=7 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_009259d4(int *param_1,uint *param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 **local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined **local_a0;
  undefined *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined *local_80;
  int **ppiStack_7c;
  int *piStack_78;
  code *pcStack_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_30;
  int local_2c;
  
  uVar3 = 0x15;
  if ((int)*param_2 < 0) {
    uVar3 = *param_2 ^ 0x80000000;
  }
  if (uVar3 == 0x10) {
LAB_00925a08:
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 2;
    return;
  }
  if (uVar3 == 0x11) {
    param_2 = (uint *)param_2[1];
  }
  else if (uVar3 == 0x12) goto LAB_00925a08;
  FUN_009160e0(&local_70,param_2);
  if (local_70 == 2) {
    *(undefined1 *)(param_1 + 1) = (undefined1)local_6c;
    *param_1 = 2;
    iVar4 = *param_1;
  }
  else {
    *param_1 = local_70;
    param_1[1] = local_6c;
    param_1[2] = iStack_68;
    param_1[3] = local_64;
    param_1[4] = local_60;
    param_1[5] = iStack_5c;
    param_1[6] = local_58;
    param_1[7] = local_54;
    param_1[8] = local_50;
    param_1[9] = local_4c;
    param_1[10] = local_48;
    param_1[0xb] = iStack_44;
    iVar4 = *param_1;
  }
  if (iVar4 == 2) {
    return;
  }
  local_70 = *param_1;
  local_6c = param_1[1];
  iStack_68 = param_1[2];
  local_64 = param_1[3];
  local_60 = param_1[4];
  iStack_5c = param_1[5];
  local_58 = param_1[6];
  local_54 = param_1[7];
  local_50 = param_1[8];
  local_4c = param_1[9];
  local_48 = param_1[10];
  iStack_44 = param_1[0xb];
  if ((3 < DAT_018d9130) || (DAT_018d97e8 == '\0')) goto LAB_00925c74;
  if (DAT_018d97e8 == '\x01') {
LAB_00925b04:
    DataMemoryBarrier(0xb);
    pcVar5 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar4 = (**(code **)(puVar1 + 0x14))(pcVar5,DAT_018d97e0);
    if (iVar4 == 0) goto LAB_00925c74;
  }
  else if (DAT_018d97e8 != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018d97e0);
    if (cVar2 == '\0') goto LAB_00925c74;
    if (cVar2 != '\x02') goto LAB_00925b04;
  }
  local_2c = DAT_018d97e0;
  if (*(int *)(DAT_018d97e0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867d00);
  }
  local_94 = *(undefined4 *)(DAT_018d97e0 + 0x20);
  local_90 = *(undefined4 *)(DAT_018d97e0 + 0x24);
  local_8c = *(undefined4 *)(DAT_018d97e0 + 0x28);
  local_a4 = &local_98;
  local_a0 = &local_80;
  local_a8 = (undefined4 *)(DAT_018d97e0 + 0x1c);
  local_98 = *local_a8;
  ppiStack_7c = &piStack_78;
  pcStack_74 = FUN_0168c724;
  local_b0 = &local_a4;
  local_88 = 0;
  local_9c = &DAT_018abb78;
  local_80 = &DAT_005713b3;
  local_ac = 1;
  local_3c = 0;
  local_40 = 1;
  DataMemoryBarrier(0xb);
  pcVar5 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  piStack_78 = &local_70;
  local_30 = (undefined1 *)&local_b0;
  iVar4 = (**(code **)(puVar1 + 0x28))(pcVar5,&local_40);
  if (iVar4 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar5,&local_40);
  }
LAB_00925c74:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 2;
  if (local_64 != 0) {
    thunk_FUN_016d3fb4(local_60);
  }
  if ((local_4c & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_48);
  }
  iVar4 = local_54;
  puVar7 = (undefined4 *)(local_54 + 4);
  for (iVar6 = local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (puVar7[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar7);
    }
    puVar7 = puVar7 + 3;
  }
  if (local_58 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(iVar4);
  return;
}

