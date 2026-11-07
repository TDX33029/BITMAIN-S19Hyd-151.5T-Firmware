// FUN_0002e0c8 @ 0002e0c8  size=5028  callers=1
// program: cgminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002e0c8(void)

{
  int iVar1;
  char *param4;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char acStack_940 [256];
  undefined4 local_840;
  char acStack_83c [28];
  ushort local_820;
  undefined1 local_81e;
  
  dVar11 = DAT_000681d0;
  iVar7 = DAT_00068b38 - DAT_00068b40;
  if (DAT_00068b3c - DAT_00068b44 < 0) {
    iVar7 = iVar7 + -1;
  }
  dVar8 = (double)FUN_0004accc(DAT_00072f00,DAT_00072f04,(iVar7 % 0xe10) * -0x77777777);
  dVar9 = (double)FUN_0004accc(DAT_00072dd8,DAT_00072ddc);
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) {
    if (DAT_00067848 < 4) goto LAB_0002f0f4;
LAB_0002e214:
    snprintf((char *)&local_840,0x800,"Started at %s",&DAT_00068b48);
    FUN_0001dd98(4,&local_840,0);
    if (DAT_00072e70 == 1) {
      if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f234;
      goto LAB_0002f244;
    }
LAB_0002e250:
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f114;
LAB_0002e270:
    snprintf((char *)&local_840,0x800,"Runtime: %d hrs : %d mins : %d secs",iVar7 / 0xe10,
             (iVar7 % 0xe10) / 0x3c,iVar7 % 0x3c);
    FUN_0001dd98(4,&local_840,0);
    dVar10 = DAT_00072d98 / DAT_000681d0;
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f134;
LAB_0002e2d8:
    snprintf((char *)&local_840,0x800,"Average hashrate: %.1f Mhash/s",dVar10);
    FUN_0001dd98(4,&local_840,0);
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f438;
LAB_0002e320:
    snprintf((char *)&local_840,0x800,"Solved blocks: %d",DAT_00076084);
    FUN_0001dd98(4,&local_840,0);
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f448;
LAB_0002e370:
    snprintf((char *)&local_840,0x800,"Best share difficulty: %s",(char *)&DAT_000681d8);
    FUN_0001dd98(4,&local_840,0);
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f288;
LAB_0002e3b8:
    snprintf((char *)&local_840,0x800,"Share submissions: %lld",
             CONCAT44(DAT_00072f04 + DAT_00074fcc + (uint)CARRY4(DAT_00072f00,DAT_00074fc8),
                      DAT_00072f00 + DAT_00074fc8));
    FUN_0001dd98(4,&local_840,0);
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f298;
LAB_0002e420:
    snprintf((char *)&local_840,0x800,"Accepted shares: %lld",CONCAT44(DAT_00072f04,DAT_00072f00));
    FUN_0001dd98(4,&local_840,0);
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f2a8;
LAB_0002e46c:
    snprintf((char *)&local_840,0x800,"Rejected shares: %lld",CONCAT44(DAT_00074fcc,DAT_00074fc8));
    FUN_0001dd98(4,&local_840,0);
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f2b8;
LAB_0002e4d8:
    snprintf((char *)&local_840,0x800,"Accepted difficulty shares: %1.f",
             (double)CONCAT44(DAT_00074f38._4_4_,(undefined4)DAT_00074f38));
    FUN_0001dd98(4,&local_840,0);
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f2c8;
LAB_0002e52c:
    snprintf((char *)&local_840,0x800,"Rejected difficulty shares: %1.f",
             (double)CONCAT44(DAT_00074fc4,_DAT_00074fc0));
    FUN_0001dd98(4,&local_840,0);
    uVar6 = DAT_00072f00;
    iVar7 = DAT_00072f04;
    if (DAT_00072f00 != 0 || DAT_00072f04 != 0) {
joined_r0x0002e574:
      if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f2e4;
      goto LAB_0002e58c;
    }
LAB_0002e918:
    if (DAT_00074fc8 != 0 || DAT_00074fcc != 0) {
      uVar6 = 0;
      iVar7 = 0;
      goto joined_r0x0002e574;
    }
LAB_0002e60c:
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f180;
LAB_0002e62c:
    snprintf((char *)&local_840,0x800,"Hardware errors: %d",DAT_00076070);
    FUN_0001dd98(4,&local_840,0);
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) goto LAB_0002e680;
LAB_0002f19c:
    if (3 < DAT_00067848) goto LAB_0002e6c8;
LAB_0002f1ac:
    if (3 < DAT_00067848) goto LAB_0002e710;
LAB_0002f1bc:
    if (3 < DAT_00067848) goto LAB_0002e764;
LAB_0002f1cc:
    if (3 < DAT_00067848) goto LAB_0002e7b4;
LAB_0002f1dc:
    if (3 < DAT_00067848) goto LAB_0002e804;
LAB_0002f1ec:
    if (3 < DAT_00067848) goto LAB_0002e854;
LAB_0002f1fc:
    if (1 < DAT_00072e70) goto LAB_0002e890;
LAB_0002f150:
    if (3 < DAT_00067848) goto LAB_0002ed28;
  }
  else {
    local_840._0_1_ = '\n';
    local_840._1_1_ = 'S';
    local_840._2_1_ = 'u';
    local_840._3_1_ = 'm';
    builtin_strncpy(acStack_83c,"mary of runtime statistics:\n",0x1c);
    local_820 = local_820 & 0xff00;
    FUN_0001dd98(4,&local_840,0);
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) goto LAB_0002e214;
LAB_0002f0f4:
    if (DAT_00072e70 != 1) goto LAB_0002e250;
LAB_0002f234:
    if (3 < DAT_00067848) {
LAB_0002f244:
      snprintf((char *)&local_840,0x800,"Pool: %s",*(char **)(*DAT_00072f14 + 0xa4));
      FUN_0001dd98(4,&local_840,0);
      goto LAB_0002e250;
    }
LAB_0002f114:
    if (3 < DAT_00067848) goto LAB_0002e270;
    dVar10 = DAT_00072d98 / DAT_000681d0;
LAB_0002f134:
    if (3 < DAT_00067848) goto LAB_0002e2d8;
LAB_0002f438:
    if (3 < DAT_00067848) goto LAB_0002e320;
LAB_0002f448:
    if (3 < DAT_00067848) goto LAB_0002e370;
LAB_0002f288:
    if (3 < DAT_00067848) goto LAB_0002e3b8;
LAB_0002f298:
    if (3 < DAT_00067848) goto LAB_0002e420;
LAB_0002f2a8:
    if (3 < DAT_00067848) goto LAB_0002e46c;
LAB_0002f2b8:
    if (3 < DAT_00067848) goto LAB_0002e4d8;
LAB_0002f2c8:
    if (3 < DAT_00067848) goto LAB_0002e52c;
    uVar6 = DAT_00072f00;
    iVar7 = DAT_00072f04;
    if (DAT_00072f00 == 0 && DAT_00072f04 == 0) goto LAB_0002e918;
LAB_0002f2e4:
    if (3 < DAT_00067848) {
LAB_0002e58c:
      iVar5 = DAT_00074fcc;
      uVar4 = DAT_00074fc8;
      iVar1 = DAT_00074fcc * 3 + (uint)CARRY4(DAT_00074fc8,DAT_00074fc8) +
              (uint)CARRY4(DAT_00074fc8 * 2,DAT_00074fc8);
      dVar12 = (double)FUN_0004accc(DAT_00074fc8 * 100,
                                    iVar1 + (iVar1 * 0x20 | DAT_00074fc8 * 3 >> 0x1b) +
                                    (uint)CARRY4(DAT_00074fc8 * 3,DAT_00074fc8 * 0x60) +
                                    DAT_00074fcc + (uint)CARRY4(DAT_00074fc8 * 99,DAT_00074fc8));
      dVar10 = (double)FUN_0004accc(uVar4 + uVar6,iVar5 + iVar7 + (uint)CARRY4(uVar4,uVar6));
      snprintf((char *)&local_840,0x800,"Reject ratio: %.1f%%",dVar12 / dVar10);
      FUN_0001dd98(4,&local_840,0);
      goto LAB_0002e60c;
    }
LAB_0002f180:
    if (3 < DAT_00067848) goto LAB_0002e62c;
    if (DAT_00067848 < 4) goto LAB_0002f19c;
LAB_0002e680:
    snprintf((char *)&local_840,0x800,"Utility (accepted shares / min): %.2f/min",
             (dVar8 / dVar11) * 60.0);
    FUN_0001dd98(4,&local_840,0);
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) goto LAB_0002f1ac;
LAB_0002e6c8:
    snprintf((char *)&local_840,0x800,"Work Utility (diff1 shares solved / min): %.2f/min\n",
             (dVar9 / dVar11) * 60.0);
    FUN_0001dd98(4,&local_840,0);
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) goto LAB_0002f1bc;
LAB_0002e710:
    snprintf((char *)&local_840,0x800,"Stale submissions discarded due to new blocks: %lld",
             CONCAT44(DAT_000762dc,DAT_000762d8));
    FUN_0001dd98(4,&local_840,0);
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) goto LAB_0002f1cc;
LAB_0002e764:
    snprintf((char *)&local_840,0x800,"Unable to get work from server occasions: %d",DAT_00072f18);
    FUN_0001dd98(4,&local_840,0);
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) goto LAB_0002f1dc;
LAB_0002e7b4:
    snprintf((char *)&local_840,0x800,"Work items generated locally: %d",DAT_00072f24);
    FUN_0001dd98(4,&local_840,0);
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) goto LAB_0002f1ec;
LAB_0002e804:
    snprintf((char *)&local_840,0x800,"Submitting work remotely delay occasions: %d",DAT_00072dbc);
    FUN_0001dd98(4,&local_840,0);
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) goto LAB_0002f1fc;
LAB_0002e854:
    snprintf((char *)&local_840,0x800,"New blocks detected on network: %d\n",DAT_000761e8);
    FUN_0001dd98(4,&local_840,0);
    if (1 < DAT_00072e70) {
LAB_0002e890:
      iVar7 = 0;
      do {
        iVar5 = DAT_00072f14[iVar7];
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) {
          iVar1 = *(int *)(iVar5 + 0x20);
          if (iVar1 == 0) goto LAB_0002e9d4;
LAB_0002e904:
          if (3 < DAT_00067848) goto LAB_0002e988;
LAB_0002ef9c:
          if (3 < DAT_00067848) goto LAB_0002e9e4;
LAB_0002efa8:
          if (3 < DAT_00067848) goto LAB_0002ea40;
LAB_0002efb8:
          if (3 < DAT_00067848) goto LAB_0002ea84;
LAB_0002efc8:
          if (3 < DAT_00067848) goto LAB_0002eac8;
LAB_0002efd8:
          if (3 < DAT_00067848) goto LAB_0002eb0c;
          uVar6 = *(uint *)(iVar5 + 8);
          iVar1 = *(int *)(iVar5 + 0xc);
          if (uVar6 == 0 && iVar1 == 0) goto LAB_0002eb44;
          if (3 < DAT_00067848) goto LAB_0002eb70;
LAB_0002f000:
          if (3 < DAT_00067848) goto LAB_0002ec14;
LAB_0002f00c:
          if (3 < DAT_00067848) goto LAB_0002ec58;
LAB_0002f01c:
          if (3 < DAT_00067848) goto LAB_0002ec98;
LAB_0002f02c:
          if (3 < DAT_00067848) goto LAB_0002ecd4;
        }
        else {
          snprintf((char *)&local_840,0x800,"Pool: %s",*(char **)(iVar5 + 0xa4));
          FUN_0001dd98(4,&local_840,0);
          iVar1 = *(int *)(iVar5 + 0x20);
          if (iVar1 != 0) {
            if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002e904;
LAB_0002e988:
            param4 = "S";
            if (iVar1 < 2) {
              param4 = "";
            }
            snprintf((char *)&local_840,0x800,"SOLVED %d BLOCK%s!",iVar1,param4);
            FUN_0001dd98(4,&local_840,0);
          }
          if (DAT_00072da0 == '\0') {
LAB_0002e9d4:
            if (DAT_000686f0 == '\0') goto LAB_0002ef9c;
          }
LAB_0002e9e4:
          snprintf((char *)&local_840,0x800," Share submissions: %lld",
                   CONCAT44(*(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x14) +
                            (uint)CARRY4(*(uint *)(iVar5 + 8),*(uint *)(iVar5 + 0x10)),
                            *(uint *)(iVar5 + 8) + *(uint *)(iVar5 + 0x10)));
          FUN_0001dd98(4,&local_840,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002efa8;
LAB_0002ea40:
          snprintf((char *)&local_840,0x800," Accepted shares: %lld",*(longlong *)(iVar5 + 8));
          FUN_0001dd98(4,&local_840,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002efb8;
LAB_0002ea84:
          snprintf((char *)&local_840,0x800," Rejected shares: %lld",*(longlong *)(iVar5 + 0x10));
          FUN_0001dd98(4,&local_840,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002efc8;
LAB_0002eac8:
          snprintf((char *)&local_840,0x800," Accepted difficulty shares: %1.f",
                   *(double *)(iVar5 + 0x48));
          FUN_0001dd98(4,&local_840,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002efd8;
LAB_0002eb0c:
          snprintf((char *)&local_840,0x800," Rejected difficulty shares: %1.f",
                   *(double *)(iVar5 + 0x50));
          FUN_0001dd98(4,&local_840,0);
          uVar6 = *(uint *)(iVar5 + 8);
          iVar1 = *(int *)(iVar5 + 0xc);
          if (uVar6 == 0 && iVar1 == 0) {
LAB_0002eb44:
            if (*(int *)(iVar5 + 0x10) != 0 || *(int *)(iVar5 + 0x14) != 0) {
              uVar6 = 0;
              iVar1 = 0;
              goto LAB_0002eb58;
            }
          }
          else {
LAB_0002eb58:
            if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4))
            goto LAB_0002f000;
LAB_0002eb70:
            uVar4 = *(uint *)(iVar5 + 0x10);
            iVar3 = *(int *)(iVar5 + 0x14);
            iVar2 = iVar3 * 3 + (uint)CARRY4(uVar4,uVar4) + (uint)CARRY4(uVar4 * 2,uVar4);
            dVar8 = (double)FUN_0004accc(uVar4 * 100,
                                         iVar2 + (iVar2 * 0x20 | uVar4 * 3 >> 0x1b) +
                                         (uint)CARRY4(uVar4 * 3,uVar4 * 0x60) + iVar3 +
                                         (uint)CARRY4(uVar4 * 99,uVar4));
            dVar11 = (double)FUN_0004accc(uVar4 + uVar6,iVar3 + iVar1 + (uint)CARRY4(uVar4,uVar6));
            snprintf((char *)&local_840,0x800," Reject ratio: %.1f%%",dVar8 / dVar11);
            FUN_0001dd98(4,&local_840,0);
          }
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f000;
LAB_0002ec14:
          snprintf((char *)&local_840,0x800," Items worked on: %d",*(int *)(iVar5 + 0x44));
          FUN_0001dd98(4,&local_840,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f00c;
LAB_0002ec58:
          snprintf((char *)&local_840,0x800," Stale submissions discarded due to new blocks: %d",
                   *(int *)(iVar5 + 0x78));
          FUN_0001dd98(4,&local_840,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f01c;
LAB_0002ec98:
          snprintf((char *)&local_840,0x800," Unable to get work from server occasions: %d",
                   *(int *)(iVar5 + 0x80));
          FUN_0001dd98(4,&local_840,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f02c;
LAB_0002ecd4:
          snprintf((char *)&local_840,0x800," Submitting work remotely delay occasions: %d\n",
                   *(int *)(iVar5 + 0x84));
          FUN_0001dd98(4,&local_840,0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_00072e70);
    }
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f150;
LAB_0002ed28:
    local_840._0_1_ = 'S';
    local_840._1_1_ = 'u';
    local_840._2_1_ = 'm';
    local_840._3_1_ = 'm';
    builtin_strncpy(acStack_83c,"ary of per device statistics",0x1c);
    local_820 = 0xa3a;
    local_81e = 0;
    FUN_0001dd98(4,&local_840,0);
  }
  if (0 < DAT_00074ff0) {
    iVar7 = 0;
    do {
      iVar5 = FUN_0002e054(iVar7);
      iVar7 = iVar7 + 1;
      *(undefined **)(*(int *)(iVar5 + 4) + 0x14) = &DAT_00028388;
      *(undefined **)(*(int *)(iVar5 + 4) + 0x18) = &DAT_0002a180;
      FUN_0002c3b0(acStack_940,0xff,iVar5);
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        snprintf((char *)&local_840,0x800,"%s",acStack_940);
        FUN_0001dd98(4,&local_840,0);
      }
    } while (iVar7 < DAT_00074ff0);
  }
  if (DAT_00068b70 == 0) {
LAB_0002ef2c:
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002f168;
  }
  else {
    dVar11 = (double)CONCAT44(DAT_00074f38._4_4_,(undefined4)DAT_00074f38);
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
      snprintf((char *)&local_840,0x800,"Mined %.0f accepted shares of %d requested\n",dVar11,
               DAT_00068b70);
      FUN_0001dd98(4,&local_840,0);
      dVar11 = (double)CONCAT44(DAT_00074f38._4_4_,(undefined4)DAT_00074f38);
      dVar8 = (double)VectorSignedToFloat(DAT_00068b70,(byte)(in_fpscr >> 0x16) & 3);
      if (dVar11 < dVar8) {
        if (DAT_00072da0 == '\0') goto LAB_0002eed8;
LAB_0002eefc:
        snprintf((char *)&local_840,0x800,"WARNING - Mined only %.0f shares of %d requested.",dVar11
                 ,DAT_00068b70);
        FUN_0001dd98(4,&local_840,0);
      }
      goto LAB_0002ef2c;
    }
    dVar8 = (double)VectorSignedToFloat(DAT_00068b70,(byte)(in_fpscr >> 0x16) & 3);
    if (dVar11 < dVar8) {
LAB_0002eed8:
      if ((DAT_000686f0 != '\0') || (3 < DAT_00067848)) goto LAB_0002eefc;
    }
LAB_0002f168:
    if (DAT_00067848 < 4) goto LAB_0002ef64;
  }
  local_840._0_1_ = ' ';
  local_840._1_1_ = '\0';
  FUN_0001dd98(4,&local_840,0);
LAB_0002ef64:
  fflush(stderr);
  fflush(stdout);
  return;
}

