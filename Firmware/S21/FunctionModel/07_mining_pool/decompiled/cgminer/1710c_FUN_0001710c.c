// FUN_0001710c @ 0001710c  size=1384  callers=0
// program: cgminer


undefined4 FUN_0001710c(int param_1,int param_2)

{
  undefined4 uVar1;
  time_t tVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char local_954 [8];
  undefined4 local_94c;
  char local_948 [8];
  uint local_940 [6];
  char acStack_928 [128];
  char acStack_8a8 [128];
  char acStack_828 [2052];
  
  memset(acStack_928,0,0x80);
  memset(acStack_8a8,0,0x80);
  local_948[0] = '\0';
  local_948[1] = '\0';
  local_948[2] = '\0';
  local_948[3] = '\0';
  local_94c._0_1_ = '\0';
  local_94c._1_1_ = '\0';
  local_94c._2_1_ = '\0';
  local_94c._3_1_ = '\0';
  local_948[4] = '\0';
  local_948[5] = '\0';
  local_948[6] = '\0';
  local_948[7] = '\0';
  local_954[0] = '\0';
  local_954[1] = '\0';
  local_954[2] = '\0';
  local_954[3] = '\0';
  local_940[0] = 0;
  local_954[4] = '\0';
  local_954[5] = '\0';
  local_954[6] = '\0';
  local_954[7] = '\0';
  local_940[1] = 0;
  local_940[2] = 0;
  local_940[3] = 0;
  local_940[4] = 0;
  local_940[5] = 0;
  if (param_1 == 0 || param_2 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_828,0x800,"%s: input bad api param\n","get_pools");
      FUN_0001dd98(3,acStack_828,0);
    }
    return 0x80000002;
  }
  FUN_00016de4(param_1,param_2);
  FUN_00016920(param_1);
  uVar1 = FUN_00048fb8();
  if (0 < DAT_00072e70) {
    iVar10 = 0;
    uVar8 = 0;
    do {
      iVar9 = *(int *)(DAT_00072f14 + uVar8 * 4);
      if (iVar9 != 0) {
        uVar3 = FUN_00048c28();
        uVar4 = FUN_00049408(uVar8,iVar10);
        FUN_00049a4c(uVar3,"index",uVar4);
        memset(acStack_928,0,0x80);
        snprintf(acStack_928,0x80,"%s",*(char **)(iVar9 + 0xa4));
        uVar4 = FUN_000491bc(acStack_928);
        FUN_00049a4c(uVar3,&DAT_0004b2ec,uVar4);
        memset(acStack_8a8,0,0x80);
        snprintf(acStack_8a8,0x80,"%s",*(char **)(iVar9 + 0xac));
        uVar4 = FUN_000491bc(acStack_8a8);
        FUN_00049a4c(uVar3,&DAT_0004b2f0,uVar4);
        iVar5 = *(int *)(iVar9 + 100);
        local_948[4] = '\0';
        local_948[5] = '\0';
        local_948[6] = '\0';
        local_948[7] = '\0';
        if (iVar5 == 1) {
          if (*(char *)(iVar9 + 0x61) == '\0') {
            local_94c._0_1_ = 'A';
            local_94c._1_1_ = 'l';
            local_94c._2_1_ = 'i';
            local_94c._3_1_ = 'v';
            local_948[0] = 'e';
            local_948[1] = '\0';
            local_948[2] = '\0';
            local_948[3] = '\0';
          }
          else {
            local_94c._0_1_ = 'D';
            local_94c._1_1_ = 'e';
            local_94c._2_1_ = 'a';
            local_94c._3_1_ = 'd';
            local_948[0] = '\0';
            local_948[1] = '\0';
            local_948[2] = '\0';
            local_948[3] = '\0';
          }
        }
        else if (iVar5 == 0) {
          local_94c._0_1_ = 'D';
          local_94c._1_1_ = 'i';
          local_94c._2_1_ = 's';
          local_94c._3_1_ = 'a';
          builtin_strncpy(local_948,"bled",5);
          local_948[5] = '\0';
          local_948[6] = '\0';
          local_948[7] = '\0';
        }
        else if (iVar5 == 2) {
          local_94c._0_1_ = 'R';
          local_94c._1_1_ = 'e';
          local_94c._2_1_ = 'j';
          local_94c._3_1_ = 'e';
          builtin_strncpy(local_948,"cting",6);
          local_948[6] = '\0';
          local_948[7] = '\0';
        }
        else {
          local_94c._0_1_ = 'U';
          local_94c._1_1_ = 'n';
          local_94c._2_1_ = 'k';
          local_94c._3_1_ = 'n';
          builtin_strncpy(local_948,"own",4);
        }
        uVar4 = FUN_000491bc(&local_94c);
        FUN_00049a4c(uVar3,"status",uVar4);
        uVar4 = FUN_00049408(*(int *)(iVar9 + 4),*(int *)(iVar9 + 4) >> 0x1f);
        FUN_00049a4c(uVar3,"priority",uVar4);
        uVar4 = FUN_00049408(*(undefined4 *)(iVar9 + 0x74),0);
        FUN_00049a4c(uVar3,"getworks",uVar4);
        uVar4 = FUN_00049408(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc));
        FUN_00049a4c(uVar3,"accepted",uVar4);
        uVar4 = FUN_00049408(*(undefined4 *)(iVar9 + 0x10),*(undefined4 *)(iVar9 + 0x14));
        FUN_00049a4c(uVar3,"rejected",uVar4);
        uVar4 = FUN_00049408(*(undefined4 *)(iVar9 + 0x7c),0);
        FUN_00049a4c(uVar3,"discarded",uVar4);
        uVar4 = FUN_00049408(*(undefined4 *)(iVar9 + 0x78),0);
        FUN_00049a4c(uVar3,"stale",uVar4);
        local_954[0] = '\0';
        local_954[1] = '\0';
        local_954[2] = '\0';
        local_954[3] = '\0';
        local_954[4] = '\0';
        local_954[5] = '\0';
        local_954[6] = '\0';
        local_954[7] = '\0';
        snprintf(local_954,8,"%s",(char *)(iVar9 + 0x30));
        uVar4 = FUN_000491bc(local_954);
        FUN_00049a4c(uVar3,&DAT_0004b360,uVar4);
        uVar4 = FUN_00049408(*(undefined4 *)(iVar9 + 0x28),*(undefined4 *)(iVar9 + 0x2c));
        FUN_00049a4c(uVar3,"diff1",uVar4);
        FUN_0004ad64(*(undefined4 *)(iVar9 + 0x48),*(undefined4 *)(iVar9 + 0x4c));
        uVar4 = FUN_00049408();
        FUN_00049a4c(uVar3,&DAT_0004b370,uVar4);
        FUN_0004ad64(*(undefined4 *)(iVar9 + 0x50),*(undefined4 *)(iVar9 + 0x54));
        uVar4 = FUN_00049408();
        FUN_00049a4c(uVar3,"diffr",uVar4);
        FUN_0004ad64(*(undefined4 *)(iVar9 + 0x58),*(undefined4 *)(iVar9 + 0x5c));
        uVar4 = FUN_00049408();
        FUN_00049a4c(uVar3,"diffs",uVar4);
        FUN_0004ad64(*(undefined4 *)(iVar9 + 0x168),*(undefined4 *)(iVar9 + 0x16c));
        uVar4 = FUN_00049408();
        FUN_00049a4c(uVar3,"lsdiff",uVar4);
        uVar6 = *(uint *)(iVar9 + 0x160);
        local_940[0] = 0;
        local_940[1] = 0;
        local_940[2] = 0;
        uVar7 = uVar6;
        if ((int)uVar6 < 1) {
          uVar7 = 0x30;
        }
        local_940[3] = 0;
        local_940[4] = 0;
        local_940[5] = 0;
        if ((int)uVar6 < 1) {
          local_940[0] = uVar7 & 0xffff;
        }
        else {
          tVar2 = time((time_t *)0x0);
          uVar6 = tVar2 - *(int *)(iVar9 + 0x160);
          uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
          uVar7 = uVar6 % 0xe10;
          snprintf((char *)local_940,0x18,"%d:%02d:%02d",uVar6 / 0xe10,uVar7 / 0x3c,uVar7 % 0x3c);
        }
        uVar4 = FUN_000491bc(local_940);
        FUN_00049a4c(uVar3,"lstime",uVar4);
        FUN_00049f0c(uVar1,uVar3);
      }
      iVar9 = uVar8 + 1;
      iVar10 = iVar10 + (uint)(0xfffffffe < uVar8);
      uVar8 = uVar8 + 1;
    } while (iVar9 < DAT_00072e70);
  }
  FUN_00049a4c(param_1,"POOLS",uVar1);
  return 0;
}

