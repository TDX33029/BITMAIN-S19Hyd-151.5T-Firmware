// FUN_0008db9c @ 0008db9c  size=828  callers=1
// program: bmminer


undefined4 FUN_0008db9c(int param_1)

{
  int *piVar1;
  size_t sVar2;
  undefined4 uVar3;
  int local_18;
  uint local_14;
  uint local_10;
  char *local_c;
  
  if (**(char **)(param_1 + 0x24) == '\0') {
    local_14 = snprintf((char *)(param_1 + 0x28),0x401,"%s.*",*(undefined4 *)(param_1 + 0x20));
    if (((int)local_14 < 0) || (0x401 < local_14)) {
      piVar1 = __errno_location();
      FUN_00095b4c(2,"src/rotater.c",0x168,"nwirte[%d], overflow or errno[%d]",local_14,*piVar1);
      uVar3 = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x438) = 1;
      *(undefined4 *)(param_1 + 0x434) = 0;
      sVar2 = strlen(*(char **)(param_1 + 0x20));
      *(size_t *)(param_1 + 0x42c) = sVar2 + 1;
      sVar2 = strlen(*(char **)(param_1 + 0x20));
      *(size_t *)(param_1 + 0x430) = sVar2 + 2;
      uVar3 = 0;
    }
  }
  else {
    local_c = strchr(*(char **)(param_1 + 0x24),0x23);
    if (local_c == (char *)0x0) {
      FUN_00095b4c(2,"src/rotater.c",0x176,"no # in archive_path[%s]",
                   *(undefined4 *)(param_1 + 0x24));
      uVar3 = 0xffffffff;
    }
    else {
      local_18 = 0;
      __isoc99_sscanf(local_c,"#%d%n",param_1 + 0x434,&local_18);
      if (local_18 == 0) {
        local_18 = 1;
      }
      if (local_c[local_18] == 'r') {
        *(undefined4 *)(param_1 + 0x438) = 1;
      }
      else {
        if (local_c[local_18] != 's') {
          FUN_00095b4c(2,"src/rotater.c",0x182,"#r or #s not found");
          return 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x438) = 2;
      }
      local_10 = (int)local_c - *(int *)(param_1 + 0x24);
      if (local_10 < 0x401) {
        memcpy((void *)(param_1 + 0x28),*(void **)(param_1 + 0x24),local_10);
        local_14 = snprintf((char *)(param_1 + 0x28 + local_10),0x401 - local_10,"*%s",
                            local_c + local_18 + 1);
        if (((int)local_14 < 0) || (0x401 - local_10 < local_14)) {
          piVar1 = __errno_location();
          FUN_00095b4c(2,"src/rotater.c",0x191,"nwirte[%d], overflow or errno[%d]",local_14,*piVar1)
          ;
          uVar3 = 0xffffffff;
        }
        else {
          *(uint *)(param_1 + 0x42c) = local_10;
          *(uint *)(param_1 + 0x430) = local_10 + 1;
          uVar3 = 0;
        }
      }
      else {
        FUN_00095b4c(2,"src/rotater.c",0x189,"sizeof glob_path not enough,len[%ld]",local_10);
        uVar3 = 0xffffffff;
      }
    }
  }
  return uVar3;
}

