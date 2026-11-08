// FUN_01a4e680 @ 01a4e680 size=252 calls_out=1 calls_in=1
// strings: 

void FUN_01a4e680(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char *local_70;
  int iStack_6c;
  int local_68;
  char local_64;
  char *local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  char **local_20;
  
  local_70 = *(char **)(param_3 + 8);
  iStack_6c = *(int *)(param_3 + 0xc);
  if ((iStack_6c == 0) || (cVar1 = *(char *)(param_2 + 3), cVar1 != *local_70)) {
    local_38 = (undefined1 *)0x0;
    local_3c = 0;
    local_44 = 0;
    local_40 = 4;
    local_48 = 2;
    local_30 = *param_2;
    uStack_2c = param_2[1];
    uStack_28 = param_2[2];
    local_20 = &local_50;
    local_50 = local_70;
    local_4c = iStack_6c;
    local_24 = param_3;
    FUN_01a5cbd0(&local_68,&local_48);
    if (local_68 != 3) {
      local_48 = param_2[4];
      local_44 = param_2[5];
      local_40 = param_2[6];
      local_3c = param_3;
      local_38 = (undefined1 *)&local_70;
      FUN_01a5cbd0(param_1,&local_68,&local_48);
      return;
    }
  }
  else {
    *(char **)(param_3 + 8) = local_70 + 1;
    *(int *)(param_3 + 0xc) = iStack_6c + -1;
    local_64 = cVar1;
  }
  *(char *)(param_1 + 1) = local_64;
  *param_1 = 3;
  return;
}

