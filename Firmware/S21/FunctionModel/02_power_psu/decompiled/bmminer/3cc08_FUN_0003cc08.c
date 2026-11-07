// FUN_0003cc08 @ 0003cc08  size=1460  callers=0
// program: bmminer


undefined4 FUN_0003cc08(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint in_fpscr;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int local_2068 [4];
  char local_2058 [28];
  undefined2 local_203c;
  
  local_2068[1] = 0;
  local_2068[2] = 0;
  local_2068[3] = 0;
  local_2068[0] = 0;
  prctl(0xf,"heart_beat",0,0,0);
  iVar2 = FUN_00024f54();
  if (iVar2 != 0) {
    uVar5 = FUN_00074afc(1);
    if (DAT_000be63c < 4) {
      if (uVar5 != 1) {
        return 0;
      }
    }
    else {
      snprintf(local_2058,0x2000,"enable power watchdog: 0x%04x\n",uVar5);
      FUN_0004948c(3,local_2058,0);
      if (uVar5 != 1) {
        if (DAT_000be63c < 4) {
          return 0;
        }
        snprintf(local_2058,0x2000,"%s power enable watchdog error.\n","pic_heart_beat_thread");
        FUN_0004948c(3,local_2058,0);
        return 0;
      }
    }
  }
  iVar2 = 0;
  dVar10 = -1.0;
  do {
    while( true ) {
      pthread_setcancelstate(1,(int *)0x0);
      iVar3 = FUN_00024f54();
      if (iVar3 == 0) break;
      uVar8 = FUN_000243f0(0,1);
      dVar10 = (double)CONCAT44(extraout_s1,uVar8);
      iVar3 = FUN_00024c74();
      in_fpscr = in_fpscr & 0xfffffff;
      if (dVar10 < 0.0) {
        if (3 < DAT_000be63c) {
          builtin_strncpy(local_2058,"read_feedback_voltage failed",0x1c);
          local_203c = 0x21;
          FUN_0004948c(3,local_2058,0);
        }
        FUN_0004e8c8(9,"power voltage read failed, pls check!");
        return 0;
      }
      dVar11 = dVar10 * 100.0;
      dVar12 = (double)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      dVar9 = dVar12 * 1.1;
      uVar5 = in_fpscr | (uint)(dVar11 < dVar9) << 0x1f | (uint)(dVar11 == dVar9) << 0x1e;
      uVar7 = uVar5 | (uint)(NAN(dVar11) || NAN(dVar9)) << 0x1c;
      bVar1 = (byte)(uVar5 >> 0x18);
      if (((!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) ||
          (uVar7 = in_fpscr, dVar11 < dVar12 * 0.9)) &&
         (in_fpscr = uVar7, iVar4 = FUN_000245fc(), iVar4 != 0)) {
        if (3 < DAT_000be63c) {
          pcVar6 = "drop";
          if (0.0 < dVar11 - dVar12) {
            pcVar6 = "rise";
          }
          snprintf(local_2058,0x2000,"chain avg vol %s from %d to %.2f",pcVar6,iVar3,dVar11);
          FUN_0004948c(3,local_2058,0);
        }
        FUN_0004e8c8(9,"power voltage rise or drop, pls check!");
        return 0;
      }
      if (4 < DAT_000be63c) {
        snprintf(local_2058,0x2000,"cur_voltage = %d, avg_voltage = %.2f",iVar3,dVar11);
        FUN_0004948c(4,local_2058,0);
      }
      uVar5 = FUN_000740e4();
      if (uVar5 != 0) {
        if (3 < DAT_000be63c) {
          snprintf(local_2058,0x2000,"power status error = 0x%0x",uVar5);
          FUN_0004948c(3,local_2058,0);
        }
        FUN_0004e8c8(9,"power status error!");
      }
      pthread_setcancelstate(0,(int *)0x0);
      pthread_testcancel();
      sleep(10);
    }
    if (9 < iVar2) {
      iVar3 = FUN_0002a6f0(0);
      uVar5 = 0;
      do {
        if (iVar3 != 0) {
          iVar3 = FUN_00024324(uVar5 & 0xff);
          if (iVar3 == 0) {
            iVar3 = local_2068[uVar5];
            local_2068[uVar5] = iVar3 + 1;
            if (1 < DAT_000be63c) {
              snprintf(local_2058,0x2000,"chain[%d] heart beat fail %d times.\n",uVar5,iVar3 + 1);
              FUN_0004948c(1,local_2058,0);
              FUN_0004bf68(10);
              goto LAB_0003cf60;
            }
          }
          else {
            local_2068[uVar5] = 0;
          }
          FUN_0004bf68(10);
        }
LAB_0003cf60:
        uVar5 = uVar5 + 1;
        if (uVar5 == 4) break;
        iVar3 = FUN_0002a6f0(uVar5);
      } while( true );
    }
    dVar9 = 0.0;
    iVar3 = 0;
    do {
      iVar4 = FUN_0002a6f0(iVar3);
      if (iVar4 != 0) {
        uVar8 = FUN_000243f0(iVar3,DAT_008c72a0);
        dVar9 = dVar9 + (double)CONCAT44(extraout_s1_00,uVar8);
        FUN_0004bf68(10);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    iVar3 = FUN_0002a6e0();
    if (iVar3 != 0) {
      uVar8 = FUN_0002a6e0();
      dVar11 = (double)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
      dVar9 = dVar9 / dVar11;
    }
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar10 < -0.1) {
      dVar10 = dVar9;
    }
    if (4 < DAT_000be63c) {
      snprintf(local_2058,0x2000,"last avg = %.2f, current voltage = %.2f",dVar10,dVar9);
      FUN_0004948c(4,local_2058,0);
    }
    dVar11 = (double)VectorSignedToFloat(DAT_008c706c / 100,(byte)(in_fpscr >> 0x16) & 3);
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar10 <= dVar11 * 0.75) {
LAB_0003ce90:
      in_fpscr = in_fpscr & 0xfffffff;
      if (dVar11 * 0.75 < dVar9) {
        dVar11 = dVar9 * 0.75;
        uVar5 = in_fpscr | (uint)(dVar11 < dVar10) << 0x1f | (uint)(dVar11 == dVar10) << 0x1e;
        in_fpscr = uVar5 | (uint)(NAN(dVar11) || NAN(dVar10)) << 0x1c;
        bVar1 = (byte)(uVar5 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_0003cde0;
      }
    }
    else {
      dVar12 = dVar10 * 0.75;
      uVar5 = in_fpscr | (uint)(dVar12 < dVar9) << 0x1f | (uint)(dVar12 == dVar9) << 0x1e;
      in_fpscr = uVar5 | (uint)(NAN(dVar12) || NAN(dVar9)) << 0x1c;
      bVar1 = (byte)(uVar5 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_0003ce90;
LAB_0003cde0:
      if (3 < DAT_000be63c) {
        dVar10 = dVar9 - dVar10;
        pcVar6 = "drop";
        uVar5 = in_fpscr & 0xfffffff | (uint)(dVar10 < 0.0) << 0x1f | (uint)(dVar10 == 0.0) << 0x1e;
        in_fpscr = uVar5 | (uint)NAN(dVar10) << 0x1c;
        bVar1 = (byte)(uVar5 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          pcVar6 = "rise";
        }
        snprintf(local_2058,0x2000,"chain avg vol %s to %.2f",pcVar6,dVar9);
        FUN_0004948c(3,local_2058,0);
      }
    }
    pthread_setcancelstate(0,(int *)0x0);
    pthread_testcancel();
    iVar3 = FUN_0004e8a8();
    if ((iVar3 == 2) || (iVar3 = FUN_0004e8a8(), iVar3 == 3)) {
      dVar10 = (double)VectorSignedToFloat(DAT_008c706c / 100,(byte)(in_fpscr >> 0x16) & 3);
      dVar10 = dVar10 * 0.75;
      uVar5 = in_fpscr & 0xfffffff | (uint)(dVar10 < dVar9) << 0x1f |
              (uint)(dVar10 == dVar9) << 0x1e;
      in_fpscr = uVar5 | (uint)(NAN(dVar10) || NAN(dVar9)) << 0x1c;
      bVar1 = (byte)(uVar5 >> 0x18);
      if ((!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
         (DAT_000c94e8 == 0)) {
        FUN_00056e88(0xc);
        FUN_0004e8c8(9,"pic check voltage drop");
      }
    }
    iVar2 = iVar2 + 1;
    dVar10 = dVar9;
    if (10 < iVar2) {
      iVar2 = 0;
    }
  } while( true );
}

