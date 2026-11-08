// FUN_00debbd0 @ 00debbd0 size=160 calls_out=3 calls_in=0
// strings: 

void FUN_00debbd0(int *param_1,int *param_2)

{
  int iVar1;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  undefined1 *local_2c;
  int local_1c;
  
  local_2c = (undefined1 *)&local_78;
  local_78 = *param_2;
  iStack_74 = param_2[1];
  local_70 = param_2[2];
  local_6c = param_2[3];
  iStack_68 = param_2[4];
  iVar1 = param_2[6];
  local_30 = 7;
  local_1c = iVar1;
  FUN_00fe3544(&local_60,&local_30);
  if (local_60 == -0x80000000) {
    local_30 = local_5c;
    FUN_0196bf0c(iVar1,&local_78);
    *param_1 = -0x80000000;
    param_1[1] = local_5c;
  }
  else {
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = iStack_58;
    param_1[3] = iStack_54;
    param_1[4] = iStack_50;
    param_1[5] = iStack_4c;
    param_1[6] = local_48;
    param_1[7] = iStack_44;
    param_1[8] = iStack_40;
    param_1[9] = iStack_3c;
    param_1[10] = iStack_38;
    param_1[0xb] = iStack_34;
  }
  if (local_78 == 4 || local_78 == 2) {
    FUN_019bb7e0(local_70,local_6c);
  }
  return;
}

