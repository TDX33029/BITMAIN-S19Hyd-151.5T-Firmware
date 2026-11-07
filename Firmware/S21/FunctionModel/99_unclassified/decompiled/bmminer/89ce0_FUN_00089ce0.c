// FUN_00089ce0 @ 00089ce0  size=1548  callers=1
// program: bmminer


int FUN_00089ce0(char *param_1)

{
  int iVar1;
  int *piVar2;
  ushort **ppuVar3;
  size_t sVar4;
  char *pcVar5;
  undefined4 local_10cc;
  byte local_10c8 [4100];
  tm tStack_c4;
  undefined1 auStack_98 [80];
  time_t atStack_48 [6];
  size_t local_30;
  FILE *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  byte *local_18;
  int local_14;
  
  local_14 = 0;
  local_2c = (FILE *)0x0;
  local_18 = (byte *)0x0;
  local_1c = (byte *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_10cc = 0;
  iVar1 = FUN_00099178(param_1,auStack_98);
  if (iVar1 == 0) {
    localtime_r(atStack_48,&tStack_c4);
    strftime(param_1 + 0x401,0x15,"%F %T",&tStack_c4);
    local_2c = fopen64(param_1,"r");
    if (local_2c == (FILE *)0x0) {
      FUN_00095b4c(2,"src/conf.c",0xf5,"open configure file[%s] fail",param_1);
      local_14 = -1;
    }
    else {
      local_18 = local_10c8;
      memset(local_10c8,0,0x1001);
      while (pcVar5 = fgets((char *)local_18,0x1001 - ((int)local_18 - (int)local_10c8),local_2c),
            pcVar5 != (char *)0x0) {
        local_20 = local_20 + 1;
        local_30 = strlen((char *)local_18);
        if (local_18[local_30 - 1] == 10) {
          local_18[local_30 - 1] = 0;
        }
        local_1c = local_18;
        while ((*local_1c != 0 && (ppuVar3 = __ctype_b_loc(), ((*ppuVar3)[*local_1c] & 0x2000) != 0)
               )) {
          local_1c = local_1c + 1;
        }
        if ((*local_1c != 0) && (*local_1c != 0x23)) {
          for (local_24 = 0; local_1c[local_24] != 0; local_24 = local_24 + 1) {
            local_18[local_24] = local_1c[local_24];
          }
          local_18[local_24] = 0;
          sVar4 = strlen((char *)local_18);
          local_1c = local_18 + (sVar4 - 1);
          while (ppuVar3 = __ctype_b_loc(), ((*ppuVar3)[*local_1c] & 0x2000) != 0) {
            local_1c = local_1c + -1;
          }
          if ((*local_1c == 0x5c) && ((int)local_1c - (int)local_10c8 < 0xfe3)) {
            do {
              local_1c = local_1c + -1;
              ppuVar3 = __ctype_b_loc();
            } while (((*ppuVar3)[*local_1c] & 0x2000) != 0);
            local_1c = local_1c + 1;
            *local_1c = 0;
            local_18 = local_1c;
          }
          else {
            local_18 = local_10c8;
            local_1c[1] = 0;
            local_28 = 0;
            for (local_1c = local_10c8; *local_1c != 0; local_1c = local_1c + 1) {
              if (*local_1c == 0x22) {
                local_28 = local_28 ^ 1;
              }
              else if ((*local_1c == 0x23) && (local_28 == 0)) {
                *local_1c = 0;
                break;
              }
            }
            local_14 = FUN_0008a2ec(param_1,local_10c8,&local_10cc);
            if (local_14 < 0) {
              FUN_00095b4c(2,"src/conf.c",0x13a,"parse configure file[%s]line_no[%ld] fail",param_1,
                           local_20);
              FUN_00095b4c(2,"src/conf.c",0x13b,"line[%s]",local_10c8);
              break;
            }
            if (0 < local_14) {
              FUN_00095b4c(1,"src/conf.c",0x13e,"parse configure file[%s]line_no[%ld] fail",param_1,
                           local_20);
              FUN_00095b4c(1,"src/conf.c",0x13f,"line[%s]",local_10c8);
              FUN_00095b4c(1,"src/conf.c",0x140,"as strict init is set to false, ignore and go on");
              local_14 = 0;
            }
          }
        }
      }
      fclose(local_2c);
    }
  }
  else {
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/conf.c",0xee,"lstat conf file[%s] fail, errno[%d]",param_1,*piVar2);
    local_14 = -1;
  }
  return local_14;
}

