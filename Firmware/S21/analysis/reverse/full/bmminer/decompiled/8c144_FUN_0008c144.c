// FUN_0008c144 @ 0008c144  size=288  callers=1
// program: bmminer


int FUN_0008c144(int *param_1,char *param_2)

{
  int iVar1;
  int local_c;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_00095b4c(2,"src/level_list.c",0x84,"str is [%s], can\'t find level",param_2);
  }
  else {
    for (local_c = 0; local_c < param_1[1]; local_c = local_c + 1) {
      iVar1 = *(int *)(*param_1 + local_c * 4);
      if ((iVar1 != 0) && (iVar1 = strcasecmp(param_2,(char *)(iVar1 + 4)), iVar1 == 0)) {
        return local_c;
      }
    }
    FUN_00095b4c(2,"src/level_list.c",0x8e,"str[%s] can\'t found in level list",param_2);
  }
  return -1;
}

