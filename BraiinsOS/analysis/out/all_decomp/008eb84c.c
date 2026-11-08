// FUN_008eb84c @ 008eb84c size=432 calls_out=6 calls_in=3
// strings: 

void FUN_008eb84c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int *local_4c;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  local_78 = 7;
  local_4c = &local_78;
  local_54 = param_3 + param_4 * 4;
  local_58 = param_3;
  local_50 = param_2;
  iVar4 = FUN_008ecae4(&local_58);
  if (iVar4 == 0) {
    if (local_78 == 7) {
      local_40 = (int *)&DAT_00000004;
      local_44 = 0;
      iVar4 = 0;
      goto LAB_008eb9a8;
    }
    *param_1 = local_78;
    param_1[1] = iStack_74;
    param_1[2] = iStack_70;
    param_1[3] = iStack_6c;
    param_1[4] = local_68;
    param_1[5] = iStack_64;
    param_1[6] = iStack_60;
    param_1[7] = iStack_5c;
  }
  else {
    piVar5 = (int *)thunk_FUN_016d4a50(0x10);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x10);
    }
    *piVar5 = iVar4;
    local_3c = 1;
    local_44 = 4;
    local_38 = local_58;
    iStack_34 = local_54;
    uStack_30 = local_50;
    piStack_2c = local_4c;
    local_40 = piVar5;
    while (iVar4 = local_3c, iVar6 = FUN_008ecae4(&local_38), piVar3 = local_40, iVar2 = local_44,
          iVar6 != 0) {
      if (iVar4 == local_44) {
        FUN_008f563c(&local_44,iVar4,1,4,4);
        piVar5 = local_40;
      }
      piVar5[iVar4] = iVar6;
      local_3c = iVar4 + 1;
    }
    if (local_78 == 7) {
LAB_008eb9a8:
      param_1[2] = (int)local_40;
      *param_1 = 7;
      param_1[1] = local_44;
      param_1[3] = iVar4;
      return;
    }
    *param_1 = local_78;
    param_1[1] = iStack_74;
    param_1[2] = iStack_70;
    param_1[3] = iStack_6c;
    param_1[4] = local_68;
    param_1[5] = iStack_64;
    param_1[6] = iStack_60;
    param_1[7] = iStack_5c;
    iVar6 = 0;
    do {
      piVar5 = (int *)piVar3[iVar6];
      iVar8 = iVar6 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(piVar3[iVar6]);
      }
      iVar6 = iVar8;
    } while (iVar8 != iVar4);
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(piVar3);
      return;
    }
  }
  return;
}

