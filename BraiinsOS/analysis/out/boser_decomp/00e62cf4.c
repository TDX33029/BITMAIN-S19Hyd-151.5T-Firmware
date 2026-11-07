// FUN_00e62cf4 @ 00e62cf4 size=180 calls_out=3 calls_in=1
// strings: 

void FUN_00e62cf4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_d16;
  undefined4 local_48;
  int iStack_44;
  int iStack_40;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  iStack_44 = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  *param_2 = iStack_44 + 1;
  local_48 = 1;
  iStack_40 = iVar1;
  local_34 = iVar2;
  FUN_014db6fc(&local_30,param_2 + 3);
  if ((char)local_30 == '\x01') {
LAB_00e62d38:
    FUN_0196bf0c(iVar2,iVar1);
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_2c;
  }
  else {
    if (local_30._1_1_ == '\x01') {
      FUN_00e72b8c(&local_30,&local_48,param_2[3]);
      if (local_30 == 1) goto LAB_00e62d38;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      local_28 = in_d16;
    }
    *(undefined8 *)(param_1 + 2) = local_28;
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  return;
}

