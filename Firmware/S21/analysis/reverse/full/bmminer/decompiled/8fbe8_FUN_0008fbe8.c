// FUN_0008fbe8 @ 0008fbe8  size=568  callers=0
// program: bmminer


undefined4 FUN_0008fbe8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x2084) == 0) {
    FUN_00095b4c(2,"src/rule.c",0x19d,"user defined record funcion for [%s] not set, no output",
                 param_1 + 0x1880);
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = **(undefined4 **)(param_2 + 0x10);
    local_c = 0;
    local_10 = *(int *)**(undefined4 **)(param_1 + 0x1434);
    for (; local_c < *(int *)(*(int *)(param_1 + 0x1434) + 4); local_c = local_c + 1) {
      local_10 = *(int *)(**(int **)(param_1 + 0x1434) + local_c * 4);
      iVar1 = (**(code **)(local_10 + 0x242c))(local_10,param_2);
      if (iVar1 != 0) {
        FUN_00095b4c(2,"src/rule.c",0x1a1,"zlog_spec_gen_path fail");
        return 0xffffffff;
      }
    }
    **(undefined1 **)(*(int *)(param_2 + 0x10) + 4) = 0;
    iVar1 = FUN_0008bbbc(*(undefined4 *)(param_1 + 0x1878),param_2);
    if (iVar1 == 0) {
      **(undefined1 **)(*(int *)(param_2 + 0x1c) + 4) = 0;
      local_1c = **(undefined4 **)(param_2 + 0x1c);
      local_18 = *(int *)(*(int *)(param_2 + 0x1c) + 4) - **(int **)(param_2 + 0x1c);
      local_14 = **(undefined4 **)(param_2 + 0x10);
      iVar1 = (**(code **)(param_1 + 0x2084))(&local_1c);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        FUN_00095b4c(2,"src/rule.c",0x1ae,"a_rule->record fail");
        uVar2 = 0xffffffff;
      }
    }
    else {
      FUN_00095b4c(2,"src/rule.c",0x1a4,"zlog_format_gen_msg fail");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

