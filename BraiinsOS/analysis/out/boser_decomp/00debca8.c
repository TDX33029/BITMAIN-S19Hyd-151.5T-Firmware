// FUN_00debca8 @ 00debca8 size=172 calls_out=4 calls_in=0
// strings: 

void FUN_00debca8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_30;
  undefined1 *local_2c;
  int local_1c;
  
  local_2c = (undefined1 *)&local_a8;
  local_a8 = *param_2;
  iStack_a4 = param_2[1];
  local_a0 = param_2[2];
  local_9c = param_2[3];
  iStack_98 = param_2[4];
  iVar1 = param_2[6];
  local_30 = 7;
  local_1c = iVar1;
  FUN_00fe34b0(&local_90,&local_30);
  if (local_90 == 2 && local_8c == 0) {
    local_30 = local_88;
    FUN_0196bf0c(iVar1,&local_a8);
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_88;
  }
  else {
    FUN_01bed4e2(param_1,&local_90,0x60);
  }
  if (local_a8 == 4 || local_a8 == 2) {
    FUN_019bb7e0(local_a0,local_9c);
  }
  return;
}

