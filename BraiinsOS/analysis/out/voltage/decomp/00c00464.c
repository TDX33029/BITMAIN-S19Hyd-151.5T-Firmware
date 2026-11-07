// function @ 00c00464  size=768  volt_strings=2
// strings: Tuner failed to start due to misconfiguration or some other reason. Change the configuration and restart bosminer. If you think this is an error, then contact support. | Tuner failed to start - mining won't start | E1No hashboards are available for detectionNo plugged-in hashboards were detected. Check the data cable from hashboard to control board, or repair/replace the hashboards.E2Miner model is very likely unsupported, mining won't startCreate a support package and send it to Braiins support, or at least send the logs containing the hexdumps of EEPROMs. This error should be caught during installation with toolbox, but could have happened if you connected an already installed control board with BOS to a different miner.E3Failed to read hashboard EEPROM, mining won't startRaw data could not be read from hashboard. Check the data cable from hashboard to control board, or repair/replace the hashboard.E4Failed to decode hashboard EEPROM, mining won't startOne or more connected hashboards have corrupted/unknown EEPROM data, or hashboards from mutually incompatible miners are connected. Replace the hashboard(s).E5Another bosminer instance is already runningAnother bosminer process is holding the lock file. Wait for it to finish or stop the other instance before starting a new one.HW1Failed to create reset pin instanceThe device files expected by bosminer are not present. This is very likely caused by the software distribution (not by a hardware error). (Re)install the latest BOS or try a different control board.HW2Failed to create plug pin instanceHW3Failed to create PSU control pin instanceP1PSU error while initializing the chipsCheck the PSU connection to the control board or replace the PSU.P2Error while setting voltage - check the PSU connection to control boardP3Communication with PSU failed (I2C write)Check the cable connecting the PSU with the control board or replace the PSU.P4Communication with PSU failed (I2C read)P5Connected PSU is not supported for this model (mining won't start)The PSU is not compatible with the miner model. Check that the PSU can provide the same range of voltage as is expected for this model. If you think it should be supported, then send a support package to Braiins support together with a photo of the sticker on the PSU.P6Connected PSU is not supported (mining won't start)The PSU is not recognized by this version of Braiins OS. If you think it should be supported, then send a support package to Braiins support together with a photo of the sticker on the PSU.P7The PSU is not compatible with the miner model. Replace the PSU with a compatible one. If you think it should be supported, then send a support package to Braiins support together with a photo of the sticker on the PSU.The hashboard measured a different voltage than was set on PSUThis could be caused by the wrong PSU model or a hardware fault that lowers voltage. Eith

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c00464(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  uint local_80;
  uint *local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar18 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar12 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  if ((char)puVar12[4] == '\0') {
    FUN_015f62e4(&local_38);
    *puVar12 = local_38;
    puVar12[1] = uStack_34;
    puVar12[2] = uStack_30;
    puVar12[3] = uStack_2c;
    *(undefined1 *)(puVar12 + 4) = 1;
  }
  local_48 = *puVar12;
  uStack_44 = puVar12[1];
  local_3c = puVar12[3];
  *puVar12 = local_48 + 1;
  puVar12[1] = uStack_44 + (0xfffffffe < local_48);
  local_40 = puVar12[2];
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_58 = &DAT_005674cc;
  FUN_00c51b30(&local_58,0x25,&local_48);
  iVar17 = 0;
LAB_00c00670:
  uVar15 = (&DAT_01871980)[iVar17 * 6];
  uVar14 = (&DAT_01871984)[iVar17 * 6];
  uVar10 = FUN_00c52070(local_48,uStack_44,local_40,local_3c,uVar15,uVar14);
  if (local_50 == 0) {
    FUN_00c51b30(&local_58,1,&local_48);
  }
  uVar6 = local_54;
  puVar12 = local_58;
  iVar11 = 0;
  bVar5 = false;
  uVar16 = uVar10;
  do {
    uVar16 = uVar6 & uVar16;
    uVar13 = *(uint *)((int)puVar12 + uVar16);
    uVar7 = uVar13 ^ (uVar10 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar8 = uVar7 >> 8;
      uVar1 = uVar7 >> 0x10;
      uVar2 = uVar7 >> 0x18;
      uVar3 = uVar7 << 0x18;
      uVar7 = uVar7 - 1 & uVar7;
      uVar8 = uVar16 + ((uint)LZCOUNT(uVar3 | (uVar8 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar6;
      if ((uVar14 == puVar12[uVar8 * -6 + -5]) &&
         (iVar9 = thunk_FUN_016dd50a(uVar15,puVar12[uVar8 * -6 + -6],uVar14), iVar9 == 0))
      goto LAB_00c00650;
    }
    uVar7 = uVar13 & 0x80808080;
    uVar8 = local_80;
    if (bVar5) {
LAB_00c005bc:
      if ((uVar7 & uVar13 << 1) != 0) break;
      bVar5 = true;
      local_80 = uVar8;
    }
    else {
      if (uVar7 != 0) {
        uVar8 = uVar16 + ((uint)LZCOUNT((uVar13 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                        (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar6;
        goto LAB_00c005bc;
      }
      bVar5 = false;
    }
    iVar11 = iVar11 + 4;
    uVar16 = iVar11 + uVar16;
  } while( true );
  uVar16 = (uint)*(char *)((int)puVar12 + uVar8);
  if (-1 < (int)uVar16) {
    uVar16 = *puVar12 & 0x80808080;
    uVar8 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                    (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
    uVar16 = (uint)*(byte *)((int)puVar12 + (uVar8 >> 3));
    uVar8 = uVar8 >> 3;
  }
  bVar4 = (byte)(uVar10 >> 0x19);
  *(byte *)((int)puVar12 + uVar8) = bVar4;
  *(byte *)((int)puVar12 + (uVar6 & uVar8 - 4) + 4) = bVar4;
  local_50 = local_50 - (uVar16 & 1);
  puVar12[uVar8 * -6 + -6] = uVar15;
  local_4c = local_4c + 1;
  puVar12[uVar8 * -6 + -5] = uVar14;
LAB_00c00650:
  uVar10 = (&DAT_01871988)[iVar17 * 6];
  uVar14 = (&DAT_0187198c)[iVar17 * 6];
  uVar15 = (&DAT_01871990)[iVar17 * 6];
  iVar11 = iVar17 * 6;
  iVar17 = iVar17 + 1;
  puVar12[uVar8 * -6 + -1] = (&DAT_01871994)[iVar11];
  puVar12[uVar8 * -6 + -2] = uVar15;
  puVar12[uVar8 * -6 + -3] = uVar14;
  puVar12[uVar8 * -6 + -4] = uVar10;
  if (iVar17 == 0x25) {
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
    param_1[3] = local_4c;
    param_1[4] = local_48;
    param_1[5] = uStack_44;
    param_1[6] = local_40;
    param_1[7] = local_3c;
    return;
  }
  goto LAB_00c00670;
}

