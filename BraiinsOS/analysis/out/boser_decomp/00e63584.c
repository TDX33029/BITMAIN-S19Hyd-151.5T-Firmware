// FUN_00e63584 @ 00e63584 size=200 calls_out=3 calls_in=0
// strings: 

void FUN_00e63584(int *param_1,int *param_2)

{
  int extraout_r2;
  int extraout_r3;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  int iStack_3c;
  int iStack_38;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iStack_3c = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  *param_2 = iStack_3c + 1;
  local_40 = 1;
  iStack_38 = iVar1;
  local_2c = iVar2;
  FUN_014db6fc(&local_28,param_2 + 3);
  if ((char)local_28 == '\x01') {
    iVar3 = local_24;
LAB_00e635cc:
    FUN_0196bf0c(iVar2,iVar1);
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = iVar3;
  }
  else {
    if (local_28._1_1_ == '\x01') {
      FUN_00e6a0fc(&local_28,&local_40,param_2[3]);
      if (local_28 == 2 && local_24 == 0) {
        iVar3 = local_20;
        goto LAB_00e635cc;
      }
    }
    else {
      local_24 = 0;
      local_28 = 2;
      local_1c = extraout_r2;
      local_20 = extraout_r3;
    }
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = local_20;
    param_1[3] = local_1c;
  }
  return;
}

