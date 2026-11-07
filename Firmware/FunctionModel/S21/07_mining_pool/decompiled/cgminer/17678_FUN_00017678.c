// FUN_00017678 @ 00017678  size=2284  callers=0
// program: cgminer


undefined4 FUN_00017678(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  time_t tVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  char local_964 [8];
  undefined4 local_95c;
  char local_958 [4];
  undefined4 local_954;
  uint local_950 [6];
  char acStack_938 [128];
  char acStack_8b8 [128];
  char acStack_838 [2052];
  
  memset(acStack_938,0,0x80);
  memset(acStack_8b8,0,0x80);
  local_958[0] = '\0';
  local_958[1] = '\0';
  local_958[2] = '\0';
  local_958[3] = '\0';
  local_95c._0_1_ = '\0';
  local_95c._1_1_ = '\0';
  local_95c._2_1_ = '\0';
  local_95c._3_1_ = '\0';
  local_954 = 0;
  local_964[0] = '\0';
  local_964[1] = '\0';
  local_964[2] = '\0';
  local_964[3] = '\0';
  local_950[0] = 0;
  local_964[4] = '\0';
  local_964[5] = '\0';
  local_964[6] = '\0';
  local_964[7] = '\0';
  local_950[1] = 0;
  local_950[2] = 0;
  local_950[3] = 0;
  local_950[4] = 0;
  local_950[5] = 0;
  if (param_1 == 0 || param_2 == 0) {
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
      uVar9 = 0x80000002;
    }
    else {
      uVar9 = 0x80000002;
      snprintf(acStack_838,0x800,"%s: input bad api param\n","get_pools_old");
      FUN_0001dd98(3,acStack_838,0);
    }
  }
  else if (DAT_00072e70 == 0) {
    FUN_00016a60(param_1,0,8,"No pools");
    uVar9 = 0;
  }
  else {
    FUN_00016a60(param_1,1,7,*(undefined4 *)(param_2 + 8));
    uVar1 = FUN_00048fb8();
    if (0 < DAT_00072e70) {
      iVar11 = 0;
      uVar12 = 0;
      do {
        iVar10 = *(int *)(DAT_00072f14 + uVar12 * 4);
        if (*(char *)(iVar10 + 0x69) == '\0') {
          uVar9 = FUN_00048c28();
          uVar2 = FUN_00049408(uVar12,iVar11);
          FUN_00049a4c(uVar9,&DAT_0004b3bc,uVar2);
          memset(acStack_938,0,0x80);
          snprintf(acStack_938,0x80,"%s",*(char **)(iVar10 + 0xa4));
          uVar2 = FUN_000491bc(acStack_938);
          FUN_00049a4c(uVar9,"URL",uVar2);
          iVar6 = *(int *)(iVar10 + 100);
          local_954 = 0;
          if (iVar6 == 1) {
            if (*(char *)(iVar10 + 0x61) == '\0') {
              local_95c._0_1_ = 'A';
              local_95c._1_1_ = 'l';
              local_95c._2_1_ = 'i';
              local_95c._3_1_ = 'v';
              local_958[0] = 'e';
              local_958[1] = '\0';
              local_958[2] = '\0';
              local_958[3] = '\0';
            }
            else {
              local_95c._0_1_ = 'D';
              local_95c._1_1_ = 'e';
              local_95c._2_1_ = 'e';
              local_95c._3_1_ = 'd';
              local_958[0] = '\0';
              local_958[1] = '\0';
              local_958[2] = '\0';
              local_958[3] = '\0';
            }
          }
          else if (iVar6 == 0) {
            local_95c._0_1_ = 'D';
            local_95c._1_1_ = 'i';
            local_95c._2_1_ = 's';
            local_95c._3_1_ = 'a';
            builtin_strncpy(local_958,"bled",4);
            local_954 = 0;
          }
          else if (iVar6 == 2) {
            local_95c._0_1_ = 'R';
            local_95c._1_1_ = 'e';
            local_95c._2_1_ = 'j';
            local_95c._3_1_ = 'e';
            builtin_strncpy(local_958,"ctin",4);
            local_954 = 0x67;
          }
          else {
            local_95c._0_1_ = 'U';
            local_95c._1_1_ = 'n';
            local_95c._2_1_ = 'k';
            local_95c._3_1_ = 'n';
            builtin_strncpy(local_958,"own",4);
          }
          uVar2 = FUN_000491bc(&local_95c);
          FUN_00049a4c(uVar9,"Status",uVar2);
          uVar2 = FUN_00049408(*(int *)(iVar10 + 4),*(int *)(iVar10 + 4) >> 0x1f);
          FUN_00049a4c(uVar9,"Priority",uVar2);
          uVar2 = FUN_00049408(*(int *)(iVar10 + 0x38),*(int *)(iVar10 + 0x38) >> 0x1f);
          FUN_00049a4c(uVar9,"Quota",uVar2);
          if (*(int *)(iVar10 + 0x6c) == 0) {
            puVar3 = &DAT_0004b3f8;
          }
          else {
            puVar3 = &DAT_0004b3e8;
          }
          uVar2 = FUN_000491bc(puVar3);
          FUN_00049a4c(uVar9,"Long Poll",uVar2);
          uVar2 = FUN_00049408(*(undefined4 *)(iVar10 + 0x74),0);
          FUN_00049a4c(uVar9,"Getworks",uVar2);
          uVar2 = FUN_00049408(*(undefined4 *)(iVar10 + 8),*(undefined4 *)(iVar10 + 0xc));
          FUN_00049a4c(uVar9,"Accepted",uVar2);
          uVar2 = FUN_00049408(*(undefined4 *)(iVar10 + 0x10),*(undefined4 *)(iVar10 + 0x14));
          FUN_00049a4c(uVar9,"Rejected",uVar2);
          uVar2 = FUN_00049408(*(undefined4 *)(iVar10 + 0x7c),0);
          FUN_00049a4c(uVar9,"Discarded",uVar2);
          uVar2 = FUN_00049408(*(undefined4 *)(iVar10 + 0x78),0);
          FUN_00049a4c(uVar9,"Stale",uVar2);
          uVar2 = FUN_00049408(*(undefined4 *)(iVar10 + 0x80),0);
          FUN_00049a4c(uVar9,"Get Failures",uVar2);
          uVar2 = FUN_00049408(*(undefined4 *)(iVar10 + 0x84),0);
          FUN_00049a4c(uVar9,"Remote Failures",uVar2);
          memset(acStack_8b8,0,0x80);
          snprintf(acStack_8b8,0x80,"%s",*(char **)(iVar10 + 0xac));
          uVar2 = FUN_000491bc(acStack_8b8);
          FUN_00049a4c(uVar9,&DAT_0004b454,uVar2);
          uVar7 = *(uint *)(iVar10 + 0x160);
          local_950[0] = 0;
          local_950[1] = 0;
          local_950[2] = 0;
          uVar8 = uVar7;
          if ((int)uVar7 < 1) {
            uVar8 = 0x30;
          }
          local_950[3] = 0;
          local_950[4] = 0;
          local_950[5] = 0;
          if ((int)uVar7 < 1) {
            local_950[0] = uVar8 & 0xffff;
          }
          else {
            tVar4 = time((time_t *)0x0);
            uVar7 = tVar4 - *(int *)(iVar10 + 0x160);
            uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
            uVar8 = uVar7 % 0xe10;
            snprintf((char *)local_950,0x18,"%d:%02d:%02d",uVar7 / 0xe10,uVar8 / 0x3c,uVar8 % 0x3c);
          }
          uVar2 = FUN_000491bc(local_950);
          FUN_00049a4c(uVar9,"Last Share Time",uVar2);
          local_964[0] = '\0';
          local_964[1] = '\0';
          local_964[2] = '\0';
          local_964[3] = '\0';
          local_964[4] = '\0';
          local_964[5] = '\0';
          local_964[6] = '\0';
          local_964[7] = '\0';
          snprintf(local_964,8,"%s",(char *)(iVar10 + 0x30));
          uVar2 = FUN_000491bc(local_964);
          FUN_00049a4c(uVar9,&DAT_0004b46c,uVar2);
          uVar2 = FUN_00049408(*(undefined4 *)(iVar10 + 0x28),*(undefined4 *)(iVar10 + 0x2c));
          FUN_00049a4c(uVar9,"Diff1 Shares",uVar2);
          if (*(int *)(iVar10 + 0xb8) == 0) {
            uVar2 = FUN_000491bc(&DAT_0004d140);
            FUN_00049a4c(uVar9,"Proxy Type",uVar2);
            puVar5 = &DAT_0004d140;
          }
          else {
            FUN_0001fa0c(*(undefined4 *)(iVar10 + 0xb4));
            uVar2 = FUN_000491bc();
            FUN_00049a4c(uVar9,"Proxy Type",uVar2);
            puVar5 = *(undefined1 **)(iVar10 + 0xb8);
          }
          uVar2 = FUN_000491bc(puVar5);
          FUN_00049a4c(uVar9,"Proxy",uVar2);
          dVar13 = *(double *)(iVar10 + 0x48) * 100.0;
          FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
          dVar13 = (double)FUN_0004accc();
          uVar2 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
          FUN_00049a4c(uVar9,"Difficulty Accepted",uVar2);
          dVar13 = *(double *)(iVar10 + 0x50) * 100.0;
          FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
          dVar13 = (double)FUN_0004accc();
          uVar2 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
          FUN_00049a4c(uVar9,"Difficulty Rejected",uVar2);
          dVar13 = *(double *)(iVar10 + 0x58) * 100.0;
          FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
          dVar13 = (double)FUN_0004accc();
          uVar2 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
          FUN_00049a4c(uVar9,"Difficulty Stale",uVar2);
          dVar13 = *(double *)(iVar10 + 0x168) * 100.0;
          FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
          dVar13 = (double)FUN_0004accc();
          uVar2 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
          FUN_00049a4c(uVar9,"Last Share Difficulty",uVar2);
          if (*(char *)(iVar10 + 0x290) == '\0') {
            uVar2 = FUN_000495cc();
          }
          else {
            uVar2 = FUN_000495c0();
          }
          FUN_00049a4c(uVar9,"Has Stratum",uVar2);
          if (*(char *)(iVar10 + 0x291) == '\0') {
            uVar2 = FUN_000495cc();
          }
          else {
            uVar2 = FUN_000495c0();
          }
          FUN_00049a4c(uVar9,"Stratum Active",uVar2);
          if (*(char *)(iVar10 + 0x291) == '\0') {
            puVar5 = &DAT_0004d140;
          }
          else {
            puVar5 = *(undefined1 **)(iVar10 + 0x240);
          }
          uVar2 = FUN_000491bc(puVar5);
          FUN_00049a4c(uVar9,"Stratum URL",uVar2);
          if (*(char *)(iVar10 + 0x2f0) == '\0') {
            uVar2 = FUN_000495cc();
          }
          else {
            uVar2 = FUN_000495c0();
          }
          FUN_00049a4c(uVar9,"Has GBT",uVar2);
          uVar8 = *(uint *)(iVar10 + 0x170);
          iVar6 = *(int *)(iVar10 + 0x174) * 3 + (uint)CARRY4(uVar8,uVar8) +
                  (uint)CARRY4(uVar8 * 2,uVar8);
          dVar13 = (double)FUN_0004accc(uVar8 * 100,
                                        iVar6 + (iVar6 * 0x20 | uVar8 * 3 >> 0x1b) +
                                        (uint)CARRY4(uVar8 * 3,uVar8 * 0x60) +
                                        *(int *)(iVar10 + 0x174) + (uint)CARRY4(uVar8 * 99,uVar8));
          uVar2 = FUN_0004948c(SUB84(dVar13 / 100.0,0));
          FUN_00049a4c(uVar9,"Best Share",uVar2);
          dVar13 = *(double *)(iVar10 + 0x50) + *(double *)(iVar10 + 0x48) +
                   *(double *)(iVar10 + 0x58);
          if (dVar13 == 0.0) {
            uVar2 = 0;
          }
          else {
            dVar13 = (*(double *)(iVar10 + 0x50) / dVar13) * 100.0;
            FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
            dVar13 = (double)FUN_0004accc();
            uVar2 = SUB84(dVar13 / 100.0,0);
          }
          uVar2 = FUN_0004948c(uVar2);
          FUN_00049a4c(uVar9,"Pool Rejected%",uVar2);
          dVar13 = *(double *)(iVar10 + 0x48) + *(double *)(iVar10 + 0x50) +
                   *(double *)(iVar10 + 0x58);
          if (dVar13 == 0.0) {
            uVar2 = 0;
          }
          else {
            dVar13 = (*(double *)(iVar10 + 0x58) / dVar13) * 100.0;
            FUN_0004ad64(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
            dVar13 = (double)FUN_0004accc();
            uVar2 = SUB84(dVar13 / 100.0,0);
          }
          uVar2 = FUN_0004948c(uVar2);
          FUN_00049a4c(uVar9,"Pool Stale%%",uVar2);
          FUN_00049f0c(uVar1,uVar9);
        }
        iVar10 = uVar12 + 1;
        iVar11 = iVar11 + (uint)(0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (iVar10 < DAT_00072e70);
    }
    uVar9 = 0;
    FUN_00049a4c(param_1,"POOLS",uVar1);
    uVar1 = FUN_00049408(1,0);
    FUN_00049a4c(param_1,&DAT_0004b220,uVar1);
  }
  return uVar9;
}

