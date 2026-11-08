// FUN_0002cd4c @ 0002cd4c  size=2016  callers=2
// program: cgminer


uint FUN_0002cd4c(uint *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  size_t __n;
  uint uVar4;
  undefined1 auStack_84c [8];
  undefined1 auStack_844 [8];
  pthread_attr_t pStack_83c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  char local_7f8 [28];
  undefined2 uStack_7dc;
  undefined1 local_7da;
  
  if ((char)param_1[0xbc] == '\0') {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      snprintf((char *)&local_818,0x800,"Testing pool %s",(char *)param_1[0x29]);
      FUN_0001dd98(6,&local_818,0);
    }
  }
  else if ((DAT_000686f1 != '\0') &&
          (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf((char *)&local_818,0x800,"Retrieving block template from pool %s",(char *)param_1[0x29]
            );
    FUN_0001dd98(7,&local_818,0);
  }
  if ((char)param_1[0xa4] == '\0') {
    uVar4 = 0;
    if (DAT_000681e4 == 0) {
      if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
        return 0;
      }
      local_818._0_1_ = 'C';
      local_818._1_1_ = 'U';
      local_818._2_1_ = 'R';
      local_818._3_1_ = 'L';
      uStack_814._0_1_ = ' ';
      uStack_814._1_1_ = 'i';
      uStack_814._2_1_ = 'n';
      uStack_814._3_1_ = 'i';
      uStack_810._0_1_ = 't';
      uStack_810._1_1_ = 'i';
      uStack_810._2_1_ = 'a';
      uStack_810._3_1_ = 'l';
      uStack_80c._0_1_ = 'i';
      uStack_80c._1_1_ = 's';
      uStack_80c._2_1_ = 'a';
      uStack_80c._3_1_ = 't';
      local_808._0_1_ = 'i';
      local_808._1_1_ = 'o';
      local_808._2_1_ = 'n';
      local_808._3_1_ = ' ';
      uStack_804._0_1_ = 'f';
      uStack_804._1_1_ = 'a';
      uStack_804._2_1_ = 'i';
      uStack_804._3_1_ = 'l';
      uStack_800 = CONCAT13(uStack_800._3_1_,0x6465);
      FUN_0001dd98(3,&local_818,0);
      return 0;
    }
    if (*(char *)((int)param_1 + 99) == '\0') {
      if (DAT_000686f1 == '\0') {
        *(undefined1 *)((int)param_1 + 99) = 0;
      }
      else if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
        *(undefined1 *)((int)param_1 + 99) = 0;
        if ((char)param_1[0xbc] == '\0') {
          if ((char)param_1[0xe5] == '\0') {
joined_r0x0002d4c0:
            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
              pcVar2 = "No GBT coinbase + append support found, pool unusable if it has no stratum";
              __n = 0x4b;
LAB_0002d24c:
              memcpy(&local_818,pcVar2,__n);
              FUN_0001dd98(7,&local_818,0);
            }
          }
          else {
LAB_0002d208:
            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
              pcVar2 = "GBT coinbase without append found, switching to GBT solo protocol";
              __n = 0x42;
              goto LAB_0002d24c;
            }
          }
        }
        else {
LAB_0002ce34:
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
            local_818._0_1_ = 'G';
            local_818._1_1_ = 'B';
            local_818._2_1_ = 'T';
            local_818._3_1_ = ' ';
            uStack_814._0_1_ = 'c';
            uStack_814._1_1_ = 'o';
            uStack_814._2_1_ = 'i';
            uStack_814._3_1_ = 'n';
            uStack_810._0_1_ = 'b';
            uStack_810._1_1_ = 'a';
            uStack_810._2_1_ = 's';
            uStack_810._3_1_ = 'e';
            uStack_80c._0_1_ = ' ';
            uStack_80c._1_1_ = '+';
            uStack_80c._2_1_ = ' ';
            uStack_80c._3_1_ = 'a';
            local_808._0_1_ = 'p';
            local_808._1_1_ = 'p';
            local_808._2_1_ = 'e';
            local_808._3_1_ = 'n';
            uStack_804._0_1_ = 'd';
            uStack_804._1_1_ = ' ';
            uStack_804._2_1_ = 's';
            uStack_804._3_1_ = 'u';
            uStack_800._0_1_ = 'p';
            uStack_800._1_1_ = 'p';
            uStack_800._2_1_ = 'o';
            uStack_800._3_1_ = 'r';
            uStack_7fc._0_1_ = 't';
            uStack_7fc._1_1_ = ' ';
            uStack_7fc._2_1_ = 'f';
            uStack_7fc._3_1_ = 'o';
            builtin_strncpy(local_7f8,"und, switching to GBT protoc",0x1c);
            uStack_7dc = 0x6c6f;
            local_7da = 0;
            FUN_0001dd98(7,&local_818,0);
          }
        }
      }
      else {
        local_818._0_1_ = 'P';
        local_818._1_1_ = 'r';
        local_818._2_1_ = 'o';
        local_818._3_1_ = 'b';
        uStack_814._0_1_ = 'i';
        uStack_814._1_1_ = 'n';
        uStack_814._2_1_ = 'g';
        uStack_814._3_1_ = ' ';
        uStack_810._0_1_ = 'f';
        uStack_810._1_1_ = 'o';
        uStack_810._2_1_ = 'r';
        uStack_810._3_1_ = ' ';
        uStack_80c._0_1_ = 'G';
        uStack_80c._1_1_ = 'B';
        uStack_80c._2_1_ = 'T';
        uStack_80c._3_1_ = ' ';
        local_808._0_1_ = 's';
        local_808._1_1_ = 'u';
        local_808._2_1_ = 'p';
        local_808._3_1_ = 'p';
        uStack_804._0_1_ = 'o';
        uStack_804._1_1_ = 'r';
        uStack_804._2_1_ = 't';
        uStack_804._3_1_ = '\0';
        FUN_0001dd98(7,&local_818,0);
        cVar1 = DAT_000686f1;
        *(undefined1 *)((int)param_1 + 99) = 0;
        if ((char)param_1[0xbc] == '\0') {
          if ((char)param_1[0xe5] == '\0') {
            if (cVar1 != '\0') goto joined_r0x0002d4c0;
          }
          else if (cVar1 != '\0') goto LAB_0002d208;
        }
        else if (cVar1 != '\0') goto LAB_0002ce34;
      }
    }
    FUN_000206d8(auStack_84c);
    FUN_000206d8(auStack_844);
    pcVar2 = (char *)param_1[0x90];
    if ((pcVar2 != (char *)0x0) && (DAT_00068b2c == '\0')) {
      if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (5 < DAT_00067848)))) {
        snprintf((char *)&local_818,0x800,"Testing pool %d stratum %s",*param_1,pcVar2);
        FUN_0001dd98(6,&local_818,0);
        pcVar2 = (char *)param_1[0x90];
      }
      iVar3 = FUN_00020a48(pcVar2,param_1 + 0x9a,param_1 + 0x92);
      if ((iVar3 != 0) && (iVar3 = FUN_00021e14(param_1), iVar3 != 0)) {
        if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (4 < DAT_00067848)))) {
          snprintf((char *)&local_818,0x800,"Switching pool %d %s to %s",*param_1,
                   (char *)param_1[0x29],(char *)param_1[0x90]);
          FUN_0001dd98(5,&local_818,0);
        }
        if (param_1[0x29] == 0) {
          uVar4 = __strdup(param_1[0x90]);
          param_1[0x29] = uVar4;
        }
        *(undefined1 *)(param_1 + 0xa4) = 1;
        goto LAB_0002d07c;
      }
    }
    if ((((char)param_1[0xa4] == '\0') && ((char)param_1[0xe5] == '\0')) &&
       ((char)param_1[0xbc] == '\0')) {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        uVar4 = 0;
        snprintf((char *)&local_818,0x800,
                 "No Stratum, GBT or Solo support in pool %d %s unable to use",*param_1,
                 (char *)param_1[0x29]);
        FUN_0001dd98(4,&local_818,0);
      }
    }
    else {
      if ((DAT_000686f1 != '\0') &&
         (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
        snprintf((char *)&local_818,0x800,"FAILED to retrieve work from pool %u %s",*param_1,
                 (char *)param_1[0x29]);
        FUN_0001dd98(7,&local_818,0);
      }
      if (((param_2 == 0) && (*(char *)((int)param_1 + 0x61) == '\0')) &&
         ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (3 < DAT_00067848)))))) {
        snprintf((char *)&local_818,0x800,"Pool %u slow/down or URL or credentials invalid",*param_1
                );
        uVar4 = 0;
        FUN_0001dd98(4,&local_818);
      }
    }
  }
  else {
LAB_0002d07c:
    iVar3 = FUN_0002cc78(param_1,(int)param_1 + 0x292);
    if (iVar3 == 0) {
      iVar3 = FUN_00024a8c(param_1);
      if ((iVar3 != 0) &&
         (((((char)param_1[0x91] == '\0' || (iVar3 = FUN_000270d0(param_1), iVar3 != 0)) &&
           (iVar3 = FUN_00021e14(param_1), iVar3 != 0)) &&
          (uVar4 = FUN_000274c8(param_1), uVar4 != 0)))) {
        DAT_000762d4 = 1;
        pthread_attr_init(&pStack_83c);
        pthread_attr_setstacksize(&pStack_83c,0x100000);
        iVar3 = pthread_create(param_1 + 0xb2,&pStack_83c,FUN_00036bf0,param_1);
        if (iVar3 == 0) {
          iVar3 = pthread_create(param_1 + 0xb3,&pStack_83c,FUN_00039624,param_1);
          if (iVar3 == 0) {
            return uVar4;
          }
          pcVar2 = "Failed to create stratum rthread";
        }
        else {
          pcVar2 = "Failed to create stratum sthread";
        }
        local_818 = *(undefined4 *)pcVar2;
        uStack_814 = *(undefined4 *)(pcVar2 + 4);
        uStack_810 = *(undefined4 *)(pcVar2 + 8);
        uStack_80c = *(undefined4 *)(pcVar2 + 0xc);
        local_808 = *(undefined4 *)(pcVar2 + 0x10);
        uStack_804 = *(undefined4 *)(pcVar2 + 0x14);
        uStack_800 = *(undefined4 *)(pcVar2 + 0x18);
        uStack_7fc = *(undefined4 *)(pcVar2 + 0x1c);
        local_7f8[0] = (char)*(undefined4 *)(pcVar2 + 0x20);
        FUN_0001dd98(3,&local_818,1);
                    /* WARNING: Subroutine does not return */
        FUN_0002c290(1,1);
      }
      FUN_0002cce4(param_1,(int)param_1 + 0x292);
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(byte *)((int)param_1 + 0x291);
    }
  }
  return uVar4;
}

