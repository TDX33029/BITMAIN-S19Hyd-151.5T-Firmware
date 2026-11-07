// FUN_0002d6b0 @ 0002d6b0  size=2508  callers=10
// program: bmminer


void FUN_0002d6b0(uint param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  char cVar2;
  double param3;
  double param4;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  size_t sVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint param7;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  bool bVar21;
  float fVar22;
  ulonglong uVar23;
  int local_4578;
  undefined2 local_454c;
  undefined1 local_454a;
  byte local_4547;
  sbyte local_4546;
  uint local_4544;
  char local_4540 [256];
  uint local_4440 [256];
  char acStack_4040 [8192];
  char local_2040 [8];
  uint local_2038;
  char acStack_2034 [8184];
  
  if (4 < DAT_000be63c) {
    snprintf(local_2040,0x2000,"%s: %s %d %s %d %s %d %s %d\n","set_freq","chain",param_1,"mode",
             param_2,"chip_addr",param_3,"pll_id",param_4);
    FUN_0004948c(4,local_2040,0);
  }
  local_4544 = 0;
  local_4578 = 5;
  uVar20 = 0;
  local_454a = 100;
  local_4547 = 7;
  local_4546 = 0x1f;
  local_454c = 0x6008;
  memset(local_4440,0,0x400);
  do {
    iVar5 = FUN_0002a6f0(uVar20);
    if ((iVar5 != 0) && (param_1 == 0xff || param_1 == uVar20)) {
      if (param_2 == 0) {
        if (local_4578 != 0) {
          cVar1 = local_4540[param_4 + -0xc];
          local_4578 = local_4578 + -1;
          do {
            FUN_00082180(uVar20 & 0xff,param_3,param_4,param_5,(undefined2)param_6);
            FUN_000835dc(1,uVar20 & 0xff,param_3,cVar1,&local_4544);
            uVar12 = (uint)local_4547;
            uVar13 = 1 << local_4546;
            local_4544 = local_4544 & 0xfffffff7 & ~(1 << uVar12) & ~uVar13;
            local_4440[0] = FUN_000462cc(cVar1,param_3,param_1);
            local_4440[0] = local_4440[0] & ~(uVar13 | 1 << uVar12) & 0xfffffff7;
            if (local_4440[0] == local_4544) goto joined_r0x0002da70;
            uVar13 = (&DAT_000c0484)[uVar20];
            (&DAT_000c0484)[uVar20] = uVar13 + 1;
            if ((uVar13 < 0x100) && (3 < DAT_000be63c)) {
              uVar7 = FUN_0002a584();
              iVar5 = FUN_00098658(param_3,uVar7);
              snprintf(local_2040,0x2000,"chain[%d] asic[%d] check pll config err",param_1,iVar5);
              FUN_0004948c(3,local_2040,0);
            }
            usleep(100000);
            bVar21 = local_4578 != 0;
            local_4578 = local_4578 + -1;
          } while (bVar21);
        }
      }
      else if (local_4578 != 0) {
        cVar1 = local_4540[param_4 + -0xc];
        uVar13 = uVar20 & 0xff;
        local_4578 = local_4578 + -1;
        do {
          memset(local_4540,0,0x100);
          FUN_0008213c(uVar13,param_4,param_5,param_6);
          FUN_000835dc(0,uVar13,0,cVar1,&local_4544);
          uVar12 = 1 << local_4547;
          uVar18 = 1 << local_4546;
          local_4544 = local_4544 & 0xfffffff7 & ~uVar12 & ~uVar18;
          iVar5 = FUN_00047af0(param_1,cVar1,local_4440);
          bVar4 = true;
          bVar21 = bVar4;
          if (iVar5 == 0) {
            if (3 < DAT_000be63c) {
              snprintf(local_2040,0x2000,"chain[%d] get pll config err, times %d",uVar20,local_4578)
              ;
              FUN_0004948c(3,local_2040,0);
            }
          }
          else {
            bVar21 = false;
          }
          uVar10 = 0;
          while( true ) {
            uVar16 = uVar10;
            uVar14 = uVar16 & 0xff;
            iVar5 = FUN_0002a514();
            if (iVar5 <= (int)uVar14) break;
            param7 = local_4440[uVar14] & ~(uVar18 | uVar12) & 0xfffffff7;
            local_4440[uVar14] = param7;
            uVar10 = uVar16 + 1;
            if (param7 != local_4544) {
              uVar11 = (&DAT_000c0484)[uVar20];
              (&DAT_000c0484)[uVar20] = uVar11 + 1;
              if ((uVar11 < 0x100) && (3 < DAT_000be63c)) {
                uVar23 = CONCAT44(local_4578,uVar16) & 0xffffffff000000ff;
                snprintf(local_2040,0x2000,
                         "chain[%d] asic[%d] check pll config err, times %d, value_set:%x, value_get:%x"
                         ,uVar20,(int)uVar23,(int)(uVar23 >> 0x20),local_4544,param7);
                FUN_0004948c(3,local_2040,0);
              }
              local_4540[uVar14] = '\x01';
              bVar21 = bVar4;
            }
          }
          if (!bVar21) goto joined_r0x0002da70;
          memset(acStack_4040,0,0x2000);
          puVar17 = &DAT_000c74cc;
          local_2040[0] = '\0';
          local_2040[1] = '\0';
          local_2040[2] = '\0';
          local_2040[3] = '\0';
          uVar12 = 1;
          local_2040[4] = '\0';
          local_2040[5] = '\0';
          local_2040[6] = '\0';
          local_2040[7] = '\0';
          local_2038 = local_2038 & 0xffff0000;
          sprintf(local_2040,"%08x ",DAT_000c74cc);
          strcat(acStack_4040,local_2040);
          do {
            puVar17 = puVar17 + 1;
            local_2040[0] = '\0';
            local_2040[1] = '\0';
            local_2040[2] = '\0';
            local_2040[3] = '\0';
            local_2040[4] = '\0';
            local_2040[5] = '\0';
            local_2040[6] = '\0';
            local_2040[7] = '\0';
            uVar12 = uVar12 + 1;
            local_2038 = local_2038 & 0xffff0000;
            sprintf(local_2040,"%08x ",*puVar17);
            sVar8 = strlen(acStack_4040);
            pcVar9 = stpcpy(acStack_4040 + sVar8,local_2040);
            if ((uVar12 & 3) == 0) {
              pcVar9[0] = '\n';
              pcVar9[1] = '\0';
            }
          } while (uVar12 != 0x2a8);
          if (4 < DAT_000be63c) {
            snprintf(local_2040,0x2000,"debug_buf:%s",acStack_4040);
            FUN_0004948c(4,local_2040,0);
            if (4 < DAT_000be63c) {
              snprintf(local_2040,0x2000,"value_set:%x value_get:%x",local_4544,local_4440[0]);
              FUN_0004948c(4,local_2040,0);
            }
          }
          usleep(100000);
          uVar12 = 0;
          cVar3 = '\0';
          while( true ) {
            uVar18 = uVar12 & 0xff;
            iVar5 = FUN_0002a514();
            if (iVar5 <= (int)uVar18) break;
            cVar2 = local_4540[uVar18];
            if (cVar2 != '\0') {
              FUN_00082180(uVar13,uVar18,param_4,param_5,(undefined2)param_6);
              uVar10 = FUN_000462cc(cVar1,uVar18,param_1);
              uVar10 = uVar10 & ~(1 << local_4547 | 1 << local_4546) & 0xfffffff7U;
              local_4440[uVar18] = uVar10;
              if (((uVar10 != local_4544) &&
                  (uVar18 = (&DAT_000c0484)[uVar20], (&DAT_000c0484)[uVar20] = uVar18 + 1,
                  cVar3 = cVar2, uVar18 < 0x100)) && (3 < DAT_000be63c)) {
                uVar23 = CONCAT44(local_4578,uVar12) & 0xffffffff000000ff;
                snprintf(local_2040,0x2000,
                         "chain[%d] asic[%d] retry check pll config err, times %d, value_set:%x, value_get:%x"
                         ,uVar20,(int)uVar23,(int)(uVar23 >> 0x20),local_4544,uVar10);
                FUN_0004948c(3,local_2040,0);
              }
            }
            uVar12 = uVar12 + 1;
          }
          if (cVar3 == '\0') goto joined_r0x0002da70;
          usleep(100000);
          bVar21 = local_4578 != 0;
          local_4578 = local_4578 + -1;
        } while (bVar21);
      }
      local_4578 = -1;
    }
joined_r0x0002da70:
    uVar20 = uVar20 + 1;
    if (uVar20 == 4) {
      if (local_4578 != -1) {
        return;
      }
      uVar13 = 0;
      uVar20 = 0;
      FUN_000190dc();
      do {
        iVar5 = FUN_0002a6f0(uVar20);
        if (iVar5 != 0) {
          pfVar19 = (float *)(&DAT_000c0498 + uVar20 * 0x400);
          FUN_0002d338(uVar20 & 0xff,0);
          iVar5 = 0;
          while( true ) {
            iVar6 = FUN_0002a514();
            iVar15 = iVar5 + 1;
            if (iVar6 <= iVar5) break;
            fVar22 = *pfVar19;
            pfVar19 = pfVar19 + 4;
            iVar5 = iVar15;
            if (fVar22 < 0.0) {
              uVar13 = uVar13 + 1;
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != 4);
      param3 = (double)FUN_000243f0(0,1);
      param4 = (double)FUN_00073f10();
      fVar22 = (float)FUN_00024efc();
      uVar20 = FUN_00077f64(0);
      if (3 < DAT_000be63c) {
        snprintf(local_2040,0x2000,"set_vol:%f, out_vol:%f, power:%f, err_code:0x%08x!",param3,
                 param4,(double)fVar22,uVar20);
        FUN_0004948c(3,local_2040,0);
      }
      iVar5 = FUN_0002a514();
      iVar6 = FUN_0002a6e0();
      if (iVar6 * iVar5 == uVar13) {
        if (3 < DAT_000be63c) {
          builtin_strncpy(local_2040,"Please c",8);
          local_2038._0_1_ = 'h';
          local_2038._1_1_ = 'e';
          local_2038._2_1_ = 'c';
          local_2038._3_1_ = 'k';
          builtin_strncpy(acStack_2034," if the power supply is normal?",0x20);
          FUN_0004948c(3,local_2040,0);
        }
      }
      else {
        uVar20 = FUN_0002a514();
        if (uVar13 < uVar20) {
          if (3 < DAT_000be63c) {
            builtin_strncpy(local_2040,"Please c",8);
            local_2038._0_1_ = 'h';
            local_2038._1_1_ = 'e';
            local_2038._2_1_ = 'c';
            local_2038._3_1_ = 'k';
            builtin_strncpy(acStack_2034," if the chip is normal?",0x18);
            FUN_0004948c(3,local_2040,0);
          }
        }
        else if (3 < DAT_000be63c) {
          builtin_strncpy(local_2040,"Please c",8);
          local_2038._0_1_ = 'h';
          local_2038._1_1_ = 'e';
          local_2038._2_1_ = 'c';
          local_2038._3_1_ = 'k';
          builtin_strncpy(acStack_2034," if the control board is normal?",0x21);
          FUN_0004948c(3,local_2040,0);
        }
      }
      FUN_00056e88(0x1a,0);
      FUN_0004e8c8(0xb,"Unbalance happened, waiting!\n");
      return;
    }
  } while( true );
}

