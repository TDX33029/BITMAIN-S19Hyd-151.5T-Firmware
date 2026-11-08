// FUN_007b1df0 @ 007b1df0 size=528 calls_out=10 calls_in=1
// strings: Missing ID in ii_stratum result

void FUN_007b1df0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_r12;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int iStack_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  code *local_70;
  code *local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int iStack_3c;
  int *local_38;
  undefined1 *local_34;
  
  if ((char)param_2[4] != '\0') {
    if ((char)param_2[4] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185d6ac);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185d6ac);
  }
  iVar1 = *param_2;
  piVar4 = (int *)param_2[3];
  iVar2 = param_2[2];
  iVar5 = param_2[1];
  iVar6 = *piVar4;
  iVar7 = piVar4[1];
  iVar3 = thunk_FUN_016d4a50(0x1f);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x1f);
  }
  FUN_016dd1aa(iVar3,"Missing ID in ii_stratum result",0x1f);
  local_4c = 0x1f;
  local_58 = 1;
  local_5c = 0x80000006;
  local_54 = 0x1f;
  local_60 = 3;
  if (iVar6 == 0) {
    local_4c = 0x1f;
    local_54 = 0x1f;
    local_40 = 0;
    local_44 = extraout_r3;
    local_48 = extraout_r12;
  }
  else {
    local_50 = iVar3;
    FUN_007a8040(&local_60);
    local_84 = iVar7;
    FUN_007534c8(local_80,iVar2 + 0x118,iVar7);
    if (local_78 != &DAT_3b9aca00) {
      FUN_0165a798(&local_38);
      FUN_015f3c24(&local_60,&local_38,local_80);
      if (iVar1 != 0) {
        local_70 = local_6c;
      }
      (*local_70)(&local_b0,iVar2,piVar4,iVar5);
      goto LAB_007b1fb4;
    }
    local_34 = &LAB_00fac484;
    local_38 = &local_84;
    FUN_00600d2c(&local_54,&DAT_00578881,&local_38);
    iVar3 = local_50;
    iVar7 = iStack_3c;
  }
  local_a8 = 1;
  local_ac = 0x80000006;
  local_b0 = 3;
  local_a4 = local_54;
  local_a0 = iVar3;
  local_9c = local_4c;
  local_98 = local_48;
  local_94 = local_44;
  local_90 = local_40;
  iStack_8c = iVar7;
LAB_007b1fb4:
  *param_1 = local_b0;
  param_1[1] = local_ac;
  param_1[2] = local_a8;
  param_1[3] = local_a4;
  param_1[4] = local_a0;
  param_1[5] = local_9c;
  param_1[6] = local_98;
  param_1[7] = local_94;
  param_1[8] = local_90;
  param_1[9] = iStack_8c;
  *(undefined1 *)(param_2 + 4) = 1;
  return;
}

