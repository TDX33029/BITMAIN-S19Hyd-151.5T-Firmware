// FUN_000891a4 @ 000891a4  size=1032  callers=2
// program: bmminer


void FUN_000891a4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/conf.c",0x2c,"a_conf is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/conf.c",0x2d,"-conf[%p]-",param_1);
    FUN_00095b4c(param_2,"src/conf.c",0x2e,"--global--");
    iVar1 = param_1 + 0x401;
    FUN_00095b4c(param_2,"src/conf.c",0x2f,"---file[%s],mtime[%s]---",param_1,iVar1);
    FUN_00095b4c(param_2,"src/conf.c",0x30,"---strict init[%d]---",*(undefined4 *)(param_1 + 0x418))
    ;
    FUN_00095b4c(param_2,"src/conf.c",0x31,"---buffer min[%ld]---",*(undefined4 *)(param_1 + 0x41c))
    ;
    uVar2 = *(undefined4 *)(param_1 + 0x420);
    FUN_00095b4c(param_2,"src/conf.c",0x32,"---buffer max[%ld]---",uVar2);
    if (*(int *)(param_1 + 0x2430) != 0) {
      FUN_00095b4c(param_2,"src/conf.c",0x34,"---default_format---",uVar2,iVar1);
      FUN_0008b648(*(undefined4 *)(param_1 + 0x2430),param_2);
    }
    FUN_00095b4c(param_2,"src/conf.c",0x37,"---file perms[0%o]---",*(undefined4 *)(param_1 + 0x2434)
                );
    FUN_00095b4c(param_2,"src/conf.c",0x38,"---reload conf period[%ld]---",
                 *(undefined4 *)(param_1 + 0x243c));
    FUN_00095b4c(param_2,"src/conf.c",0x39,"---fsync period[%ld]---",
                 *(undefined4 *)(param_1 + 0x2438));
    FUN_00095b4c(param_2,"src/conf.c",0x3b,"---rotate lock file[%s]---",param_1 + 0x424);
    if (*(int *)(param_1 + 0x1428) != 0) {
      FUN_0008cbc0(*(undefined4 *)(param_1 + 0x1428),param_2);
    }
    if (*(int *)(param_1 + 0x2440) != 0) {
      FUN_0008bc9c(*(undefined4 *)(param_1 + 0x2440),param_2);
    }
    if (*(int *)(param_1 + 0x2444) != 0) {
      FUN_00095b4c(param_2,"src/conf.c",0x41,"--format list[%p]--",*(undefined4 *)(param_1 + 0x2444)
                  );
      for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x2444) + 4); local_c = local_c + 1) {
        FUN_0008b648(*(undefined4 *)(**(int **)(param_1 + 0x2444) + local_c * 4),param_2);
      }
    }
    if (*(int *)(param_1 + 0x2448) != 0) {
      FUN_00095b4c(param_2,"src/conf.c",0x48,"--rule_list[%p]--",*(undefined4 *)(param_1 + 0x2448));
      for (local_c = 0; local_c < *(int *)(*(int *)(param_1 + 0x2448) + 4); local_c = local_c + 1) {
        FUN_0008e544(*(undefined4 *)(**(int **)(param_1 + 0x2448) + local_c * 4),param_2);
      }
    }
  }
  return;
}

