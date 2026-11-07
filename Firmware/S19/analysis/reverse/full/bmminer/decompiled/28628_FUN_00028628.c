// FUN_00028628 @ 00028628  size=3032  callers=0
// program: bmminer


void FUN_00028628(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint param4;
  uint in_fpscr;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  uint local_9b4;
  uint local_9b0;
  uint local_9a8;
  uint local_9a4;
  int local_990;
  int local_98c;
  int local_970;
  int local_96c;
  int local_968;
  int local_964;
  char acStack_960 [256];
  char acStack_860 [2052];
  
  memset(acStack_960,0,0x100);
  iVar5 = FUN_0001d4a4();
  if (iVar5 == 0) {
    iVar5 = FUN_00017028();
    local_9a4 = iVar5 - 4;
    iVar5 = FUN_00017028();
    local_9b0 = iVar5 - 5;
    iVar5 = FUN_00017028();
    local_9a8 = iVar5 - 6;
  }
  else {
    local_9a8 = 5;
    local_9b0 = 4;
    local_9a4 = 3;
  }
  local_9b4 = 0;
  do {
    iVar5 = 0;
    local_9b4 = local_9b4 + 1;
    FUN_00015fd4(&local_970);
    do {
      iVar6 = FUN_000201d8(iVar5);
      if (iVar6 != 0) {
        for (param4 = 0; iVar6 = FUN_00017028(), (int)param4 < iVar6; param4 = param4 + 1) {
          iVar6 = param4 + iVar5 * 6;
          local_968 = (&DAT_0071a278)[iVar6 * 2];
          local_964 = (&DAT_0071a27c)[iVar6 * 2];
          dVar11 = (double)VectorSignedToFloat(local_970 - local_968,(byte)(in_fpscr >> 0x16) & 3);
          dVar10 = (double)VectorSignedToFloat(local_96c - local_964,(byte)(in_fpscr >> 0x16) & 3);
          dVar11 = (dVar10 / 1000.0) / 1000.0 + dVar11;
          uVar2 = in_fpscr & 0xfffffff;
          uVar3 = uVar2 | (uint)(dVar11 < 36.0) << 0x1f | (uint)(dVar11 == 36.0) << 0x1e;
          in_fpscr = uVar3 | (uint)NAN(dVar11) << 0x1c;
          bVar4 = (byte)(uVar3 >> 0x18);
          uVar3 = local_9a4;
          if (((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
             (uVar3 = uVar2 | (uint)(dVar11 < 24.0) << 0x1f | (uint)(dVar11 == 24.0) << 0x1e,
             in_fpscr = uVar3 | (uint)NAN(dVar11) << 0x1c, bVar4 = (byte)(uVar3 >> 0x18),
             uVar3 = local_9b0,
             (bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
            uVar3 = uVar2 | (uint)(dVar11 < 18.0) << 0x1f | (uint)(dVar11 == 18.0) << 0x1e;
            in_fpscr = uVar3 | (uint)NAN(dVar11) << 0x1c;
            bVar4 = (byte)(uVar3 >> 0x18);
            if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
              uVar3 = uVar2 | (uint)(dVar11 < 14.399999999999999) << 0x1f |
                      (uint)(dVar11 == 14.399999999999999) << 0x1e;
              in_fpscr = uVar3 | (uint)NAN(dVar11) << 0x1c;
              bVar4 = (byte)(uVar3 >> 0x18);
              if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
                uVar2 = uVar2 | (uint)(dVar11 < 1.7999999999999998) << 0x1f |
                        (uint)(dVar11 == 1.7999999999999998) << 0x1e;
                in_fpscr = uVar2 | (uint)NAN(dVar11) << 0x1c;
                bVar4 = (byte)(uVar2 >> 0x18);
                if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
                  (&DAT_00089228)[iVar5 * 6 + param4] = 0;
                  FUN_0001602c(iVar5,param4 & 0xff,0);
                }
                else {
                  iVar6 = (&DAT_00089228)[iVar5 * 6 + param4];
                  (&DAT_00089228)[iVar5 * 6 + param4] = iVar6 + 1;
                  if (iVar6 < 0x23) {
                    if (4 < DAT_00087bbc) {
                      snprintf(acStack_860,0x800,"C %d P %d tdiff %.3f",iVar5,param4,dVar11);
                      FUN_00032218(4,acStack_860,0);
                    }
                    memset(acStack_960,0,0x100);
                    snprintf(acStack_960,0xff,"C %d P %d tdiff %.3f",iVar5,param4,dVar11);
                    if (DAT_00089288 == 0) {
                      DAT_00089288 = FUN_0005b008("bmminer_power");
                    }
                    FUN_0005c5c4(DAT_00089288,"thread.c",8,"update_temp_stats_thread",0x18,0x434,
                                 0x14,"%s",acStack_960);
                  }
                }
              }
              else if (param4 != local_9a8 && (param4 != local_9a4 && param4 != local_9b0)) {
                FUN_0001602c(iVar5,param4 & 0xff,1);
              }
            }
            else if (param4 == local_9a8) {
              FUN_0001602c(iVar5,param4 & 0xff,1);
            }
          }
          else if (param4 == uVar3) {
            FUN_0001602c(iVar5,param4 & 0xff,1);
          }
          FUN_000167c8(iVar5,param4,dVar11 < 1.2);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    iVar5 = DAT_0071b38c + 1;
    if (iVar5 == 3) {
      iVar5 = 0;
      puVar7 = &DAT_0071a33c;
    }
    else {
      puVar7 = &DAT_0071a33c + iVar5 * 0x2b8;
    }
    FUN_000175e0(puVar7);
    DAT_0071b38c = iVar5;
    if (local_9b4 % 10 == 0) {
      iVar5 = 0;
      local_98c = DAT_0071a338 + 1;
      if (local_98c == 3) {
        puVar7 = &DAT_0071ab64;
        local_98c = 0;
      }
      else {
        puVar7 = &DAT_0071ab64 + local_98c * 0x2b8;
      }
      FUN_000175e0(puVar7);
      do {
        iVar6 = FUN_000201d8(iVar5);
        if (iVar6 != 0) {
          memset(acStack_960,0,0x100);
          iVar6 = iVar5 * 0x18;
          snprintf(acStack_960,0xff,"C %d PCB: %d ~ %d CHIP %d ~ %d RATE %d",iVar5,
                   (int)*(short *)(&DAT_0071adac + DAT_0071a338 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071ada6 + DAT_0071a338 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071adae + DAT_0071a338 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071ada8 + DAT_0071a338 * 0x2b8 + iVar6),
                   *(int *)(&DAT_0071adb8 + DAT_0071a338 * 0x2b8 + iVar6));
          memset(acStack_960,0,0x100);
          iVar1 = iVar5 * 0x90;
          snprintf(acStack_960,0xff,"C %d PCB: %d ~ %d CHIP %d ~ %d RATE %d",iVar5,
                   (int)*(short *)(&DAT_0071adac + DAT_0071a338 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071ada6 + DAT_0071a338 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071adae + DAT_0071a338 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071ada8 + DAT_0071a338 * 0x2b8 + iVar6),
                   *(int *)(&DAT_0071adb8 + DAT_0071a338 * 0x2b8 + iVar6));
          for (iVar6 = 0; iVar8 = FUN_00017028(), iVar6 < iVar8; iVar6 = iVar6 + 1) {
            memset(acStack_960,0,0x100);
            iVar8 = iVar6 * 0x18;
            snprintf(acStack_960,0xff,"C %d P %d PCB: %d ~ %d CHIP %d ~ %d RATE %d",iVar5,iVar6,
                     (int)*(short *)(&DAT_0071ab6c + DAT_0071a338 * 0x2b8 + iVar8 + iVar1),
                     (int)*(short *)(&DAT_0071ab66 + DAT_0071a338 * 0x2b8 + iVar8 + iVar1),
                     (int)*(short *)(&DAT_0071ab6e + DAT_0071a338 * 0x2b8 + iVar8 + iVar1),
                     (int)*(short *)(&DAT_0071ab68 + DAT_0071a338 * 0x2b8 + iVar8 + iVar1),
                     *(int *)(&DAT_0071ab78 + DAT_0071a338 * 0x2b8 + iVar8 + iVar1));
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      DAT_0071a338 = local_98c;
    }
    if (local_9b4 % 300 == 0) {
      iVar5 = 0;
      local_990 = DAT_0071c3e4 + 1;
      if (local_990 == 3) {
        puVar7 = &DAT_0071bbbc;
        local_990 = 0;
      }
      else {
        puVar7 = &DAT_0071bbbc + local_990 * 0x2b8;
      }
      FUN_000175e0(puVar7);
      do {
        iVar6 = FUN_000201d8(iVar5);
        if (iVar6 != 0) {
          memset(acStack_960,0,0x100);
          iVar6 = iVar5 * 0x18;
          iVar1 = iVar5 * 0x90;
          snprintf(acStack_960,0xff,"C %d PCB: %d ~ %d CHIP %d ~ %d RATE %d",iVar5,
                   (int)*(short *)(&DAT_0071be04 + DAT_0071c3e4 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071bdfe + DAT_0071c3e4 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071be06 + DAT_0071c3e4 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071be00 + DAT_0071c3e4 * 0x2b8 + iVar6),
                   *(int *)(&DAT_0071be10 + DAT_0071c3e4 * 0x2b8 + iVar6));
          for (iVar6 = 0; iVar8 = FUN_00017028(), iVar6 < iVar8; iVar6 = iVar6 + 1) {
            memset(acStack_960,0,0x100);
            iVar8 = iVar6 * 0x18;
            snprintf(acStack_960,0xff,"C %d P %d PCB: %d ~ %d CHIP %d ~ %d RATE %d",iVar5,iVar6,
                     (int)*(short *)(&DAT_0071bbc4 + DAT_0071c3e4 * 0x2b8 + iVar8 + iVar1),
                     (int)*(short *)(&DAT_0071bbbe + DAT_0071c3e4 * 0x2b8 + iVar8 + iVar1),
                     (int)*(short *)(&DAT_0071bbc6 + DAT_0071c3e4 * 0x2b8 + iVar8 + iVar1),
                     (int)*(short *)(&DAT_0071bbc0 + DAT_0071c3e4 * 0x2b8 + iVar8 + iVar1),
                     *(int *)(&DAT_0071bbd0 + DAT_0071c3e4 * 0x2b8 + iVar8 + iVar1));
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      DAT_0071c3e4 = local_990;
    }
    uVar9 = 0xe10;
    local_990 = local_9b4 * -0x6e5d4c3b;
    if (local_9b4 % 0xe10 == 0) {
      iVar5 = 0;
      local_990 = DAT_0071b390 + 1;
      if (local_990 == 3) {
        puVar7 = &DAT_0071b394;
        local_990 = 0;
      }
      else {
        puVar7 = &DAT_0071b394 + local_990 * 0x2b8;
      }
      FUN_000175e0(puVar7);
      memset(acStack_960,0,0x100);
      snprintf(acStack_960,0xff,"PCB: %d ~ %d CHIP %d ~ %d RATE %d",
               (int)*(short *)(&DAT_0071b63c + DAT_0071b390 * 0x2b8),
               (int)*(short *)(&DAT_0071b636 + DAT_0071b390 * 0x2b8),
               (int)*(short *)(&DAT_0071b63e + DAT_0071b390 * 0x2b8),
               (int)*(short *)(&DAT_0071b638 + DAT_0071b390 * 0x2b8),
               *(int *)(&DAT_0071b648 + DAT_0071b390 * 0x2b8));
      do {
        uVar12 = FUN_000201d8(iVar5);
        uVar9 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if ((int)uVar12 != 0) {
          memset(acStack_960,0,0x100);
          iVar6 = iVar5 * 0x18;
          iVar1 = iVar5 * 0x90;
          snprintf(acStack_960,0xff,"C %d PCB: %d ~ %d CHIP %d ~ %d RATE %d",iVar5,
                   (int)*(short *)(&DAT_0071b5dc + DAT_0071b390 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071b5d6 + DAT_0071b390 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071b5de + DAT_0071b390 * 0x2b8 + iVar6),
                   (int)*(short *)(&DAT_0071b5d8 + DAT_0071b390 * 0x2b8 + iVar6),
                   *(int *)(&DAT_0071b5e8 + DAT_0071b390 * 0x2b8 + iVar6));
          iVar6 = 0;
          while( true ) {
            iVar8 = FUN_00017028();
            uVar9 = 0;
            if (iVar8 <= iVar6) break;
            memset(acStack_960,0,0x100);
            iVar8 = iVar6 * 0x18;
            snprintf(acStack_960,0xff,"C %d P %d PCB: %d ~ %d CHIP %d ~ %d RATE %d",iVar5,iVar6,
                     (int)*(short *)(&DAT_0071b39c + DAT_0071b390 * 0x2b8 + iVar8 + iVar1),
                     (int)*(short *)(&DAT_0071b396 + DAT_0071b390 * 0x2b8 + iVar8 + iVar1),
                     (int)*(short *)(&DAT_0071b39e + DAT_0071b390 * 0x2b8 + iVar8 + iVar1),
                     (int)*(short *)(&DAT_0071b398 + DAT_0071b390 * 0x2b8 + iVar8 + iVar1),
                     *(int *)(&DAT_0071b3a8 + DAT_0071b390 * 0x2b8 + iVar8 + iVar1));
            iVar6 = iVar6 + 1;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      DAT_0071b390 = local_990;
    }
    FUN_00034a5c(1000,uVar9,local_990);
  } while( true );
}

