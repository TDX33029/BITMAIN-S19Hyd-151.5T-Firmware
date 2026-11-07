// FUN_009f5b80 @ 009f5b80 size=432 calls_out=7 calls_in=2
// strings: 

void FUN_009f5b80(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30 [3];
  
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_4);
  }
  if (param_4 == 0) {
    iVar4 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_4);
    iVar4 = param_4;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  FUN_016dd1aa(iVar1,param_3,param_4);
  local_58 = iVar4;
  local_54 = iVar1;
  local_50 = param_4;
  iVar2 = FUN_00fabc64(param_2,local_30);
  local_34 = 10 - iVar2;
  if (iVar2 == 10) {
    iVar3 = 1;
    iVar5 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(local_34);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_34);
    }
    iVar5 = local_34;
  }
  FUN_016dd1aa(iVar3,(int)local_30 + iVar2,local_34);
  local_30[1] = &DAT_006043a8;
  local_30[0] = &local_3c;
  local_3c = iVar5;
  local_38 = iVar3;
  FUN_00600d2c(&local_48,&DAT_0057f9fc,local_30);
  if (local_3c != 0) {
    thunk_FUN_016d3fb4(local_38);
  }
  if ((uint)(iVar4 - param_4) < local_40) {
    FUN_009f4d18(&local_58,param_4,local_40,1,1);
    param_4 = local_50;
    iVar1 = local_54;
  }
  FUN_016dd1aa(iVar1 + param_4,local_44,local_40);
  local_50 = param_4 + local_40;
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = local_50;
  return;
}

