// FUN_01386f78 @ 01386f78 size=172 calls_out=1 calls_in=4
// strings: 

void FUN_01386f78(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_34;
  uint *local_30;
  code *local_2c;
  uint *local_28;
  code *local_24;
  
  local_34 = param_2[4];
  if ((*param_1 != 0) && (local_30 = (uint *)(param_1 + 1), *local_30 < local_34)) {
    local_28 = &local_34;
    local_24 = FUN_00b1c384;
    local_2c = FUN_00b1c384;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0059b044,&local_30,&DAT_01ceba90);
  }
  iVar1 = param_1[3];
  iVar4 = param_2[5];
  *param_1 = 1;
  param_1[1] = local_34;
  param_1[2] = iVar4;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x10))(param_1 + 6,param_1[4],param_1[5]);
  }
  iVar1 = param_2[1];
  iVar4 = param_2[2];
  iVar2 = param_2[3];
  iVar3 = param_2[4];
  iVar5 = param_2[5];
  param_1[3] = *param_2;
  param_1[4] = iVar1;
  param_1[5] = iVar4;
  param_1[6] = iVar2;
  param_1[7] = iVar3;
  param_1[8] = iVar5;
  return;
}

