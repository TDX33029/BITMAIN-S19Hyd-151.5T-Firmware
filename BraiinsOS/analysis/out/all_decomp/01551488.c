// FUN_01551488 @ 01551488 size=412 calls_out=5 calls_in=0
// strings: 

void FUN_01551488(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 extraout_r1;
  int iVar5;
  longlong lVar6;
  int local_64;
  int local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_015510cc(&local_48);
  iVar1 = iStack_40;
  uVar3 = uStack_44;
  if (local_48 != -0x7fffffd7) {
    param_1[5] = local_3c;
    param_1[6] = uStack_38;
    param_1[7] = local_34;
    param_1[8] = local_30;
    param_1[9] = local_2c;
    param_1[2] = local_48;
    param_1[3] = uStack_44;
    param_1[4] = iStack_40;
    *param_1 = 1;
    return;
  }
  uVar2 = (**(code **)(iStack_40 + 0x24))(uStack_44);
  lVar6 = (**(code **)(iVar1 + 0x1c))(uVar3);
  iVar5 = (int)((ulonglong)lVar6 >> 0x20);
  if (lVar6 < 0) {
    uVar3 = 0;
LAB_015514e8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,iVar5);
  }
  if (iVar5 == 0) {
    iVar4 = 1;
    local_64 = 0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar5);
    if (iVar4 == 0) {
      uVar3 = 1;
      goto LAB_015514e8;
    }
    local_64 = iVar5;
  }
  FUN_016dd1aa(iVar4,(int)lVar6,iVar5);
  (**(code **)(iVar1 + 0xc))(&local_48,uVar3,param_3,param_4);
  if (local_48 == -0x7fffffd7) {
    *(undefined2 *)(param_1 + 8) = uVar2;
    *param_1 = 0;
    param_1[1] = local_64;
    *(undefined2 *)((int)param_1 + 0x22) = extraout_r1;
    param_1[2] = iVar4;
    param_1[3] = iVar5;
    param_1[4] = uStack_44;
    param_1[5] = iStack_40;
    param_1[6] = local_3c;
    param_1[7] = uStack_38;
  }
  else {
    param_1[2] = local_48;
    param_1[3] = uStack_44;
    param_1[4] = iStack_40;
    param_1[5] = local_3c;
    param_1[6] = uStack_38;
    *param_1 = 1;
    param_1[7] = local_34;
    param_1[8] = local_30;
    param_1[9] = local_2c;
    if (local_64 != 0) {
      thunk_FUN_016d3fb4(iVar4);
      return;
    }
  }
  return;
}

