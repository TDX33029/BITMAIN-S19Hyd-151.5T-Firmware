// FUN_00060ed4 @ 00060ed4  size=240  callers=0
// program: bmminer


undefined4 FUN_00060ed4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x2084) == 0) {
    FUN_000658a8(2,"src/rule.c",0x182,"user defined record funcion for [%s] not set, no output",
                 param_1 + 0x1880);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0005f330(*(undefined4 *)(param_1 + 0x1878));
    if (iVar1 == 0) {
      local_14 = param_1 + 0x1c81;
      **(undefined1 **)(*(int *)(param_2 + 0x1c) + 4) = 0;
      local_1c = **(int **)(param_2 + 0x1c);
      local_18 = (*(int **)(param_2 + 0x1c))[1] - local_1c;
      iVar1 = (**(code **)(param_1 + 0x2084))(&local_1c);
      uVar2 = 0;
      if (iVar1 != 0) {
        FUN_000658a8(2,"src/rule.c",0x191,"a_rule->record fail");
        uVar2 = 0xffffffff;
      }
    }
    else {
      FUN_000658a8(2,"src/rule.c",0x187,"zlog_format_gen_msg fail");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

