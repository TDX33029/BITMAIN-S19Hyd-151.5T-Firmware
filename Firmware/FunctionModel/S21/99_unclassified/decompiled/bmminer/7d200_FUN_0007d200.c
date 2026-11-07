// FUN_0007d200 @ 0007d200  size=196  callers=3
// program: bmminer


undefined4 FUN_0007d200(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_60 [2];
  undefined1 auStack_58 [76];
  undefined4 local_c;
  
  FUN_00080fa8(param_3,"<string>");
  if (param_1 == 0) {
    FUN_0007b2bc(param_3,0,4,"wrong arguments");
    local_c = 0;
  }
  else {
    local_60[1] = 0;
    local_60[0] = param_1;
    iVar1 = FUN_0007c9ac(auStack_58,&LAB_0007d190,param_2,local_60);
    if (iVar1 == 0) {
      local_c = FUN_0007d064(auStack_58,param_2,param_3);
      FUN_0007ca28(auStack_58);
    }
    else {
      local_c = 0;
    }
  }
  return local_c;
}

