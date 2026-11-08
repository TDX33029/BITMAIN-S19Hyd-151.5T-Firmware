// FUN_0007d340 @ 0007d340  size=208  callers=0
// program: bmminer


undefined4 FUN_0007d340(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [76];
  undefined4 local_c;
  
  FUN_00080fa8(param_4,"<buffer>");
  if (param_1 == 0) {
    FUN_0007b2bc(param_4,0,4,"wrong arguments",param_4,param_3,param_2);
    local_c = 0;
  }
  else {
    local_5c = 0;
    local_64 = param_1;
    local_60 = param_2;
    iVar1 = FUN_0007c9ac(auStack_58,&LAB_0007d2c4,param_3,&local_64);
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

