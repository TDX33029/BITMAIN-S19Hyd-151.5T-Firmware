// FUN_00750f30 @ 00750f30 size=580 calls_out=5 calls_in=1
// strings: a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

void FUN_00750f30(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_50;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  undefined *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  local_3c = 0;
  local_40 = 1;
  local_44 = 0;
  local_2c = 0;
  local_30 = &DAT_60000020;
  local_34 = &DAT_0185e270;
  local_38 = &local_44;
  iVar4 = FUN_00faace8(&local_38,&DAT_00569a30,8);
  iVar3 = local_3c;
  iVar2 = local_40;
  iVar1 = local_44;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                 &DAT_0185e288,&DAT_018af130);
  }
  if (local_44 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  piVar5 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x30);
  }
  local_50 = 4;
  *piVar5 = iVar1;
  piVar5[1] = iVar2;
  piVar5[2] = iVar3;
  local_48 = 1;
  local_44 = 0;
  local_2c = 0;
  local_30 = &DAT_60000020;
  local_34 = &DAT_0185e270;
  local_40 = 1;
  local_3c = 0;
  local_4c = piVar5;
  local_38 = &local_44;
  iVar4 = FUN_00faace8(&local_38,&DAT_0056a650,8);
  iVar3 = local_3c;
  iVar2 = local_40;
  iVar1 = local_44;
  if (iVar4 != 0) {
LAB_00751144:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                 &DAT_0185e288,&DAT_018af130);
  }
  if (local_44 != -0x80000000) {
    if (local_50 == 1) {
      FUN_006bca64(&local_50,1,2,4,0xc);
      piVar5 = local_4c;
    }
    piVar5[3] = iVar1;
    piVar5[4] = iVar2;
    piVar5[5] = iVar3;
    local_48 = 2;
    local_3c = 0;
    local_40 = 1;
    local_44 = 0;
    local_2c = 0;
    local_30 = &DAT_60000020;
    local_34 = &DAT_0185e270;
    local_38 = &local_44;
    iVar4 = FUN_00faace8(&local_38,&DAT_0040f6c1,7);
    iVar3 = local_3c;
    iVar2 = local_40;
    iVar1 = local_44;
    if (iVar4 != 0) goto LAB_00751144;
    if (local_44 != -0x80000000) {
      if (local_50 == 2) {
        FUN_006bca64(&local_50,2,1,4,0xc);
        piVar5 = local_4c;
      }
      piVar5[6] = iVar1;
      piVar5[7] = iVar2;
      piVar5[8] = iVar3;
      local_48 = 3;
    }
  }
  *param_1 = local_50;
  param_1[1] = (int)local_4c;
  param_1[2] = local_48;
  return;
}

