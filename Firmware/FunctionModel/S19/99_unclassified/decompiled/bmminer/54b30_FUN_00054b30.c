// FUN_00054b30 @ 00054b30  size=200  callers=2
// program: bmminer


undefined4 FUN_00054b30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_68 [2];
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  undefined4 local_24;
  
  FUN_000570ac(param_3,"<string>");
  if (param_1 == 0) {
    FUN_00053870(param_3,0,4,"wrong arguments");
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    local_60 = &LAB_000537cc;
    local_68[1] = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_48 = 1;
    local_68[0] = param_1;
    local_5c = (undefined1 *)local_68;
    iVar1 = FUN_000550f8(auStack_38);
    if (iVar1 == 0) {
      local_24 = 0xffffffff;
      local_2c = param_2;
      uVar2 = FUN_00054a2c(local_68 + 2,param_2,param_3);
      FUN_000539a0(local_68 + 2);
    }
  }
  return uVar2;
}

