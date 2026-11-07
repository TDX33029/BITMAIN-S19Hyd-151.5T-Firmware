// FUN_0002afc8 @ 0002afc8  size=5164  callers=1
// program: bmminer


void FUN_0002afc8(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int extraout_r1;
  int extraout_r1_00;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 uVar16;
  undefined1 auStack_2124 [252];
  char local_2028 [8196];
  
  memset(&DAT_00a4ee70,0,0x634);
  piVar4 = (int *)FUN_0007d618("/tmp/miner_simulator.json",0,auStack_2124);
  if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
    if (DAT_000be63c < 5) {
      return;
    }
    snprintf(local_2028,0x2000,"load miner simulator config file %s failed\n",
             "/tmp/miner_simulator.json");
    FUN_0004948c(4,local_2028,0);
    return;
  }
  piVar5 = (int *)FUN_0007eb20(piVar4,"enable_sim_mode");
  if ((piVar5 != (int *)0x0) && (*piVar5 - 5U < 2)) {
    DAT_00a4ee70 = *piVar5 == 5;
    uVar12 = (uint)DAT_00a4ee70;
    if (DAT_000be63c < 5) goto LAB_0002b05c;
    snprintf(local_2028,0x2000,"miner_sim.enable_sim_mode:%d\n",uVar12);
    FUN_0004948c(4,local_2028,0);
  }
  uVar12 = (uint)DAT_00a4ee70;
LAB_0002b05c:
  if ((uVar12 != 0) && (3 < DAT_000be63c)) {
    builtin_strncpy(local_2028,"miner sim mode enabled\n",0x18);
    FUN_0004948c(3,local_2028,0);
  }
  piVar5 = (int *)FUN_0007eb20(piVar4,"chain_present");
  if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
    piVar6 = (int *)FUN_0007eb20(piVar5,"enable_sim_mode");
    if ((piVar6 != (int *)0x0) && (*piVar6 - 5U < 2)) {
      DAT_00a4ee74 = *piVar6 == 5;
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.chain_present.enable_sim_mode:%d\n",(uint)DAT_00a4ee74);
      FUN_0004948c(4,local_2028,0);
    }
    piVar5 = (int *)FUN_0007eb20(piVar5,"chain_present_map");
    if ((piVar5 != (int *)0x0) && (*piVar5 == 3)) {
      DAT_00a4ee78 = FUN_000807e0();
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.chain_present.chain_present_map:%d\n",DAT_00a4ee78);
      FUN_0004948c(4,local_2028,0);
    }
  }
  piVar5 = (int *)FUN_0007eb20(piVar4,"eeprom");
  if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
    piVar6 = (int *)FUN_0007eb20(piVar5,"enable_sim_mode");
    if ((piVar6 != (int *)0x0) && (*piVar6 - 5U < 2)) {
      DAT_00a4ee7c = *piVar6 == 5;
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.eeprom.enable_sim_mode:%d\n",(uint)DAT_00a4ee7c);
      FUN_0004948c(4,local_2028,0);
    }
    piVar5 = (int *)FUN_0007eb20(piVar5,"eeprom_info");
    if ((piVar5 != (int *)0x0) && (*piVar5 == 1)) {
      for (uVar12 = 0; uVar8 = FUN_0007f66c(piVar5), uVar12 < uVar8; uVar12 = uVar12 + 1) {
        piVar6 = (int *)FUN_0007f6b8(piVar5,uVar12);
        if ((piVar6 != (int *)0x0) && (*piVar6 == 0)) {
          piVar7 = (int *)FUN_0007eb20(piVar6,"chain_id");
          if ((piVar7 == (int *)0x0) ||
             ((*piVar7 != 3 ||
              (uVar16 = FUN_000807e0(),
              (int)(uint)((uint)uVar16 < 4) <= (int)((ulonglong)uVar16 >> 0x20))))) {
            iVar11 = 0;
          }
          else {
            iVar11 = FUN_000807e0(piVar7);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"board_name");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 2)) {
            pcVar10 = (char *)FUN_00080310();
            strncpy(&DAT_00a4ee7e + iVar11 * 0x1e,pcVar10,10);
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.eeprom.eeprom_info[%d].board_name:%s\n",iVar11,
                     &DAT_00a4ee7e + iVar11 * 0x1e);
            FUN_0004948c(4,local_2028,0);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"chip_bin");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
            uVar2 = FUN_000807e0();
            (&DAT_00a4ee88)[iVar11 * 0x1e] = uVar2;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.eeprom.eeprom_info[%d].chip_bin:%d\n",iVar11,
                     (uint)(byte)(&DAT_00a4ee88)[iVar11 * 0x1e]);
            FUN_0004948c(4,local_2028,0);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"ft_version");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 2)) {
            pcVar10 = (char *)FUN_00080310();
            strncpy(&DAT_00a4ee89 + iVar11 * 0x1e,pcVar10,10);
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.eeprom.eeprom_info[%d].ft_version:%s\n",iVar11,
                     &DAT_00a4ee89 + iVar11 * 0x1e);
            FUN_0004948c(4,local_2028,0);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"pt1_result");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
            uVar2 = FUN_000807e0();
            (&DAT_00a4ee93)[iVar11 * 0x1e] = uVar2;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.eeprom.eeprom_info[%d].pt1_result:%d\n",iVar11,
                     (uint)(byte)(&DAT_00a4ee93)[iVar11 * 0x1e]);
            FUN_0004948c(4,local_2028,0);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"voltage");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
            uVar3 = FUN_000807e0();
            (&DAT_00a4ee94)[iVar11 * 0xf] = uVar3;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.eeprom.eeprom_info[%d].voltage:%d\n",iVar11,
                     (uint)(ushort)(&DAT_00a4ee94)[iVar11 * 0xf]);
            FUN_0004948c(4,local_2028,0);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"frequency");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
            uVar3 = FUN_000807e0();
            (&DAT_00a4ee96)[iVar11 * 0xf] = uVar3;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.eeprom.eeprom_info[%d].frequency:%d\n",iVar11,
                     (uint)(ushort)(&DAT_00a4ee96)[iVar11 * 0xf]);
            FUN_0004948c(4,local_2028,0);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"test_standard");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
            uVar2 = FUN_000807e0();
            (&DAT_00a4ee98)[iVar11 * 0x1e] = uVar2;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.eeprom.eeprom_info[%d].test_standard:%d\n",iVar11,
                     (uint)(byte)(&DAT_00a4ee98)[iVar11 * 0x1e]);
            FUN_0004948c(4,local_2028,0);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"pt2_result");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
            uVar2 = FUN_000807e0();
            (&DAT_00a4ee99)[iVar11 * 0x1e] = uVar2;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.eeprom.eeprom_info[%d].pt2_result:%d\n",iVar11,
                     (uint)(byte)(&DAT_00a4ee99)[iVar11 * 0x1e]);
            FUN_0004948c(4,local_2028,0);
          }
          piVar6 = (int *)FUN_0007eb20(piVar6,"clearance_flag");
          if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
            uVar2 = FUN_000807e0();
            (&DAT_00a4ee9a)[iVar11 * 0x1e] = uVar2;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.eeprom.eeprom_info[%d].clearance_flag:%d\n",iVar11
                     ,(uint)(byte)(&DAT_00a4ee9a)[iVar11 * 0x1e]);
            FUN_0004948c(4,local_2028,0);
          }
        }
      }
    }
  }
  piVar5 = (int *)FUN_0007eb20(piVar4,&DAT_0009c740);
  if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
    piVar6 = (int *)FUN_0007eb20(piVar5,"enable_sim_mode");
    if ((piVar6 != (int *)0x0) && (*piVar6 - 5U < 2)) {
      DAT_00a4eef6 = *piVar6 == 5;
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.fan.enable_sim_mode:%d\n",(uint)DAT_00a4eef6);
      FUN_0004948c(4,local_2028,0);
    }
    piVar5 = (int *)FUN_0007eb20(piVar5,"fan_info");
    if ((piVar5 != (int *)0x0) && (*piVar5 == 1)) {
      for (uVar12 = 0; uVar8 = FUN_0007f66c(piVar5), uVar12 < uVar8; uVar12 = uVar12 + 1) {
        piVar6 = (int *)FUN_0007f6b8(piVar5,uVar12);
        if ((piVar6 != (int *)0x0) && (*piVar6 == 0)) {
          piVar7 = (int *)FUN_0007eb20(piVar6,"fan_id");
          if ((piVar7 == (int *)0x0) || ((*piVar7 != 3 || (FUN_000807e0(), -1 < extraout_r1_00)))) {
            iVar11 = 0;
          }
          else {
            iVar11 = FUN_000807e0(piVar7);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"bringup_speed");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
            uVar3 = FUN_000807e0();
            (&DAT_00a4eef8)[iVar11 * 2] = uVar3;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.fan.fan_info[%d].bringup_speed:%d\n",iVar11,
                     (uint)(ushort)(&DAT_00a4eef8)[iVar11 * 2]);
            FUN_0004948c(4,local_2028,0);
          }
          piVar6 = (int *)FUN_0007eb20(piVar6,"running_speed");
          if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
            uVar3 = FUN_000807e0();
            (&DAT_00a4eefa)[iVar11 * 2] = uVar3;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.fan.fan_info[%d].running_speed:%d\n",iVar11,
                     (uint)(ushort)(&DAT_00a4eefa)[iVar11 * 2]);
            FUN_0004948c(4,local_2028,0);
          }
        }
      }
    }
  }
  piVar5 = (int *)FUN_0007eb20(piVar4,"power");
  if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
    piVar6 = (int *)FUN_0007eb20(piVar5,"enable_sim_mode");
    if ((piVar6 != (int *)0x0) && (*piVar6 - 5U < 2)) {
      DAT_00a4eef8._0_1_ = *piVar6 == 5;
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.power.enable_sim_mode:%d\n",(uint)(byte)DAT_00a4eef8);
      FUN_0004948c(4,local_2028,0);
    }
    piVar5 = (int *)FUN_0007eb20(piVar5,"power_info");
    if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
      piVar6 = (int *)FUN_0007eb20(piVar5,"power_version");
      if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
        DAT_00a4eefc = FUN_000807e0();
      }
      piVar5 = (int *)FUN_0007eb20(piVar5,"power");
      if ((piVar5 != (int *)0x0) && (*piVar5 == 3)) {
        DAT_00a4ef00 = FUN_000807e0();
      }
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.power.power_info.power_version:%d\n",DAT_00a4eefc);
      FUN_0004948c(4,local_2028,0);
      if (4 < DAT_000be63c) {
        snprintf(local_2028,0x2000,"miner_sim.power.power_info.power:%d\n",DAT_00a4ef00);
        FUN_0004948c(4,local_2028,0);
      }
    }
  }
  piVar5 = (int *)FUN_0007eb20(piVar4,"chain_asic");
  if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
    piVar6 = (int *)FUN_0007eb20(piVar5,"enable_sim_mode");
    if ((piVar6 != (int *)0x0) && (*piVar6 - 5U < 2)) {
      DAT_00a4ef04 = *piVar6 == 5;
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.asic.enable_sim_mode:%d\n",(uint)DAT_00a4ef04);
      FUN_0004948c(4,local_2028,0);
    }
    piVar5 = (int *)FUN_0007eb20(piVar5,"asic_info");
    if ((piVar5 != (int *)0x0) && (*piVar5 == 1)) {
      for (uVar12 = 0; uVar8 = FUN_0007f66c(piVar5), uVar12 < uVar8; uVar12 = uVar12 + 1) {
        piVar6 = (int *)FUN_0007f6b8(piVar5,uVar12);
        if ((piVar6 != (int *)0x0) && (*piVar6 == 0)) {
          piVar7 = (int *)FUN_0007eb20(piVar6,"chain_id");
          if ((piVar7 == (int *)0x0) || ((*piVar7 != 3 || (FUN_000807e0(), -1 < extraout_r1)))) {
            iVar11 = 0;
          }
          else {
            iVar11 = FUN_000807e0(piVar7);
          }
          piVar6 = (int *)FUN_0007eb20(piVar6,"asic_num");
          if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
            uVar3 = FUN_000807e0();
            (&DAT_00a4ef06)[iVar11] = uVar3;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.asic.asic_info[%d].asic_num:%d\n",iVar11,
                     (uint)(ushort)(&DAT_00a4ef06)[iVar11]);
            FUN_0004948c(4,local_2028,0);
          }
        }
      }
    }
  }
  piVar5 = (int *)FUN_0007eb20(piVar4,"sensor");
  if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
    piVar6 = (int *)FUN_0007eb20(piVar5,"enable_sim_mode");
    if ((piVar6 != (int *)0x0) && (*piVar6 - 5U < 2)) {
      DAT_00a4ef10 = *piVar6 == 5;
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.sensor.enable_sim_mode:%d\n",(uint)DAT_00a4ef10);
      FUN_0004948c(4,local_2028,0);
    }
    piVar5 = (int *)FUN_0007eb20(piVar5,"sensor_info");
    if ((piVar5 != (int *)0x0) && (*piVar5 == 1)) {
      for (uVar12 = 0; uVar8 = FUN_0007f66c(piVar5), uVar12 < uVar8; uVar12 = uVar12 + 1) {
        piVar6 = (int *)FUN_0007f6b8(piVar5,uVar12);
        if ((piVar6 != (int *)0x0) && (*piVar6 == 0)) {
          piVar7 = (int *)FUN_0007eb20(piVar6,"sensor_id");
          if ((piVar7 == (int *)0x0) ||
             ((*piVar7 != 3 ||
              (uVar16 = FUN_000807e0(),
              (int)(uint)((uint)uVar16 < 8) <= (int)((ulonglong)uVar16 >> 0x20))))) {
            iVar11 = 0;
          }
          else {
            iVar11 = FUN_000807e0(piVar7);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"force_failed");
          if ((piVar7 != (int *)0x0) && (*piVar7 - 5U < 2)) {
            iVar15 = iVar11 * 0xc;
            (&DAT_00a4ef14)[iVar15] = *piVar7 == 5;
            (&DAT_00a4ef74)[iVar15] = *piVar7 == 5;
            (&DAT_00a4efd4)[iVar15] = *piVar7 == 5;
            (&DAT_00a4f034)[iVar15] = *piVar7 == 5;
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.sensor.sensor_info[0][%d].force_failed:%d\n",
                     iVar11,(uint)(byte)(&DAT_00a4ef14)[iVar11 * 0xc]);
            FUN_0004948c(4,local_2028,0);
          }
          piVar7 = (int *)FUN_0007eb20(piVar6,"bringup_temp");
          if ((piVar7 != (int *)0x0) && (*piVar7 == 3)) {
            puVar14 = &DAT_00a4ee70 + iVar11 * 0xc;
            iVar15 = 0;
            do {
              iVar15 = iVar15 + 1;
              uVar9 = FUN_000807e0(piVar7);
              *(undefined4 *)(puVar14 + 0xa8) = uVar9;
              puVar14 = puVar14 + 0x60;
            } while (iVar15 != 4);
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.sensor.sensor_info[0][%d].bringup_temp:%d\n",
                     iVar11,(&DAT_00a4ef18)[iVar11 * 3]);
            FUN_0004948c(4,local_2028,0);
          }
          piVar6 = (int *)FUN_0007eb20(piVar6,"running_temp");
          if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
            puVar14 = &DAT_00a4ee70 + iVar11 * 0xc;
            iVar15 = 0;
            do {
              iVar15 = iVar15 + 1;
              uVar9 = FUN_000807e0(piVar6);
              *(undefined4 *)(puVar14 + 0xac) = uVar9;
              puVar14 = puVar14 + 0x60;
            } while (iVar15 != 4);
          }
          if (4 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"miner_sim.sensor.sensor_info[0][%d].bringup_temp:%d\n",
                     iVar11,(&DAT_00a4ef1c)[iVar11 * 3]);
            FUN_0004948c(4,local_2028,0);
          }
        }
      }
    }
  }
  piVar5 = (int *)FUN_0007eb20(piVar4,"miner_bad_asic");
  if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
    piVar6 = (int *)FUN_0007eb20(piVar5,"enable_sim_mode");
    if ((piVar6 != (int *)0x0) && (*piVar6 - 5U < 2)) {
      DAT_00a4f094 = *piVar6 == 5;
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.bad_asic.enable_sim_mode:%d\n",(uint)DAT_00a4f094);
      FUN_0004948c(4,local_2028,0);
    }
    piVar5 = (int *)FUN_0007eb20(piVar5,"bad_asic_info");
    if ((piVar5 != (int *)0x0) && (*piVar5 == 1)) {
      uVar12 = 0;
      while( true ) {
        uVar8 = FUN_0007f66c(piVar5);
        uVar13 = uVar12 + 1;
        if (uVar8 <= uVar12) break;
        piVar6 = (int *)FUN_0007f6b8(piVar5,uVar12);
        uVar12 = uVar13;
        if (((piVar6 != (int *)0x0) && (*piVar6 == 3)) &&
           (uVar16 = FUN_000807e0(),
           (int)((ulonglong)uVar16 >> 0x20) < (int)(uint)((uint)uVar16 < 0x100))) {
          iVar11 = FUN_000807e0(piVar6);
          uVar8 = DAT_000be63c;
          (&DAT_00a4f095)[iVar11] = 1;
          (&DAT_00a4f195)[iVar11] = 1;
          (&DAT_00a4f295)[iVar11] = 1;
          (&DAT_00a4f395)[iVar11] = 1;
          if (4 < uVar8) {
            snprintf(local_2028,0x2000,"miner_sim.bad_asic.bad_asic_info[0][%d].bad_asic:%d\n",
                     iVar11,1);
            FUN_0004948c(4,local_2028,0);
          }
        }
      }
    }
  }
  piVar5 = (int *)FUN_0007eb20(piVar4,"miner_hashrate");
  if ((piVar5 != (int *)0x0) && (*piVar5 == 0)) {
    piVar6 = (int *)FUN_0007eb20(piVar5,"enable_sim_mode");
    if ((piVar6 != (int *)0x0) && (*piVar6 - 5U < 2)) {
      DAT_00a4f498 = *piVar6 == 5;
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.hashrate.enable_sim_mode:%d\n",(uint)DAT_00a4f498);
      FUN_0004948c(4,local_2028,0);
    }
    piVar6 = (int *)FUN_0007eb20(piVar5,"hashrate");
    if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
      DAT_00a4f49c = FUN_000807e0();
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.hashrate.hashrate:%d\n",DAT_00a4f49c);
      FUN_0004948c(4,local_2028,0);
    }
    piVar5 = (int *)FUN_0007eb20(piVar5,"avg_hashrate");
    if ((piVar5 != (int *)0x0) && (*piVar5 == 3)) {
      DAT_00a4f4a0 = FUN_000807e0();
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"miner_sim.hashrate.avg_hashrate:%d\n",DAT_00a4f4a0);
      FUN_0004948c(4,local_2028,0);
    }
  }
  if (piVar4[1] != -1) {
    piVar5 = piVar4 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar11 + -1;
    if (iVar11 + -1 == 0) {
      FUN_00080c8c(piVar4);
    }
  }
  return;
}

