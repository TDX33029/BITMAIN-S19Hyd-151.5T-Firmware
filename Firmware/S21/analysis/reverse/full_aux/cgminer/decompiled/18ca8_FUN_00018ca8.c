// FUN_00018ca8 @ 00018ca8  size=4436  callers=0
// program: cgminer


undefined4 FUN_00018ca8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  int local_a0c;
  uint local_a08;
  int local_a04;
  int local_9fc;
  undefined2 local_9c4 [2];
  ulong local_9c0;
  undefined4 uStack_9bc;
  ulong local_9b8;
  undefined4 uStack_9b4;
  ulong local_9b0;
  undefined4 uStack_9ac;
  ulong local_9a8;
  undefined4 uStack_9a4;
  char local_9a0 [48];
  char acStack_970 [64];
  uint local_930 [64];
  char acStack_830 [2052];
  
  local_9c0 = 0;
  uStack_9bc = 0;
  local_9b8 = 0;
  uStack_9b4 = 0;
  local_9b0 = 0;
  uStack_9ac = 0;
  local_9a8 = 0;
  uStack_9a4 = 0;
  local_9a0[0] = '\0';
  local_9a0[1] = '\0';
  local_9a0[2] = '\0';
  local_9a0[3] = '\0';
  local_9a0[4] = '\0';
  local_9a0[5] = '\0';
  local_9a0[6] = '\0';
  local_9a0[7] = '\0';
  local_9a0[8] = '\0';
  local_9a0[9] = '\0';
  local_9a0[10] = '\0';
  local_9a0[0xb] = '\0';
  local_9a0[0xc] = '\0';
  local_9a0[0xd] = '\0';
  local_9a0[0xe] = '\0';
  local_9a0[0xf] = '\0';
  memset(local_9a0 + 0x10,0,0x20);
  memset(local_930,0,0x100);
  local_9c4[0] = 0;
  memset(acStack_970,0,0x40);
  if (param_1 == 0 || param_2 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_830,0x800,"%s: input bad api param\n","get_stats_old");
      FUN_0001dd98(3,acStack_830,0);
    }
    return 0x80000002;
  }
  FUN_000427b4(local_9c4,1);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076310);
  if (iVar1 != 0) {
    piVar7 = __errno_location();
    snprintf(acStack_830,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar7,"api_new.c"
             ,"get_stats_old",0x3d3);
    FUN_0001dd98(3,acStack_830,1);
    FUN_0003c34c(1);
  }
  FUN_00016a60(param_1,1,0x46,*(undefined4 *)(param_2 + 8));
  uVar2 = FUN_00048fb8();
  uVar3 = FUN_00048c28();
  uVar4 = FUN_000491bc("1.0.0");
  FUN_00049a4c(uVar3,"BMMiner",uVar4);
  uVar4 = FUN_000491bc(&DAT_0006a6e0);
  FUN_00049a4c(uVar3,"Miner",uVar4);
  uVar4 = FUN_000491bc(&DAT_0006a26c);
  FUN_00049a4c(uVar3,"CompileTime",uVar4);
  snprintf(acStack_970,0x40,"%s",&DAT_0006a36c);
  if (DAT_00076334 != '\0') {
    snprintf(acStack_970,0x40,"%s",&DAT_00076334);
  }
  uVar4 = FUN_000491bc(acStack_970);
  FUN_00049a4c(uVar3,&DAT_0004b258,uVar4);
  FUN_00049f0c(uVar2,uVar3);
  if (0 < DAT_00074ff0) {
    local_9fc = 0;
    local_a0c = 0;
    local_a08 = 0;
    local_a04 = 0;
    do {
      iVar1 = FUN_0002e054(local_a08);
      uVar3 = FUN_00048c28();
      uVar4 = FUN_00049408(local_a08,local_a04);
      FUN_00049a4c(uVar3,"STATS",uVar4);
      snprintf(local_9a0,0x10,"BTM_SOC%d",local_a08);
      uVar4 = FUN_000491bc(local_9a0);
      FUN_00049a4c(uVar3,&DAT_0004b704,uVar4);
      FUN_0004ad64((undefined4)DAT_000681d0,DAT_000681d0._4_4_);
      uVar4 = FUN_00049408();
      FUN_00049a4c(uVar3,"Elapsed",uVar4);
      uVar4 = FUN_00049408(*(undefined4 *)(iVar1 + 0x124),0);
      FUN_00049a4c(uVar3,"Calls",uVar4);
      uVar4 = FUN_00049408(*(int *)(iVar1 + 0x128),*(int *)(iVar1 + 0x128) >> 0x1f);
      FUN_00049a4c(uVar3,&DAT_0004b718,uVar4);
      uVar4 = FUN_00049408(*(int *)(iVar1 + 0x130),*(int *)(iVar1 + 0x130) >> 0x1f);
      FUN_00049a4c(uVar3,&DAT_0004b720,uVar4);
      uVar4 = FUN_00049408(*(int *)(iVar1 + 0x138),*(int *)(iVar1 + 0x138) >> 0x1f);
      FUN_00049a4c(uVar3,&DAT_0004b724,uVar4);
      sscanf(&DAT_00076434,"%lf",&local_9c0);
      dVar13 = (double)CONCAT44(uStack_9bc,local_9c0) * 100.0;
      FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
      dVar13 = (double)FUN_0004accc();
      uVar4 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
      FUN_00049a4c(uVar3,"GHS 5s",uVar4);
      sscanf(&DAT_00076454,"%lf",&local_9b0);
      dVar13 = (double)CONCAT44(uStack_9ac,local_9b0) * 100.0;
      FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
      dVar13 = (double)FUN_0004accc();
      uVar4 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
      FUN_00049a4c(uVar3,"GHS av",uVar4);
      sscanf(&DAT_00076444,"%lf",&local_9b8);
      dVar13 = (double)CONCAT44(uStack_9b4,local_9b8) * 100.0;
      FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
      dVar13 = (double)FUN_0004accc();
      uVar4 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
      FUN_00049a4c(uVar3,"rate_30m",uVar4);
      uVar4 = FUN_00049408(DAT_000682a8,DAT_000682a8 >> 0x1f);
      FUN_00049a4c(uVar3,&DAT_0004b744,uVar4);
      uVar4 = FUN_00049408(DAT_0007632c,DAT_0007632c >> 0x1f);
      FUN_00049a4c(uVar3,"miner_count",uVar4);
      iVar1 = DAT_0007632c;
      if (DAT_0007632c < 1) {
        if (DAT_0007632c == 0) {
          iVar1 = 1;
        }
      }
      else {
        iVar9 = 0;
        puVar8 = &DAT_00076328;
        do {
          piVar7 = (int *)(puVar8 + 0x16c);
          iVar9 = iVar9 + 1;
          puVar8 = puVar8 + 0x610;
          local_a0c = local_a0c + *piVar7;
          if (iVar9 == DAT_0007632c) break;
        } while (iVar9 != 4);
      }
      local_a0c = FUN_0004a700(local_a0c,iVar1);
      uVar4 = FUN_00049408(local_a0c,local_a0c >> 0x1f);
      FUN_00049a4c(uVar3,"frequency",uVar4);
      uVar4 = FUN_00049408(DAT_0007647c,DAT_0007647c >> 0x1f);
      FUN_00049a4c(uVar3,"fan_num",uVar4);
      if (0 < DAT_0007647c) {
        iVar1 = 0;
        piVar7 = &DAT_00076480;
        do {
          iVar1 = iVar1 + 1;
          memset(local_9a0 + 0x10,0,0x20);
          snprintf(local_9a0 + 0x10,0x20,"fan%d",iVar1);
          uVar4 = FUN_00049408(*piVar7,*piVar7 >> 0x1f);
          FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
          piVar7 = piVar7 + 1;
        } while (iVar1 < DAT_0007647c);
      }
      uVar4 = FUN_00049408(DAT_0007632c,DAT_0007632c >> 0x1f);
      FUN_00049a4c(uVar3,"temp_num",uVar4);
      iVar1 = 0;
      do {
        iVar9 = iVar1 + 1;
        if (0 < DAT_0007632c) {
          iVar11 = 0;
          puVar8 = &DAT_00076328;
          do {
            iVar11 = iVar11 + 1;
            if (*(int *)(puVar8 + 0x168) == iVar1) {
              memset(local_9a0 + 0x10,0,0x20);
              snprintf(local_9a0 + 0x10,0x20,"temp%d",iVar9);
              iVar10 = *(int *)(puVar8 + 0x2a8);
              if (*(int *)(puVar8 + 0x2a8) < *(int *)(puVar8 + 0x2a4)) {
                iVar10 = *(int *)(puVar8 + 0x2a4);
              }
              if (iVar10 < -0xff) {
                iVar10 = -0xff;
              }
              if (iVar10 < *(int *)(puVar8 + 0x2ac)) {
                iVar10 = *(int *)(puVar8 + 0x2ac);
              }
              iVar6 = *(int *)(puVar8 + 0x2b0);
              if (*(int *)(puVar8 + 0x2b0) <= iVar10) {
                iVar6 = iVar10;
              }
              uVar4 = FUN_00049408(iVar6,iVar6 >> 0x1f);
              FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
              memset(local_9a0 + 0x10,0,0x20);
              snprintf(local_9a0 + 0x10,0x20,"temp2_%d",iVar9);
              iVar10 = *(int *)(puVar8 + 0x2b8);
              if (*(int *)(puVar8 + 0x2b8) < *(int *)(puVar8 + 0x2b4)) {
                iVar10 = *(int *)(puVar8 + 0x2b4);
              }
              if (iVar10 < -0xff) {
                iVar10 = -0xff;
              }
              if (iVar10 < *(int *)(puVar8 + 700)) {
                iVar10 = *(int *)(puVar8 + 700);
              }
              iVar6 = *(int *)(puVar8 + 0x2c0);
              if (*(int *)(puVar8 + 0x2c0) <= iVar10) {
                iVar6 = iVar10;
              }
              uVar4 = FUN_00049408(iVar6,iVar6 >> 0x1f);
              FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
            }
            puVar8 = puVar8 + 0x610;
          } while (iVar11 < DAT_0007632c);
        }
        iVar1 = iVar9;
      } while (iVar9 != 4);
      iVar1 = 0;
      do {
        iVar9 = iVar1 + 1;
        memset(local_9a0 + 0x10,0,0x20);
        memset(local_930,0,0x100);
        snprintf(local_9a0 + 0x10,0x20,"temp_pcb%d",iVar9);
        if (DAT_0007632c < 1) {
LAB_00019c20:
          local_930[0] = 0x2d302d30;
          local_930[1] = 0x302d30;
        }
        else {
          if (DAT_00076490 == iVar1) {
            iVar11 = 0;
          }
          else {
            iVar11 = 0;
            puVar8 = &DAT_00076328;
            do {
              iVar11 = iVar11 + 1;
              if (DAT_0007632c == iVar11) goto LAB_00019c20;
              if (iVar11 == 4) {
                if (DAT_0007632c < 5) goto LAB_00019c20;
                break;
              }
              piVar7 = (int *)(puVar8 + 0x778);
              puVar8 = puVar8 + 0x610;
            } while (*piVar7 != iVar1);
          }
          snprintf((char *)local_930,0x100,"%d-%d-%d-%d",(&DAT_000765cc)[iVar11 * 0x184],
                   (&DAT_000765d0)[iVar11 * 0x184],(&DAT_000765d4)[iVar11 * 0x184],
                   (&DAT_000765d8)[iVar11 * 0x184]);
        }
        uVar4 = FUN_000491bc(local_930);
        FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
        iVar1 = iVar9;
      } while (iVar9 != 4);
      iVar1 = 0;
      do {
        iVar9 = iVar1 + 1;
        memset(local_9a0 + 0x10,0,0x20);
        memset(local_930,0,0x100);
        snprintf(local_9a0 + 0x10,0x20,"temp_chip%d",iVar9);
        if (DAT_0007632c < 1) {
LAB_00019c04:
          local_930[0] = 0x2d302d30;
          local_930[1] = 0x302d30;
        }
        else {
          if (DAT_00076490 == iVar1) {
            iVar11 = 0;
          }
          else {
            iVar11 = 0;
            puVar8 = &DAT_00076328;
            do {
              iVar11 = iVar11 + 1;
              if (DAT_0007632c == iVar11) goto LAB_00019c04;
              if (iVar11 == 4) {
                if (DAT_0007632c < 5) goto LAB_00019c04;
                break;
              }
              piVar7 = (int *)(puVar8 + 0x778);
              puVar8 = puVar8 + 0x610;
            } while (*piVar7 != iVar1);
          }
          snprintf((char *)local_930,0x100,"%d-%d-%d-%d",(&DAT_000765dc)[iVar11 * 0x184],
                   (&DAT_000765e0)[iVar11 * 0x184],(&DAT_000765e4)[iVar11 * 0x184],
                   (&DAT_000765e8)[iVar11 * 0x184]);
        }
        uVar4 = FUN_000491bc(local_930);
        FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
        iVar1 = iVar9;
      } while (iVar9 != 4);
      iVar1 = 0;
      do {
        iVar9 = iVar1 + 1;
        memset(local_9a0 + 0x10,0,0x20);
        memset(local_930,0,0x100);
        snprintf(local_9a0 + 0x10,0x20,"temp_pic%d",iVar9);
        if (DAT_0007632c < 1) {
LAB_00019be8:
          local_930[0] = 0x2d302d30;
          local_930[1] = 0x302d30;
        }
        else {
          if (DAT_00076490 == iVar1) {
            iVar11 = 0;
          }
          else {
            iVar11 = 0;
            puVar8 = &DAT_00076328;
            do {
              iVar11 = iVar11 + 1;
              if (DAT_0007632c == iVar11) goto LAB_00019be8;
              if (iVar11 == 4) {
                if (DAT_0007632c < 5) goto LAB_00019be8;
                break;
              }
              piVar7 = (int *)(puVar8 + 0x778);
              puVar8 = puVar8 + 0x610;
            } while (*piVar7 != iVar1);
          }
          snprintf((char *)local_930,0x100,"%d-%d-%d-%d",(&DAT_000765bc)[iVar11 * 0x184],
                   (&DAT_000765c0)[iVar11 * 0x184],(&DAT_000765c4)[iVar11 * 0x184],
                   (&DAT_000765c8)[iVar11 * 0x184]);
        }
        uVar4 = FUN_000491bc(local_930);
        FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
        iVar1 = iVar9;
      } while (iVar9 != 4);
      sscanf(&DAT_00076464,"%lf",&local_9a8);
      dVar13 = (double)CONCAT44(uStack_9a4,local_9a8) * 100.0;
      FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
      dVar13 = (double)FUN_0004accc();
      uVar4 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
      FUN_00049a4c(uVar3,"total_rateideal",uVar4);
      uVar4 = FUN_000491bc(&DAT_0004b7dc);
      FUN_00049a4c(uVar3,"rate_unit",uVar4);
      uVar4 = FUN_00049408(local_a0c,local_a0c >> 0x1f);
      FUN_00049a4c(uVar3,"total_freqavg",uVar4);
      if (0 < DAT_0007632c) {
        iVar1 = 0;
        puVar8 = &DAT_00076328;
        do {
          iVar1 = iVar1 + 1;
          piVar7 = (int *)(puVar8 + 400);
          puVar8 = puVar8 + 0x610;
          local_9fc = local_9fc + *piVar7;
        } while (iVar1 < 4 && iVar1 < DAT_0007632c);
      }
      uVar4 = FUN_00049408(local_9fc,local_9fc >> 0x1f);
      FUN_00049a4c(uVar3,"total_acn",uVar4);
      dVar13 = (double)CONCAT44(uStack_9ac,local_9b0) * 100.0;
      FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
      dVar13 = (double)FUN_0004accc();
      uVar4 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
      FUN_00049a4c(uVar3,"total rate",uVar4);
      uVar4 = FUN_00049408(0,0);
      FUN_00049a4c(uVar3,"temp_max",uVar4);
      uVar4 = FUN_00049408(DAT_00076070,DAT_00076070 >> 0x1f);
      FUN_00049a4c(uVar3,"no_matching_work",uVar4);
      iVar1 = 0;
      do {
        iVar9 = iVar1 + 1;
        memset(local_9a0 + 0x10,0,0x20);
        snprintf(local_9a0 + 0x10,0x20,"chain_acn%d",iVar9);
        if (DAT_0007632c < 1) {
LAB_00019bd4:
          iVar11 = 0;
          iVar1 = 0;
        }
        else {
          if (DAT_00076490 == iVar1) {
            iVar11 = 0;
          }
          else {
            iVar11 = 0;
            puVar8 = &DAT_00076328;
            do {
              iVar11 = iVar11 + 1;
              if (DAT_0007632c == iVar11) goto LAB_00019bd4;
              if (iVar11 == 4) {
                if (DAT_0007632c < 5) goto LAB_00019bd4;
                break;
              }
              piVar7 = (int *)(puVar8 + 0x778);
              puVar8 = puVar8 + 0x610;
            } while (*piVar7 != iVar1);
          }
          iVar11 = (&DAT_000764b8)[iVar11 * 0x184];
          iVar1 = iVar11 >> 0x1f;
        }
        uVar4 = FUN_00049408(iVar11,iVar1);
        FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
        iVar1 = iVar9;
      } while (iVar9 != 4);
      iVar1 = 0;
      do {
        iVar9 = iVar1 + 1;
        memset(local_9a0 + 0x10,0,0x20);
        memset(local_930,0,0x100);
        snprintf(local_9a0 + 0x10,0x20,"chain_acs%d",iVar9);
        if (DAT_0007632c < 1) {
LAB_00019bc4:
          local_930[0] = local_930[0] & 0xffffff00;
        }
        else {
          if (DAT_00076490 == iVar1) {
            iVar1 = 0x194;
          }
          else {
            iVar11 = 0;
            puVar8 = &DAT_00076328;
            do {
              iVar11 = iVar11 + 1;
              if (iVar11 == DAT_0007632c) goto LAB_00019bc4;
              if (iVar11 == 4) {
                if (DAT_0007632c < 5) goto LAB_00019bc4;
                iVar1 = 0x19d4;
                goto LAB_00019858;
              }
              piVar7 = (int *)(puVar8 + 0x778);
              puVar8 = puVar8 + 0x610;
            } while (*piVar7 != iVar1);
            iVar1 = iVar11 * 0x610 + 0x194;
          }
LAB_00019858:
          snprintf((char *)local_930,0x100,"%s",&DAT_00076328 + iVar1);
        }
        uVar4 = FUN_000491bc(local_930);
        FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
        iVar1 = iVar9;
      } while (iVar9 != 4);
      iVar1 = 0;
      do {
        iVar9 = iVar1 + 1;
        memset(local_9a0 + 0x10,0,0x20);
        snprintf(local_9a0 + 0x10,0x20,"chain_hw%d",iVar9);
        if (DAT_0007632c < 1) {
LAB_00019bb0:
          iVar11 = 0;
          iVar1 = 0;
        }
        else {
          if (DAT_00076490 == iVar1) {
            iVar11 = 0;
          }
          else {
            iVar11 = 0;
            puVar8 = &DAT_00076328;
            do {
              iVar11 = iVar11 + 1;
              if (DAT_0007632c == iVar11) goto LAB_00019bb0;
              if (iVar11 == 4) {
                if (DAT_0007632c < 5) goto LAB_00019bb0;
                break;
              }
              piVar7 = (int *)(puVar8 + 0x778);
              puVar8 = puVar8 + 0x610;
            } while (*piVar7 != iVar1);
          }
          iVar11 = (&DAT_000765ec)[iVar11 * 0x184];
          iVar1 = iVar11 >> 0x1f;
        }
        uVar4 = FUN_00049408(iVar11,iVar1);
        FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
        iVar1 = iVar9;
      } while (iVar9 != 4);
      iVar1 = 0;
      do {
        iVar9 = iVar1 + 1;
        memset(local_9a0 + 0x10,0,0x20);
        snprintf(local_9a0 + 0x10,0x20,"chain_rate%d",iVar9);
        if (DAT_0007632c < 1) {
LAB_00019c34:
          puVar5 = &DAT_0004d140;
        }
        else {
          if (DAT_00076490 == iVar1) {
            iVar1 = 0x180;
          }
          else {
            iVar11 = 0;
            puVar8 = &DAT_00076328;
            do {
              iVar11 = iVar11 + 1;
              if (iVar11 == DAT_0007632c) goto LAB_00019c34;
              if (iVar11 == 4) {
                if (DAT_0007632c < 5) goto LAB_00019c34;
                iVar1 = 0x19c0;
                goto LAB_000199d0;
              }
              piVar7 = (int *)(puVar8 + 0x778);
              puVar8 = puVar8 + 0x610;
            } while (*piVar7 != iVar1);
            iVar1 = iVar11 * 0x610 + 0x180;
          }
LAB_000199d0:
          puVar5 = &DAT_00076328 + iVar1;
        }
        uVar4 = FUN_000491bc(puVar5);
        FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
        iVar1 = iVar9;
      } while (iVar9 != 4);
      iVar1 = 0;
      do {
        iVar9 = iVar1 + 1;
        memset(local_9a0 + 0x10,0,0x20);
        snprintf(local_9a0 + 0x10,0x20,"freq%d",iVar9);
        if (DAT_0007632c < 1) {
LAB_00019b8c:
          iVar11 = 0;
          iVar1 = 0;
        }
        else {
          if (DAT_00076490 == iVar1) {
            iVar11 = 0;
          }
          else {
            iVar11 = 0;
            puVar8 = &DAT_00076328;
            do {
              iVar11 = iVar11 + 1;
              if (iVar11 == DAT_0007632c) goto LAB_00019b8c;
              if (iVar11 == 4) {
                if (DAT_0007632c < 5) goto LAB_00019b8c;
                break;
              }
              piVar7 = (int *)(puVar8 + 0x778);
              puVar8 = puVar8 + 0x610;
            } while (*piVar7 != iVar1);
          }
          iVar11 = (&DAT_00076494)[iVar11 * 0x184];
          iVar1 = iVar11 >> 0x1f;
        }
        uVar4 = FUN_00049408(iVar11,iVar1);
        FUN_00049a4c(uVar3,local_9a0 + 0x10,uVar4);
        iVar1 = iVar9;
      } while (iVar9 != 4);
      uVar4 = FUN_000491bc(&DAT_0006a6e0);
      FUN_00049a4c(uVar3,"miner_version",uVar4);
      uVar4 = FUN_000491bc(&DAT_00077d08);
      FUN_00049a4c(uVar3,"miner_id",uVar4);
      FUN_00049f0c(uVar2,uVar3);
      iVar1 = local_a08 + 1;
      bVar12 = 0xfffffffe < local_a08;
      local_a08 = local_a08 + 1;
      local_a04 = local_a04 + (uint)bVar12;
    } while (iVar1 < DAT_00074ff0);
  }
  FUN_00049a4c(param_1,"STATS",uVar2);
  uVar2 = FUN_00049408(1,0);
  FUN_00049a4c(param_1,&DAT_0004b220,uVar2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
  if (iVar1 != 0) {
    piVar7 = __errno_location();
    snprintf(acStack_830,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar7,
             "api_new.c","get_stats_old",0x4e6);
    FUN_0001dd98(3,acStack_830,1);
    FUN_0003c34c(1);
  }
  (*DAT_0006796c)();
  return 0;
}

