// FUN_00038d58 @ 00038d58  size=1600  callers=1
// program: bmminer


void FUN_00038d58(void)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  int iVar13;
  uint param3;
  undefined4 uVar14;
  uint in_fpscr;
  float fVar15;
  int local_864;
  int local_85c;
  int local_84c;
  undefined1 auStack_838 [8];
  char acStack_830 [2052];
  
  param3 = 0;
  local_85c = 0;
  uVar5 = FUN_000380c8();
  FUN_00019ae0();
  do {
    iVar6 = FUN_000201d8(param3);
    if (iVar6 != 0) {
      local_84c = 0;
      FUN_00021060(param3,1,0,DAT_0048d39c);
      do {
        DAT_0008a9a4 = 1;
        FUN_0002f798();
        memset(&DAT_0072b1e0 + param3 * 0x100000,0,0x100000);
        iVar6 = FUN_0002002c();
        if (0 < iVar6) {
          local_864 = 0;
          do {
            iVar7 = FUN_0002009c();
            FUN_000585cc(param3 & 0xff,local_864 * iVar7);
            FUN_00034828(auStack_838);
            do {
              pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a974);
              iVar7 = DAT_00722a08;
              if (0 < DAT_00722a08) {
                iVar13 = 0;
                do {
                  DAT_00722a08 = DAT_00722a08 + -1;
                  iVar13 = iVar13 + 1;
                  uVar11 = DAT_00722a04 + 1;
                  if (uVar11 < 0x1ff) {
                    DAT_00722a04 = uVar11;
                  }
                  iVar10 = uVar11 * 8;
                  if (0x1fe < uVar11) {
                    DAT_00722a04 = 0;
                  }
                  if ((*(byte *)((int)&DAT_00722a08 + iVar10 + 3) == param3) &&
                     (*(char *)((int)&DAT_00722a08 + iVar10 + 2) == '@')) {
                    uVar1 = *(undefined1 *)((int)&DAT_00722a08 + iVar10 + 1);
                    uVar14 = (&DAT_00722a04)[uVar11 * 2];
                    uVar8 = FUN_0002009c();
                    iVar9 = FUN_00067408(uVar1,uVar8);
                    uVar1 = *(undefined1 *)((int)&DAT_00722a08 + iVar10 + 1);
                    bVar2 = *(byte *)((int)&DAT_00722a08 + iVar10 + 3);
                    *(short *)(&DAT_0072b1e2 +
                              ((*(ushort *)((int)&DAT_00722a04 + iVar10 + 2) & 0x3ff) +
                              ((param3 & 3) * 0x100 + iVar9) * 0x400) * 4) = (short)uVar14;
                    uVar8 = FUN_0002009c();
                    iVar9 = FUN_00067408(uVar1,uVar8);
                    *(undefined2 *)
                     (&DAT_0072b1e0 +
                     ((*(ushort *)((int)&DAT_00722a04 + iVar10 + 2) & 0x3ff) +
                     (iVar9 + (bVar2 & 3) * 0x100) * 0x400) * 4) = 1;
                  }
                } while (iVar7 != iVar13);
              }
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
              usleep(1000);
              FUN_00034828(acStack_830);
              iVar7 = FUN_00034b00(acStack_830,auStack_838);
            } while (iVar7 < 100);
            local_864 = local_864 + 1;
          } while (iVar6 != local_864);
        }
        iVar6 = FUN_0002002c();
        if (iVar6 < 1) {
          if (3 < DAT_00087bbc) {
            iVar7 = 0;
            bVar4 = false;
            goto LAB_00039324;
          }
          iVar7 = 0;
LAB_000392cc:
          if (3 < DAT_00087bbc) {
            snprintf(acStack_830,0x800,"bad count is acceptable = %d",iVar7);
            FUN_00032218(3,acStack_830,0);
          }
          usleep(1000000);
          break;
        }
        bVar4 = false;
        iVar13 = 0;
        iVar7 = 0;
        do {
          iVar10 = FUN_0002005c();
          if (0 < iVar10) {
            bVar3 = false;
            iVar9 = 0;
            psVar12 = (short *)(&DAT_0072b1e0 + (iVar13 + local_85c) * 0x1000);
            do {
              if (psVar12[1] == 0) {
                if (*psVar12 == 0) {
                  if (3 < DAT_00087bbc) {
                    snprintf(acStack_830,0x800,"core %8d in asic %d not returned",iVar9,iVar13);
                    FUN_00032218(3,acStack_830,0);
                  }
                }
                else if (3 < DAT_00087bbc) {
                  snprintf(acStack_830,0x800,"core %8d data in asic %d is zero",iVar9,iVar13);
                  FUN_00032218(3,acStack_830,0);
                }
                bVar3 = true;
                iVar7 = iVar7 + 1;
                bVar4 = true;
              }
              iVar9 = iVar9 + 1;
              psVar12 = psVar12 + 2;
            } while (iVar10 != iVar9);
            if (bVar3) {
              if (3 < DAT_00087bbc) {
                snprintf(acStack_830,0x800,"reopen asic %d",iVar13);
                FUN_00032218(3,acStack_830,0);
              }
              uVar11 = param3 & 0xff;
              iVar10 = FUN_0002009c();
              FUN_000584e8(uVar11,iVar13 * iVar10,1);
              usleep(10000);
              iVar10 = FUN_0002009c();
              FUN_000584e8(uVar11,iVar13 * iVar10,0);
              usleep(10000);
              iVar10 = FUN_0002009c();
              FUN_00058e38(uVar11,iVar13 * iVar10,(char)uVar5,0);
              FUN_00034a5c(10);
              iVar10 = FUN_0002009c();
              FUN_00058ed0(uVar11,iVar13 * iVar10,(char)((uint)uVar5 >> 8),
                           (char)((uint)uVar5 >> 0x10),0);
              iVar10 = FUN_0002009c();
              FUN_0005861c(uVar11,iVar13 * iVar10);
              usleep(10000);
              if (3 < DAT_00087bbc) {
                snprintf(acStack_830,0x800,"reset clock asic %d",iVar13);
                FUN_00032218(3,acStack_830,0);
              }
              iVar10 = FUN_0002009c();
              FUN_000590b8(uVar11,iVar13 * iVar10,0);
              iVar10 = FUN_0002009c();
              FUN_00058ffc(uVar11,iVar13 * iVar10);
              usleep(100000);
              iVar10 = FUN_0002009c();
              FUN_000590b8(uVar11,iVar13 * iVar10,1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar6 != iVar13);
        if (3 < DAT_00087bbc) {
LAB_00039324:
          fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
          snprintf(acStack_830,0x800,
                   "chain %d, bad core num %8d, rate = %.2f ========================round %d",param3
                   ,iVar7,(double)(fVar15 / 12168.0),local_84c);
          FUN_00032218(3,acStack_830,0);
          local_84c = local_84c + 1;
        }
        if (iVar7 < 0x9c) goto LAB_000392cc;
        usleep(1000000);
        if (1 < local_84c) {
          bVar4 = false;
        }
      } while (bVar4);
    }
    param3 = param3 + 1;
    local_85c = local_85c + 0x100;
    if (param3 == 4) {
      DAT_0008a9a4 = 0;
      FUN_00019af4();
      return;
    }
  } while( true );
}

