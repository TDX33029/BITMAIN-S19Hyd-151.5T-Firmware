// FUN_00035cd4 @ 00035cd4  size=1728  callers=0
// program: cgminer


void FUN_00035cd4(int *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int param3;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  double dVar18;
  longlong lVar19;
  uint local_880;
  int local_84c;
  int local_848;
  int local_844;
  int local_840;
  int local_83c;
  int local_838;
  int local_834;
  int local_830;
  int local_82c;
  timespec local_828 [256];
  
  iVar14 = param_1[9];
  iVar6 = *(int *)(iVar14 + 4);
  iVar8 = DAT_000681e0 / 5;
  param3 = *param_1;
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  if (param_1[1] == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = (uint)*(byte *)(param_1 + 2);
  }
  local_880 = (**(code **)(iVar6 + 0x30))(param_1);
  FUN_000206d8(&local_848);
  FUN_000206d8(&local_830);
  if (*(char *)(iVar14 + 0x16c) == '\0') {
    iVar10 = iVar8 * 1000000;
    lVar2 = 0;
    iVar11 = iVar10 + 0x3ff;
    if (-1 < iVar10) {
      iVar11 = iVar10;
    }
    iVar15 = 0;
    iVar16 = 0;
    do {
      local_84c = FUN_0003424c(param_1,param3);
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
      *(undefined1 *)(iVar14 + 0xac) = 1;
      FUN_000206d8(&local_838);
      *(undefined4 *)(local_84c + 0xf8) = 0;
      *(undefined4 *)(iVar14 + 0xa0) = 0;
      *(undefined4 *)(iVar14 + 0xa4) = 0;
      iVar3 = (**(code **)(iVar6 + 0x38))(param_1);
      if (iVar3 == 0) {
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
          snprintf((char *)local_828,0x800,"work prepare failed, exiting mining thread %d",param3);
          FUN_0001dd98(3,local_828,0);
        }
        break;
      }
      dVar18 = *(double *)(iVar6 + 0x68);
      if (*(double *)(local_84c + 0x178) < *(double *)(iVar6 + 0x68)) {
        dVar18 = *(double *)(local_84c + 0x178);
      }
      *(double *)(local_84c + 0xe0) = dVar18;
      if (dVar18 < *(double *)(iVar6 + 0x70)) {
        dVar18 = *(double *)(iVar6 + 0x70);
      }
      *(double *)(local_84c + 0xe0) = dVar18;
      while( true ) {
        FUN_000206d8(&local_840);
        FUN_000202f8(&local_840,&local_848);
        FUN_0002032c(&local_848,iVar14 + 0x128);
        iVar3 = FUN_00020370(&local_848,iVar14 + 0x130);
        if (iVar3 != 0) {
          FUN_00023634(iVar14 + 0x130,&local_848);
        }
        iVar3 = FUN_000203a4(&local_848,iVar14 + 0x138);
        if (iVar3 != 0) {
          FUN_00023634(iVar14 + 0x138,&local_848);
        }
        *(int *)(iVar14 + 0x124) = *(int *)(iVar14 + 0x124) + 1;
        iVar13 = *(int *)(local_84c + 0x104);
        FUN_0002032c(&local_848,iVar13 + 0x184);
        iVar3 = FUN_00020370(&local_848,iVar13 + 0x18c);
        if (iVar3 != 0) {
          FUN_00023634(iVar13 + 0x18c,&local_848);
        }
        iVar3 = FUN_000203a4(&local_848,iVar13 + 0x194);
        if (iVar3 != 0) {
          FUN_00023634(iVar13 + 0x194,&local_848);
        }
        *(int *)(iVar13 + 0x180) = *(int *)(iVar13 + 0x180) + 1;
        FUN_000206d8(local_84c + 0x1a8);
        pthread_setcancelstate(1,(int *)0x0);
        FUN_00028804(param_1);
        lVar19 = (**(code **)(iVar6 + 0x40))
                           (param_1,local_84c,local_880 + *(int *)(local_84c + 0xf8),0);
        iVar7 = (int)((ulonglong)lVar19 >> 0x20);
        FUN_000287cc(param_1);
        pthread_setcancelstate(0,(int *)0x0);
        pthread_testcancel();
        FUN_000206d8(&local_848);
        iVar13 = local_844;
        iVar3 = local_848;
        if (lVar19 == -1) break;
        iVar12 = *(int *)(iVar14 + 0xa4);
        lVar2 = lVar19 + lVar2;
        bVar17 = *(uint *)(iVar14 + 0xa0) < (uint)lVar19;
        if ((int)(iVar12 - (iVar7 + (uint)bVar17)) < 0 !=
            (SBORROW4(iVar12,iVar7) != SBORROW4(iVar12 - iVar7,(uint)bVar17))) {
          *(longlong *)(iVar14 + 0xa0) = lVar19;
        }
        iVar7 = local_844 - local_83c;
        bVar17 = iVar7 < 0;
        if (bVar17) {
          iVar7 = iVar7 + 1000000;
        }
        iVar12 = local_848 - local_840;
        iVar15 = iVar15 + iVar7;
        if (bVar17) {
          iVar12 = iVar12 + -1;
        }
        iVar16 = iVar16 + iVar12;
        if (1000000 < iVar15) {
          iVar16 = iVar16 + 1;
          iVar15 = iVar15 + -1000000;
        }
        iVar7 = local_848 - local_838;
        if (local_844 - local_834 < 0) {
          iVar7 = iVar7 + -1;
        }
        if (iVar16 < iVar8) {
          if (local_880 != 0xffffffff) {
            iVar12 = iVar15 + 0x400;
            if (iVar15 + 0x400 < 0) {
              iVar12 = iVar15 + 0x7ff;
            }
            iVar12 = FUN_0004a700(1000000,iVar12 >> 10);
            iVar12 = (iVar12 + 0x10) * iVar8;
            uVar4 = FUN_0004a488(0xfffffc00,iVar12);
            if (uVar4 < local_880) {
              local_880 = 0xffffffff;
            }
            else {
              local_880 = local_880 * iVar12 >> 10;
            }
            goto LAB_00036014;
          }
        }
        else {
          if (iVar8 < iVar16) {
            local_880 = FUN_0004a488(iVar8 * local_880,iVar16);
          }
          else if (100000 < iVar15) {
            uVar5 = FUN_0004a700(iVar10 + iVar15,iVar11 >> 10);
            local_880 = FUN_0004a488(local_880 << 10,uVar5);
          }
LAB_00036014:
          iVar13 = iVar13 - local_82c;
          bVar17 = iVar13 < 0;
          if (bVar17) {
            iVar13 = iVar13 + 0xf4000;
          }
          iVar3 = iVar3 - local_830;
          if (bVar17) {
            iVar3 = iVar3 + -1;
            iVar13 = iVar13 + 0x240;
          }
          if (lVar2 == 0) {
LAB_00036114:
            if (DAT_000681e0 <= iVar3) goto LAB_0003604c;
            cVar1 = *(char *)((int)param_1 + 0x3e);
          }
          else {
            bVar17 = iVar3 == 0;
            iVar12 = iVar3;
            if (iVar3 < 1) {
              iVar12 = iVar13 + -200000;
              bVar17 = iVar13 == 200000;
            }
            if (bVar17 || iVar12 < 0 != (iVar3 < 1 && SBORROW4(iVar13,200000))) goto LAB_00036114;
LAB_0003604c:
            FUN_00034b64(param3,local_830,(int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
            FUN_00023634(&local_830,&local_848);
            cVar1 = *(char *)((int)param_1 + 0x3e);
            lVar2 = 0;
          }
          if (cVar1 != '\0') {
            if (uVar9 == 0) {
              local_828[0].tv_nsec = param_1[1] * 250000000;
              local_828[0].tv_sec = uVar9;
              nanosleep(local_828,(timespec *)0x0);
            }
            goto LAB_000360dc;
          }
          if (((char)param_1[0xf] == '\0') && (*(int *)(iVar14 + 0x20) == 0)) {
            iVar15 = 0;
            iVar16 = 0;
          }
          else {
            iVar15 = 0;
            iVar16 = 0;
            FUN_00029a08(param_1,param3,iVar6 + 0x5c);
          }
        }
        if ((DAT_00068204 < iVar7 ||
             (0xfffffffd < *(uint *)(iVar14 + 0xa0) || *(int *)(iVar14 + 0xa4) != 0)) ||
           (iVar3 = FUN_00033d64(local_84c), iVar3 != 0)) goto LAB_000360dc;
      }
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
        snprintf((char *)local_828,0x800,"%s %d failure, disabling!",*(char **)(iVar6 + 8),
                 *(int *)(iVar14 + 8));
        FUN_0001dd98(3,local_828,0);
      }
      *(undefined4 *)(iVar14 + 0x20) = 1;
      FUN_00022bec(iVar14,1);
      *(undefined1 *)(iVar14 + 0x16c) = 1;
LAB_000360dc:
      FUN_0002a76c(&local_84c,"cgminer.c","hash_sole_work",0x24d7);
    } while (*(char *)(iVar14 + 0x16c) == '\0');
  }
  *(undefined4 *)(iVar14 + 0x20) = 1;
  return;
}

