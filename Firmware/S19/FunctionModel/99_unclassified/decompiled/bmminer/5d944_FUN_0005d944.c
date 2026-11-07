// FUN_0005d944 @ 0005d944  size=2808  callers=1
// program: bmminer


undefined4 FUN_0005d944(char *param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  FILE *__stream;
  char *pcVar4;
  size_t sVar5;
  ushort **ppuVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  uint uVar18;
  uint local_60e8;
  undefined4 local_60e4;
  int local_60d8;
  tm tStack_60d4;
  stat64 sStack_60a8;
  byte local_6040 [4100];
  char acStack_503c [4100];
  char acStack_4038 [4100];
  char local_3034;
  char local_3033;
  char local_3032;
  char local_3031;
  char acStack_2030 [4100];
  char acStack_102c [4104];
  
  iVar3 = __lxstat64(3,param_1,&sStack_60a8);
  if (iVar3 == 0) {
    localtime_r(&sStack_60a8.st_mtim.tv_sec,&tStack_60d4);
    strftime(param_1 + 0x401,0x15,"%F %T",&tStack_60d4);
    __stream = fopen64(param_1,"r");
    if (__stream == (FILE *)0x0) {
      local_60e4 = 0xffffffff;
      FUN_000658a8(2,"src/conf.c",0xf5,"open configure file[%s] fail",param_1);
    }
    else {
      memset(local_6040,0,0x1001);
      pcVar14 = param_1 + 0x244c;
      iVar3 = 0;
      iVar16 = 0;
      local_60e8 = 0;
      pbVar13 = local_6040;
LAB_0005d9ec:
      pcVar4 = fgets((char *)pbVar13,0x1001 - iVar16,__stream);
      local_60e4 = 0;
      if (pcVar4 != (char *)0x0) {
        iVar3 = iVar3 + 1;
        sVar5 = strlen((char *)pbVar13);
        if (pbVar13[sVar5 - 1] == 10) {
          pbVar13[sVar5 - 1] = 0;
        }
        uVar18 = (uint)*pbVar13;
        if (uVar18 != 0) {
          ppuVar6 = __ctype_b_loc();
          puVar17 = *ppuVar6;
          pbVar12 = pbVar13;
LAB_0005da50:
          uVar15 = puVar17[uVar18] & 0x2000;
          if ((puVar17[uVar18] & 0x2000) != 0) goto LAB_0005da44;
          if (uVar18 == 0x23) goto LAB_0005d9ec;
          bVar11 = *pbVar12;
          pbVar7 = pbVar13;
          if (bVar11 != 0) {
            pbVar7 = pbVar13 + -1;
            do {
              pbVar7 = pbVar7 + 1;
              *pbVar7 = bVar11;
              uVar15 = uVar15 + 1;
              pbVar12 = pbVar12 + 1;
              bVar11 = *pbVar12;
            } while (bVar11 != 0);
            pbVar7 = pbVar13 + uVar15;
          }
          *pbVar7 = 0;
          sVar5 = strlen((char *)pbVar13);
          pbVar13 = pbVar13 + (sVar5 - 1);
          while( true ) {
            pbVar12 = pbVar13 + -1;
            if ((puVar17[*pbVar13] & 0x2000) == 0) break;
            pbVar13 = pbVar12;
          }
          if ((*pbVar13 != 0x5c) || (0xfe2 < (int)pbVar13 - (int)local_6040)) {
            bVar2 = false;
            pbVar13[1] = 0;
            if (local_6040[0] == 0) {
              sVar5 = strlen((char *)local_6040);
              if (0x1000 < sVar5) goto LAB_0005e1ec;
LAB_0005db84:
              switch(local_60e8) {
              case 1:
                memset(acStack_503c,0,0x1001);
                memset(acStack_102c,0,0x1001);
                iVar16 = __isoc99_sscanf(local_6040," %[^=]= %s ",acStack_503c,acStack_102c);
                if (iVar16 == 2) {
                  memset(acStack_4038,0,0x1001);
                  memset(&local_3034,0,0x1001);
                  memset(acStack_2030,0,0x1001);
                  local_60d8 = 0;
                  __isoc99_sscanf(acStack_503c,"%s%n%s%s",acStack_4038,&local_60d8,&local_3034,
                                  acStack_2030);
                  iVar16 = strcmp(acStack_4038,"strict");
                  if ((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"init"), iVar16 == 0)) {
                    iVar16 = strcasecmp(acStack_102c,"false");
                    if ((iVar16 == 0) &&
                       (pcVar4 = getenv("ZLOG_STRICT_INIT"), pcVar4 == (char *)0x0)) {
                      param_1[0x418] = '\0';
                      param_1[0x419] = '\0';
                      param_1[0x41a] = '\0';
                      param_1[0x41b] = '\0';
                      iVar16 = 0;
                      pbVar13 = local_6040;
                    }
                    else {
                      param_1[0x418] = '\x01';
                      param_1[0x419] = '\0';
                      param_1[0x41a] = '\0';
                      param_1[0x41b] = '\0';
                      iVar16 = 0;
                      pbVar13 = local_6040;
                    }
                    goto LAB_0005d9ec;
                  }
                  iVar16 = strcmp(acStack_4038,"buffer");
                  if ((iVar16 == 0) && (local_3034 == 'm')) {
                    if (local_3033 == 'i') {
                      if ((local_3032 == 'n') && (local_3031 == '\0')) {
                        uVar9 = FUN_00065a50(acStack_102c);
                        *(undefined4 *)(param_1 + 0x41c) = uVar9;
                        iVar16 = 0;
                        pbVar13 = local_6040;
                        goto LAB_0005d9ec;
                      }
                    }
                    else if (((local_3033 == 'a') && (local_3032 == 'x')) && (local_3031 == '\0')) {
                      uVar9 = FUN_00065a50(acStack_102c);
                      *(undefined4 *)(param_1 + 0x420) = uVar9;
                      iVar16 = 0;
                      pbVar13 = local_6040;
                      goto LAB_0005d9ec;
                    }
                  }
                  iVar16 = strcmp(acStack_4038,"file");
                  if ((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"perms"), iVar16 == 0)) {
                    __isoc99_sscanf(acStack_102c,&DAT_000748bc,param_1 + 0x2434);
                    iVar16 = 0;
                    pbVar13 = local_6040;
                    goto LAB_0005d9ec;
                  }
                  iVar16 = strcmp(acStack_4038,"rotate");
                  if (((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"lock"), iVar16 == 0)) &&
                     (iVar16 = strcmp(acStack_2030,"file"), iVar16 == 0)) {
                    iVar16 = strcmp(acStack_102c,"self");
                    if (iVar16 == 0) {
                      strcpy(param_1 + 0x424,param_1);
                      iVar16 = 0;
                      pbVar13 = local_6040;
                    }
                    else {
                      strcpy(param_1 + 0x424,acStack_102c);
                      iVar16 = 0;
                      pbVar13 = local_6040;
                    }
                    goto LAB_0005d9ec;
                  }
                  iVar16 = strcmp(acStack_4038,"default");
                  if ((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"format"), iVar16 == 0)) {
                    strcpy(param_1 + 0x142c,(char *)(local_6040 + local_60d8));
                    iVar16 = 0;
                    pbVar13 = local_6040;
                    goto LAB_0005d9ec;
                  }
                  iVar16 = strcmp(acStack_4038,"reload");
                  if (((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"conf"), iVar16 == 0)) &&
                     (iVar16 = strcmp(acStack_2030,"period"), iVar16 == 0)) {
                    uVar9 = FUN_00065a50(acStack_102c);
                    *(undefined4 *)(param_1 + 0x243c) = uVar9;
                    iVar16 = 0;
                    pbVar13 = local_6040;
                    goto LAB_0005d9ec;
                  }
                  iVar16 = strcmp(acStack_4038,"fsync");
                  if ((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"period"), iVar16 == 0)) {
                    uVar9 = FUN_00065a50(acStack_102c);
                    *(undefined4 *)(param_1 + 0x2438) = uVar9;
                    iVar16 = 0;
                    pbVar13 = local_6040;
                    goto LAB_0005d9ec;
                  }
                  FUN_000658a8(2,"src/conf.c",0x1c6,"name[%s] is not any one of global options",
                               acStack_503c);
                  if (*(int *)(param_1 + 0x418) == 0) goto LAB_0005df58;
                }
                else {
                  FUN_000658a8(2,"src/conf.c",0x19c,"sscanf [%s] fail, name or value is null",
                               local_6040);
                }
                break;
              case 2:
                iVar16 = FUN_0005f494(*(undefined4 *)(param_1 + 0x2440),local_6040);
                if (iVar16 == 0) goto LAB_0005dcb0;
                FUN_000658a8(2,"src/conf.c",0x1cc,"zlog_level_list_set fail");
                if (*(int *)(param_1 + 0x418) == 0) {
                  iVar16 = 0;
                  pbVar13 = local_6040;
                  goto LAB_0005d9ec;
                }
                break;
              case 3:
                iVar16 = FUN_0005eff8(local_6040,pcVar14);
                if (iVar16 == 0) {
                  FUN_000658a8(2,"src/conf.c",0x1d3,"zlog_format_new fail [%s]",local_6040);
                  if (*(int *)(param_1 + 0x418) == 0) goto LAB_0005dcb0;
                }
                else {
                  iVar8 = FUN_00064fa8(*(undefined4 *)(param_1 + 0x2444),iVar16);
                  if (iVar8 == 0) {
LAB_0005dcb0:
                    iVar16 = 0;
                    pbVar13 = local_6040;
                    goto LAB_0005d9ec;
                  }
                  FUN_0005ef80(iVar16);
                  FUN_000658a8(2,"src/conf.c",0x1d9,"zc_arraylist_add fail");
                }
                break;
              case 4:
                iVar16 = FUN_000623b0(local_6040,*(undefined4 *)(param_1 + 0x2440),
                                      *(undefined4 *)(param_1 + 0x2430),
                                      *(undefined4 *)(param_1 + 0x2444),
                                      *(undefined4 *)(param_1 + 0x2434),
                                      *(undefined4 *)(param_1 + 0x2438),pcVar14);
                if (iVar16 == 0) {
                  FUN_000658a8(2,"src/conf.c",0x1e7,"zlog_rule_new fail [%s]",local_6040);
                  if (*(int *)(param_1 + 0x418) == 0) goto LAB_0005dc70;
                }
                else {
                  iVar8 = FUN_00064fa8(*(undefined4 *)(param_1 + 0x2448),iVar16);
                  if (iVar8 == 0) {
LAB_0005dc70:
                    local_60e8 = 4;
                    iVar16 = 0;
                    pbVar13 = local_6040;
                    goto LAB_0005d9ec;
                  }
                  FUN_00062290(iVar16);
                  FUN_000658a8(2,"src/conf.c",0x1ed,"zc_arraylist_add fail");
                }
                break;
              default:
                FUN_000658a8(2,"src/conf.c",0x1f2,"not in any section");
              }
            }
            else {
              pbVar13 = local_6040;
              bVar11 = local_6040[0];
              do {
                if (bVar11 != 0x22) {
                  if ((bVar11 != 0x23) || (bVar2)) goto LAB_0005db3c;
                  *pbVar13 = 0;
                  break;
                }
                bVar2 = (bool)(bVar2 ^ 1);
LAB_0005db3c:
                pbVar13 = pbVar13 + 1;
                bVar11 = *pbVar13;
              } while (bVar11 != 0);
              sVar5 = strlen((char *)local_6040);
              if (sVar5 < 0x1001) {
                if (local_6040[0] != 0x5b) goto LAB_0005db84;
                __isoc99_sscanf(local_6040,&DAT_0007474c,acStack_503c);
                iVar16 = strcmp(acStack_503c,"global");
                if (iVar16 != 0) {
                  iVar16 = strcmp(acStack_503c,"levels");
                  if (iVar16 == 0) {
                    if (local_60e8 < 2) {
                      local_60e8 = 2;
                      goto LAB_0005dcb0;
                    }
                  }
                  else {
                    iVar16 = strcmp(acStack_503c,"formats");
                    if (iVar16 != 0) {
                      iVar16 = strcmp(acStack_503c,"rules");
                      if (iVar16 == 0) {
                        if (local_60e8 == 4) goto LAB_0005e3b0;
                        if ((*(uint *)(param_1 + 0x243c) != 0) &&
                           (*(uint *)(param_1 + 0x243c) <= *(uint *)(param_1 + 0x2438))) {
                          FUN_000658a8(1,"src/conf.c",0x17e,
                                       "fsync_period[%ld] >= reload_conf_period[%ld],set fsync_period to zero"
                                      );
                          param_1[0x2438] = '\0';
                          param_1[0x2439] = '\0';
                          param_1[0x243a] = '\0';
                          param_1[0x243b] = '\0';
                        }
                        iVar16 = FUN_00060148(param_1 + 0x424);
                        *(int *)(param_1 + 0x1428) = iVar16;
                        if (iVar16 == 0) {
                          FUN_000658a8(2,"src/conf.c",0x187,"zlog_rotater_new fail");
                        }
                        else {
                          iVar16 = FUN_0005eff8(param_1 + 0x142c,pcVar14);
                          *(int *)(param_1 + 0x2430) = iVar16;
                          if (iVar16 != 0) goto LAB_0005dc70;
                          FUN_000658a8(2,"src/conf.c",0x18e,"zlog_format_new fail");
                        }
                      }
                      else {
                        FUN_000658a8(2,"src/conf.c",0x16b,"wrong section name[%s]",acStack_503c);
                      }
                      goto LAB_0005dbc4;
                    }
                    if (local_60e8 < 3) {
                      local_60e8 = 3;
                      goto LAB_0005dcb0;
                    }
                  }
LAB_0005e3b0:
                  FUN_000658a8(2,"src/conf.c",0x170,
                               "wrong sequence of section, must follow global->levels->formats->rules"
                              );
                  goto LAB_0005dbc4;
                }
                if (local_60e8 != 0) goto LAB_0005e3b0;
LAB_0005df58:
                local_60e8 = 1;
                iVar16 = 0;
                pbVar13 = local_6040;
                goto LAB_0005d9ec;
              }
LAB_0005e1ec:
              FUN_000658a8(2,"src/conf.c",0x15a,
                           "line_len[%ld] > MAXLEN_CFG_LINE[%ld], may cause overflow",sVar5,0x1000);
            }
LAB_0005dbc4:
            FUN_000658a8(2,"src/conf.c",0x13a,"parse configure file[%s]line_no[%ld] fail",param_1,
                         iVar3);
            local_60e4 = 0xffffffff;
            FUN_000658a8(2,"src/conf.c",0x13b,"line[%s]",local_6040);
            goto LAB_0005dc10;
          }
          uVar1 = puVar17[pbVar13[-1]];
          while ((uVar1 & 0x2000) != 0) {
            pbVar12 = pbVar12 + -1;
            uVar1 = puVar17[*pbVar12];
          }
          iVar16 = (int)(pbVar12 + 1) - (int)local_6040;
          pbVar12[1] = 0;
          pbVar13 = pbVar12 + 1;
        }
        goto LAB_0005d9ec;
      }
LAB_0005dc10:
      fclose(__stream);
    }
  }
  else {
    piVar10 = __errno_location();
    local_60e4 = 0xffffffff;
    FUN_000658a8(2,"src/conf.c",0xee,"lstat conf file[%s] fail, errno[%d]",param_1,*piVar10);
  }
  return local_60e4;
LAB_0005da44:
  pbVar12 = pbVar12 + 1;
  uVar18 = (uint)*pbVar12;
  if (uVar18 == 0) goto LAB_0005d9ec;
  goto LAB_0005da50;
}

