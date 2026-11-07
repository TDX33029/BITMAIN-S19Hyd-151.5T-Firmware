// FUN_0003ee18 @ 0003ee18  size=2508  callers=1
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0003ee18(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double *pdVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  uint in_fpscr;
  undefined4 uVar17;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar18;
  double dVar19;
  double dVar20;
  int local_a0;
  int local_9c;
  char *local_94;
  int *local_88;
  int local_84;
  int local_7c;
  undefined1 auStack_70 [12];
  
  iVar4 = FUN_0004f5a0();
  iVar7 = DAT_000c7fc4 >> 0x1f;
  if (DAT_000c7fc4 % 5 == 0) {
    FUN_0003d480(iVar4,iVar7,DAT_000c7fc4 * 0x66666667);
    if (DAT_000c947c == 1) {
      DAT_000c7fc8 = 0;
      DAT_000c7fcc = 0;
      memset(&DAT_000c7fd0,0,0xb40);
      DAT_000c8b10 = 0;
      DAT_000c947c = 0;
    }
    iVar4 = FUN_0003e028();
    if (DAT_00aaa908 == 0 && DAT_00aaa90c == 0) {
      iVar7 = DAT_000c7fc4 >> 0x1f;
      DAT_000c7fa4 = iVar4;
    }
    else {
      iVar7 = iVar4 - DAT_000c7fa4;
      uVar12 = DAT_00aaa908 - DAT_000c7fc8;
      DAT_000c7fa4 = iVar4;
      dVar20 = (double)FUN_00098c14(-uVar12,(uVar12 & 0xfffffffe) +
                                            ((uint)(uVar12 * -0x80000000 < uVar12) * -2 -
                                            (DAT_00aaa90c -
                                            (DAT_000c7fcc + (uint)(DAT_00aaa908 < DAT_000c7fc8)))) +
                                            (uint)CARRY4(uVar12 * 0x7fffffff,uVar12 * 0x7fffffff) +
                                            (uint)CARRY4(uVar12 * -2,uVar12));
      dVar18 = 1000000000.0;
      dVar20 = dVar20 / 1000000000.0;
      if (iVar7 != 0) {
        dVar18 = (double)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
      }
      uVar12 = DAT_000c8b10 >> 3;
      uVar5 = DAT_000c8b10 + 1;
      pdVar13 = (double *)&DAT_000c7fd0;
      iVar4 = DAT_000c8b10 + (uVar12 / 0x2d) * -0x168;
      if (iVar7 != 0) {
        dVar20 = dVar20 / dVar18;
      }
      dVar18 = 0.0;
      DAT_000c8b10 = uVar5;
      (&DAT_000c7fd0)[iVar4] = dVar20;
      uVar11 = 0;
      do {
        bVar16 = uVar11 == uVar5;
        uVar11 = uVar11 + 1;
        if (bVar16) goto LAB_0003f1d4;
        dVar20 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        dVar18 = dVar18 + dVar20;
      } while (uVar11 != 0x168);
      if (uVar5 < 0x168) {
LAB_0003f1d4:
        dVar20 = (double)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      }
      else {
        dVar20 = 360.0;
      }
      DAT_000c9500 = dVar18 / dVar20;
      iVar4 = FUN_0002a72c(SUB84(DAT_000c9500,0),uVar12 * 0x16c16c17);
      iVar7 = DAT_000c7fc4 >> 0x1f;
      DAT_000c7fc8 = DAT_00aaa908;
      DAT_000c7fcc = DAT_00aaa90c;
    }
  }
  iVar7 = (DAT_000c7fc4 / 10 + (DAT_000c7fc4 >> 0x1f)) - iVar7;
  if ((DAT_000c7fc4 == iVar7 * 10) &&
     (iVar7 = FUN_0004e8a8(iVar4,iVar7 * 5,DAT_000c7fc4 * 0x66666667), iVar7 == 2)) {
    FUN_00047894();
  }
  DAT_000c7fc4 = DAT_000c7fc4 + 1;
  if (DAT_000c7fc4 == (DAT_000c7fc4 / 0x3c) * 0x3c) {
    iVar7 = FUN_0004e8a8(DAT_000c7fc4 * -0x77777777);
    FUN_0004f8e8(iVar7 == 2);
  }
  iVar7 = DAT_000c7fc4 >> 0x1f;
  if (DAT_000c7fc4 % 0x708 == 0) {
    iVar7 = FUN_0004e8a8(DAT_000c7fc4 * -0x6e5d4c3b);
    if (iVar7 == 2) {
      if (DAT_000c8b14 == 0) {
        DAT_000c8b14 = FUN_000856dc("bmminer_adc");
      }
      FUN_000875a0(DAT_000c8b14,"thread.c",8,"show_miner_status_thread",0x18,0x545,0x14,
                   "read asic vol in 30 min");
      DAT_000c8b18 = 0;
    }
    iVar7 = DAT_000c7fc4 >> 0x1f;
    if (DAT_000c7fc4 % 0x708 == 0) {
      FUN_0003e058(DAT_000c7fc4 * -0x6e5d4c3b);
      iVar7 = DAT_000c7fc4 >> 0x1f;
    }
  }
  bVar16 = DAT_000c7fc4 == 0x4b0;
  if (0x4af < DAT_000c7fc4) {
    bVar16 = ((DAT_000c7fc4 / 0x78 + (DAT_000c7fc4 >> 0x1f)) - iVar7) * 0x78 == DAT_000c7fc4;
  }
  if ((bVar16) && (iVar7 = FUN_0004e8a8(DAT_000c7fc4 * -0x77777777), iVar7 == 2)) {
    FUN_0004f6cc(0x708 < DAT_000c7fc4);
  }
  iVar7 = DAT_000c7fc4;
  if ((DAT_000c8b19 == '\0') && (DAT_000c8b19 = '\x01', DAT_008c7040 - 0x32U < 0xfa)) {
    dVar19 = (double)VectorSignedToFloat(DAT_008c7040,(byte)(in_fpscr >> 0x16) & 3);
    dVar18 = (double)VectorSignedToFloat(DAT_000bdcc8,(byte)(in_fpscr >> 0x16) & 3);
    dVar20 = (double)VectorSignedToFloat(DAT_000bdccc,(byte)(in_fpscr >> 0x16) & 3);
    DAT_000bdcc8 = (undefined4)(longlong)((dVar18 * 300.0) / dVar19 + 0.99);
    DAT_000bdccc = (int)(longlong)((dVar20 * 300.0) / dVar19 + 0.99);
  }
  if (((char)DAT_000bfb98 != '\0') || (DAT_000c74c4 == '\0')) goto LAB_0003ef3c;
  FUN_000988ec(DAT_000c7fc4,DAT_000bdccc);
  if (extraout_r1 != 0) goto LAB_0003ef3c;
  iVar4 = FUN_0004e8a8();
  iVar7 = DAT_000bdccc;
  if (iVar4 != 2) {
    iVar7 = DAT_000c7fc4;
    goto LAB_0003ef3c;
  }
  if (DAT_000bdcd0 == 1) {
    uVar12 = 0;
    DAT_00a67814 = 0;
    DAT_00a67818 = 0;
    DAT_00a6781c = 0;
    DAT_00a67820 = 0;
    do {
      iVar7 = FUN_0002a6f0(uVar12);
      if (iVar7 != 0) {
        FUN_00081200(uVar12 & 0xff,1,0,0x90,0);
        FUN_0004bd34(uVar12 * 8 + 0xc8b1c);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 4);
    DAT_000bdcd0 = 0;
LAB_0003f428:
    if (DAT_000c8b40 < 5) {
LAB_0003f4c8:
      DAT_000c8b40 = DAT_000c8b40 + 1;
      iVar7 = DAT_000c7fc4;
      goto LAB_0003ef3c;
    }
    if (DAT_00a54cbc != '\0') goto LAB_0003f58c;
  }
  else {
    dVar20 = 1000.0;
    DAT_000bdcd0 = 1;
    uVar12 = 0;
    DAT_00a67814 = 0;
    DAT_00a67818 = 0;
    DAT_00a6781c = 0;
    DAT_00a67820 = 0;
    do {
      iVar4 = FUN_0002a6f0(uVar12);
      if (iVar4 != 0) {
        FUN_0002c9f4(uVar12 & 0xff,1,0,0x90);
        FUN_0004bd34(auStack_70);
        uVar17 = FUN_0004c05c(auStack_70,uVar12 * 8 + 0xc8b1c);
        dVar20 = (double)CONCAT44(extraout_s1,uVar17);
        (&DAT_00a67828)[uVar12] = dVar20;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 4);
    FUN_0004bf68(300);
    dVar18 = (double)VectorSignedToFloat(iVar7 + 0x1e,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = in_fpscr & 0xfffffff | (uint)(dVar18 < dVar20) << 0x1f |
            (uint)(dVar18 == dVar20) << 0x1e;
    uVar12 = uVar5 | (uint)(NAN(dVar18) || NAN(dVar20)) << 0x1c;
    bVar3 = (byte)(uVar5 >> 0x18);
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar12 >> 0x1c) & 1)) {
      DAT_00a54cbc = '\0';
      if (4 < DAT_000c8b40) goto LAB_0003f448;
      goto LAB_0003f4c8;
    }
    pdVar13 = (double *)&DAT_00a67828;
    iVar7 = 0;
    local_84 = 0;
    local_7c = 0;
    do {
      iVar4 = FUN_0002a6f0(iVar7);
      if (iVar4 != 0) {
        uVar11 = (&DAT_00a67814)[iVar7];
        uVar5 = FUN_0002a514();
        if (uVar11 == uVar5) {
          iVar4 = iVar7 * 0x100;
          iVar9 = 0;
          piVar8 = &DAT_000be5f8;
          local_9c = 0;
          local_a0 = 0;
          local_94 = &DAT_00a54bbc + iVar7 * 0x40;
          local_88 = &DAT_00a58cc8 + iVar7 * 0x40;
          while (iVar9 = FUN_0002a504(uVar5,piVar8,iVar9), local_9c < iVar9) {
            iVar14 = 0;
            for (iVar9 = 0; iVar6 = FUN_0002a524(), iVar9 < iVar6; iVar9 = iVar9 + 1) {
              iVar6 = FUN_0002a524();
              iVar6 = local_9c * iVar6 + iVar9;
              uVar17 = FUN_00027f1c(iVar7,iVar6);
              uVar12 = uVar12 & 0xfffffff;
              dVar20 = (double)CONCAT44(extraout_s1_00,uVar17);
              if ((double)CONCAT44(extraout_s1_00,uVar17) < 50.0) {
                dVar20 = 50.0;
              }
              dVar18 = (double)VectorUnsignedToFloat
                                         (*(undefined4 *)(&DAT_00a67848 + (iVar4 + iVar6) * 4),
                                          (byte)(uVar12 >> 0x16) & 3);
              uVar17 = FUN_0002a554();
              dVar19 = (double)VectorSignedToFloat(uVar17,(byte)(uVar12 >> 0x16) & 3);
              iVar15 = DAT_000be5f8 * 0x229c;
              iVar10 = DAT_000be5f8 * 0x1ec8;
              cVar2 = (&DAT_00a537b8)[iVar6 + iVar4];
              iVar1 = (int)(longlong)
                           (((((((((dVar18 * 256.0) / 255.0) / dVar19) / *pdVar13) * 4294967296.0) /
                              1000.0) / 1000.0) / dVar20) * 10000.0);
              *(int *)(&DAT_00a53bb8 + (iVar4 + iVar6) * 4) = iVar1;
              if (cVar2 == '\0') {
                if (iVar1 < iVar10 / 100) {
                  bVar16 = true;
                }
                else {
                  bVar16 = false;
                }
              }
              else {
                bVar16 = iVar1 < iVar15 / 100;
              }
              iVar14 = iVar14 + iVar1;
              (&DAT_00a537b8)[iVar6 + iVar4] = bVar16;
              local_a0 = local_a0 + iVar1;
            }
            uVar17 = FUN_0002a524();
            iVar14 = FUN_00098658(iVar14,uVar17);
            cVar2 = *local_94;
            *local_88 = iVar14;
            if (cVar2 == '\0') {
              iVar6 = 0x1ec8;
            }
            else {
              iVar6 = 0x229c;
            }
            iVar6 = iVar6 * DAT_000be5f8;
            iVar9 = iVar6 * 0x51eb851f;
            piVar8 = (int *)(iVar6 >> 0x1f);
            bVar16 = iVar14 < iVar6 / 100;
            uVar5 = (uint)bVar16;
            local_9c = local_9c + 1;
            *local_94 = bVar16;
            local_94 = local_94 + 1;
            local_88 = local_88 + 1;
          }
          uVar17 = FUN_0002a514();
          iVar9 = FUN_00098658(local_a0,uVar17);
          iVar4 = DAT_000be5f8;
          cVar2 = (&DAT_00a537b4)[iVar7];
          *(int *)(&DAT_00a590c8 + iVar7 * 4) = iVar9;
          if (cVar2 == '\0') {
            iVar14 = 0x62;
          }
          else {
            iVar14 = 99;
          }
          local_7c = local_7c + iVar9;
          (&DAT_00a537b4)[iVar7] = iVar9 < iVar14 * iVar4;
          local_84 = local_84 + 1;
        }
        else {
          DAT_00a54cbc = '\0';
          DAT_000c8b3c = DAT_000c8b3c + 1;
        }
      }
      iVar7 = iVar7 + 1;
      pdVar13 = pdVar13 + 1;
    } while (iVar7 != 4);
    iVar7 = FUN_0002a6e0();
    if (iVar7 != local_84 || local_84 < 1) goto LAB_0003f428;
    DAT_00a54cbc = '\x01';
    DAT_00a4f7b0 = FUN_00098658(local_7c,local_84);
    if (DAT_000c8b40 < 5) goto LAB_0003f4c8;
LAB_0003f58c:
    FUN_0003de20();
  }
LAB_0003f448:
  DAT_000c8b40 = 0;
  iVar7 = DAT_000c7fc4;
LAB_0003ef3c:
  if (iVar7 == (iVar7 / 0x3c) * 0x3c) {
    FUN_000471ac(iVar7 * -0x77777777);
    FUN_00047508();
    iVar7 = DAT_000c7fc4;
  }
  iVar4 = iVar7 >> 0x1f;
  if ((iVar7 % 600 == 0) && (DAT_000c948c == '\0')) {
    FUN_0003eb90(iVar7 * 0x1b4e81b5);
    iVar4 = DAT_000c7fc4 >> 0x1f;
    iVar7 = DAT_000c7fc4;
  }
  if (iVar7 + ((iVar7 / 900 + (iVar7 >> 0x1f)) - iVar4) * -900 == 0) {
    FUN_0003e488(iVar7 * -0x6e5d4c3b);
  }
  return 0;
}

