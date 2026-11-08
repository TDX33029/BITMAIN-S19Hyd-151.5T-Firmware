// FUN_0008b77c @ 0008b77c  size=1088  callers=2
// program: bmminer


byte * FUN_0008b77c(int param_1,undefined4 param_2)

{
  int *piVar1;
  ushort **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  byte *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  char *local_18;
  byte *local_14;
  int local_10;
  byte *local_c;
  
  local_10 = 0;
  local_14 = (byte *)0x0;
  local_24 = 0;
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/format.c",0x41,"line is null or 0");
  }
  else {
    local_14 = calloc(1,0x2008);
    if (local_14 == (byte *)0x0) {
      piVar1 = __errno_location();
      FUN_00095b4c(2,"src/format.c",0x45,"calloc fail, errno[%d]",*piVar1);
    }
    else {
      memset(local_14,0,0x1001);
      local_24 = 0;
      local_10 = __isoc99_sscanf(param_1," %[^= \t] = %n",local_14,&local_24);
      if (local_10 == 1) {
        if (*(char *)(param_1 + local_24) == '\"') {
          for (local_c = local_14; *local_c != 0; local_c = local_c + 1) {
            ppuVar2 = __ctype_b_loc();
            if ((((*ppuVar2)[*local_c] & 8) == 0) && (*local_c != 0x5f)) {
              FUN_00095b4c(2,"src/format.c",0x5c,
                           "a_format->name[%s] character is not in [a-Z][0-9][_]",local_14);
              goto LAB_0008bba4;
            }
          }
          local_18 = (char *)(param_1 + local_24 + 1);
          local_1c = strrchr(local_18,0x22);
          if (local_1c == (char *)0x0) {
            FUN_00095b4c(2,"src/format.c",100,"there is no \" at end of pattern, line[%s]",param_1);
          }
          else if ((uint)((int)local_1c - (int)local_18) < 0x1001) {
            memset(local_14 + 0x1001,0,0x1001);
            memcpy(local_14 + 0x1001,local_18,(int)local_1c - (int)local_18);
            iVar3 = FUN_000960c8(local_14 + 0x1001,0x1001);
            if (iVar3 == 0) {
              uVar4 = FUN_000946a4(FUN_00093400);
              *(undefined4 *)(local_14 + 0x2004) = uVar4;
              if (*(int *)(local_14 + 0x2004) == 0) {
                FUN_00095b4c(2,"src/format.c",0x77,"zc_arraylist_new fail");
              }
              else {
                local_c = local_14 + 0x1001;
                while( true ) {
                  if (*local_c == 0) {
                    FUN_0008b648(local_14,0);
                    return local_14;
                  }
                  local_20 = FUN_00093470(local_c,&local_28,param_2);
                  if (local_20 == 0) break;
                  iVar3 = FUN_00094aa4(*(undefined4 *)(local_14 + 0x2004),local_20);
                  if (iVar3 != 0) {
                    FUN_00093400(local_20);
                    FUN_00095b4c(2,"src/format.c",0x84,"zc_arraylist_add fail");
                    goto LAB_0008bba4;
                  }
                  local_c = local_28;
                }
                FUN_00095b4c(2,"src/format.c",0x7e,"zlog_spec_new fail");
              }
            }
            else {
              FUN_00095b4c(2,"src/format.c",0x70,"zc_str_replace_env fail");
            }
          }
          else {
            FUN_00095b4c(2,"src/format.c",0x69,"pattern is too long");
          }
        }
        else {
          FUN_00095b4c(2,"src/format.c",0x56,"the 1st char of pattern is not \", line+nread[%s]",
                       param_1 + local_24);
        }
      }
      else {
        FUN_00095b4c(2,"src/format.c",0x51,"format[%s], syntax wrong",param_1);
      }
LAB_0008bba4:
      FUN_0008b6e0(local_14);
    }
  }
  return (byte *)0x0;
}

