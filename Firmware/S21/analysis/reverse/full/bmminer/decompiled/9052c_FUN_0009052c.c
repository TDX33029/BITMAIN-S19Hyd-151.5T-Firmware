// FUN_0009052c @ 0009052c  size=5332  callers=2
// program: bmminer


char * FUN_0009052c(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  ushort **ppuVar4;
  int iVar5;
  FILE *pFVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_70c8;
  undefined4 uStack_70c4;
  undefined4 local_7068;
  undefined4 uStack_7064;
  byte *local_7060;
  undefined1 auStack_705c [4100];
  byte local_6058;
  byte local_6057 [4099];
  char local_5054 [4100];
  char cStack_4050;
  char acStack_404f [4099];
  byte local_304c;
  byte abStack_304b [4099];
  byte local_2048 [4100];
  undefined1 auStack_1044 [4100];
  int local_40;
  int local_3c;
  uint local_38;
  char *local_34;
  int local_30;
  char *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  byte *local_18;
  byte *local_14;
  
  local_24 = 0;
  local_28 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/rule.c",0x250,"line is null or 0");
    return (char *)0x0;
  }
  if (param_3 == 0) {
    FUN_00095b4c(2,"src/rule.c",0x251,"default_format is null or 0");
    return (char *)0x0;
  }
  if (param_4 == (int *)0x0) {
    FUN_00095b4c(2,"src/rule.c",0x252,"formats is null or 0");
    return (char *)0x0;
  }
  local_2c = calloc(1,0x2088);
  if (local_2c == (char *)0x0) {
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/rule.c",0x256,"calloc fail, errno[%d]",*piVar2);
    return (char *)0x0;
  }
  *(undefined4 *)(local_2c + 0x1028) = param_5;
  *(undefined4 *)(local_2c + 0x1868) = param_6;
  memset(auStack_1044,0,0x1001);
  local_28 = __isoc99_sscanf(param_1,"%s %n",auStack_1044,&local_40);
  if (local_28 != 1) {
    FUN_00095b4c(2,"src/rule.c",0x264,"sscanf [%s] fail, selector",param_1);
    goto LAB_00091a5c;
  }
  local_30 = param_1 + local_40;
  memset(local_2048,0,0x1001);
  memset(&local_304c,0,0x1001);
  local_28 = __isoc99_sscanf(auStack_1044," %[^.].%s",local_2048,&local_304c);
  if (local_28 != 2) {
    FUN_00095b4c(2,"src/rule.c",0x273,"sscanf [%s] fail, category or level is null",auStack_1044);
    goto LAB_00091a5c;
  }
  for (local_18 = local_2048; *local_18 != 0; local_18 = local_18 + 1) {
    ppuVar4 = __ctype_b_loc();
    if ((((((*ppuVar4)[*local_18] & 8) == 0) && (*local_18 != 0x5f)) && (*local_18 != 0x2d)) &&
       ((*local_18 != 0x2a && (*local_18 != 0x21)))) {
      FUN_00095b4c(2,"src/rule.c",0x27a,"category name[%s] character is not in [a-Z][0-9][_!*-]",
                   local_2048);
      goto LAB_00091a5c;
    }
  }
  strcpy(local_2c,(char *)local_2048);
  if (local_304c == 0x2a) {
    local_2c[0x1001] = '*';
    local_18 = &local_304c;
  }
  else if (local_304c == 0x3d) {
    local_2c[0x1001] = '=';
    local_18 = abStack_304b;
  }
  else if (local_304c == 0x21) {
    local_2c[0x1001] = '!';
    local_18 = abStack_304b;
  }
  else {
    local_2c[0x1001] = '.';
    local_18 = &local_304c;
  }
  uVar3 = FUN_0008c144(param_2,local_18);
  *(undefined4 *)(local_2c + 0x1004) = uVar3;
  switch(local_2c[0x1001]) {
  case '!':
    memset(local_2c + 0x1008,0xff,0x20);
    iVar8 = *(int *)(local_2c + 0x1004);
    iVar5 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    uVar1 = -*(uint *)(local_2c + 0x1004);
    uVar9 = *(uint *)(local_2c + 0x1004) & 7;
    if (-1 < (int)uVar1) {
      uVar9 = -(uVar1 & 7);
    }
    local_2c[(iVar5 >> 3) + 0x1008] =
         ~(byte)(1 << (7 - uVar9 & 0xff)) & local_2c[(iVar5 >> 3) + 0x1008];
    break;
  case '*':
    memset(local_2c + 0x1008,0xff,0x20);
    break;
  case '.':
    memset(local_2c + 0x1008,0,0x20);
    iVar8 = *(int *)(local_2c + 0x1004);
    iVar5 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    uVar1 = -*(uint *)(local_2c + 0x1004);
    uVar9 = *(uint *)(local_2c + 0x1004) & 7;
    if (-1 < (int)uVar1) {
      uVar9 = -(uVar1 & 7);
    }
    local_2c[(iVar5 >> 3) + 0x1008] =
         local_2c[(iVar5 >> 3) + 0x1008] | ~(byte)(0xff << (8 - uVar9 & 0xff));
    iVar8 = *(int *)(local_2c + 0x1004);
    iVar5 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    iVar10 = *(int *)(local_2c + 0x1004);
    iVar8 = iVar10 + 7;
    if (-1 < iVar10) {
      iVar8 = iVar10;
    }
    memset(local_2c + (iVar5 >> 3) + 0x1009,0xff,0x1f - (iVar8 >> 3));
    break;
  case '=':
    memset(local_2c + 0x1008,0,0x20);
    iVar8 = *(int *)(local_2c + 0x1004);
    iVar5 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    uVar1 = -*(uint *)(local_2c + 0x1004);
    uVar9 = *(uint *)(local_2c + 0x1004) & 7;
    if (-1 < (int)uVar1) {
      uVar9 = -(uVar1 & 7);
    }
    local_2c[(iVar5 >> 3) + 0x1008] =
         local_2c[(iVar5 >> 3) + 0x1008] | (byte)(1 << (7 - uVar9 & 0xff));
  }
  memset(&cStack_4050,0,0x1001);
  memset(local_5054,0,0x1001);
  local_28 = __isoc99_sscanf(local_30," %[^;];%s",&cStack_4050,local_5054);
  if (local_28 < 1) {
    FUN_00095b4c(2,"src/rule.c",700,"sscanf [%s] fail",local_30);
    goto LAB_00091a5c;
  }
  if (local_5054[0] == '\0') {
    FUN_00095b4c(0,"src/rule.c",0x2c2,"no format specified, use default");
    *(int *)(local_2c + 0x1878) = param_3;
  }
  else {
    local_20 = 0;
    local_1c = 0;
    local_34 = *(char **)*param_4;
    for (; local_1c < param_4[1]; local_1c = local_1c + 1) {
      local_34 = *(char **)(*param_4 + local_1c * 4);
      iVar5 = strcmp(local_34,local_5054);
      if (iVar5 == 0) {
        *(char **)(local_2c + 0x1878) = local_34;
        local_20 = 1;
        break;
      }
    }
    if (local_20 == 0) {
      FUN_00095b4c(2,"src/rule.c",0x2d2,"in conf file can\'t find format[%s], pls check",local_5054)
      ;
      goto LAB_00091a5c;
    }
  }
  memset(&local_6058,0,0x1001);
  local_28 = __isoc99_sscanf(&cStack_4050," %[^,],",&local_6058);
  if (local_28 < 1) {
    FUN_00095b4c(2,"src/rule.c",0x2de,"sscanf [%s] fail",local_30);
    goto LAB_00091a5c;
  }
  local_14 = (byte *)strchr(&cStack_4050,0x2c);
  if (local_14 != (byte *)0x0) {
    do {
      local_14 = local_14 + 1;
      ppuVar4 = __ctype_b_loc();
    } while (((*ppuVar4)[*local_14] & 0x2000) != 0);
  }
  local_18 = (byte *)0x0;
  if (local_6058 == 0x2d) {
    if (local_6057[0] != 0x22) {
      FUN_00095b4c(2,"src/rule.c",0x2ef," - must set before a file output");
      goto LAB_00091a5c;
    }
    local_2c[0x1868] = '\0';
    local_2c[0x1869] = '\0';
    local_2c[0x186a] = '\0';
    local_2c[0x186b] = '\0';
    local_18 = local_6057;
    *(undefined **)(local_2c + 0x102c) = &DAT_00101000;
LAB_0009107c:
    if (local_18 == (byte *)0x0) {
      local_18 = &local_6058;
    }
    local_24 = FUN_000902c0(local_18,local_2c + 0x1030,0x401,local_2c + 0x1434,param_7);
    if (local_24 == 0) {
      if (local_14 != (byte *)0x0) {
        memset(auStack_705c,0,0x1001);
        local_28 = __isoc99_sscanf(local_14," %[0-9MmKkBb] * %d ~",auStack_705c,local_2c + 0x1454);
        if (local_28 != 0) {
          uVar3 = FUN_00095de8(auStack_705c);
          *(undefined4 *)(local_2c + 0x1450) = uVar3;
        }
        local_18 = (byte *)strchr((char *)local_14,0x22);
        if (local_18 != (byte *)0x0) {
          local_24 = FUN_000902c0(local_18,local_2c + 0x1458,0x401,local_2c + 0x185c,param_7);
          if (local_24 != 0) {
            FUN_00095b4c(2,"src/rule.c",0x310,"zlog_rule_parse_path fail");
            goto LAB_00091a5c;
          }
          local_18 = (byte *)strchr(local_2c + 0x1458,0x23);
          if ((local_18 == (byte *)0x0) ||
             ((pcVar7 = strchr((char *)local_18,0x72), pcVar7 == (char *)0x0 &&
              (pcVar7 = strchr((char *)local_18,0x73), pcVar7 == (char *)0x0)))) {
            FUN_00095b4c(2,"src/rule.c",0x316,"archive_path must contain #r or #s");
            goto LAB_00091a5c;
          }
        }
      }
      if (*(int *)(local_2c + 0x1434) != 0) {
        if (*(int *)(local_2c + 0x1450) < 1) {
          *(code **)(local_2c + 0x187c) = FUN_0008f0a0;
        }
        else {
          *(code **)(local_2c + 0x187c) = FUN_0008f3f0;
        }
        return local_2c;
      }
      if (*(int *)(local_2c + 0x1450) < 1) {
        *(code **)(local_2c + 0x187c) = FUN_0008e76c;
      }
      else {
        *(code **)(local_2c + 0x187c) = FUN_0008ec98;
      }
      iVar5 = open64(local_2c + 0x1030,*(uint *)(local_2c + 0x102c) | 0x441,
                     *(undefined4 *)(local_2c + 0x1028));
      *(int *)(local_2c + 0x1438) = iVar5;
      if (*(int *)(local_2c + 0x1438) < 0) {
        pcVar7 = local_2c + 0x1030;
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/rule.c",0x331,"open file[%s] fail, errno[%d]",pcVar7,*piVar2);
      }
      else {
        iVar5 = FUN_0009916c(*(undefined4 *)(local_2c + 0x1438),&local_70c8);
        if (iVar5 == 0) {
          if (0 < *(int *)(local_2c + 0x1450)) {
            close(*(int *)(local_2c + 0x1438));
            local_2c[0x1438] = -1;
            local_2c[0x1439] = -1;
            local_2c[0x143a] = -1;
            local_2c[0x143b] = -1;
          }
          *(undefined4 *)(local_2c + 0x1440) = local_70c8;
          *(undefined4 *)(local_2c + 0x1444) = uStack_70c4;
          *(undefined4 *)(local_2c + 0x1448) = local_7068;
          *(undefined4 *)(local_2c + 0x144c) = uStack_7064;
          return local_2c;
        }
        pcVar7 = local_2c + 0x1030;
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/rule.c",0x337,"stat [%s] fail, errno[%d], failing to open static_fd",
                     pcVar7,*piVar2);
      }
    }
    else {
      FUN_00095b4c(2,"src/rule.c",0x2ff,"zlog_rule_parse_path fail");
    }
  }
  else {
    if (local_6058 < 0x2e) {
      if (local_6058 == 0x22) goto LAB_0009107c;
      if (local_6058 == 0x24) {
        __isoc99_sscanf(local_6057,&DAT_000abea8,local_2c + 0x1880);
        if (local_14 != (byte *)0x0) {
          local_18 = (byte *)strchr((char *)local_14,0x22);
          if (local_18 == (byte *)0x0) {
            FUN_00095b4c(2,"src/rule.c",0x36a,"record_path not start with \", [%s]",local_14);
            goto LAB_00091a5c;
          }
          local_18 = local_18 + 1;
          local_7060 = (byte *)strrchr((char *)local_18,0x22);
          if (local_7060 == (byte *)0x0) {
            FUN_00095b4c(2,"src/rule.c",0x371,"matching \" not found in conf line[%s]",local_18);
            goto LAB_00091a5c;
          }
          local_38 = (int)local_7060 - (int)local_18;
          if (0x400 < local_38) {
            FUN_00095b4c(2,"src/rule.c",0x376,"record_path too long %ld > %ld",local_38,0x400);
            goto LAB_00091a5c;
          }
          memcpy(local_2c + 0x1c81,local_18,local_38);
        }
        local_24 = FUN_000960c8(local_2c + 0x1c81,0x401);
        if (local_24 == 0) {
          pcVar7 = strchr(local_2c + 0x1c81,0x25);
          if (pcVar7 == (char *)0x0) {
            *(code **)(local_2c + 0x187c) = FUN_0008fa98;
            return local_2c;
          }
          *(code **)(local_2c + 0x187c) = FUN_0008fbe8;
          uVar3 = FUN_000946a4(FUN_00093400);
          *(undefined4 *)(local_2c + 0x1434) = uVar3;
          if (*(int *)(local_2c + 0x1434) == 0) {
            FUN_00095b4c(2,"src/rule.c",0x38d,"zc_arraylist_new fail");
          }
          else {
            local_18 = (byte *)(local_2c + 0x1c81);
            while( true ) {
              if (*local_18 == 0) {
                return local_2c;
              }
              local_3c = FUN_00093470(local_18,&local_7060,param_7);
              if (local_3c == 0) break;
              local_24 = FUN_00094aa4(*(undefined4 *)(local_2c + 0x1434),local_3c);
              if (local_24 != 0) {
                FUN_00093400(local_3c);
                FUN_00095b4c(2,"src/rule.c",0x39a,"zc_arraylist_add fail");
                goto LAB_00091a5c;
              }
              local_18 = local_7060;
            }
            FUN_00095b4c(2,"src/rule.c",0x393,"zlog_spec_new fail");
          }
        }
        else {
          FUN_00095b4c(2,"src/rule.c",0x37f,"zc_str_replace_env fail");
        }
        goto LAB_00091a5c;
      }
    }
    else {
      if (local_6058 == 0x3e) {
        iVar5 = strncmp((char *)local_6057,"syslog",6);
        if (iVar5 == 0) {
          uVar3 = FUN_0008ffe8(local_14);
          *(undefined4 *)(local_2c + 0x1874) = uVar3;
          if (*(int *)(local_2c + 0x1874) != -0xbb) {
            *(code **)(local_2c + 0x187c) = FUN_0008f9b4;
            openlog((char *)0x0,0x19,8);
            return local_2c;
          }
          FUN_00095b4c(2,"src/rule.c",0x355,"-187 get");
        }
        else {
          iVar5 = strncmp((char *)local_6057,"stdout",6);
          if (iVar5 == 0) {
            *(code **)(local_2c + 0x187c) = FUN_0008fe20;
            return local_2c;
          }
          iVar5 = strncmp((char *)local_6057,"stderr",6);
          if (iVar5 == 0) {
            *(code **)(local_2c + 0x187c) = FUN_0008ff04;
            return local_2c;
          }
          FUN_00095b4c(2,"src/rule.c",0x360,"[%s]the string after is not syslog, stdout or stderr",
                       &cStack_4050);
        }
        goto LAB_00091a5c;
      }
      if (local_6058 == 0x7c) {
        pFVar6 = popen(acStack_404f,"w");
        *(FILE **)(local_2c + 0x1860) = pFVar6;
        if (*(int *)(local_2c + 0x1860) == 0) {
          piVar2 = __errno_location();
          FUN_00095b4c(2,"src/rule.c",0x347,"popen fail, errno[%d]",*piVar2);
        }
        else {
          iVar5 = fileno(*(FILE **)(local_2c + 0x1860));
          *(int *)(local_2c + 0x1864) = iVar5;
          if (-1 < *(int *)(local_2c + 0x1864)) {
            *(code **)(local_2c + 0x187c) = FUN_0008f8c8;
            return local_2c;
          }
          piVar2 = __errno_location();
          FUN_00095b4c(2,"src/rule.c",0x34c,"fileno fail, errno[%d]",*piVar2);
        }
        goto LAB_00091a5c;
      }
    }
    FUN_00095b4c(2,"src/rule.c",0x3a2,"the 1st char[%c] of file_path[%s] is wrong",local_6058,
                 &local_6058);
  }
LAB_00091a5c:
  FUN_00091a74(local_2c);
  return (char *)0x0;
}

