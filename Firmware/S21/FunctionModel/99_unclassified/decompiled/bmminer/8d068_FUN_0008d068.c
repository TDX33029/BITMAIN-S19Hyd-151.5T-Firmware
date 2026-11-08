// FUN_0008d068 @ 0008d068  size=448  callers=1
// program: bmminer


void * FUN_0008d068(int param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  int local_14;
  uint local_10;
  void *local_c;
  
  iVar1 = strcmp(*(char **)(param_1 + 0x20),param_2);
  if ((iVar1 != 0) && (sVar2 = strlen(param_2), param_2[sVar2 - 1] != '/')) {
    local_c = calloc(1,0x408);
    if (local_c == (void *)0x0) {
      piVar3 = __errno_location();
      FUN_00095b4c(2,"src/rotater.c",0x95,"calloc fail, errno[%d]",*piVar3);
    }
    else {
      local_10 = snprintf((char *)((int)local_c + 4),0x401,"%s",param_2);
      if (((int)local_10 < 0) || (0x400 < local_10)) {
        piVar3 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",0x9b,"snprintf fail or overflow, nwrite=[%d], errno[%d]",
                     local_10,*piVar3);
      }
      else {
        local_14 = 0;
        __isoc99_sscanf((int)local_c + *(int *)(param_1 + 0x42c) + 4,&DAT_000ab878,local_c,&local_14
                       );
        if ((*(int *)(param_1 + 0x434) == 0) || (*(int *)(param_1 + 0x434) <= local_14)) {
          return local_c;
        }
        FUN_00095b4c(1,"src/rotater.c",0xa4,"aa.1.log is not expect, need aa.01.log");
      }
      free(local_c);
    }
  }
  return (void *)0x0;
}

