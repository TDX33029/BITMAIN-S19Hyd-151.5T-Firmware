// FUN_00e62b64 @ 00e62b64 size=188 calls_out=3 calls_in=1
// strings: 

void FUN_00e62b64(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_2c;
  undefined4 local_28;
  int *local_24;
  int local_20;
  int local_1c;
  
  local_3c = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  piVar3 = param_2 + 3;
  *param_2 = local_3c + 1;
  local_40 = 1;
  local_38 = iVar1;
  local_2c = iVar2;
  FUN_014db6fc(&local_28,piVar3);
  if ((char)local_28 == '\x01') {
LAB_00e62bb0:
    FUN_0196bf0c(iVar2,iVar1);
    *param_1 = 4;
    param_1[1] = (int)local_24;
  }
  else {
    if (local_28._1_1_ == '\0') {
      local_28 = 3;
    }
    else {
      FUN_00e713fc(&local_28,&local_40,*piVar3);
      if (local_28 == 3) goto LAB_00e62bb0;
      local_48 = local_20;
      iStack_44 = local_1c;
      piVar3 = local_24;
    }
    *param_1 = local_28;
    param_1[1] = (int)piVar3;
    param_1[2] = local_48;
    param_1[3] = iStack_44;
  }
  return;
}

