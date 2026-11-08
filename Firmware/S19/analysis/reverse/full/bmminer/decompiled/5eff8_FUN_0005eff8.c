// FUN_0005eff8 @ 0005eff8  size=824  callers=2
// program: bmminer


byte * FUN_0005eff8(char *param_1,undefined4 param_2)

{
  byte bVar1;
  byte *__s;
  int iVar2;
  ushort **ppuVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  char *__s_00;
  byte *local_24 [2];
  
  if (param_1 == (char *)0x0) {
    FUN_000658a8(2,"src/format.c",0x41,"line is null or 0");
  }
  else {
    __s = calloc(1,0x2008);
    if (__s == (byte *)0x0) {
      piVar6 = __errno_location();
      FUN_000658a8(2,"src/format.c",0x45,"calloc fail, errno[%d]",*piVar6);
    }
    else {
      memset(__s,0,0x1001);
      iVar2 = __isoc99_sscanf(param_1," %[^= \t] = %n",__s);
      if (iVar2 == 1) {
        if (*param_1 == '\"') {
          uVar8 = (uint)*__s;
          if (uVar8 != 0) {
            ppuVar3 = __ctype_b_loc();
            pbVar7 = __s;
            do {
              if (((uint)(uVar8 != 0x5f) & ((*ppuVar3)[uVar8] ^ 8) >> 3) != 0) {
                FUN_000658a8(2,"src/format.c",0x5c,
                             "a_format->name[%s] character is not in [a-Z][0-9][_]",__s);
                goto LAB_0005f1bc;
              }
              pbVar7 = pbVar7 + 1;
              uVar8 = (uint)*pbVar7;
            } while (uVar8 != 0);
          }
          __s_00 = param_1 + 1;
          pcVar4 = strrchr(__s_00,0x22);
          if (pcVar4 == (char *)0x0) {
            FUN_000658a8(2,"src/format.c",100,"there is no \" at end of pattern, line[%s]",param_1);
          }
          else if ((uint)((int)pcVar4 - (int)__s_00) < 0x1001) {
            pbVar7 = __s + 0x1001;
            memset(pbVar7,0,0x1001);
            memcpy(pbVar7,__s_00,(int)pcVar4 - (int)__s_00);
            iVar2 = FUN_00065c20(pbVar7,0x1001);
            if (iVar2 == 0) {
              iVar2 = FUN_00064dd4(FUN_00064008);
              *(int *)(__s + 0x2004) = iVar2;
              if (iVar2 == 0) {
                FUN_000658a8(2,"src/format.c",0x77,"zc_arraylist_new fail");
              }
              else {
                bVar1 = __s[0x1001];
                while( true ) {
                  if (bVar1 == 0) {
                    FUN_0005ef10(__s,0);
                    return __s;
                  }
                  iVar2 = FUN_0006406c(pbVar7,local_24,param_2);
                  if (iVar2 == 0) break;
                  iVar5 = FUN_00064fa8(*(undefined4 *)(__s + 0x2004),iVar2);
                  if (iVar5 != 0) {
                    FUN_00064008(iVar2);
                    FUN_000658a8(2,"src/format.c",0x84,"zc_arraylist_add fail");
                    goto LAB_0005f1bc;
                  }
                  bVar1 = *local_24[0];
                  pbVar7 = local_24[0];
                }
                FUN_000658a8(2,"src/format.c",0x7e,"zlog_spec_new fail");
              }
            }
            else {
              FUN_000658a8(2,"src/format.c",0x70,"zc_str_replace_env fail");
            }
          }
          else {
            FUN_000658a8(2,"src/format.c",0x69,"pattern is too long");
          }
        }
        else {
          FUN_000658a8(2,"src/format.c",0x56,"the 1st char of pattern is not \", line+nread[%s]",
                       param_1);
        }
      }
      else {
        FUN_000658a8(2,"src/format.c",0x51,"format[%s], syntax wrong",param_1);
      }
LAB_0005f1bc:
      FUN_0005ef80(__s);
    }
  }
  return (byte *)0x0;
}

