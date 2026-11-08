// FUN_00711178 @ 00711178 size=284 calls_out=4 calls_in=3
// strings: Invalid UTF8

void FUN_00711178(int *param_1,char *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  undefined4 local_24;
  
  uVar1 = (param_4 / 3) * 4;
  if (param_4 % 3 != 0) {
    if (*param_2 == '\0') {
      uVar3 = 3;
      if (param_4 % 3 == 1) {
        uVar3 = 2;
      }
      uVar1 = uVar3 | uVar1;
    }
    else {
      uVar1 = uVar1 + 4;
    }
  }
  FUN_018a7af8(&local_50,uVar1);
  FUN_01444220(param_3,param_4,local_4c,local_48,param_2);
  local_40 = local_50;
  local_3c = local_4c;
  local_38 = local_48;
  FUN_012fbd94(&local_34,local_4c,local_48);
  local_24 = local_2c;
  iStack_28 = local_30;
  if (local_34 == 0) {
    iVar2 = local_40;
    local_38 = local_3c;
    local_30 = local_48;
  }
  else {
    iVar2 = local_3c;
    if (local_40 != -0x80000000) {
      local_30 = local_3c;
      local_2c = local_38;
      local_34 = local_40;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("Invalid UTF8",0xc,&local_34,&DAT_01c07398,&DAT_01c073bc);
    }
  }
  *param_1 = iVar2;
  param_1[1] = local_38;
  param_1[2] = local_30;
  return;
}

