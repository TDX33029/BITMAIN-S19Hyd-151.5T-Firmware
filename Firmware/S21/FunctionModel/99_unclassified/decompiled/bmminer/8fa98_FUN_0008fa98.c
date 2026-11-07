// FUN_0008fa98 @ 0008fa98  size=336  callers=0
// program: bmminer


undefined4 FUN_0008fa98(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x2084) == 0) {
    FUN_00095b4c(2,"src/rule.c",0x182,"user defined record funcion for [%s] not set, no output",
                 param_1 + 0x1880);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0008bbbc(*(undefined4 *)(param_1 + 0x1878),param_2);
    if (iVar1 == 0) {
      **(undefined1 **)(*(int *)(param_2 + 0x1c) + 4) = 0;
      local_14 = **(undefined4 **)(param_2 + 0x1c);
      local_10 = *(int *)(*(int *)(param_2 + 0x1c) + 4) - **(int **)(param_2 + 0x1c);
      local_c = param_1 + 0x1c81;
      iVar1 = (**(code **)(param_1 + 0x2084))(&local_14);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        FUN_00095b4c(2,"src/rule.c",0x191,"a_rule->record fail");
        uVar2 = 0xffffffff;
      }
    }
    else {
      FUN_00095b4c(2,"src/rule.c",0x187,"zlog_format_gen_msg fail");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

