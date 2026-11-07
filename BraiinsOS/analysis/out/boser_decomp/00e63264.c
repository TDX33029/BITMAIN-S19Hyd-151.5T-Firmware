// FUN_00e63264 @ 00e63264 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_00e63264(int *param_1,int *param_2)

{
  int extraout_r1;
  int iVar1;
  int iVar2;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  iStack_34 = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  *param_2 = iStack_34 + 1;
  local_38 = 1;
  iStack_30 = iVar1;
  local_24 = iVar2;
  FUN_014db6fc(&local_20,param_2 + 3);
  if ((char)local_20 == '\x01') {
LAB_00e632a8:
    FUN_0196bf0c(iVar2,iVar1);
    *param_1 = 3;
    param_1[1] = local_1c;
  }
  else {
    if (local_20._1_1_ == '\x01') {
      FUN_00e71fb0(&local_20,&local_38,param_2[3]);
      if (local_20 == 2) goto LAB_00e632a8;
    }
    else {
      local_20 = 2;
      local_1c = extraout_r1;
    }
    *param_1 = local_20;
    param_1[1] = local_1c;
  }
  return;
}

