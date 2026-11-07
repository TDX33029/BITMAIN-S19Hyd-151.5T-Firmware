// FUN_00dec0c4 @ 00dec0c4 size=156 calls_out=3 calls_in=0
// strings: 

void FUN_00dec0c4(uint *param_1,int *param_2)

{
  int iVar1;
  int local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int local_40;
  uint local_3c;
  undefined8 local_38;
  uint local_30;
  undefined1 *local_2c;
  int local_1c;
  
  local_2c = (undefined1 *)&local_58;
  local_58 = *param_2;
  iStack_54 = param_2[1];
  local_50 = param_2[2];
  local_4c = param_2[3];
  iStack_48 = param_2[4];
  iVar1 = param_2[6];
  local_30 = 7;
  local_1c = iVar1;
  FUN_00fe36fc(&local_40,&local_30);
  if (local_40 != 1) {
    *(undefined8 *)(param_1 + 2) = local_38;
  }
  else {
    local_30 = local_3c;
    FUN_0196bf0c(iVar1,&local_58);
    param_1[1] = local_3c;
  }
  *param_1 = (uint)(local_40 == 1);
  if (local_58 == 4 || local_58 == 2) {
    FUN_019bb7e0(local_50,local_4c);
  }
  return;
}

