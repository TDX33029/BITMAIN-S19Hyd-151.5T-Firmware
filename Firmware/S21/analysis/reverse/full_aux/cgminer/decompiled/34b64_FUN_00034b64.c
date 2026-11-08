// FUN_00034b64 @ 00034b64  size=2744  callers=3
// program: cgminer


/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000353a4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00034b64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  double *pdVar12;
  uint in_fpscr;
  uint uVar13;
  undefined4 extraout_s0;
  double in_d0;
  undefined4 extraout_s1;
  undefined4 in_s3;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined4 local_8e0;
  undefined4 uStack_8dc;
  char acStack_8d8 [16];
  char acStack_8c8 [16];
  char acStack_8b8 [16];
  char acStack_8a8 [16];
  sysinfo local_898;
  char acStack_858 [2052];
  
  uVar20 = CONCAT44(param_4,param_3);
  iVar3 = sysinfo(&local_898);
  if (iVar3 == 0) {
    DAT_000761e4 = local_898.uptime;
  }
  else {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      puVar4 = (uint *)__errno_location();
      uVar9 = *puVar4;
      pcVar5 = strerror(uVar9);
      snprintf(acStack_858,0x800,"Failed to get sysinfo, errno:%u, reason:%s\n",uVar9,pcVar5);
      FUN_0001dd98(6,acStack_858,0);
    }
    DAT_000761e4 = time((time_t *)0x0);
  }
  FUN_000206d8(&DAT_00068b38);
  FUN_00020a04(&DAT_00068b38,&DAT_00068ba4);
  iVar3 = DAT_00068b38;
  extraout_s1 = (undefined4)((ulonglong)in_d0 >> 0x20);
  extraout_s0 = SUB84(in_d0,0);
  if (DAT_00068b38 - DAT_0006a0b0 < DAT_000681e0) {
    if (param_1 < 0) {
      return;
    }
    bVar11 = 0;
    FUN_00023634(&DAT_00068ba4);
LAB_00034f0c:
    iVar6 = FUN_0002f6e8(param_1);
    iVar10 = *(int *)(iVar6 + 0x24);
    FUN_00023634(iVar6 + 0x2c,&DAT_00068b38);
    *(int *)(iVar10 + 0xf0) = iVar3;
    FUN_00020a04(&DAT_00068b38,iVar10 + 0x8c);
    FUN_00023634(iVar10 + 0x8c,&DAT_00068b38);
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      dVar19 = (double)FUN_0004acbc(param_3,param_4);
      snprintf(acStack_858,0x800,"[thread %d: %llu hashes, %.1f mhash/sec]",param_1,
               CONCAT44(param_4,param_3),(dVar19 / in_d0) / 1000000.0);
      FUN_0001dd98(7,acStack_858,0);
    }
    uVar20 = FUN_0004ad28(param_3,param_4,1000000,0);
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072ee8);
    if (iVar3 == 0) {
      dVar19 = (double)FUN_0004acbc((int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      uVar7 = SUB84(dVar19,0);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e | (uint)(0.0 <= in_d0) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      *(double *)(iVar10 + 0x50) = *(double *)(iVar10 + 0x50) + dVar19;
      if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
        uVar14 = VectorSignedToFloat(DAT_000681e0,(byte)(in_fpscr >> 0x16) & 3);
        FUN_0002a138(uVar7,extraout_s1,extraout_s0,in_s3,(int)uVar14,iVar10 + 0x30);
        FUN_0002a138(uVar7,extraout_s1,extraout_s0,in_s3,0,iVar10 + 0x38);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e |
                   (uint)(0.0 <= in_d0) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
          FUN_0002a138(uVar7,extraout_s1,extraout_s0,in_s3,0,iVar10 + 0x40);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e |
                     (uint)(0.0 <= in_d0) << 0x1d;
          bVar1 = (byte)(in_fpscr >> 0x18);
          if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
            FUN_0002a138(uVar7,extraout_s1,extraout_s0,in_s3,0,iVar10 + 0x48);
          }
        }
      }
      iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072ee8);
      if (iVar3 != 0) {
        piVar8 = __errno_location();
        iVar3 = *piVar8;
        goto LAB_000355f0;
      }
      (*DAT_0006796c)();
      if ((bVar11 & DAT_00076024) == 0) {
        iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072ee8);
        if (iVar3 == 0) {
          DAT_00072d98 = DAT_00072d98 + dVar19;
          if (bVar11 != 0) goto LAB_00034de0;
          iVar3 = DAT_00068c10 * 8;
          dVar18 = *(double *)(&DAT_00068bb0 + iVar3);
          bVar2 = false;
          goto LAB_000350b4;
        }
LAB_00035520:
        piVar8 = __errno_location();
        iVar3 = *piVar8;
        pcVar5 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
      }
      else {
        FUN_0002c3b0(acStack_858,0x100,iVar10);
        printf("%s          \r",acStack_858);
        fflush(stdout);
        iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072ee8);
        if (iVar3 != 0) goto LAB_00035520;
        DAT_00072d98 = DAT_00072d98 + dVar19;
LAB_00034de0:
        pdVar12 = (double *)&DAT_00068bb0;
        DAT_00068c10 = DAT_00068c10 + 1;
        iVar3 = 0;
        uVar14 = 0;
        if (0xb < DAT_00068c10) {
          DAT_00068c10 = 0;
        }
        do {
          dVar18 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          uVar9 = in_fpscr & 0xfffffff | (uint)(dVar18 < 0.0) << 0x1f;
          in_fpscr = uVar9 | (uint)NAN(dVar18) << 0x1c;
          if ((byte)(uVar9 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
            dVar16 = (double)FUN_0004acbc((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
            iVar3 = iVar3 + 1;
            uVar14 = FUN_0004ad88(SUB84(dVar16 + dVar18,0),
                                  (int)((ulonglong)(dVar16 + dVar18) >> 0x20));
          }
        } while (pdVar12 != (double *)&DAT_00068c10);
        if (iVar3 != 0) {
          uVar20 = FUN_0004ad28((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),iVar3,iVar3 >> 0x1f);
        }
        uStack_8dc = (undefined4)((ulonglong)uVar20 >> 0x20);
        local_8e0 = (undefined4)uVar20;
        dVar18 = (double)VectorSignedToFloat(DAT_000681e0,(byte)(in_fpscr >> 0x16) & 3);
        uVar9 = in_fpscr & 0xfffffff | (uint)(dVar18 == 0.0) << 0x1e | (uint)(0.0 <= dVar18) << 0x1d
        ;
        bVar11 = (byte)(uVar9 >> 0x18);
        if ((bool)(bVar11 >> 5 & 1) && !(bool)(bVar11 >> 6)) {
          uVar7 = FUN_0004acbc(local_8e0,uStack_8dc);
          FUN_0002a138(uVar7,extraout_s1,SUB84(dVar18,0),in_s3,SUB84(dVar18,0),&DAT_000761d8);
          in_fpscr = uVar9 & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e | (uint)(0.0 <= in_d0) << 0x1d
          ;
          bVar11 = (byte)(in_fpscr >> 0x18);
          if ((bool)(bVar11 >> 5 & 1) && !(bool)(bVar11 >> 6)) goto LAB_00035418;
        }
        else {
          in_fpscr = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e |
                     (uint)(0.0 <= in_d0) << 0x1d;
          bVar11 = (byte)(in_fpscr >> 0x18);
          if ((bool)(bVar11 >> 5 & 1) && !(bool)(bVar11 >> 6)) {
LAB_00035418:
            uVar7 = SUB84(dVar19,0);
            FUN_0002a138(uVar7,extraout_s1,extraout_s0,in_s3,0,&DAT_000762e8);
            FUN_0002a138(uVar7,extraout_s1,extraout_s0,in_s3,0,&DAT_000762e0);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e |
                       (uint)(0.0 <= in_d0) << 0x1d;
            bVar11 = (byte)(in_fpscr >> 0x18);
            if ((bool)(bVar11 >> 5 & 1) && !(bool)(bVar11 >> 6)) {
              FUN_0002a138(uVar7,extraout_s1,extraout_s0,in_s3,0,&DAT_00072ed0);
            }
          }
        }
        bVar2 = true;
        uVar20 = FUN_0004ad88(SUB84(_DAT_000761d8 * 1000000.0,0),
                              (int)((ulonglong)(_DAT_000761d8 * 1000000.0) >> 0x20));
        DAT_0007619c = (undefined4)((ulonglong)uVar20 >> 0x20);
        DAT_00076198 = (undefined4)uVar20;
        dVar18 = 0.0;
        iVar3 = DAT_00068c10 * 8;
        *(undefined8 *)(&DAT_00068bb0 + iVar3) = 0;
LAB_000350b4:
        dVar16 = _DAT_000681f0;
        dVar15 = (double)VectorSignedToFloat(DAT_000761e4,(byte)(in_fpscr >> 0x16) & 3);
        dVar17 = (double)VectorSignedToFloat(DAT_000761a4,(byte)(in_fpscr >> 0x16) & 3);
        *(double *)(&DAT_00068bb0 + iVar3) = dVar19 + dVar18;
        DAT_000681d0 = dVar15 - dVar17;
        dVar19 = DAT_000681d0 - dVar16;
        uVar9 = in_fpscr & 0xfffffff | (uint)(dVar19 < 86400.0) << 0x1f |
                (uint)(dVar19 == 86400.0) << 0x1e;
        uVar13 = uVar9 | (uint)NAN(dVar19) << 0x1c;
        bVar11 = (byte)(uVar9 >> 0x18);
        if ((bool)(bVar11 >> 6 & 1) || bVar11 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) {
          _DAT_000681f0 = DAT_000681d0;
          if (!bVar2) goto LAB_00035198;
LAB_000351dc:
          dVar19 = (DAT_00072d98 / DAT_000681d0) * 1000000.0;
          uVar20 = FUN_0004ad88(SUB84(dVar19,0),(int)((ulonglong)dVar19 >> 0x20));
          FUN_00028838((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),acStack_8d8,0x10);
          dVar19 = (double)VectorSignedToFloat((int)(longlong)_DAT_000761d8 / 10,
                                               (byte)(uVar13 >> 0x16) & 3);
          DAT_0006a0b8 = dVar19 / 100.0;
          uVar20 = FUN_0004ad88(SUB84(_DAT_000761d8 * 1000000.0,0),
                                (int)((ulonglong)(_DAT_000761d8 * 1000000.0) >> 0x20),
                                (int)(longlong)_DAT_000761d8 * 0x66666667);
          FUN_00028838((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),acStack_8c8,0x10);
          uVar20 = FUN_0004ad88(SUB84(_DAT_000762e8 * 1000000.0,0),
                                (int)((ulonglong)(_DAT_000762e8 * 1000000.0) >> 0x20));
          FUN_00028838((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),acStack_8b8,0x10);
          uVar20 = FUN_0004ad88(SUB84(_DAT_000762e0 * 1000000.0,0),
                                (int)((ulonglong)(_DAT_000762e0 * 1000000.0) >> 0x20));
          FUN_00028838((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),acStack_8a8,0x10);
          uVar20 = FUN_0004ad88(SUB84(_DAT_00072ed0 * 1000000.0,0),
                                (int)((ulonglong)(_DAT_00072ed0 * 1000000.0) >> 0x20));
          FUN_00028838((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),acStack_858,0x10);
          snprintf(&DAT_0006a0c0,0x100,"(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s",DAT_000681e0,
                   acStack_8c8,acStack_8b8,acStack_8a8,acStack_858,acStack_8d8);
          iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072ee8);
          if (iVar3 == 0) {
            (*DAT_0006796c)();
            printf("%s          \r",&DAT_0006a0c0);
            fflush(stdout);
            return;
          }
        }
        else {
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
            snprintf(acStack_858,0x800,"cgminer time error total_secs = %f last_total_secs = %f",
                     DAT_000681d0,dVar16);
            FUN_0001dd98(3,acStack_858,0);
          }
          iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072ee8);
          if (iVar3 != 0) {
            piVar8 = __errno_location();
            iVar3 = *piVar8;
            goto LAB_000355f0;
          }
          (*DAT_0006796c)();
          FUN_00030aa8();
          iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072ee8);
          if (iVar3 != 0) {
            piVar8 = __errno_location();
            iVar3 = *piVar8;
            goto LAB_000355b4;
          }
          if (bVar2) goto LAB_000351dc;
LAB_00035198:
          iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072ee8);
          if (iVar3 == 0) {
            (*DAT_0006796c)();
            return;
          }
        }
        piVar8 = __errno_location();
        iVar3 = *piVar8;
        pcVar5 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
      }
      snprintf(acStack_858,0x800,pcVar5,iVar3);
      goto LAB_0003555c;
    }
    piVar8 = __errno_location();
    iVar3 = *piVar8;
LAB_000355b4:
    pcVar5 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
  }
  else {
    DAT_0006a0b0 = DAT_00068b38;
    FUN_00023634(&DAT_00068ba4);
    if (-1 < param_1) {
      bVar11 = 1;
      goto LAB_00034f0c;
    }
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072ee8);
    if (iVar3 != 0) {
      piVar8 = __errno_location();
      iVar3 = *piVar8;
      goto LAB_000355b4;
    }
    if (0 < DAT_00076238) {
      iVar3 = 0;
      do {
        while( true ) {
          iVar6 = FUN_0002f6e8(iVar3);
          iVar6 = *(int *)(iVar6 + 0x24);
          FUN_00020a04(&DAT_00068b38,iVar6 + 0x8c);
          FUN_00023634(iVar6 + 0x8c,&DAT_00068b38);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e |
                     (uint)(0.0 <= in_d0) << 0x1d;
          bVar11 = (byte)(in_fpscr >> 0x18);
          if ((bool)(bVar11 >> 5 & 1) && !(bool)(bVar11 >> 6)) break;
LAB_00034cbc:
          iVar3 = iVar3 + 1;
          if (DAT_00076238 <= iVar3) goto LAB_00034d84;
        }
        uVar14 = VectorSignedToFloat(DAT_000681e0,(byte)(in_fpscr >> 0x16) & 3);
        FUN_0002a138(0,extraout_s1,extraout_s0,in_s3,(int)uVar14,iVar6 + 0x30);
        FUN_0002a138(0,extraout_s1,extraout_s0,in_s3,0,iVar6 + 0x38);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e |
                   (uint)(0.0 <= in_d0) << 0x1d;
        bVar11 = (byte)(in_fpscr >> 0x18);
        if (!(bool)(bVar11 >> 5 & 1) || (bool)(bVar11 >> 6)) goto LAB_00034cbc;
        FUN_0002a138(0,extraout_s1,extraout_s0,in_s3,0,iVar6 + 0x40);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e |
                   (uint)(0.0 <= in_d0) << 0x1d;
        bVar11 = (byte)(in_fpscr >> 0x18);
        if (!(bool)(bVar11 >> 5 & 1) || (bool)(bVar11 >> 6)) goto LAB_00034cbc;
        iVar3 = iVar3 + 1;
        FUN_0002a138(0,extraout_s1,extraout_s0,in_s3,0,iVar6 + 0x48);
      } while (iVar3 < DAT_00076238);
    }
LAB_00034d84:
    iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072ee8);
    if (iVar3 == 0) {
      (*DAT_0006796c)();
      iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072ee8);
      if (iVar3 == 0) {
        dVar19 = (double)FUN_0004acbc(param_3,param_4);
        DAT_00072d98 = DAT_00072d98 + dVar19;
        goto LAB_00034de0;
      }
      goto LAB_00035520;
    }
    piVar8 = __errno_location();
    iVar3 = *piVar8;
LAB_000355f0:
    pcVar5 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
  }
  snprintf(acStack_858,0x800,pcVar5,iVar3);
LAB_0003555c:
  FUN_0001dd98(3,acStack_858,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

