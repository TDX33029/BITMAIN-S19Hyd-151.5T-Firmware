// FUN_0008d26c @ 0008d26c  size=464  callers=1
// program: bmminer


undefined4 FUN_0008d26c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  glob_t local_3c;
  int local_18;
  int local_14;
  char **local_10;
  size_t local_c;
  
  local_14 = 0;
  uVar1 = FUN_000946a4(FUN_0008cff8);
  *(undefined4 *)(param_1 + 0x440) = uVar1;
  if (*(int *)(param_1 + 0x440) == 0) {
    FUN_00095b4c(2,"src/rotater.c",0xbf,"zc_arraylist_new fail");
    uVar1 = 0xffffffff;
  }
  else {
    local_14 = glob((char *)(param_1 + 0x28),7,(__errfunc *)0x0,&local_3c);
    if (local_14 != 3) {
      if (local_14 != 0) {
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",200,"glob err, rc=[%d], errno[%d]",local_14,*piVar2);
        return 0xffffffff;
      }
      local_10 = local_3c.gl_pathv;
      local_c = local_3c.gl_pathc;
      while (local_c != 0) {
        local_c = local_c - 1;
        local_18 = FUN_0008d068(param_1,*local_10);
        if (local_18 == 0) {
          FUN_00095b4c(1,"src/rotater.c",0xd3,"not the expect pattern file");
        }
        else {
          local_14 = FUN_00094c1c(*(undefined4 *)(param_1 + 0x440),&LAB_0008d228,local_18);
          if (local_14 != 0) {
            FUN_00095b4c(2,"src/rotater.c",0xdb,"zc_arraylist_sortadd fail");
            globfree(&local_3c);
            return 0xffffffff;
          }
        }
        local_10 = local_10 + 1;
      }
      local_c = 0xffffffff;
    }
    globfree(&local_3c);
    uVar1 = 0;
  }
  return uVar1;
}

