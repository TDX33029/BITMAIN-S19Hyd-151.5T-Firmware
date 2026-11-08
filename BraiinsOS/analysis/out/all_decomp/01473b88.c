// FUN_01473b88 @ 01473b88 size=988 calls_out=8 calls_in=4
// strings: 

void FUN_01473b88(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined4 **local_130;
  undefined4 uStack_12c;
  uint local_128;
  int local_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int **local_10c;
  undefined4 local_108;
  undefined4 *local_104;
  undefined4 **local_100;
  int **local_fc;
  undefined *local_f8;
  int *local_f4;
  uint local_f0;
  int local_ec;
  int ***local_e8;
  code *local_e4;
  uint local_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  
  local_d0 = DAT_018d8a54;
  local_e0 = 2;
  if (DAT_018dd947 == '\0') {
    if (*(int *)(DAT_018d8a54 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a48c4);
    }
    local_104 = (undefined4 *)(DAT_018d8a54 + 0x1c);
    local_130 = (undefined4 **)*local_104;
    uStack_12c = *(undefined4 *)(DAT_018d8a54 + 0x20);
    local_128 = *(undefined4 *)(DAT_018d8a54 + 0x24);
    local_124 = *(undefined4 *)(DAT_018d8a54 + 0x28);
    local_120 = 0;
    local_f0 = param_4[1];
    local_ec = param_4[2];
    if (((*(uint *)(*param_4 + 0x38) <= local_f0) ||
        (local_f4 = (int *)(*(int *)(*param_4 + 0x34) + local_f0 * 0xf8),
        *local_f4 == 3 && local_f4[1] == 0)) || (local_f4 = local_f4 + 0x35, *local_f4 != local_ec))
    {
      local_100 = (undefined4 **)&local_ec;
      local_fc = (int **)FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_100,&DAT_01882550);
    }
    local_fc = &local_f4;
    local_100 = &local_130;
    local_10c = (int **)&local_100;
    local_108 = 1;
    local_f8 = &DAT_018a6a14;
    FUN_01694880(&local_e8,&local_10c);
  }
  local_130 = local_e8;
  uStack_12c = local_e4;
  local_128 = local_e0;
  local_124 = iStack_dc;
  local_120 = local_d8;
  uStack_11c = uStack_d4;
  iStack_118 = local_d0;
  uStack_114 = uStack_cc;
  if (local_e0 != 2) {
    if ((local_e0 & 1) != 0) {
      iStack_dc = iStack_dc + (*(int *)(local_d8 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_d8 + 0x30))(iStack_dc,&local_130);
  }
  iVar5 = *param_4;
  piVar6 = (int *)param_4[1];
  ppiVar4 = (int **)param_4[2];
  local_100 = (undefined4 **)piVar6;
  local_fc = ppiVar4;
  if (((*(int **)(iVar5 + 0x38) <= piVar6) ||
      (piVar3 = (int *)(*(int *)(iVar5 + 0x34) + (int)piVar6 * 0xf8), *piVar3 == 3 && piVar3[1] == 0
      )) || ((int **)piVar3[0x35] != ppiVar4)) {
    local_e4 = FUN_0101a4ac;
    local_e8 = &local_fc;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882560);
  }
  FUN_016dd1aa(&local_e0,param_2,0xb8);
  local_e8 = (int ***)0x0;
  iVar2 = *(int *)(param_3 + 0x10);
  FUN_014ab840(param_3,iVar2,&local_e8);
  if (piVar3[0x1b] == 1) {
    if ((*(uint *)(param_3 + 8) <= (uint)piVar3[0x1d]) ||
       (piVar1 = (int *)(*(int *)(param_3 + 4) + piVar3[0x1d] * 0xc0), *piVar1 == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_00412edc,0xb,&DAT_018a58ec);
    }
    *piVar1 = 1;
    piVar1[1] = iVar2;
  }
  else {
    piVar3[0x1c] = iVar2;
    piVar3[0x1b] = 1;
  }
  piVar3[0x1d] = iVar2;
  if (((*(int **)(iVar5 + 0x38) <= piVar6) ||
      (piVar3 = (int *)(*(int *)(iVar5 + 0x34) + (int)piVar6 * 0xf8), *piVar3 == 3 && piVar3[1] == 0
      )) || ((int **)piVar3[0x35] != ppiVar4)) {
    local_e4 = FUN_0101a4ac;
    local_100 = (undefined4 **)piVar6;
    local_fc = ppiVar4;
    local_e8 = &local_fc;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882550);
  }
  bVar7 = (char)piVar3[0x3b] == '\0';
  if (bVar7) {
    piVar3 = (int *)(uint)*(byte *)((int)piVar3 + 0xed);
  }
  local_100 = (undefined4 **)piVar6;
  local_fc = ppiVar4;
  if (bVar7 && piVar3 == (int *)0x0) {
    FUN_014298a0(param_1,param_4);
    iVar5 = *param_5;
    *param_5 = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(param_5[1]);
    }
  }
  if (local_128 != 2) {
    iVar5 = local_124;
    if ((local_128 & 1) != 0) {
      iVar5 = local_124 + (*(int *)(local_120 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_120 + 0x34))(iVar5,&local_130);
  }
  FUN_005c3320(&local_130);
  return;
}

