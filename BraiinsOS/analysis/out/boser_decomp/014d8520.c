// FUN_014d8520 @ 014d8520 size=260 calls_out=4 calls_in=2
// strings: 

void FUN_014d8520(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_68;
  undefined1 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  iVar3 = 8;
  local_58 = 0;
  local_5c = 8;
  local_60 = 0;
  local_68 = param_2;
  local_64 = param_3;
  while( true ) {
    iVar1 = local_58;
    FUN_014db6fc(&local_38,&local_68);
    if ((char)local_38 == '\x01') break;
    if (local_38._1_1_ != '\x01') {
      param_1[1] = local_60;
      param_1[2] = local_5c;
      param_1[3] = local_58;
      *param_1 = &DAT_80000014;
      return;
    }
    FUN_014d8ce0(&local_38,local_68);
    if (local_38 == -0x7fffffeb) break;
    local_4c = iStack_2c;
    local_50 = local_30;
    local_40 = local_30;
    iStack_3c = iStack_2c;
    local_44 = local_34;
    local_48 = local_38;
    if (iVar1 == local_60) {
      FUN_00f9d6ec(&local_60);
      iVar3 = local_5c;
    }
    piVar2 = (int *)(iVar3 + iVar1 * 0x10);
    local_58 = iVar1 + 1;
    *piVar2 = local_48;
    piVar2[1] = local_44;
    piVar2[2] = local_40;
    piVar2[3] = iStack_3c;
  }
  *param_1 = 0x80000015;
  param_1[1] = local_34;
  FUN_01266494(&local_60);
  return;
}

