// FUN_0007d7bc @ 0007d7bc  size=228  callers=0
// program: bmminer


undefined4 FUN_0007d7bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_468 [1032];
  int local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [76];
  undefined4 local_c;
  
  memset(auStack_468,0,0x410);
  local_60 = param_1;
  local_5c = param_2;
  FUN_00080fa8(param_4,"<callback>");
  if (param_1 == 0) {
    FUN_0007b2bc(param_4,0,4,"wrong arguments");
    local_c = 0;
  }
  else {
    iVar1 = FUN_0007c9ac(auStack_58,FUN_0007d6f8,param_3,auStack_468,param_4,param_3,param_2);
    if (iVar1 == 0) {
      local_c = FUN_0007d064(auStack_58,param_3,param_4);
      FUN_0007ca28(auStack_58);
    }
    else {
      local_c = 0;
    }
  }
  return local_c;
}

