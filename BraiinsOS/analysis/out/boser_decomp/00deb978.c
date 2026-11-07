// FUN_00deb978 @ 00deb978 size=168 calls_out=3 calls_in=1
// strings: 

void FUN_00deb978(int *param_1,int *param_2)

{
  int iVar1;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  undefined1 *local_2c;
  int local_1c;
  
  local_2c = (undefined1 *)&local_60;
  local_60 = *param_2;
  iStack_5c = param_2[1];
  local_58 = param_2[2];
  local_54 = param_2[3];
  iStack_50 = param_2[4];
  iVar1 = param_2[6];
  local_30 = 7;
  local_1c = iVar1;
  FUN_00fe35d4(&local_48,&local_30);
  if (local_48 == 3 && local_44 == 0) {
    local_30 = local_40;
    FUN_0196bf0c(iVar1,&local_60);
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_40;
  }
  else {
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    param_1[3] = iStack_3c;
    param_1[4] = iStack_38;
    param_1[5] = iStack_34;
  }
  if (local_60 == 4 || local_60 == 2) {
    FUN_019bb7e0(local_58,local_54);
  }
  return;
}

