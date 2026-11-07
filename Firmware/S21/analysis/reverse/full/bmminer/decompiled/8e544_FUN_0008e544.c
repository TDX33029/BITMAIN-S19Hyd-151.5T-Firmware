// FUN_0008e544 @ 0008e544  size=552  callers=2
// program: bmminer


void FUN_0008e544(int param_1,undefined4 param_2)

{
  int local_2c;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/rule.c",0x27,"a_rule is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/rule.c",0x41,
                 "---rule:[%p][%s%c%d]-[%d,%d][%s,%p,%d:%ld*%d~%s][%d][%d][%s:%s:%p];[%p]---",
                 param_1,param_1,*(undefined1 *)(param_1 + 0x1001),*(undefined4 *)(param_1 + 0x1004)
                 ,*(undefined4 *)(param_1 + 0x1028),*(undefined4 *)(param_1 + 0x102c),
                 param_1 + 0x1030,*(undefined4 *)(param_1 + 0x1434),
                 *(undefined4 *)(param_1 + 0x1438),*(undefined4 *)(param_1 + 0x1450),
                 *(undefined4 *)(param_1 + 0x1454),param_1 + 0x1458,
                 *(undefined4 *)(param_1 + 0x1864),*(undefined4 *)(param_1 + 0x1874),
                 param_1 + 0x1880,param_1 + 0x1c81,*(undefined4 *)(param_1 + 0x2084),
                 *(undefined4 *)(param_1 + 0x1878));
    if (*(int *)(param_1 + 0x1434) != 0) {
      for (local_2c = 0; local_2c < *(int *)(*(int *)(param_1 + 0x1434) + 4);
          local_2c = local_2c + 1) {
        FUN_00092028(*(undefined4 *)(**(int **)(param_1 + 0x1434) + local_2c * 4),param_2);
      }
    }
  }
  return;
}

