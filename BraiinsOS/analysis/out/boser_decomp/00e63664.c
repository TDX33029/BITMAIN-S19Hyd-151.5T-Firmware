// FUN_00e63664 @ 00e63664 size=224 calls_out=3 calls_in=1
// strings: 

void FUN_00e63664(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_58;
  int iStack_54;
  int iStack_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_34;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  local_44 = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  piVar3 = param_2 + 3;
  *param_2 = local_44 + 1;
  local_48 = 1;
  local_40 = iVar1;
  local_34 = iVar2;
  FUN_014db6fc(&local_30,piVar3);
  if ((char)local_30 == '\x01') {
    local_28 = local_2c;
LAB_00e636b0:
    FUN_0196bf0c(iVar2,iVar1);
    *param_1 = 6;
    param_1[1] = 0;
    param_1[2] = (int)local_28;
  }
  else {
    if (local_30._1_1_ == '\0') {
      local_2c = (int *)0x0;
      local_30 = 5;
    }
    else {
      FUN_00e687b0(&local_30,&local_48,*piVar3);
      if (local_30 == 5 && local_2c == (int *)0x0) goto LAB_00e636b0;
      local_58 = local_24;
      iStack_54 = iStack_20;
      iStack_50 = iStack_1c;
      piVar3 = local_28;
    }
    *param_1 = local_30;
    param_1[1] = (int)local_2c;
    param_1[2] = (int)piVar3;
    param_1[3] = local_58;
    param_1[4] = iStack_54;
    param_1[5] = iStack_50;
  }
  return;
}

