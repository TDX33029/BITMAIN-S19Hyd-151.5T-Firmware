// FUN_00dec198 @ 00dec198 size=176 calls_out=3 calls_in=0
// strings: 

void FUN_00dec198(int *param_1,int *param_2)

{
  int iVar1;
  int local_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  undefined1 *local_2c;
  int local_1c;
  
  local_2c = (undefined1 *)&local_68;
  local_68 = *param_2;
  iStack_64 = param_2[1];
  local_60 = param_2[2];
  local_5c = param_2[3];
  iStack_58 = param_2[4];
  iVar1 = param_2[6];
  local_30 = 7;
  local_1c = iVar1;
  FUN_00fe33a4(&local_50,&local_30);
  if (local_50 == 2 && local_4c == 0) {
    local_30 = local_48;
    FUN_0196bf0c(iVar1,&local_68);
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_48;
  }
  else {
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = local_48;
    param_1[3] = iStack_44;
    param_1[4] = local_40;
    param_1[5] = iStack_3c;
    param_1[6] = iStack_38;
    param_1[7] = iStack_34;
  }
  if (local_68 == 4 || local_68 == 2) {
    FUN_019bb7e0(local_60,local_5c);
  }
  return;
}

