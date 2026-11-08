// FUN_000615e8 @ 000615e8  size=384  callers=0
// program: bmminer


undefined4 FUN_000615e8(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 0x2084) == 0) {
    FUN_000658a8(2,"src/rule.c",0x19d,"user defined record funcion for [%s] not set, no output",
                 param_1 + 0x1880);
    uVar3 = 0xffffffff;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x1434);
    puVar1 = (undefined1 *)**(undefined4 **)(param_2 + 0x10);
    iVar4 = piVar5[1];
    (*(undefined4 **)(param_2 + 0x10))[1] = puVar1;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(*piVar5 + iVar4 * 4);
        iVar4 = iVar4 + 1;
        iVar2 = (**(code **)(iVar2 + 0x242c))(iVar2,param_2);
        if (iVar2 != 0) {
          FUN_000658a8(2,"src/rule.c",0x1a1,"zlog_spec_gen_path fail");
          return 0xffffffff;
        }
        piVar5 = *(int **)(param_1 + 0x1434);
      } while (iVar4 < piVar5[1]);
      puVar1 = *(undefined1 **)(*(int *)(param_2 + 0x10) + 4);
    }
    *puVar1 = 0;
    iVar4 = FUN_0005f330(*(undefined4 *)(param_1 + 0x1878),param_2);
    if (iVar4 == 0) {
      **(undefined1 **)(*(int *)(param_2 + 0x1c) + 4) = 0;
      local_24 = **(int **)(param_2 + 0x1c);
      local_1c = **(undefined4 **)(param_2 + 0x10);
      local_20 = (*(int **)(param_2 + 0x1c))[1] - local_24;
      iVar4 = (**(code **)(param_1 + 0x2084))(&local_24);
      uVar3 = 0;
      if (iVar4 != 0) {
        FUN_000658a8(2,"src/rule.c",0x1ae,"a_rule->record fail");
        uVar3 = 0xffffffff;
      }
    }
    else {
      FUN_000658a8(2,"src/rule.c",0x1a4,"zlog_format_gen_msg fail");
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

