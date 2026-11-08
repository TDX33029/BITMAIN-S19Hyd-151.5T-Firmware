// FUN_0002d6b0 @ 0002d6b0  size=2508
// callers: [FUN_0002500c, FUN_0002683c, FUN_0003de20, FUN_0005d758, FUN_00039228, FUN_00038ea8, FUN_000261a8, FUN_00025da0, FUN_00026f74, FUN_00039094]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002d6b0(uint param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  char cVar2;
  double param3;
  double param4;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined2 uVar35;
  int iVar36;
  int iVar37;
  undefined4 uVar38;
  size_t sVar39;
  char *pcVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint param7;
  uint uVar45;
  int iVar46;
  uint uVar47;
  uint *puVar48;
  uint uVar49;
  float *pfVar50;
  uint uVar51;
  bool bVar52;
  float fVar53;
  ulonglong uVar54;
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
  char acStack_2034 [4];
  char local_2030 [4];
  char acStack_202c [4];
  char acStack_2028 [4];
  char acStack_2024 [4];
  char local_2020 [4];
  char acStack_201c [4];
  char acStack_2018 [4];
  undefined1 local_2014;
  
  if (4 < DAT_000be63c) {
    snprintf(local_2040,0x2000,"%s: %s %d %s %d %s %d %s %d\n",DAT_0002e080,"chain",param_1,"mode",
             param_2,"chip_addr",param_3,"pll_id",param_4);
    FUN_0004948c(4,local_2040,0);
  }
  local_4544 = 0;
  local_4578 = 5;
  uVar51 = 0;
  local_454a = 100;
  local_4547 = 7;
  local_4546 = 0x1f;
  local_454c = 0x6008;
  memset(local_4440,0,0x400);
  do {
    iVar36 = FUN_0002a6f0(uVar51);
    uVar38 = s_Please_check_if_the_power_supply_0009d604._0_4_;
    uVar5 = s_Please_check_if_the_power_supply_0009d604._4_4_;
    uVar6 = s_Please_check_if_the_power_supply_0009d604._8_4_;
    uVar7 = s_Please_check_if_the_power_supply_0009d604._12_4_;
    uVar8 = s_Please_check_if_the_power_supply_0009d604._16_4_;
    uVar9 = s_Please_check_if_the_power_supply_0009d604._20_4_;
    uVar10 = s_Please_check_if_the_power_supply_0009d604._24_4_;
    uVar11 = s_Please_check_if_the_power_supply_0009d604._28_4_;
    uVar12 = s_Please_check_if_the_power_supply_0009d604._32_4_;
    uVar13 = s_Please_check_if_the_power_supply_0009d604._36_4_;
    uVar14 = s_Please_check_if_the_power_supply_0009d604._40_4_;
    uVar15 = s_Please_check_if_the_control_boar_0009d630._0_4_;
    uVar16 = s_Please_check_if_the_control_boar_0009d630._4_4_;
    uVar17 = s_Please_check_if_the_control_boar_0009d630._8_4_;
    uVar18 = s_Please_check_if_the_control_boar_0009d630._12_4_;
    uVar19 = s_Please_check_if_the_control_boar_0009d630._16_4_;
    uVar20 = s_Please_check_if_the_control_boar_0009d630._20_4_;
    uVar21 = s_Please_check_if_the_control_boar_0009d630._24_4_;
    uVar22 = s_Please_check_if_the_control_boar_0009d630._28_4_;
    uVar23 = s_Please_check_if_the_control_boar_0009d630._32_4_;
    uVar24 = s_Please_check_if_the_control_boar_0009d630._36_4_;
    uVar25 = s_Please_check_if_the_control_boar_0009d630._40_4_;
    uVar26 = s_Please_check_if_the_chip_is_norm_0009d660._0_4_;
    uVar27 = s_Please_check_if_the_chip_is_norm_0009d660._4_4_;
    uVar28 = s_Please_check_if_the_chip_is_norm_0009d660._8_4_;
    uVar29 = s_Please_check_if_the_chip_is_norm_0009d660._12_4_;
    uVar30 = s_Please_check_if_the_chip_is_norm_0009d660._16_4_;
    uVar31 = s_Please_check_if_the_chip_is_norm_0009d660._20_4_;
    uVar32 = s_Please_check_if_the_chip_is_norm_0009d660._24_4_;
    uVar33 = s_Please_check_if_the_chip_is_norm_0009d660._28_4_;
    uVar34 = s_Please_check_if_the_chip_is_norm_0009d660._32_4_;
    uVar35 = s_got_nothing_0009a57c._12_2_;
    if ((iVar36 != 0) && (param_1 == 0xff || param_1 == uVar51)) {
      if (param_2 == 0) {
        if (local_4578 != 0) {
          cVar1 = local_4540[param_4 + -0xc];
          local_4578 = local_4578 + -1;
          do {
            FUN_00082180(uVar51 & 0xff,param_3,param_4,param_5,(undefined2)param_6);
            FUN_000835dc(1,uVar51 & 0xff,param_3,cVar1,&local_4544);
            uVar43 = (uint)local_4547;
            uVar44 = 1 << local_4546;
            local_4544 = local_4544 & 0xfffffff7 & ~(1 << uVar43) & ~uVar44;
            local_4440[0] = FUN_000462cc(cVar1,param_3,param_1);
            local_4440[0] = local_4440[0] & ~(uVar44 | 1 << uVar43) & 0xfffffff7;
            uVar38 = s_Please_check_if_the_power_supply_0009d604._0_4_;
            uVar5 = s_Please_check_if_the_power_supply_0009d604._4_4_;
            uVar6 = s_Please_check_if_the_power_supply_0009d604._8_4_;
            uVar7 = s_Please_check_if_the_power_supply_0009d604._12_4_;
            uVar8 = s_Please_check_if_the_power_supply_0009d604._16_4_;
            uVar9 = s_Please_check_if_the_power_supply_0009d604._20_4_;
            uVar10 = s_Please_check_if_the_power_supply_0009d604._24_4_;
            uVar11 = s_Please_check_if_the_power_supply_0009d604._28_4_;
            uVar12 = s_Please_check_if_the_power_supply_0009d604._32_4_;
            uVar13 = s_Please_check_if_the_power_supply_0009d604._36_4_;
            uVar14 = s_Please_check_if_the_power_supply_0009d604._40_4_;
            uVar15 = s_Please_check_if_the_control_boar_0009d630._0_4_;
            uVar16 = s_Please_check_if_the_control_boar_0009d630._4_4_;
            uVar17 = s_Please_check_if_the_control_boar_0009d630._8_4_;
            uVar18 = s_Please_check_if_the_control_boar_0009d630._12_4_;
            uVar19 = s_Please_check_if_the_control_boar_0009d630._16_4_;
            uVar20 = s_Please_check_if_the_control_boar_0009d630._20_4_;
            uVar21 = s_Please_check_if_the_control_boar_0009d630._24_4_;
            uVar22 = s_Please_check_if_the_control_boar_0009d630._28_4_;
            uVar23 = s_Please_check_if_the_control_boar_0009d630._32_4_;
            uVar24 = s_Please_check_if_the_control_boar_0009d630._36_4_;
            uVar25 = s_Please_check_if_the_control_boar_0009d630._40_4_;
            uVar26 = s_Please_check_if_the_chip_is_norm_0009d660._0_4_;
            uVar27 = s_Please_check_if_the_chip_is_norm_0009d660._4_4_;
            uVar28 = s_Please_check_if_the_chip_is_norm_0009d660._8_4_;
            uVar29 = s_Please_check_if_the_chip_is_norm_0009d660._12_4_;
            uVar30 = s_Please_check_if_the_chip_is_norm_0009d660._16_4_;
            uVar31 = s_Please_check_if_the_chip_is_norm_0009d660._20_4_;
            uVar32 = s_Please_check_if_the_chip_is_norm_0009d660._24_4_;
            uVar33 = s_Please_check_if_the_chip_is_norm_0009d660._28_4_;
            uVar34 = s_Please_check_if_the_chip_is_norm_0009d660._32_4_;
            uVar35 = s_got_nothing_0009a57c._12_2_;
            if (local_4440[0] == local_4544) goto joined_r0x0002da70;
            uVar44 = *(uint *)(uVar51 * 4 + DAT_0002e07c);
            *(uint *)(uVar51 * 4 + DAT_0002e07c) = uVar44 + 1;
            if ((uVar44 < 0x100) && (3 < DAT_000be63c)) {
              uVar38 = FUN_0002a584();
              iVar36 = FUN_00098658(param_3,uVar38);
              snprintf(local_2040,0x2000,"chain[%d] asic[%d] check pll config err",param_1,iVar36);
              FUN_0004948c(3,local_2040,0);
            }
            usleep(100000);
            bVar52 = local_4578 != 0;
            local_4578 = local_4578 + -1;
          } while (bVar52);
        }
      }
      else if (local_4578 != 0) {
        iVar36 = uVar51 * 4;
        cVar1 = local_4540[param_4 + -0xc];
        uVar44 = uVar51 & 0xff;
        local_4578 = local_4578 + -1;
        do {
          memset(local_4540,0,0x100);
          FUN_0008213c(uVar44,param_4,param_5,param_6);
          FUN_000835dc(0,uVar44,0,cVar1,&local_4544);
          uVar43 = 1 << local_4547;
          uVar49 = 1 << local_4546;
          local_4544 = local_4544 & 0xfffffff7 & ~uVar43 & ~uVar49;
          iVar37 = FUN_00047af0(param_1,cVar1,local_4440);
          bVar4 = true;
          bVar52 = bVar4;
          if (iVar37 == 0) {
            if (3 < DAT_000be63c) {
              snprintf(local_2040,0x2000,"chain[%d] get pll config err, times %d",uVar51,local_4578)
              ;
              FUN_0004948c(3,local_2040,0);
            }
          }
          else {
            bVar52 = false;
          }
          uVar41 = 0;
          while( true ) {
            uVar47 = uVar41;
            uVar45 = uVar47 & 0xff;
            iVar37 = FUN_0002a514();
            if (iVar37 <= (int)uVar45) break;
            param7 = local_4440[uVar45] & ~(uVar49 | uVar43) & 0xfffffff7;
            local_4440[uVar45] = param7;
            uVar41 = uVar47 + 1;
            if (param7 != local_4544) {
              uVar42 = *(uint *)(iVar36 + DAT_0002e07c);
              *(uint *)(iVar36 + DAT_0002e07c) = uVar42 + 1;
              if ((uVar42 < 0x100) && (3 < DAT_000be63c)) {
                uVar54 = CONCAT44(local_4578,uVar47) & 0xffffffff000000ff;
                snprintf(local_2040,0x2000,
                         "chain[%d] asic[%d] check pll config err, times %d, value_set:%x, value_get:%x"
                         ,uVar51,(int)uVar54,(int)(uVar54 >> 0x20),local_4544,param7);
                FUN_0004948c(3,local_2040,0);
              }
              local_4540[uVar45] = '\x01';
              bVar52 = bVar4;
            }
          }
          uVar38 = s_Please_check_if_the_power_supply_0009d604._0_4_;
          uVar5 = s_Please_check_if_the_power_supply_0009d604._4_4_;
          uVar6 = s_Please_check_if_the_power_supply_0009d604._8_4_;
          uVar7 = s_Please_check_if_the_power_supply_0009d604._12_4_;
          uVar8 = s_Please_check_if_the_power_supply_0009d604._16_4_;
          uVar9 = s_Please_check_if_the_power_supply_0009d604._20_4_;
          uVar10 = s_Please_check_if_the_power_supply_0009d604._24_4_;
          uVar11 = s_Please_check_if_the_power_supply_0009d604._28_4_;
          uVar12 = s_Please_check_if_the_power_supply_0009d604._32_4_;
          uVar13 = s_Please_check_if_the_power_supply_0009d604._36_4_;
          uVar14 = s_Please_check_if_the_power_supply_0009d604._40_4_;
          uVar15 = s_Please_check_if_the_control_boar_0009d630._0_4_;
          uVar16 = s_Please_check_if_the_control_boar_0009d630._4_4_;
          uVar17 = s_Please_check_if_the_control_boar_0009d630._8_4_;
          uVar18 = s_Please_check_if_the_control_boar_0009d630._12_4_;
          uVar19 = s_Please_check_if_the_control_boar_0009d630._16_4_;
          uVar20 = s_Please_check_if_the_control_boar_0009d630._20_4_;
          uVar21 = s_Please_check_if_the_control_boar_0009d630._24_4_;
          uVar22 = s_Please_check_if_the_control_boar_0009d630._28_4_;
          uVar23 = s_Please_check_if_the_control_boar_0009d630._32_4_;
          uVar24 = s_Please_check_if_the_control_boar_0009d630._36_4_;
          uVar25 = s_Please_check_if_the_control_boar_0009d630._40_4_;
          uVar26 = s_Please_check_if_the_chip_is_norm_0009d660._0_4_;
          uVar27 = s_Please_check_if_the_chip_is_norm_0009d660._4_4_;
          uVar28 = s_Please_check_if_the_chip_is_norm_0009d660._8_4_;
          uVar29 = s_Please_check_if_the_chip_is_norm_0009d660._12_4_;
          uVar30 = s_Please_check_if_the_chip_is_norm_0009d660._16_4_;
          uVar31 = s_Please_check_if_the_chip_is_norm_0009d660._20_4_;
          uVar32 = s_Please_check_if_the_chip_is_norm_0009d660._24_4_;
          uVar33 = s_Please_check_if_the_chip_is_norm_0009d660._28_4_;
          uVar34 = s_Please_check_if_the_chip_is_norm_0009d660._32_4_;
          uVar35 = s_got_nothing_0009a57c._12_2_;
          if (!bVar52) goto joined_r0x0002da70;
          memset(acStack_4040,0,0x2000);
          puVar48 = &DAT_000c74cc;
          local_2040[0] = '\0';
          local_2040[1] = '\0';
          local_2040[2] = '\0';
          local_2040[3] = '\0';
          uVar43 = 1;
          local_2040[4] = '\0';
          local_2040[5] = '\0';
          local_2040[6] = '\0';
          local_2040[7] = '\0';
          local_2038 = local_2038 & 0xffff0000;
          sprintf(local_2040,"%08x ",DAT_000c74cc);
          strcat(acStack_4040,local_2040);
          do {
            puVar48 = puVar48 + 1;
            local_2040[0] = '\0';
            local_2040[1] = '\0';
            local_2040[2] = '\0';
            local_2040[3] = '\0';
            local_2040[4] = '\0';
            local_2040[5] = '\0';
            local_2040[6] = '\0';
            local_2040[7] = '\0';
            uVar43 = uVar43 + 1;
            local_2038 = local_2038 & 0xffff0000;
            sprintf(local_2040,"%08x ",*puVar48);
            sVar39 = strlen(acStack_4040);
            pcVar40 = stpcpy(acStack_4040 + sVar39,local_2040);
            if ((uVar43 & 3) == 0) {
              *(undefined2 *)pcVar40 = s_got_nothing_0009a57c._12_2_;
            }
          } while (uVar43 != 0x2a8);
          if (4 < DAT_000be63c) {
            snprintf(local_2040,0x2000,"debug_buf:%s",acStack_4040);
            FUN_0004948c(4,local_2040,0);
            if (4 < DAT_000be63c) {
              snprintf(local_2040,0x2000,"value_set:%x value_get:%x",local_4544,local_4440[0]);
              FUN_0004948c(4,local_2040,0);
            }
          }
          usleep(100000);
          uVar43 = 0;
          cVar3 = '\0';
          while( true ) {
            uVar49 = uVar43 & 0xff;
            iVar37 = FUN_0002a514();
            if (iVar37 <= (int)uVar49) break;
            cVar2 = local_4540[uVar49];
            if (cVar2 != '\0') {
              FUN_00082180(uVar44,uVar49,param_4,param_5,(undefined2)param_6);
              uVar41 = FUN_000462cc(cVar1,uVar49,param_1);
              uVar41 = uVar41 & ~(1 << local_4547 | 1 << local_4546) & 0xfffffff7U;
              local_4440[uVar49] = uVar41;
              if (((uVar41 != local_4544) &&
                  (uVar49 = *(uint *)(iVar36 + DAT_0002e07c),
                  *(uint *)(iVar36 + DAT_0002e07c) = uVar49 + 1, cVar3 = cVar2, uVar49 < 0x100)) &&
                 (3 < DAT_000be63c)) {
                uVar54 = CONCAT44(local_4578,uVar43) & 0xffffffff000000ff;
                snprintf(local_2040,0x2000,
                         "chain[%d] asic[%d] retry check pll config err, times %d, value_set:%x, value_get:%x"
                         ,uVar51,(int)uVar54,(int)(uVar54 >> 0x20),local_4544,uVar41);
                FUN_0004948c(3,local_2040,0);
              }
            }
            uVar43 = uVar43 + 1;
          }
          uVar38 = s_Please_check_if_the_power_supply_0009d604._0_4_;
          uVar5 = s_Please_check_if_the_power_supply_0009d604._4_4_;
          uVar6 = s_Please_check_if_the_power_supply_0009d604._8_4_;
          uVar7 = s_Please_check_if_the_power_supply_0009d604._12_4_;
          uVar8 = s_Please_check_if_the_power_supply_0009d604._16_4_;
          uVar9 = s_Please_check_if_the_power_supply_0009d604._20_4_;
          uVar10 = s_Please_check_if_the_power_supply_0009d604._24_4_;
          uVar11 = s_Please_check_if_the_power_supply_0009d604._28_4_;
          uVar12 = s_Please_check_if_the_power_supply_0009d604._32_4_;
          uVar13 = s_Please_check_if_the_power_supply_0009d604._36_4_;
          uVar14 = s_Please_check_if_the_power_supply_0009d604._40_4_;
          uVar15 = s_Please_check_if_the_control_boar_0009d630._0_4_;
          uVar16 = s_Please_check_if_the_control_boar_0009d630._4_4_;
          uVar17 = s_Please_check_if_the_control_boar_0009d630._8_4_;
          uVar18 = s_Please_check_if_the_control_boar_0009d630._12_4_;
          uVar19 = s_Please_check_if_the_control_boar_0009d630._16_4_;
          uVar20 = s_Please_check_if_the_control_boar_0009d630._20_4_;
          uVar21 = s_Please_check_if_the_control_boar_0009d630._24_4_;
          uVar22 = s_Please_check_if_the_control_boar_0009d630._28_4_;
          uVar23 = s_Please_check_if_the_control_boar_0009d630._32_4_;
          uVar24 = s_Please_check_if_the_control_boar_0009d630._36_4_;
          uVar25 = s_Please_check_if_the_control_boar_0009d630._40_4_;
          uVar26 = s_Please_check_if_the_chip_is_norm_0009d660._0_4_;
          uVar27 = s_Please_check_if_the_chip_is_norm_0009d660._4_4_;
          uVar28 = s_Please_check_if_the_chip_is_norm_0009d660._8_4_;
          uVar29 = s_Please_check_if_the_chip_is_norm_0009d660._12_4_;
          uVar30 = s_Please_check_if_the_chip_is_norm_0009d660._16_4_;
          uVar31 = s_Please_check_if_the_chip_is_norm_0009d660._20_4_;
          uVar32 = s_Please_check_if_the_chip_is_norm_0009d660._24_4_;
          uVar33 = s_Please_check_if_the_chip_is_norm_0009d660._28_4_;
          uVar34 = s_Please_check_if_the_chip_is_norm_0009d660._32_4_;
          uVar35 = s_got_nothing_0009a57c._12_2_;
          if (cVar3 == '\0') goto joined_r0x0002da70;
          usleep(100000);
          bVar52 = local_4578 != 0;
          local_4578 = local_4578 + -1;
        } while (bVar52);
      }
      local_4578 = -1;
      uVar38 = s_Please_check_if_the_power_supply_0009d604._0_4_;
      uVar5 = s_Please_check_if_the_power_supply_0009d604._4_4_;
      uVar6 = s_Please_check_if_the_power_supply_0009d604._8_4_;
      uVar7 = s_Please_check_if_the_power_supply_0009d604._12_4_;
      uVar8 = s_Please_check_if_the_power_supply_0009d604._16_4_;
      uVar9 = s_Please_check_if_the_power_supply_0009d604._20_4_;
      uVar10 = s_Please_check_if_the_power_supply_0009d604._24_4_;
      uVar11 = s_Please_check_if_the_power_supply_0009d604._28_4_;
      uVar12 = s_Please_check_if_the_power_supply_0009d604._32_4_;
      uVar13 = s_Please_check_if_the_power_supply_0009d604._36_4_;
      uVar14 = s_Please_check_if_the_power_supply_0009d604._40_4_;
      uVar15 = s_Please_check_if_the_control_boar_0009d630._0_4_;
      uVar16 = s_Please_check_if_the_control_boar_0009d630._4_4_;
      uVar17 = s_Please_check_if_the_control_boar_0009d630._8_4_;
      uVar18 = s_Please_check_if_the_control_boar_0009d630._12_4_;
      uVar19 = s_Please_check_if_the_control_boar_0009d630._16_4_;
      uVar20 = s_Please_check_if_the_control_boar_0009d630._20_4_;
      uVar21 = s_Please_check_if_the_control_boar_0009d630._24_4_;
      uVar22 = s_Please_check_if_the_control_boar_0009d630._28_4_;
      uVar23 = s_Please_check_if_the_control_boar_0009d630._32_4_;
      uVar24 = s_Please_check_if_the_control_boar_0009d630._36_4_;
      uVar25 = s_Please_check_if_the_control_boar_0009d630._40_4_;
      uVar26 = s_Please_check_if_the_chip_is_norm_0009d660._0_4_;
      uVar27 = s_Please_check_if_the_chip_is_norm_0009d660._4_4_;
      uVar28 = s_Please_check_if_the_chip_is_norm_0009d660._8_4_;
      uVar29 = s_Please_check_if_the_chip_is_norm_0009d660._12_4_;
      uVar30 = s_Please_check_if_the_chip_is_norm_0009d660._16_4_;
      uVar31 = s_Please_check_if_the_chip_is_norm_0009d660._20_4_;
      uVar32 = s_Please_check_if_the_chip_is_norm_0009d660._24_4_;
      uVar33 = s_Please_check_if_the_chip_is_norm_0009d660._28_4_;
      uVar34 = s_Please_check_if_the_chip_is_norm_0009d660._32_4_;
      uVar35 = s_got_nothing_0009a57c._12_2_;
    }
joined_r0x0002da70:
    uVar51 = uVar51 + 1;
    s_Please_check_if_the_power_supply_0009d604._0_4_ = uVar38;
    s_Please_check_if_the_power_supply_0009d604._4_4_ = uVar5;
    s_Please_check_if_the_power_supply_0009d604._8_4_ = uVar6;
    s_Please_check_if_the_power_supply_0009d604._12_4_ = uVar7;
    s_Please_check_if_the_power_supply_0009d604._16_4_ = uVar8;
    s_Please_check_if_the_power_supply_0009d604._20_4_ = uVar9;
    s_Please_check_if_the_power_supply_0009d604._24_4_ = uVar10;
    s_Please_check_if_the_power_supply_0009d604._28_4_ = uVar11;
    s_Please_check_if_the_power_supply_0009d604._32_4_ = uVar12;
    s_Please_check_if_the_power_supply_0009d604._36_4_ = uVar13;
    s_Please_check_if_the_power_supply_0009d604._40_4_ = uVar14;
    s_Please_check_if_the_control_boar_0009d630._0_4_ = uVar15;
    s_Please_check_if_the_control_boar_0009d630._4_4_ = uVar16;
    s_Please_check_if_the_control_boar_0009d630._8_4_ = uVar17;
    s_Please_check_if_the_control_boar_0009d630._12_4_ = uVar18;
    s_Please_check_if_the_control_boar_0009d630._16_4_ = uVar19;
    s_Please_check_if_the_control_boar_0009d630._20_4_ = uVar20;
    s_Please_check_if_the_control_boar_0009d630._24_4_ = uVar21;
    s_Please_check_if_the_control_boar_0009d630._28_4_ = uVar22;
    s_Please_check_if_the_control_boar_0009d630._32_4_ = uVar23;
    s_Please_check_if_the_control_boar_0009d630._36_4_ = uVar24;
    s_Please_check_if_the_control_boar_0009d630._40_4_ = uVar25;
    s_Please_check_if_the_chip_is_norm_0009d660._0_4_ = uVar26;
    s_Please_check_if_the_chip_is_norm_0009d660._4_4_ = uVar27;
    s_Please_check_if_the_chip_is_norm_0009d660._8_4_ = uVar28;
    s_Please_check_if_the_chip_is_norm_0009d660._12_4_ = uVar29;
    s_Please_check_if_the_chip_is_norm_0009d660._16_4_ = uVar30;
    s_Please_check_if_the_chip_is_norm_0009d660._20_4_ = uVar31;
    s_Please_check_if_the_chip_is_norm_0009d660._24_4_ = uVar32;
    s_Please_check_if_the_chip_is_norm_0009d660._28_4_ = uVar33;
    s_Please_check_if_the_chip_is_norm_0009d660._32_4_ = uVar34;
    s_got_nothing_0009a57c._12_2_ = uVar35;
    if (uVar51 == 4) {
      s_Please_check_if_the_power_supply_0009d604[0] = (char)uVar38;
      s_Please_check_if_the_power_supply_0009d604[1] = SUB41(uVar38,1);
      s_Please_check_if_the_power_supply_0009d604[2] = SUB41(uVar38,2);
      s_Please_check_if_the_power_supply_0009d604[3] = SUB41(uVar38,3);
      s_Please_check_if_the_power_supply_0009d604[4] = (char)uVar5;
      s_Please_check_if_the_power_supply_0009d604[5] = SUB41(uVar5,1);
      s_Please_check_if_the_power_supply_0009d604[6] = SUB41(uVar5,2);
      s_Please_check_if_the_power_supply_0009d604[7] = SUB41(uVar5,3);
      s_Please_check_if_the_power_supply_0009d604[8] = (char)uVar6;
      s_Please_check_if_the_power_supply_0009d604[9] = SUB41(uVar6,1);
      s_Please_check_if_the_power_supply_0009d604[10] = SUB41(uVar6,2);
      s_Please_check_if_the_power_supply_0009d604[0xb] = SUB41(uVar6,3);
      s_Please_check_if_the_power_supply_0009d604[0xc] = (char)uVar7;
      s_Please_check_if_the_power_supply_0009d604[0xd] = SUB41(uVar7,1);
      s_Please_check_if_the_power_supply_0009d604[0xe] = SUB41(uVar7,2);
      s_Please_check_if_the_power_supply_0009d604[0xf] = SUB41(uVar7,3);
      s_Please_check_if_the_power_supply_0009d604[0x10] = (char)uVar8;
      s_Please_check_if_the_power_supply_0009d604[0x11] = SUB41(uVar8,1);
      s_Please_check_if_the_power_supply_0009d604[0x12] = SUB41(uVar8,2);
      s_Please_check_if_the_power_supply_0009d604[0x13] = SUB41(uVar8,3);
      s_Please_check_if_the_power_supply_0009d604[0x14] = (char)uVar9;
      s_Please_check_if_the_power_supply_0009d604[0x15] = SUB41(uVar9,1);
      s_Please_check_if_the_power_supply_0009d604[0x16] = SUB41(uVar9,2);
      s_Please_check_if_the_power_supply_0009d604[0x17] = SUB41(uVar9,3);
      s_Please_check_if_the_power_supply_0009d604[0x18] = (char)uVar10;
      s_Please_check_if_the_power_supply_0009d604[0x19] = SUB41(uVar10,1);
      s_Please_check_if_the_power_supply_0009d604[0x1a] = SUB41(uVar10,2);
      s_Please_check_if_the_power_supply_0009d604[0x1b] = SUB41(uVar10,3);
      s_Please_check_if_the_power_supply_0009d604[0x1c] = (char)uVar11;
      s_Please_check_if_the_power_supply_0009d604[0x1d] = SUB41(uVar11,1);
      s_Please_check_if_the_power_supply_0009d604[0x1e] = SUB41(uVar11,2);
      s_Please_check_if_the_power_supply_0009d604[0x1f] = SUB41(uVar11,3);
      s_Please_check_if_the_power_supply_0009d604[0x20] = (char)uVar12;
      s_Please_check_if_the_power_supply_0009d604[0x21] = SUB41(uVar12,1);
      s_Please_check_if_the_power_supply_0009d604[0x22] = SUB41(uVar12,2);
      s_Please_check_if_the_power_supply_0009d604[0x23] = SUB41(uVar12,3);
      s_Please_check_if_the_power_supply_0009d604[0x24] = (char)uVar13;
      s_Please_check_if_the_power_supply_0009d604[0x25] = SUB41(uVar13,1);
      s_Please_check_if_the_power_supply_0009d604[0x26] = SUB41(uVar13,2);
      s_Please_check_if_the_power_supply_0009d604[0x27] = SUB41(uVar13,3);
      s_Please_check_if_the_power_supply_0009d604[0x28] = (char)uVar14;
      s_Please_check_if_the_power_supply_0009d604[0x29] = SUB41(uVar14,1);
      s_Please_check_if_the_power_supply_0009d604[0x2a] = SUB41(uVar14,2);
      s_Please_check_if_the_power_supply_0009d604[0x2b] = SUB41(uVar14,3);
      s_Please_check_if_the_control_boar_0009d630[0] = (char)uVar15;
      s_Please_check_if_the_control_boar_0009d630[1] = SUB41(uVar15,1);
      s_Please_check_if_the_control_boar_0009d630[2] = SUB41(uVar15,2);
      s_Please_check_if_the_control_boar_0009d630[3] = SUB41(uVar15,3);
      s_Please_check_if_the_control_boar_0009d630[4] = (char)uVar16;
      s_Please_check_if_the_control_boar_0009d630[5] = SUB41(uVar16,1);
      s_Please_check_if_the_control_boar_0009d630[6] = SUB41(uVar16,2);
      s_Please_check_if_the_control_boar_0009d630[7] = SUB41(uVar16,3);
      s_Please_check_if_the_control_boar_0009d630[8] = (char)uVar17;
      s_Please_check_if_the_control_boar_0009d630[9] = SUB41(uVar17,1);
      s_Please_check_if_the_control_boar_0009d630[10] = SUB41(uVar17,2);
      s_Please_check_if_the_control_boar_0009d630[0xb] = SUB41(uVar17,3);
      s_Please_check_if_the_control_boar_0009d630[0xc] = (char)uVar18;
      s_Please_check_if_the_control_boar_0009d630[0xd] = SUB41(uVar18,1);
      s_Please_check_if_the_control_boar_0009d630[0xe] = SUB41(uVar18,2);
      s_Please_check_if_the_control_boar_0009d630[0xf] = SUB41(uVar18,3);
      s_Please_check_if_the_control_boar_0009d630[0x10] = (char)uVar19;
      s_Please_check_if_the_control_boar_0009d630[0x11] = SUB41(uVar19,1);
      s_Please_check_if_the_control_boar_0009d630[0x12] = SUB41(uVar19,2);
      s_Please_check_if_the_control_boar_0009d630[0x13] = SUB41(uVar19,3);
      s_Please_check_if_the_control_boar_0009d630[0x14] = (char)uVar20;
      s_Please_check_if_the_control_boar_0009d630[0x15] = SUB41(uVar20,1);
      s_Please_check_if_the_control_boar_0009d630[0x16] = SUB41(uVar20,2);
      s_Please_check_if_the_control_boar_0009d630[0x17] = SUB41(uVar20,3);
      s_Please_check_if_the_control_boar_0009d630[0x18] = (char)uVar21;
      s_Please_check_if_the_control_boar_0009d630[0x19] = SUB41(uVar21,1);
      s_Please_check_if_the_control_boar_0009d630[0x1a] = SUB41(uVar21,2);
      s_Please_check_if_the_control_boar_0009d630[0x1b] = SUB41(uVar21,3);
      s_Please_check_if_the_control_boar_0009d630[0x1c] = (char)uVar22;
      s_Please_check_if_the_control_boar_0009d630[0x1d] = SUB41(uVar22,1);
      s_Please_check_if_the_control_boar_0009d630[0x1e] = SUB41(uVar22,2);
      s_Please_check_if_the_control_boar_0009d630[0x1f] = SUB41(uVar22,3);
      s_Please_check_if_the_control_boar_0009d630[0x20] = (char)uVar23;
      s_Please_check_if_the_control_boar_0009d630[0x21] = SUB41(uVar23,1);
      s_Please_check_if_the_control_boar_0009d630[0x22] = SUB41(uVar23,2);
      s_Please_check_if_the_control_boar_0009d630[0x23] = SUB41(uVar23,3);
      s_Please_check_if_the_control_boar_0009d630[0x24] = (char)uVar24;
      s_Please_check_if_the_control_boar_0009d630[0x25] = SUB41(uVar24,1);
      s_Please_check_if_the_control_boar_0009d630[0x26] = SUB41(uVar24,2);
      s_Please_check_if_the_control_boar_0009d630[0x27] = SUB41(uVar24,3);
      s_Please_check_if_the_control_boar_0009d630[0x28] = (char)uVar25;
      s_Please_check_if_the_control_boar_0009d630[0x29] = SUB41(uVar25,1);
      s_Please_check_if_the_control_boar_0009d630[0x2a] = SUB41(uVar25,2);
      s_Please_check_if_the_control_boar_0009d630[0x2b] = SUB41(uVar25,3);
      s_Please_check_if_the_chip_is_norm_0009d660[0] = (char)uVar26;
      s_Please_check_if_the_chip_is_norm_0009d660[1] = SUB41(uVar26,1);
      s_Please_check_if_the_chip_is_norm_0009d660[2] = SUB41(uVar26,2);
      s_Please_check_if_the_chip_is_norm_0009d660[3] = SUB41(uVar26,3);
      s_Please_check_if_the_chip_is_norm_0009d660[4] = (char)uVar27;
      s_Please_check_if_the_chip_is_norm_0009d660[5] = SUB41(uVar27,1);
      s_Please_check_if_the_chip_is_norm_0009d660[6] = SUB41(uVar27,2);
      s_Please_check_if_the_chip_is_norm_0009d660[7] = SUB41(uVar27,3);
      s_Please_check_if_the_chip_is_norm_0009d660[8] = (char)uVar28;
      s_Please_check_if_the_chip_is_norm_0009d660[9] = SUB41(uVar28,1);
      s_Please_check_if_the_chip_is_norm_0009d660[10] = SUB41(uVar28,2);
      s_Please_check_if_the_chip_is_norm_0009d660[0xb] = SUB41(uVar28,3);
      s_Please_check_if_the_chip_is_norm_0009d660[0xc] = (char)uVar29;
      s_Please_check_if_the_chip_is_norm_0009d660[0xd] = SUB41(uVar29,1);
      s_Please_check_if_the_chip_is_norm_0009d660[0xe] = SUB41(uVar29,2);
      s_Please_check_if_the_chip_is_norm_0009d660[0xf] = SUB41(uVar29,3);
      s_Please_check_if_the_chip_is_norm_0009d660[0x10] = (char)uVar30;
      s_Please_check_if_the_chip_is_norm_0009d660[0x11] = SUB41(uVar30,1);
      s_Please_check_if_the_chip_is_norm_0009d660[0x12] = SUB41(uVar30,2);
      s_Please_check_if_the_chip_is_norm_0009d660[0x13] = SUB41(uVar30,3);
      s_Please_check_if_the_chip_is_norm_0009d660[0x14] = (char)uVar31;
      s_Please_check_if_the_chip_is_norm_0009d660[0x15] = SUB41(uVar31,1);
      s_Please_check_if_the_chip_is_norm_0009d660[0x16] = SUB41(uVar31,2);
      s_Please_check_if_the_chip_is_norm_0009d660[0x17] = SUB41(uVar31,3);
      s_Please_check_if_the_chip_is_norm_0009d660[0x18] = (char)uVar32;
      s_Please_check_if_the_chip_is_norm_0009d660[0x19] = SUB41(uVar32,1);
      s_Please_check_if_the_chip_is_norm_0009d660[0x1a] = SUB41(uVar32,2);
      s_Please_check_if_the_chip_is_norm_0009d660[0x1b] = SUB41(uVar32,3);
      s_Please_check_if_the_chip_is_norm_0009d660[0x1c] = (char)uVar33;
      s_Please_check_if_the_chip_is_norm_0009d660[0x1d] = SUB41(uVar33,1);
      s_Please_check_if_the_chip_is_norm_0009d660[0x1e] = SUB41(uVar33,2);
      s_Please_check_if_the_chip_is_norm_0009d660[0x1f] = SUB41(uVar33,3);
      s_Please_check_if_the_chip_is_norm_0009d660[0x20] = (char)uVar34;
      s_Please_check_if_the_chip_is_norm_0009d660[0x21] = SUB41(uVar34,1);
      s_Please_check_if_the_chip_is_norm_0009d660[0x22] = SUB41(uVar34,2);
      s_Please_check_if_the_chip_is_norm_0009d660[0x23] = SUB41(uVar34,3);
      s_got_nothing_0009a57c[0xc] = (char)uVar35;
      s_got_nothing_0009a57c[0xd] = SUB21(uVar35,1);
      if (local_4578 != -1) {
        return;
      }
      uVar44 = 0;
      uVar51 = 0;
      s_Please_check_if_the_power_supply_0009d604._0_4_ = uVar38;
      s_Please_check_if_the_power_supply_0009d604._4_4_ = uVar5;
      s_Please_check_if_the_power_supply_0009d604._8_4_ = uVar6;
      s_Please_check_if_the_power_supply_0009d604._12_4_ = uVar7;
      s_Please_check_if_the_power_supply_0009d604._16_4_ = uVar8;
      s_Please_check_if_the_power_supply_0009d604._20_4_ = uVar9;
      s_Please_check_if_the_power_supply_0009d604._24_4_ = uVar10;
      s_Please_check_if_the_power_supply_0009d604._28_4_ = uVar11;
      s_Please_check_if_the_power_supply_0009d604._32_4_ = uVar12;
      s_Please_check_if_the_power_supply_0009d604._36_4_ = uVar13;
      s_Please_check_if_the_power_supply_0009d604._40_4_ = uVar14;
      s_Please_check_if_the_control_boar_0009d630._0_4_ = uVar15;
      s_Please_check_if_the_control_boar_0009d630._4_4_ = uVar16;
      s_Please_check_if_the_control_boar_0009d630._8_4_ = uVar17;
      s_Please_check_if_the_control_boar_0009d630._12_4_ = uVar18;
      s_Please_check_if_the_control_boar_0009d630._16_4_ = uVar19;
      s_Please_check_if_the_control_boar_0009d630._20_4_ = uVar20;
      s_Please_check_if_the_control_boar_0009d630._24_4_ = uVar21;
      s_Please_check_if_the_control_boar_0009d630._28_4_ = uVar22;
      s_Please_check_if_the_control_boar_0009d630._32_4_ = uVar23;
      s_Please_check_if_the_control_boar_0009d630._36_4_ = uVar24;
      s_Please_check_if_the_control_boar_0009d630._40_4_ = uVar25;
      s_Please_check_if_the_chip_is_norm_0009d660._0_4_ = uVar26;
      s_Please_check_if_the_chip_is_norm_0009d660._4_4_ = uVar27;
      s_Please_check_if_the_chip_is_norm_0009d660._8_4_ = uVar28;
      s_Please_check_if_the_chip_is_norm_0009d660._12_4_ = uVar29;
      s_Please_check_if_the_chip_is_norm_0009d660._16_4_ = uVar30;
      s_Please_check_if_the_chip_is_norm_0009d660._20_4_ = uVar31;
      s_Please_check_if_the_chip_is_norm_0009d660._24_4_ = uVar32;
      s_Please_check_if_the_chip_is_norm_0009d660._28_4_ = uVar33;
      s_Please_check_if_the_chip_is_norm_0009d660._32_4_ = uVar34;
      s_got_nothing_0009a57c._12_2_ = uVar35;
      FUN_000190dc();
      do {
        iVar36 = FUN_0002a6f0(uVar51);
        if (iVar36 != 0) {
          pfVar50 = (float *)(&DAT_000c0498 + uVar51 * 0x400);
          FUN_0002d338(uVar51 & 0xff,0);
          iVar36 = 0;
          while( true ) {
            iVar37 = FUN_0002a514();
            iVar46 = iVar36 + 1;
            if (iVar37 <= iVar36) break;
            fVar53 = *pfVar50;
            pfVar50 = pfVar50 + 4;
            iVar36 = iVar46;
            if (fVar53 < 0.0) {
              uVar44 = uVar44 + 1;
            }
          }
        }
        uVar51 = uVar51 + 1;
      } while (uVar51 != 4);
      param3 = (double)FUN_000243f0(0,1);
      param4 = (double)FUN_00073f10();
      fVar53 = (float)FUN_00024efc();
      uVar51 = FUN_00077f64(0);
      if (3 < DAT_000be63c) {
        snprintf(local_2040,0x2000,"set_vol:%f, out_vol:%f, power:%f, err_code:0x%08x!",param3,
                 param4,(double)fVar53,uVar51);
        FUN_0004948c(3,local_2040,0);
      }
      iVar36 = FUN_0002a514();
      iVar37 = FUN_0002a6e0();
      if (iVar37 * iVar36 == uVar44) {
        if (3 < DAT_000be63c) {
          local_2040[0] = s_Please_check_if_the_power_supply_0009d604[0];
          local_2040[1] = s_Please_check_if_the_power_supply_0009d604[1];
          local_2040[2] = s_Please_check_if_the_power_supply_0009d604[2];
          local_2040[3] = s_Please_check_if_the_power_supply_0009d604[3];
          local_2040[4] = s_Please_check_if_the_power_supply_0009d604[4];
          local_2040[5] = s_Please_check_if_the_power_supply_0009d604[5];
          local_2040[6] = s_Please_check_if_the_power_supply_0009d604[6];
          local_2040[7] = s_Please_check_if_the_power_supply_0009d604[7];
          local_2038._0_1_ = s_Please_check_if_the_power_supply_0009d604[8];
          local_2038._1_1_ = s_Please_check_if_the_power_supply_0009d604[9];
          local_2038._2_1_ = s_Please_check_if_the_power_supply_0009d604[10];
          local_2038._3_1_ = s_Please_check_if_the_power_supply_0009d604[0xb];
          acStack_2034[0] = s_Please_check_if_the_power_supply_0009d604[0xc];
          acStack_2034[1] = s_Please_check_if_the_power_supply_0009d604[0xd];
          acStack_2034[2] = s_Please_check_if_the_power_supply_0009d604[0xe];
          acStack_2034[3] = s_Please_check_if_the_power_supply_0009d604[0xf];
          local_2030[0] = s_Please_check_if_the_power_supply_0009d604[0x10];
          local_2030[1] = s_Please_check_if_the_power_supply_0009d604[0x11];
          local_2030[2] = s_Please_check_if_the_power_supply_0009d604[0x12];
          local_2030[3] = s_Please_check_if_the_power_supply_0009d604[0x13];
          acStack_202c[0] = s_Please_check_if_the_power_supply_0009d604[0x14];
          acStack_202c[1] = s_Please_check_if_the_power_supply_0009d604[0x15];
          acStack_202c[2] = s_Please_check_if_the_power_supply_0009d604[0x16];
          acStack_202c[3] = s_Please_check_if_the_power_supply_0009d604[0x17];
          acStack_2028[0] = s_Please_check_if_the_power_supply_0009d604[0x18];
          acStack_2028[1] = s_Please_check_if_the_power_supply_0009d604[0x19];
          acStack_2028[2] = s_Please_check_if_the_power_supply_0009d604[0x1a];
          acStack_2028[3] = s_Please_check_if_the_power_supply_0009d604[0x1b];
          acStack_2024[0] = s_Please_check_if_the_power_supply_0009d604[0x1c];
          acStack_2024[1] = s_Please_check_if_the_power_supply_0009d604[0x1d];
          acStack_2024[2] = s_Please_check_if_the_power_supply_0009d604[0x1e];
          acStack_2024[3] = s_Please_check_if_the_power_supply_0009d604[0x1f];
          local_2020[0] = s_Please_check_if_the_power_supply_0009d604[0x20];
          local_2020[1] = s_Please_check_if_the_power_supply_0009d604[0x21];
          local_2020[2] = s_Please_check_if_the_power_supply_0009d604[0x22];
          local_2020[3] = s_Please_check_if_the_power_supply_0009d604[0x23];
          acStack_201c[0] = s_Please_check_if_the_power_supply_0009d604[0x24];
          acStack_201c[1] = s_Please_check_if_the_power_supply_0009d604[0x25];
          acStack_201c[2] = s_Please_check_if_the_power_supply_0009d604[0x26];
          acStack_201c[3] = s_Please_check_if_the_power_supply_0009d604[0x27];
          acStack_2018[0] = s_Please_check_if_the_power_supply_0009d604[0x28];
          acStack_2018[1] = s_Please_check_if_the_power_supply_0009d604[0x29];
          acStack_2018[2] = s_Please_check_if_the_power_supply_0009d604[0x2a];
          acStack_2018[3] = s_Please_check_if_the_power_supply_0009d604[0x2b];
          FUN_0004948c(3,local_2040,0);
        }
      }
      else {
        uVar51 = FUN_0002a514();
        if (uVar44 < uVar51) {
          if (3 < DAT_000be63c) {
            local_2040[0] = s_Please_check_if_the_chip_is_norm_0009d660[0];
            local_2040[1] = s_Please_check_if_the_chip_is_norm_0009d660[1];
            local_2040[2] = s_Please_check_if_the_chip_is_norm_0009d660[2];
            local_2040[3] = s_Please_check_if_the_chip_is_norm_0009d660[3];
            local_2040[4] = s_Please_check_if_the_chip_is_norm_0009d660[4];
            local_2040[5] = s_Please_check_if_the_chip_is_norm_0009d660[5];
            local_2040[6] = s_Please_check_if_the_chip_is_norm_0009d660[6];
            local_2040[7] = s_Please_check_if_the_chip_is_norm_0009d660[7];
            local_2038._0_1_ = s_Please_check_if_the_chip_is_norm_0009d660[8];
            local_2038._1_1_ = s_Please_check_if_the_chip_is_norm_0009d660[9];
            local_2038._2_1_ = s_Please_check_if_the_chip_is_norm_0009d660[10];
            local_2038._3_1_ = s_Please_check_if_the_chip_is_norm_0009d660[0xb];
            acStack_2034[0] = s_Please_check_if_the_chip_is_norm_0009d660[0xc];
            acStack_2034[1] = s_Please_check_if_the_chip_is_norm_0009d660[0xd];
            acStack_2034[2] = s_Please_check_if_the_chip_is_norm_0009d660[0xe];
            acStack_2034[3] = s_Please_check_if_the_chip_is_norm_0009d660[0xf];
            local_2030[0] = s_Please_check_if_the_chip_is_norm_0009d660[0x10];
            local_2030[1] = s_Please_check_if_the_chip_is_norm_0009d660[0x11];
            local_2030[2] = s_Please_check_if_the_chip_is_norm_0009d660[0x12];
            local_2030[3] = s_Please_check_if_the_chip_is_norm_0009d660[0x13];
            acStack_202c[0] = s_Please_check_if_the_chip_is_norm_0009d660[0x14];
            acStack_202c[1] = s_Please_check_if_the_chip_is_norm_0009d660[0x15];
            acStack_202c[2] = s_Please_check_if_the_chip_is_norm_0009d660[0x16];
            acStack_202c[3] = s_Please_check_if_the_chip_is_norm_0009d660[0x17];
            acStack_2028[0] = s_Please_check_if_the_chip_is_norm_0009d660[0x18];
            acStack_2028[1] = s_Please_check_if_the_chip_is_norm_0009d660[0x19];
            acStack_2028[2] = s_Please_check_if_the_chip_is_norm_0009d660[0x1a];
            acStack_2028[3] = s_Please_check_if_the_chip_is_norm_0009d660[0x1b];
            acStack_2024[0] = s_Please_check_if_the_chip_is_norm_0009d660[0x1c];
            acStack_2024[1] = s_Please_check_if_the_chip_is_norm_0009d660[0x1d];
            acStack_2024[2] = s_Please_check_if_the_chip_is_norm_0009d660[0x1e];
            acStack_2024[3] = s_Please_check_if_the_chip_is_norm_0009d660[0x1f];
            local_2020[0] = s_Please_check_if_the_chip_is_norm_0009d660[0x20];
            local_2020[1] = s_Please_check_if_the_chip_is_norm_0009d660[0x21];
            local_2020[2] = s_Please_check_if_the_chip_is_norm_0009d660[0x22];
            local_2020[3] = s_Please_check_if_the_chip_is_norm_0009d660[0x23];
            FUN_0004948c(3,local_2040,0);
          }
        }
        else if (3 < DAT_000be63c) {
          local_2040[0] = s_Please_check_if_the_control_boar_0009d630[0];
          local_2040[1] = s_Please_check_if_the_control_boar_0009d630[1];
          local_2040[2] = s_Please_check_if_the_control_boar_0009d630[2];
          local_2040[3] = s_Please_check_if_the_control_boar_0009d630[3];
          local_2040[4] = s_Please_check_if_the_control_boar_0009d630[4];
          local_2040[5] = s_Please_check_if_the_control_boar_0009d630[5];
          local_2040[6] = s_Please_check_if_the_control_boar_0009d630[6];
          local_2040[7] = s_Please_check_if_the_control_boar_0009d630[7];
          local_2038._0_1_ = s_Please_check_if_the_control_boar_0009d630[8];
          local_2038._1_1_ = s_Please_check_if_the_control_boar_0009d630[9];
          local_2038._2_1_ = s_Please_check_if_the_control_boar_0009d630[10];
          local_2038._3_1_ = s_Please_check_if_the_control_boar_0009d630[0xb];
          acStack_2034[0] = s_Please_check_if_the_control_boar_0009d630[0xc];
          acStack_2034[1] = s_Please_check_if_the_control_boar_0009d630[0xd];
          acStack_2034[2] = s_Please_check_if_the_control_boar_0009d630[0xe];
          acStack_2034[3] = s_Please_check_if_the_control_boar_0009d630[0xf];
          local_2030[0] = s_Please_check_if_the_control_boar_0009d630[0x10];
          local_2030[1] = s_Please_check_if_the_control_boar_0009d630[0x11];
          local_2030[2] = s_Please_check_if_the_control_boar_0009d630[0x12];
          local_2030[3] = s_Please_check_if_the_control_boar_0009d630[0x13];
          acStack_202c[0] = s_Please_check_if_the_control_boar_0009d630[0x14];
          acStack_202c[1] = s_Please_check_if_the_control_boar_0009d630[0x15];
          acStack_202c[2] = s_Please_check_if_the_control_boar_0009d630[0x16];
          acStack_202c[3] = s_Please_check_if_the_control_boar_0009d630[0x17];
          acStack_2028[0] = s_Please_check_if_the_control_boar_0009d630[0x18];
          acStack_2028[1] = s_Please_check_if_the_control_boar_0009d630[0x19];
          acStack_2028[2] = s_Please_check_if_the_control_boar_0009d630[0x1a];
          acStack_2028[3] = s_Please_check_if_the_control_boar_0009d630[0x1b];
          acStack_2024[0] = s_Please_check_if_the_control_boar_0009d630[0x1c];
          acStack_2024[1] = s_Please_check_if_the_control_boar_0009d630[0x1d];
          acStack_2024[2] = s_Please_check_if_the_control_boar_0009d630[0x1e];
          acStack_2024[3] = s_Please_check_if_the_control_boar_0009d630[0x1f];
          local_2020[0] = s_Please_check_if_the_control_boar_0009d630[0x20];
          local_2020[1] = s_Please_check_if_the_control_boar_0009d630[0x21];
          local_2020[2] = s_Please_check_if_the_control_boar_0009d630[0x22];
          local_2020[3] = s_Please_check_if_the_control_boar_0009d630[0x23];
          acStack_201c[0] = s_Please_check_if_the_control_boar_0009d630[0x24];
          acStack_201c[1] = s_Please_check_if_the_control_boar_0009d630[0x25];
          acStack_201c[2] = s_Please_check_if_the_control_boar_0009d630[0x26];
          acStack_201c[3] = s_Please_check_if_the_control_boar_0009d630[0x27];
          acStack_2018[0] = s_Please_check_if_the_control_boar_0009d630[0x28];
          acStack_2018[1] = s_Please_check_if_the_control_boar_0009d630[0x29];
          acStack_2018[2] = s_Please_check_if_the_control_boar_0009d630[0x2a];
          acStack_2018[3] = s_Please_check_if_the_control_boar_0009d630[0x2b];
          local_2014 = (undefined1)ram0x0009d65c;
          FUN_0004948c(3,local_2040,0);
        }
      }
      FUN_00056e88(0x1a,0);
      FUN_0004e8c8(0xb,"Unbalance happened, waiting!\n");
      return;
    }
  } while( true );
}


