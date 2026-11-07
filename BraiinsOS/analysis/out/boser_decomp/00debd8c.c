// FUN_00debd8c @ 00debd8c size=168 calls_out=3 calls_in=0
// strings: 

void FUN_00debd8c(int *param_1,int *param_2)

{
  int iVar1;
  int local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  int local_30;
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
  FUN_00fe3310(&local_40,&local_30);
  if (local_40 == 2 && local_3c == 0) {
    local_30 = local_38;
    FUN_0196bf0c(iVar1,&local_58);
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_38;
  }
  else {
    *param_1 = local_40;
    param_1[1] = local_3c;
    *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_34,local_38);
  }
  if (local_58 == 4 || local_58 == 2) {
    FUN_019bb7e0(local_50,local_4c);
  }
  return;
}

