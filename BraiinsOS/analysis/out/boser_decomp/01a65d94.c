// FUN_01a65d94 @ 01a65d94 size=456 calls_out=8 calls_in=2
// strings: 

void FUN_01a65d94(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *local_38;
  undefined1 *local_34;
  int *local_30;
  undefined1 *local_2c;
  
  piVar2 = *(int **)(param_2 + 0x20);
  do {
    if (*piVar2 != 1) {
      bVar1 = false;
      ClearExclusiveLocal();
      goto LAB_01a65dec;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 0;
  DataMemoryBarrier(0xb);
  bVar1 = true;
LAB_01a65dec:
  piVar2 = *(int **)(param_2 + 0x20);
  local_70 = param_3;
  local_6c = param_4;
  if (bVar1) {
    if (piVar2[1] == 1) {
      DataMemoryBarrier(0xb);
      *piVar2 = 1;
      piVar3 = piVar2;
    }
    else {
      piVar5 = piVar2 + 1;
      piVar3 = (int *)FUN_01a756a0();
      FUN_01bed4e2(piVar3 + 2,piVar2 + 2,0x90);
      *(int **)(param_2 + 0x20) = piVar3;
      if (piVar2 != (int *)&DAT_ffffffff) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          thunk_FUN_01be4678(piVar2);
        }
      }
    }
  }
  else {
    piVar3 = (int *)FUN_01a757a0(piVar2 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00711b94(*(undefined4 *)(param_2 + 0x20));
    }
    *(int **)(param_2 + 0x20) = piVar3;
  }
  FUN_01a65fd0(&local_68,piVar3 + 2,param_3,param_4,param_5);
  if (local_68 == -0x7ffffffd) {
    *param_1 = 0x80000000;
  }
  else {
    local_30 = &local_58;
    local_58 = local_68;
    local_54 = uStack_64;
    uStack_50 = uStack_60;
    local_38 = &local_70;
    local_2c = &LAB_015a6eb0;
    local_34 = &LAB_01674ec4;
    FUN_00664898(&local_48,&DAT_005b5ab7,&local_38);
    local_38 = local_48;
    local_34 = (undefined1 *)uStack_44;
    local_30 = (int *)uStack_40;
    if (-1 < local_58) {
      FUN_019bb7e0(local_58,local_54);
    }
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[2] = local_30;
  }
  return;
}

