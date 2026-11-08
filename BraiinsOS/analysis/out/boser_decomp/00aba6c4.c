// FUN_00aba6c4 @ 00aba6c4 size=304 calls_out=3 calls_in=0
// strings: Invalid pool settings | Missing group | Invalid power limitOutOfRangeError

void FUN_00aba6c4(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined2 local_1c;
  
  local_58 = 0;
  local_5c = 1;
  local_60 = 0;
  if (param_2 == '\0') {
    FUN_0132b898(&local_60,0,0xd,1,1);
    iVar1 = local_58;
    FUN_01bed4e2(local_5c + local_58,"Missing group",0xd);
    local_58 = iVar1 + 0xd;
  }
  else if (param_2 == '\x01') {
    FUN_0132b898(&local_60,0,0x15,1,1);
    iVar1 = local_58;
    FUN_01bed4e2(local_5c + local_58,"Invalid pool settings",0x15);
    local_58 = iVar1 + 0x15;
  }
  else {
    FUN_0132b898(&local_60,0,0x13,1,1);
    iVar1 = local_58;
    FUN_01bed4e2(local_5c + local_58,"Invalid power limitOutOfRangeError",0x13);
    local_58 = iVar1 + 0x13;
  }
  FUN_007167d4(&local_60);
  local_1c = 400;
  FUN_01bed4e2(param_1,&local_60,0x50);
  return;
}

