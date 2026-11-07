// FUN_00023668 @ 00023668  size=4452  callers=1
// program: cgminer


uint FUN_00023668(int *param_1,undefined4 param_2)

{
  timeval *ptVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  size_t sVar6;
  int iVar7;
  void *__ptr;
  undefined4 uVar8;
  byte *pbVar10;
  byte *pbVar9;
  byte bVar11;
  int iVar12;
  char *param3;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined4 auStackY_b80 [128];
  undefined1 auStack_968 [4];
  char *local_964;
  char *local_960;
  int local_95c;
  int *local_958;
  pthread_mutex_t *local_954;
  char *local_950;
  int *local_94c;
  int *local_948;
  int *local_944;
  int *local_940;
  byte *local_93c;
  char *local_938;
  uint local_934;
  timeval *local_930;
  char *local_92c;
  char *local_928;
  char *local_924;
  char *local_920;
  char *local_91c;
  char *local_918;
  char *local_914;
  timeval local_90c [28];
  char local_828 [32];
  uint local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined2 uStack_7f4;
  undefined1 local_7f2;
  
  piVar2 = (int *)FUN_00049034(param_2,4);
  if ((piVar2 == (int *)0x0) || (*piVar2 != 1)) {
    return 0;
  }
  iVar3 = FUN_00049018();
  if (iVar3 < 1) {
    uVar14 = 0;
  }
  else {
    iVar13 = 0;
    uVar14 = 0;
    do {
      memset(local_90c,0,0x20);
      pcVar4 = (char *)FUN_0001f3c4(piVar2,iVar13);
      if (pcVar4 == (char *)0x0) {
        return uVar14;
      }
      uVar14 = FUN_0001fb7c(local_90c,pcVar4,0x20);
      if (uVar14 == 0) {
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
LAB_000237b0:
          if (DAT_00067848 < 3) goto LAB_00023814;
          local_914 = local_828;
        }
        else {
          local_914 = local_828;
          snprintf(local_828,0x800,"merkle %d: %s",iVar13,pcVar4);
          FUN_0001dd98(3,local_828,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_000237b0;
        }
        builtin_strncpy(local_914,"Failed to convert merkle to merkle_bin in parse_notify",0x37);
        FUN_0001dd98(3,local_914,0);
LAB_00023814:
        free(pcVar4);
        return 0;
      }
      iVar13 = iVar13 + 1;
      free(pcVar4);
    } while (iVar3 != iVar13);
  }
  pbVar5 = (byte *)FUN_0001f3c4(param_2,0);
  local_920 = (char *)FUN_0001f360(param_2,1);
  local_918 = (char *)FUN_0001f3c4(param_2,2);
  local_91c = (char *)FUN_0001f3c4(param_2,3);
  local_924 = (char *)FUN_0001f360(param_2,5);
  local_928 = (char *)FUN_0001f360(param_2,6);
  local_92c = (char *)FUN_0001f360(param_2,7);
  pcVar4 = (char *)strtol(local_92c,(char **)0x0,0x10);
  if (pcVar4 == (char *)0x0) {
    bVar11 = 0;
  }
  else {
    bVar11 = (DAT_0006a7ed ^ 1) & 1;
  }
  if (bVar11 != 0) {
    local_930 = local_90c;
    local_90c[0].tv_usec = 0;
    local_90c[0].tv_sec = 0;
    local_914 = pcVar4;
    gettimeofday(local_930,(__timezone_ptr_t)0x0);
    if ((uint)local_90c[0].tv_sec < local_914) {
      local_90c[0].tv_sec = (__time_t)local_914;
      settimeofday(local_930,(timezone *)0x0);
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
        local_914 = local_828;
        builtin_strncpy(local_828,"settime notify.ntime successfuly",0x20);
        local_808 = local_808 & 0xffffff00;
        FUN_0001dd98(5,local_914,0);
      }
      DAT_0006a7ed = 1;
    }
  }
  iVar13 = FUN_00049034(param_2,8);
  if (iVar13 == 0) {
    local_930 = (timeval *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00049034(param_2,8);
    local_930 = (timeval *)(uint)(*piVar2 == 5);
  }
  ptVar1 = local_930;
  if (pbVar5 == (byte *)0x0) {
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) goto LAB_000239d4;
    pcVar4 = "Null string passed to valid_ascii from in %s %s():%d";
  }
  else {
    sVar6 = strlen((char *)pbVar5);
    pbVar10 = pbVar5;
    if (sVar6 != 0) {
      do {
        pbVar9 = pbVar10 + 1;
        if (0x5e < *pbVar10 - 0x20) {
          if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3))
          goto LAB_000239d4;
          snprintf(local_828,0x800,"Invalid char 0x%x passed to valid_ascii from in %s %s():%d",
                   (uint)*pbVar10,"util.c","parse_notify",0x7eb);
          goto LAB_000239c0;
        }
        pbVar10 = pbVar9;
      } while ((int)pbVar9 - (int)pbVar5 < (int)sVar6);
      iVar13 = FUN_0001f444(local_920,"parse_notify",0x7eb);
      if (((iVar13 == 0) || (iVar13 = FUN_0001f444(local_918,"parse_notify",0x7eb), iVar13 == 0)) ||
         ((iVar13 = FUN_0001f444(local_91c,"parse_notify",0x7ec), iVar13 == 0 ||
          (((iVar13 = FUN_0001f444(local_924,"parse_notify",0x7ec), iVar13 == 0 ||
            (iVar13 = FUN_0001f444(local_928,"parse_notify",0x7ec), iVar13 == 0)) ||
           (iVar13 = FUN_0001f444(local_92c,"parse_notify",0x7ed), iVar13 == 0))))))
      goto LAB_000239d4;
      local_954 = (pthread_mutex_t *)(param_1 + 0x35);
      iVar13 = pthread_mutex_lock(local_954);
      if (iVar13 != 0) {
        FUN_0001f708("parse_notify",0x7f6);
      }
      local_958 = param_1 + 0x3b;
      FUN_0001f594(local_958,"parse_notify",0x7f6);
      local_940 = param_1 + 0x1b0;
      free((void *)param_1[0xac]);
      param_1[0xac] = (int)pbVar5;
      snprintf((char *)(param_1 + 0x1b0),0x41,"%s",local_920);
      sVar6 = strlen(local_918);
      local_914 = (char *)(sVar6 >> 1);
      sVar6 = strlen(local_91c);
      local_934 = sVar6 >> 1;
      local_944 = param_1 + 0x1c1;
      snprintf((char *)local_944,9,"%s",local_924);
      local_948 = param_1 + 0x1c4;
      snprintf((char *)local_948,9,"%s",local_928);
      local_94c = param_1 + 0x1c7;
      snprintf((char *)local_94c,9,"%s",local_92c);
      *(char *)(param_1 + 0xae) = (char)ptVar1;
      iVar13 = 0;
      if (0.0 < *(double *)(param_1 + 0x1ca)) {
        *(double *)(param_1 + 0x1cc) = *(double *)(param_1 + 0x1ca);
      }
      param_1[0x18e] = (int)(local_914 + param_1[0x18b]);
      local_950 = local_914 + param_1[0x18b] + local_934 + param_1[0xa2];
      param_1[0x18d] = (int)local_950;
      for (; iVar13 < param_1[0x1af]; iVar13 = iVar13 + 1) {
        free(*(void **)(param_1[0xad] + iVar13 * 4));
      }
      if (iVar3 == 0) {
        param_1[0x1af] = 0;
        local_938 = &DAT_00072ed8;
LAB_00023d98:
        uVar14 = param_1[0x5e];
        param_1[0x5e] = uVar14 + 1;
        param_1[0x5f] = param_1[0x5f] + (uint)(0xfffffffe < uVar14);
LAB_00023db0:
        if (local_930 != (timeval *)0x0) {
          param_1[0xa0] = 0;
          param_1[0xa1] = 0;
        }
        snprintf((char *)local_90c,0xe1,"%s%s%s%s%s%s%s",(char *)local_944,(char *)local_940,
                 "0000000000000000000000000000000000000000000000000000000000000000",
                 (char *)local_94c,(char *)local_948,"00000000",DAT_000682a0);
        iVar3 = FUN_0001fb7c(param_1 + 399,local_90c,0x70);
        if (iVar3 == 0) {
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
            pcVar4 = "Failed to convert header to header_bin in parse_notify";
            goto LAB_000245bc;
          }
LAB_00024518:
          uVar14 = 0;
        }
        else {
          iVar3 = -((uint)(local_914 + 0xe) & 0xfffffff8);
          iVar13 = FUN_0001fb7c(auStack_968 + iVar3,local_918);
          if (iVar13 == 0) {
            if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3))
            goto LAB_00024518;
            pcVar4 = "Failed to convert cb1 to cb1_bin in parse_notify";
            uVar14 = 0;
          }
          else {
            iVar13 = -(local_934 + 0xe & 0xfffffff8);
            uVar14 = FUN_0001fb7c(auStack_968 + iVar13 + iVar3,local_91c);
            if (uVar14 != 0) {
              free((void *)param_1[0x18c]);
              *(undefined4 *)((int)auStackY_b80 + iVar13 + iVar3 + 0x200) = 0x849;
              iVar7 = FUN_0001f8e8(local_950,1,"util.c","parse_notify");
              param_1[0x18c] = iVar7;
              *(undefined4 *)((int)auStackY_b80 + iVar13 + iVar3 + 0x204) = 0x84a;
              *(char **)((int)auStackY_b80 + iVar13 + iVar3 + 0x200) = "parse_notify";
              FUN_00023324(iVar7,auStack_968 + iVar3,local_914,"util.c");
              iVar16 = param_1[0x18b];
              iVar7 = 0;
              if (iVar16 != 0) {
                iVar7 = param_1[0x18c];
                *(undefined4 *)((int)auStackY_b80 + iVar13 + iVar3 + 0x204) = 0x84c;
                pcVar4 = local_914;
                *(char **)((int)auStackY_b80 + iVar13 + iVar3 + 0x200) = "parse_notify";
                FUN_00023324(pcVar4 + iVar7,param_1[0x9e],iVar16,"util.c");
                iVar7 = param_1[0x18b];
              }
              iVar12 = param_1[0xa2];
              iVar16 = param_1[0x18c];
              *(char **)((int)auStackY_b80 + iVar13 + iVar3 + 0x200) = "parse_notify";
              pcVar4 = local_914;
              uVar15 = local_934;
              *(undefined4 *)((int)auStackY_b80 + iVar13 + iVar3 + 0x204) = 0x84d;
              FUN_00023324(pcVar4 + iVar16 + iVar7 + iVar12,auStack_968 + iVar13 + iVar3,uVar15,
                           "util.c");
              uVar15 = (uint)DAT_000686f1;
              if (uVar15 != 0) {
                __ptr = (void *)FUN_0001fac8(param_1[0x18c],param_1[0x18d]);
                if ((DAT_000686f1 != 0) &&
                   (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
                  *(void **)((int)auStackY_b80 + iVar13 + iVar3 + 0x200) = __ptr;
                  snprintf(local_828,0x800,"Pool %d coinbase %s",*param_1,
                           *(char **)((int)auStackY_b80 + iVar13 + iVar3 + 0x200));
                  FUN_0001dd98(7,local_828,0);
                }
                free(__ptr);
                uVar14 = uVar15;
              }
              goto LAB_00023f68;
            }
            if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3))
            goto LAB_00024518;
            pcVar4 = "Failed to convert cb2 to cb2_bin in parse_notify";
          }
          local_828._0_4_ = *(undefined4 *)pcVar4;
          local_828._4_4_ = *(undefined4 *)(pcVar4 + 4);
          local_828._8_4_ = *(undefined4 *)(pcVar4 + 8);
          local_828._12_4_ = *(undefined4 *)(pcVar4 + 0xc);
          local_828._16_4_ = *(undefined4 *)(pcVar4 + 0x10);
          local_828._20_4_ = *(undefined4 *)(pcVar4 + 0x14);
          local_828._24_4_ = *(undefined4 *)(pcVar4 + 0x18);
          local_828._28_4_ = *(undefined4 *)(pcVar4 + 0x1c);
          local_808 = *(uint *)(pcVar4 + 0x20);
          uStack_804 = *(undefined4 *)(pcVar4 + 0x24);
          uStack_800 = *(undefined4 *)(pcVar4 + 0x28);
          uStack_7fc = *(undefined4 *)(pcVar4 + 0x2c);
          local_7f8 = CONCAT31(local_7f8._1_3_,(char)*(undefined4 *)(pcVar4 + 0x30));
          FUN_0001dd98(3,local_828,0);
        }
      }
      else {
        iVar13 = FUN_0001f978(param_1[0xad],iVar3 * 4 + 1,"util.c","parse_notify");
        local_938 = &DAT_00072ed8;
        iVar7 = 0;
        param_1[0xad] = iVar13;
        local_960 = "util.c";
        local_964 = (char *)&DAT_000686f1;
        local_93c = pbVar5;
        do {
          local_95c = iVar7 << 2;
          if (iVar3 <= iVar7) {
            param_1[0x1af] = iVar3;
            pbVar5 = local_93c;
            if (1 < iVar3) goto LAB_00023db0;
            goto LAB_00023d98;
          }
          pcVar4 = (char *)FUN_0001f3c4();
          iVar13 = param_1[0xad];
          uVar8 = FUN_0001f860(0x20,local_960,"parse_notify",0x810);
          *(undefined4 *)(iVar13 + iVar7 * 4) = uVar8;
          if (((*local_938 != '\0') && (*local_964 != '\0')) &&
             ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
            snprintf(local_828,0x800,"merkle %d: %s",iVar7,pcVar4);
            FUN_0001dd98(7,local_828,0);
          }
          iVar7 = iVar7 + 1;
          iVar13 = FUN_0001fb7c(*(undefined4 *)(param_1[0xad] + local_95c),pcVar4,0x20);
          free(pcVar4);
        } while (iVar13 != 0);
        pbVar5 = local_93c;
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3))
        goto LAB_00024518;
        pcVar4 = "Failed to convert merkle to merkle_bin in parse_notify";
LAB_000245bc:
        uVar14 = 0;
        local_828._0_4_ = *(undefined4 *)pcVar4;
        local_828._4_4_ = *(undefined4 *)(pcVar4 + 4);
        local_828._8_4_ = *(undefined4 *)(pcVar4 + 8);
        local_828._12_4_ = *(undefined4 *)(pcVar4 + 0xc);
        local_828._16_4_ = *(undefined4 *)(pcVar4 + 0x10);
        local_828._20_4_ = *(undefined4 *)(pcVar4 + 0x14);
        local_828._24_4_ = *(undefined4 *)(pcVar4 + 0x18);
        local_828._28_4_ = *(undefined4 *)(pcVar4 + 0x1c);
        local_808 = *(uint *)(pcVar4 + 0x20);
        uStack_804 = *(undefined4 *)(pcVar4 + 0x24);
        uStack_800 = *(undefined4 *)(pcVar4 + 0x28);
        uStack_7fc = *(undefined4 *)(pcVar4 + 0x2c);
        local_7f8 = *(undefined4 *)(pcVar4 + 0x30);
        uStack_7f4 = (undefined2)*(undefined4 *)(pcVar4 + 0x34);
        local_7f2 = (undefined1)((uint)*(undefined4 *)(pcVar4 + 0x34) >> 0x10);
        FUN_0001dd98(3,local_828,0);
      }
LAB_00023f68:
      FUN_0001f610(local_958,"parse_notify",0x856);
      FUN_0001f68c(local_954,"parse_notify",0x856);
      (*DAT_0006796c)();
      if (*local_938 == '\0') goto LAB_0002439c;
      if (DAT_000686f1 == 0) {
LAB_0002419c:
        if (DAT_000686f1 == 0) goto LAB_0002439c;
        if (DAT_00072da0 != '\0') {
LAB_000241e4:
          local_914 = local_828;
          snprintf(local_828,0x800,"bbversion: %s",local_924);
          FUN_0001dd98(7,local_828,0);
          goto LAB_0002421c;
        }
LAB_000241c4:
        if ((DAT_000686f0 != '\0') || (6 < DAT_00067848)) goto LAB_000241e4;
LAB_0002423c:
        if ((DAT_000686f0 != '\0') || (6 < DAT_00067848)) {
          local_914 = local_828;
LAB_00024268:
          pcVar4 = local_914;
          snprintf(local_914,0x800,"nbit: %s",local_928);
          FUN_0001dd98(7,pcVar4,0);
LAB_00024294:
          if (DAT_000686f1 == 0) goto LAB_0002439c;
          if (DAT_00072da0 == '\0') goto LAB_000242b4;
LAB_000242e0:
          pcVar4 = local_914;
          snprintf(local_914,0x800,"ntime: %s",local_92c);
          FUN_0001dd98(7,pcVar4,0);
          goto LAB_0002430c;
        }
LAB_000242b4:
        if ((DAT_000686f0 != '\0') || (6 < DAT_00067848)) {
          local_914 = local_828;
          goto LAB_000242e0;
        }
LAB_0002432c:
        if ((DAT_000686f0 == '\0') && (DAT_00067848 < 7)) goto LAB_0002439c;
        local_914 = local_828;
      }
      else {
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
          local_914 = local_828;
          snprintf(local_828,0x800,"job_id: %s",(char *)pbVar5);
          FUN_0001dd98(7,local_828,0);
          if (DAT_000686f1 != 0) {
            if (DAT_00072da0 == '\0') goto LAB_00024054;
            goto LAB_00024080;
          }
LAB_0002421c:
          if (DAT_000686f1 == 0) goto LAB_0002439c;
          if (DAT_00072da0 == '\0') goto LAB_0002423c;
          goto LAB_00024268;
        }
LAB_00024054:
        if ((DAT_000686f0 != '\0') || (6 < DAT_00067848)) {
          local_914 = local_828;
LAB_00024080:
          pcVar4 = local_914;
          snprintf(local_914,0x800,"prev_hash: %s",local_920);
          FUN_0001dd98(7,pcVar4,0);
          if (DAT_000686f1 != 0) {
            if (DAT_00072da0 == '\0') goto LAB_000240cc;
            goto LAB_000240f8;
          }
          goto LAB_00024294;
        }
LAB_000240cc:
        if ((DAT_000686f0 == '\0') && (DAT_00067848 < 7)) {
LAB_00024144:
          if ((DAT_000686f0 != '\0') || (6 < DAT_00067848)) {
            local_914 = local_828;
LAB_00024170:
            pcVar4 = local_914;
            snprintf(local_914,0x800,"coinbase2: %s",local_91c);
            FUN_0001dd98(7,pcVar4,0);
            goto LAB_0002419c;
          }
          goto LAB_000241c4;
        }
        local_914 = local_828;
LAB_000240f8:
        pcVar4 = local_914;
        snprintf(local_914,0x800,"coinbase1: %s",local_918);
        FUN_0001dd98(7,pcVar4,0);
        if (DAT_000686f1 != 0) {
          if (DAT_00072da0 == '\0') goto LAB_00024144;
          goto LAB_00024170;
        }
LAB_0002430c:
        if (DAT_000686f1 == 0) goto LAB_0002439c;
        if (DAT_00072da0 == '\0') goto LAB_0002432c;
      }
      pcVar4 = local_914;
      param3 = "yes";
      if (local_930 == (timeval *)0x0) {
        param3 = "no";
      }
      snprintf(local_914,0x800,"clean: %s",param3);
      FUN_0001dd98(7,pcVar4,0);
LAB_0002439c:
      free(local_918);
      free(local_91c);
      param_1[0x1d] = param_1[0x1d] + 1;
      bVar17 = 0xfffffffe < DAT_00074f98;
      DAT_00074f98 = DAT_00074f98 + 1;
      DAT_00074f9c = DAT_00074f9c + (uint)bVar17;
      piVar2 = (int *)FUN_0002fbd8();
      if (param_1 == piVar2) {
        DAT_00076078 = 1;
        return uVar14;
      }
      return uVar14;
    }
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) goto LAB_000239d4;
    pcVar4 = "Zero length string passed to valid_ascii from in %s %s():%d";
  }
  snprintf(local_828,0x800,pcVar4,"util.c");
LAB_000239c0:
  FUN_0001dd98(3,local_828,0);
LAB_000239d4:
  free(pbVar5);
  free(local_918);
  free(local_91c);
  return uVar14;
}

