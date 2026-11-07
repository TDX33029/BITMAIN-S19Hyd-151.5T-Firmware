// FUN_000623b0 @ 000623b0  size=4012  callers=2
// program: bmminer


char * FUN_000623b0(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char *__dest;
  int iVar2;
  ushort **ppuVar3;
  int iVar4;
  char *pcVar5;
  FILE *__stream;
  byte *pbVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  byte *pbVar10;
  size_t __n;
  uint uVar11;
  uint extraout_r3;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  char *pcVar17;
  int local_70b4;
  stat64 local_70b0;
  undefined1 auStack_7044 [4100];
  byte local_6040;
  byte local_603f [4099];
  char local_503c;
  char acStack_503b [4099];
  char cStack_4038;
  char acStack_4037 [4099];
  char local_3034 [4100];
  byte local_2030;
  byte local_202f [4099];
  undefined1 auStack_102c [4104];
  
  local_70b4 = 0;
  if (param_1 == 0) {
    FUN_000658a8(2,"src/rule.c",0x250,"line is null or 0");
    return (char *)0x0;
  }
  if (param_3 == 0) {
    FUN_000658a8(2,"src/rule.c",0x251,"default_format is null or 0");
    return (char *)0x0;
  }
  if (param_4 == (int *)0x0) {
    FUN_000658a8(2,"src/rule.c",0x252,"formats is null or 0");
    return (char *)0x0;
  }
  __dest = calloc(1,0x2088);
  if (__dest == (char *)0x0) {
    piVar9 = __errno_location();
    FUN_000658a8(2,"src/rule.c",0x256,"calloc fail, errno[%d]",*piVar9);
    return (char *)0x0;
  }
  *(undefined4 *)(__dest + 0x1028) = param_5;
  *(undefined4 *)(__dest + 0x1868) = param_6;
  memset(auStack_7044,0,0x1001);
  iVar2 = __isoc99_sscanf(param_1,"%s %n",auStack_7044,&local_70b4);
  if (iVar2 != 1) {
    FUN_000658a8(2,"src/rule.c",0x264,"sscanf [%s] fail, selector",param_1);
    goto LAB_000628f0;
  }
  param_1 = param_1 + local_70b4;
  memset(&local_6040,0,0x1001);
  memset(&local_503c,0,0x1001);
  iVar2 = __isoc99_sscanf(auStack_7044," %[^.].%s",&local_6040,&local_503c);
  if (iVar2 != 2) {
    FUN_000658a8(2,"src/rule.c",0x273,"sscanf [%s] fail, category or level is null",auStack_7044);
    goto LAB_000628f0;
  }
  uVar14 = (uint)local_6040;
  if (uVar14 != 0) {
    ppuVar3 = __ctype_b_loc();
    pbVar10 = &local_6040;
    uVar12 = extraout_r3;
    do {
      if (uVar14 != 0x2d && uVar14 != 0x5f) {
        uVar12 = 1;
      }
      if (uVar14 == 0x2d || uVar14 == 0x5f) {
        uVar12 = 0;
      }
      if (uVar14 == 0x2a) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar12 & 1;
      }
      if (uVar14 == 0x21) {
        uVar12 = 0;
      }
      if ((uVar12 & ((*ppuVar3)[uVar14] ^ 8) >> 3) != 0) {
        FUN_000658a8(2,"src/rule.c",0x27a,"category name[%s] character is not in [a-Z][0-9][_!*-]",
                     &local_6040);
        goto LAB_000628f0;
      }
      pbVar10 = pbVar10 + 1;
      uVar14 = (uint)*pbVar10;
      uVar12 = 0;
    } while (uVar14 != 0);
  }
  strcpy(__dest,(char *)&local_6040);
  if (local_503c == '*') {
    __dest[0x1001] = '*';
    pcVar17 = &local_503c;
  }
  else if ((local_503c == '=') || (local_503c == '!')) {
    __dest[0x1001] = local_503c;
    pcVar17 = acStack_503b;
  }
  else {
    pcVar17 = &local_503c;
    __dest[0x1001] = '.';
  }
  uVar14 = FUN_0005f6f8(param_2,pcVar17);
  *(uint *)(__dest + 0x1004) = uVar14;
  switch(__dest[0x1001]) {
  case '!':
    memset(__dest + 0x1008,0xff,0x20);
    uVar12 = uVar14 + 7;
    if (-1 < (int)uVar14) {
      uVar12 = uVar14;
    }
    uVar11 = uVar14 & 7;
    if (-1 < (int)-uVar14) {
      uVar11 = -(-uVar14 & 7);
    }
    __dest[((int)uVar12 >> 3) + 0x1008] =
         __dest[((int)uVar12 >> 3) + 0x1008] & ~(byte)(1 << (7 - uVar11 & 0xff));
    break;
  case '*':
    memset(__dest + 0x1008,0xff,0x20);
    break;
  case '.':
    memset(__dest + 0x1008,0,0x20);
    uVar12 = uVar14 + 7;
    if (-1 < (int)uVar14) {
      uVar12 = uVar14;
    }
    iVar2 = (int)uVar12 >> 3;
    uVar12 = uVar14 & 7;
    if (-1 < (int)-uVar14) {
      uVar12 = -(-uVar14 & 7);
    }
    __dest[iVar2 + 0x1008] = ~(byte)(0xff << (8 - uVar12 & 0xff)) | __dest[iVar2 + 0x1008];
    memset(__dest + 0x1008 + iVar2 + 1,0xff,0x1f - iVar2);
    break;
  case '=':
    memset(__dest + 0x1008,0,0x20);
    uVar12 = uVar14 + 7;
    if (-1 < (int)uVar14) {
      uVar12 = uVar14;
    }
    uVar11 = uVar14 & 7;
    if (-1 < (int)-uVar14) {
      uVar11 = -(-uVar14 & 7);
    }
    __dest[((int)uVar12 >> 3) + 0x1008] =
         __dest[((int)uVar12 >> 3) + 0x1008] | (byte)(1 << (7 - uVar11 & 0xff));
  }
  memset(&cStack_4038,0,0x1001);
  memset(local_3034,0,0x1001);
  iVar2 = __isoc99_sscanf(param_1," %[^;];%s",&cStack_4038,local_3034);
  if (iVar2 < 1) {
    FUN_000658a8(2,"src/rule.c",700,"sscanf [%s] fail",param_1);
    goto LAB_000628f0;
  }
  if (local_3034[0] != '\0') {
    iVar2 = param_4[1];
    if (0 < iVar2) {
      puVar16 = (undefined4 *)(*param_4 + -4);
      iVar15 = 0;
      do {
        puVar16 = puVar16 + 1;
        pcVar17 = (char *)*puVar16;
        iVar15 = iVar15 + 1;
        iVar4 = strcmp(pcVar17,local_3034);
        if (iVar4 == 0) {
          *(char **)(__dest + 0x1878) = pcVar17;
          goto LAB_000626fc;
        }
      } while (iVar15 != iVar2);
    }
    FUN_000658a8(2,"src/rule.c",0x2d2,"in conf file can\'t find format[%s], pls check",local_3034);
    goto LAB_000628f0;
  }
  FUN_000658a8(0,"src/rule.c",0x2c2,"no format specified, use default");
  *(int *)(__dest + 0x1878) = param_3;
LAB_000626fc:
  memset(&local_2030,0,0x1001);
  iVar2 = __isoc99_sscanf(&cStack_4038," %[^,],",&local_2030);
  if (iVar2 < 1) {
    FUN_000658a8(2,"src/rule.c",0x2de,"sscanf [%s] fail",param_1);
    goto LAB_000628f0;
  }
  pbVar10 = (byte *)strchr(&cStack_4038,0x2c);
  if (pbVar10 == (byte *)0x0) {
    pbVar10 = (byte *)0x0;
    if (local_2030 != 0x2d) {
      if (0x2d < local_2030) {
        if (local_2030 == 0x3e) {
          iVar2 = strncmp((char *)local_202f,"syslog",6);
          if (iVar2 == 0) {
            FUN_000658a8(2,"src/rule.c",0x1dd,"facility is null or 0");
            __dest[0x1874] = 'E';
            __dest[0x1875] = -1;
            __dest[0x1876] = -1;
            __dest[0x1877] = -1;
            FUN_000658a8(2,"src/rule.c",0x355,"-187 get");
            goto LAB_000628f0;
          }
          goto LAB_00062ac4;
        }
        goto LAB_00062a24;
      }
      pbVar10 = (byte *)0x0;
      if (local_2030 == 0x22) goto LAB_00062cfc;
      if (local_2030 == 0x24) {
        __isoc99_sscanf(local_202f,"%s",__dest + 0x1880);
        goto LAB_00062808;
      }
LAB_00062ccc:
      FUN_000658a8(2,"src/rule.c",0x3a2,"the 1st char[%c] of file_path[%s] is wrong",local_2030,
                   &local_2030);
      goto LAB_000628f0;
    }
LAB_00062b68:
    if (local_202f[0] != 0x22) {
      FUN_000658a8(2,"src/rule.c",0x2ef," - must set before a file output");
      goto LAB_000628f0;
    }
    pbVar6 = local_202f;
    *(undefined **)(__dest + 0x102c) = &DAT_00101000;
    __dest[0x1868] = '\0';
    __dest[0x1869] = '\0';
    __dest[0x186a] = '\0';
    __dest[0x186b] = '\0';
  }
  else {
    ppuVar3 = __ctype_b_loc();
    do {
      pbVar10 = pbVar10 + 1;
    } while (((*ppuVar3)[*pbVar10] & 0x2000) != 0);
    if (local_2030 == 0x2d) goto LAB_00062b68;
    if (0x2d < local_2030) {
      if (local_2030 == 0x3e) {
        iVar2 = strncmp((char *)local_202f,"syslog",6);
        if (iVar2 == 0) {
          iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL0");
          if (iVar2 == 0) {
            __dest[0x1874] = -0x80;
            __dest[0x1875] = '\0';
            __dest[0x1876] = '\0';
            __dest[0x1877] = '\0';
          }
          else {
            iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL1");
            if (iVar2 == 0) {
              __dest[0x1874] = -0x78;
              __dest[0x1875] = '\0';
              __dest[0x1876] = '\0';
              __dest[0x1877] = '\0';
            }
            else {
              iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL2");
              if (iVar2 == 0) {
                __dest[0x1874] = -0x70;
                __dest[0x1875] = '\0';
                __dest[0x1876] = '\0';
                __dest[0x1877] = '\0';
              }
              else {
                iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL3");
                if (iVar2 == 0) {
                  __dest[0x1874] = -0x68;
                  __dest[0x1875] = '\0';
                  __dest[0x1876] = '\0';
                  __dest[0x1877] = '\0';
                }
                else {
                  iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL4");
                  if (iVar2 == 0) {
                    __dest[0x1874] = -0x60;
                    __dest[0x1875] = '\0';
                    __dest[0x1876] = '\0';
                    __dest[0x1877] = '\0';
                  }
                  else {
                    iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL5");
                    if (iVar2 == 0) {
                      __dest[0x1874] = -0x58;
                      __dest[0x1875] = '\0';
                      __dest[0x1876] = '\0';
                      __dest[0x1877] = '\0';
                    }
                    else {
                      iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL6");
                      if (iVar2 == 0) {
                        __dest[0x1874] = -0x50;
                        __dest[0x1875] = '\0';
                        __dest[0x1876] = '\0';
                        __dest[0x1877] = '\0';
                      }
                      else {
                        iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL7");
                        if (iVar2 == 0) {
                          __dest[0x1874] = -0x48;
                          __dest[0x1875] = '\0';
                          __dest[0x1876] = '\0';
                          __dest[0x1877] = '\0';
                        }
                        else {
                          iVar2 = strcasecmp((char *)pbVar10,"LOG_USER");
                          if (iVar2 == 0) {
                            __dest[0x1874] = '\b';
                            __dest[0x1875] = '\0';
                            __dest[0x1876] = '\0';
                            __dest[0x1877] = '\0';
                          }
                          else {
                            iVar2 = strcasecmp((char *)pbVar10,"LOG_AUTHPRIV");
                            if (iVar2 != 0) {
                              iVar2 = strcasecmp((char *)pbVar10,"LOG_CRON");
                              if (iVar2 == 0) {
                                __dest[0x1874] = 'H';
                                __dest[0x1875] = '\0';
                                __dest[0x1876] = '\0';
                                __dest[0x1877] = '\0';
                                goto LAB_000630d4;
                              }
                              iVar2 = strcasecmp((char *)pbVar10,"LOG_DAEMON");
                              if (iVar2 == 0) {
                                __dest[0x1874] = '\x18';
                                __dest[0x1875] = '\0';
                                __dest[0x1876] = '\0';
                                __dest[0x1877] = '\0';
                                goto LAB_000630d4;
                              }
                              iVar2 = strcasecmp((char *)pbVar10,"LOG_FTP");
                              if (iVar2 == 0) {
                                __dest[0x1874] = 'X';
                                __dest[0x1875] = '\0';
                                __dest[0x1876] = '\0';
                                __dest[0x1877] = '\0';
                                goto LAB_000630d4;
                              }
                              iVar2 = strcasecmp((char *)pbVar10,"LOG_KERN");
                              if (iVar2 == 0) {
                                __dest[0x1874] = '\0';
                                __dest[0x1875] = '\0';
                                __dest[0x1876] = '\0';
                                __dest[0x1877] = '\0';
                                goto LAB_000630d4;
                              }
                              iVar2 = strcasecmp((char *)pbVar10,"LOG_LPR");
                              if (iVar2 == 0) {
                                __dest[0x1874] = '0';
                                __dest[0x1875] = '\0';
                                __dest[0x1876] = '\0';
                                __dest[0x1877] = '\0';
                                goto LAB_000630d4;
                              }
                              iVar2 = strcasecmp((char *)pbVar10,"LOG_MAIL");
                              if (iVar2 == 0) {
                                __dest[0x1874] = '\x10';
                                __dest[0x1875] = '\0';
                                __dest[0x1876] = '\0';
                                __dest[0x1877] = '\0';
                                goto LAB_000630d4;
                              }
                              iVar2 = strcasecmp((char *)pbVar10,"LOG_NEWS");
                              if (iVar2 == 0) {
                                __dest[0x1874] = '8';
                                __dest[0x1875] = '\0';
                                __dest[0x1876] = '\0';
                                __dest[0x1877] = '\0';
                                goto LAB_000630d4;
                              }
                              iVar2 = strcasecmp((char *)pbVar10,"LOG_SYSLOG");
                              if (iVar2 == 0) {
                                __dest[0x1874] = '(';
                                __dest[0x1875] = '\0';
                                __dest[0x1876] = '\0';
                                __dest[0x1877] = '\0';
                                goto LAB_000630d4;
                              }
                            }
                            __dest[0x1874] = 'P';
                            __dest[0x1875] = '\0';
                            __dest[0x1876] = '\0';
                            __dest[0x1877] = '\0';
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_000630d4:
          *(code **)(__dest + 0x187c) = FUN_00061954;
          openlog((char *)0x0,0x19,8);
          return __dest;
        }
LAB_00062ac4:
        iVar2 = strncmp((char *)local_202f,"stdout",6);
        if (iVar2 == 0) {
          *(undefined **)(__dest + 0x187c) = &DAT_0006180c;
          return __dest;
        }
        iVar2 = strncmp((char *)local_202f,"stderr",6);
        if (iVar2 == 0) {
          *(undefined **)(__dest + 0x187c) = &DAT_00061768;
          return __dest;
        }
        FUN_000658a8(2,"src/rule.c",0x360,"[%s]the string after is not syslog, stdout or stderr",
                     &cStack_4038);
        goto LAB_000628f0;
      }
LAB_00062a24:
      if (local_2030 == 0x7c) {
        __stream = popen(acStack_4037,"w");
        *(FILE **)(__dest + 0x1860) = __stream;
        if (__stream == (FILE *)0x0) {
          piVar9 = __errno_location();
          FUN_000658a8(2,"src/rule.c",0x347,"popen fail, errno[%d]",*piVar9);
        }
        else {
          iVar2 = fileno(__stream);
          *(int *)(__dest + 0x1864) = iVar2;
          if (-1 < iVar2) {
            *(code **)(__dest + 0x187c) = FUN_000618b0;
            return __dest;
          }
          piVar9 = __errno_location();
          FUN_000658a8(2,"src/rule.c",0x34c,"fileno fail, errno[%d]",*piVar9);
        }
        goto LAB_000628f0;
      }
      goto LAB_00062ccc;
    }
    if (local_2030 != 0x22) {
      if (local_2030 == 0x24) {
        __isoc99_sscanf(local_202f,"%s",__dest + 0x1880);
        pcVar17 = strchr((char *)pbVar10,0x22);
        if (pcVar17 == (char *)0x0) {
          FUN_000658a8(2,"src/rule.c",0x36a,"record_path not start with \", [%s]",pbVar10);
          goto LAB_000628f0;
        }
        pcVar17 = pcVar17 + 1;
        local_70b0.st_dev._0_4_ = strrchr(pcVar17,0x22);
        if ((char *)local_70b0.st_dev == (char *)0x0) {
          FUN_000658a8(2,"src/rule.c",0x371,"matching \" not found in conf line[%s]",pcVar17);
          goto LAB_000628f0;
        }
        __n = (int)(char *)local_70b0.st_dev - (int)pcVar17;
        if (0x400 < __n) {
          FUN_000658a8(2,"src/rule.c",0x376,"record_path too long %ld > %ld",__n,0x400);
          goto LAB_000628f0;
        }
        memcpy(__dest + 0x1c81,pcVar17,__n);
LAB_00062808:
        pcVar17 = __dest + 0x1c81;
        iVar2 = FUN_00065c20(pcVar17,0x401);
        if (iVar2 == 0) {
          pcVar5 = strchr(pcVar17,0x25);
          if (pcVar5 == (char *)0x0) {
            *(code **)(__dest + 0x187c) = FUN_00060ed4;
            return __dest;
          }
          *(code **)(__dest + 0x187c) = FUN_000615e8;
          iVar2 = FUN_00064dd4(FUN_00064008);
          *(int *)(__dest + 0x1434) = iVar2;
          if (iVar2 == 0) {
            FUN_000658a8(2,"src/rule.c",0x38d,"zc_arraylist_new fail");
          }
          else {
            cVar1 = __dest[0x1c81];
            while( true ) {
              if (cVar1 == '\0') {
                return __dest;
              }
              iVar2 = FUN_0006406c(pcVar17,&local_70b0,param_7);
              if (iVar2 == 0) break;
              iVar15 = FUN_00064fa8(*(undefined4 *)(__dest + 0x1434),iVar2);
              if (iVar15 != 0) {
                FUN_00064008(iVar2);
                FUN_000658a8(2,"src/rule.c",0x39a,"zc_arraylist_add fail");
                goto LAB_000628f0;
              }
              cVar1 = *(char *)local_70b0.st_dev;
              pcVar17 = (char *)local_70b0.st_dev;
            }
            FUN_000658a8(2,"src/rule.c",0x393,"zlog_spec_new fail");
          }
        }
        else {
          FUN_000658a8(2,"src/rule.c",0x37f,"zc_str_replace_env fail");
        }
        goto LAB_000628f0;
      }
      goto LAB_00062ccc;
    }
LAB_00062cfc:
    pbVar6 = &local_2030;
  }
  pcVar17 = __dest + 0x1030;
  iVar2 = FUN_00061f80(pbVar6,pcVar17,__dest + 0x1434,param_7);
  if (iVar2 != 0) {
    FUN_000658a8(2,"src/rule.c",0x2ff,"zlog_rule_parse_path fail");
    goto LAB_000628f0;
  }
  if (pbVar10 != (byte *)0x0) {
    memset(auStack_102c,0,0x1001);
    iVar2 = __isoc99_sscanf(pbVar10," %[0-9MmKkBb] * %d ~",auStack_102c,__dest + 0x1454);
    if (iVar2 != 0) {
      uVar8 = FUN_00065a50(auStack_102c);
      *(undefined4 *)(__dest + 0x1450) = uVar8;
    }
    pcVar5 = strchr((char *)pbVar10,0x22);
    if (pcVar5 != (char *)0x0) {
      iVar2 = FUN_00061f80(pcVar5,__dest + 0x1458,__dest + 0x185c,param_7);
      if (iVar2 != 0) {
        FUN_000658a8(2,"src/rule.c",0x310,"zlog_rule_parse_path fail");
        goto LAB_000628f0;
      }
      pcVar5 = strchr(__dest + 0x1458,0x23);
      if ((pcVar5 == (char *)0x0) ||
         ((pcVar7 = strchr(pcVar5,0x72), pcVar7 == (char *)0x0 &&
          (pcVar5 = strchr(pcVar5,0x73), pcVar5 == (char *)0x0)))) {
        FUN_000658a8(2,"src/rule.c",0x316,"archive_path must contain #r or #s");
        goto LAB_000628f0;
      }
    }
  }
  if (*(int *)(__dest + 0x1434) != 0) {
    if (*(int *)(__dest + 0x1450) < 1) {
      pcVar13 = FUN_000619e8;
    }
    else {
      pcVar13 = FUN_00061c20;
    }
    *(code **)(__dest + 0x187c) = pcVar13;
    return __dest;
  }
  if (*(int *)(__dest + 0x1450) < 1) {
    pcVar13 = FUN_00060fc4;
  }
  else {
    pcVar13 = FUN_00061320;
  }
  *(code **)(__dest + 0x187c) = pcVar13;
  iVar2 = open64(pcVar17,*(uint *)(__dest + 0x102c) | 0x441,*(undefined4 *)(__dest + 0x1028));
  *(int *)(__dest + 0x1438) = iVar2;
  if (iVar2 < 0) {
    piVar9 = __errno_location();
    FUN_000658a8(2,"src/rule.c",0x331,"open file[%s] fail, errno[%d]",pcVar17,*piVar9);
  }
  else {
    iVar2 = __fxstat64(3,iVar2,&local_70b0);
    if (iVar2 == 0) {
      if (0 < *(int *)(__dest + 0x1450)) {
        close(*(int *)(__dest + 0x1438));
        __dest[0x1438] = -1;
        __dest[0x1439] = -1;
        __dest[0x143a] = -1;
        __dest[0x143b] = -1;
      }
      *(char **)(__dest + 0x1440) = (char *)local_70b0.st_dev;
      *(undefined4 *)(__dest + 0x1444) = local_70b0.st_dev._4_4_;
      *(undefined4 *)(__dest + 0x1448) = (undefined4)local_70b0.st_ino;
      *(undefined4 *)(__dest + 0x144c) = local_70b0.st_ino._4_4_;
      return __dest;
    }
    piVar9 = __errno_location();
    FUN_000658a8(2,"src/rule.c",0x337,"stat [%s] fail, errno[%d], failing to open static_fd",pcVar17
                 ,*piVar9);
  }
LAB_000628f0:
  FUN_00062290(__dest);
  return (char *)0x0;
}

