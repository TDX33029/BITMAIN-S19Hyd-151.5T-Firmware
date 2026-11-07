// FUN_00e62f5c @ 00e62f5c size=172 calls_out=3 calls_in=1
// strings: 

void FUN_00e62f5c(int *param_1,int *param_2)

{
  int extraout_r1;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_28;
  undefined4 local_24;
  int *local_20;
  int local_1c;
  
  local_38 = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  piVar3 = param_2 + 3;
  *param_2 = local_38 + 1;
  local_3c = 1;
  local_34 = iVar1;
  local_28 = iVar2;
  FUN_014db6fc(&local_24,piVar3);
  if ((char)local_24 == '\x01') {
LAB_00e62fa8:
    FUN_0196bf0c(iVar2,iVar1);
    *param_1 = -0x7ffffffe;
    param_1[1] = (int)local_20;
  }
  else {
    if (local_24._1_1_ == '\0') {
      local_24 = -0x7fffffff;
      local_1c = extraout_r1;
    }
    else {
      FUN_00e68530(&local_24,&local_3c,*piVar3);
      if (local_24 == -0x7fffffff) goto LAB_00e62fa8;
      piVar3 = local_20;
    }
    *param_1 = local_24;
    param_1[1] = (int)piVar3;
    param_1[2] = local_1c;
  }
  return;
}

