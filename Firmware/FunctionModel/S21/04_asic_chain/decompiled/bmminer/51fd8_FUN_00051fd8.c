// FUN_00051fd8 @ 00051fd8  size=1592  callers=0
// program: bmminer


void FUN_00051fd8(void)

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
  undefined4 uVar11;
  uint uVar12;
  short *psVar13;
  int iVar14;
  uint param3;
  short *psVar15;
  uint in_fpscr;
  float fVar16;
  int local_2060;
  short *local_2054;
  int local_204c;
  undefined1 auStack_2038 [8];
  char acStack_2030 [8196];
  
  local_2054 = (short *)&DAT_00aaa914;
  uVar5 = FUN_00050d70(3);
  param3 = 0;
  FUN_00019678();
  do {
    iVar6 = FUN_0002a6f0(param3);
    if (iVar6 != 0) {
      local_204c = 0;
      FUN_0002cef8(param3,1,0,DAT_008c7044);
      do {
        DAT_000c9648 = 1;
        FUN_00045c7c();
        memset(local_2054,0,0x1fe000);
        iVar6 = FUN_0002a514();
        if (0 < iVar6) {
          local_2060 = 0;
          do {
            iVar7 = FUN_0002a584();
            FUN_00082934(param3 & 0xff,local_2060 * iVar7);
            FUN_0004bd34(auStack_2038);
            do {
              pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
              iVar7 = DAT_00a5f358;
              if (0 < DAT_00a5f358) {
                iVar14 = 0;
                do {
                  DAT_00a5f358 = DAT_00a5f358 + -1;
                  iVar14 = iVar14 + 1;
                  uVar12 = DAT_00a5f354 + 1;
                  if (uVar12 < 0xfff) {
                    DAT_00a5f354 = uVar12;
                  }
                  iVar10 = uVar12 * 8;
                  if (0xffe < uVar12) {
                    DAT_00a5f354 = 0;
                  }
                  if ((*(byte *)((int)&DAT_00a5f358 + iVar10 + 3) == param3) &&
                     (*(char *)((int)&DAT_00a5f358 + iVar10 + 2) == '@')) {
                    uVar11 = (&DAT_00a5f354)[uVar12 * 2];
                    uVar1 = *(undefined1 *)((int)&DAT_00a5f358 + iVar10 + 1);
                    uVar8 = FUN_0002a584();
                    iVar9 = FUN_00098658(uVar1,uVar8);
                    uVar12 = (uint)*(ushort *)((int)&DAT_00a5f354 + iVar10 + 2);
                    uVar1 = *(undefined1 *)((int)&DAT_00a5f358 + iVar10 + 1);
                    bVar2 = *(byte *)((int)&DAT_00a5f358 + iVar10 + 3);
                    *(short *)(((param3 & 3) * 0x7f800 + iVar9 * 0x7f8 + uVar12 % 0x7f8) * 4 +
                              0xaaa916) = (short)uVar11;
                    uVar8 = FUN_0002a584(uVar12 * -0x7f7f7f7f);
                    iVar9 = FUN_00098658(uVar1,uVar8);
                    *(undefined2 *)
                     (&DAT_00aaa914 +
                     ((bVar2 & 3) * 0x7f800 + iVar9 * 0x7f8 +
                     (uint)*(ushort *)((int)&DAT_00a5f354 + iVar10 + 2) % 0x7f8) * 4) = 1;
                  }
                } while (iVar7 != iVar14);
              }
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
              usleep(1000);
              FUN_0004bd34(acStack_2030);
              iVar7 = FUN_0004c008(acStack_2030,auStack_2038);
            } while (iVar7 < 100);
            local_2060 = local_2060 + 1;
          } while (iVar6 != local_2060);
        }
        iVar6 = FUN_0002a514();
        if (iVar6 < 1) {
          if (3 < DAT_000be63c) {
            iVar7 = 0;
            bVar4 = false;
            goto LAB_000525a8;
          }
          iVar7 = 0;
LAB_00052558:
          if (3 < DAT_000be63c) {
            snprintf(acStack_2030,0x2000,"bad count is acceptable = %d",iVar7);
            FUN_0004948c(3,acStack_2030,0);
          }
          usleep(1000000);
          break;
        }
        iVar7 = 0;
        bVar4 = false;
        iVar14 = 0;
        psVar15 = local_2054;
        do {
          iVar10 = FUN_0002a544();
          if (0 < iVar10) {
            bVar3 = false;
            iVar9 = 0;
            psVar13 = psVar15;
            do {
              if (psVar13[1] == 0) {
                if (*psVar13 == 0) {
                  if (3 < DAT_000be63c) {
                    snprintf(acStack_2030,0x2000,"core %8d in asic %d not returned",iVar9,iVar14);
                    FUN_0004948c(3,acStack_2030,0);
                  }
                }
                else if (3 < DAT_000be63c) {
                  snprintf(acStack_2030,0x2000,"core %8d data in asic %d is zero",iVar9,iVar14);
                  FUN_0004948c(3,acStack_2030,0);
                }
                bVar3 = true;
                iVar7 = iVar7 + 1;
                bVar4 = true;
              }
              iVar9 = iVar9 + 1;
              psVar13 = psVar13 + 2;
            } while (iVar10 != iVar9);
            if (bVar3) {
              if (3 < DAT_000be63c) {
                snprintf(acStack_2030,0x2000,"reopen asic %d",iVar14);
                FUN_0004948c(3,acStack_2030,0);
              }
              uVar12 = param3 & 0xff;
              iVar10 = FUN_0002a584();
              FUN_000828b8(uVar12,iVar14 * iVar10,1);
              usleep(10000);
              iVar10 = FUN_0002a584();
              FUN_000828b8(uVar12,iVar14 * iVar10,0);
              usleep(10000);
              iVar10 = FUN_0002a584();
              FUN_000822d4(uVar12,iVar14 * iVar10,(char)uVar5,0);
              FUN_0004bf68(10);
              iVar10 = FUN_0002a584();
              FUN_00082c00(uVar12,iVar14 * iVar10,(char)((uint)uVar5 >> 8),
                           (char)((uint)uVar5 >> 0x10),0);
              iVar10 = FUN_0002a584();
              FUN_00082a04(uVar12,iVar14 * iVar10);
              usleep(10000);
              if (3 < DAT_000be63c) {
                snprintf(acStack_2030,0x2000,"reset clock asic %d",iVar14);
                FUN_0004948c(3,acStack_2030,0);
              }
              iVar10 = FUN_0002a584();
              FUN_00082d78(uVar12,iVar14 * iVar10,0);
              iVar10 = FUN_0002a584();
              FUN_000830e8(uVar12,iVar14 * iVar10);
              usleep(100000);
              iVar10 = FUN_0002a584();
              FUN_00082d78(uVar12,iVar14 * iVar10,1);
            }
          }
          iVar14 = iVar14 + 1;
          psVar15 = psVar15 + 0xff0;
        } while (iVar6 != iVar14);
        if (3 < DAT_000be63c) {
LAB_000525a8:
          fVar16 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
          snprintf(acStack_2030,0x2000,
                   "chain %d, bad core num %8d, rate = %.2f ========================round %d",param3
                   ,iVar7,(double)(fVar16 / 12168.0),local_204c);
          FUN_0004948c(3,acStack_2030,0);
          local_204c = local_204c + 1;
        }
        if (iVar7 < 0x9c) goto LAB_00052558;
        usleep(1000000);
        if (1 < local_204c) {
          bVar4 = false;
        }
      } while (bVar4);
    }
    param3 = param3 + 1;
    local_2054 = local_2054 + 0xff000;
    if (param3 == 4) {
      DAT_000c9648 = 0;
      FUN_0001968c();
      return;
    }
  } while( true );
}

