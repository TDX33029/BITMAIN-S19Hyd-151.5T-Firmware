// FUN_018958e8 @ 018958e8 size=816 calls_out=16 calls_in=0
// strings: 

uint FUN_018958e8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *unaff_r6;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong local_4e0;
  int iStack_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  uint local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  int local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  uint uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined1 auStack_b8 [68];
  int local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  
  local_60 = 0;
  local_68 = param_2;
  local_64 = param_3;
  local_4b8 = FUN_01898838(&local_68,0x30);
  if ((int)local_4b8 != 0) {
    local_4b0 = 0;
    uVar14 = FUN_01899080(&local_4b8);
    iVar13 = (int)((ulonglong)uVar14 >> 0x20);
    pbVar4 = (byte *)uVar14;
    if (pbVar4 != (byte *)0x0) {
      pbVar5 = pbVar4;
      if (iVar13 != 0) {
        pbVar5 = (byte *)(uint)*pbVar4;
        unaff_r6 = pbVar4;
      }
      if (iVar13 != 0 && pbVar5 != (byte *)0x0) {
        uVar14 = FUN_01899080(&local_4b8);
        iVar10 = (int)((ulonglong)uVar14 >> 0x20);
        pbVar4 = (byte *)uVar14;
        if (pbVar4 != (byte *)0x0) {
          pbVar5 = pbVar4;
          pbVar2 = (byte *)0x0;
          if (iVar10 != 0) {
            pbVar5 = (byte *)(uint)*pbVar4;
            pbVar2 = pbVar4;
          }
          if (((iVar10 != 0 && pbVar5 != (byte *)0x0) && (local_4b0 == local_4b8._4_4_)) &&
             (local_60 == local_64)) {
            DataMemoryBarrier(0xb);
            if (DAT_01d51afc != '\x02') {
              FUN_0188ff90();
            }
            FUN_0189934c(&local_4b8,unaff_r6,iVar13,pbVar2,iVar10,param_1[2],0x2000);
            iVar13 = local_4b0;
            if (local_4b8 != 0) {
              local_4d0 = local_4a8;
              uStack_4cc = uStack_4a4;
              local_4c8 = uStack_4a0;
              uStack_4c4 = uStack_49c;
              uStack_4c0 = uStack_498;
              uStack_4bc = uStack_494;
              iStack_4d8 = local_4b0;
              uStack_4d4 = local_4ac;
              local_4e0 = local_4b8;
              FUN_01bed93e(&local_4b8,0,0x400);
              uVar3 = local_4c8;
              uVar6 = local_4c8 >> 3;
              if ((local_4c8 & 7) != 0) {
                uVar6 = (local_4c8 >> 3) + 1;
              }
              if (param_7 == uVar6) {
                uVar14 = FUN_01895d9c(param_6,param_7,iVar13,local_4ac);
                iVar10 = (int)((ulonglong)uVar14 >> 0x20);
                iVar13 = (int)uVar14;
                if (iVar13 != 0) {
                  iVar7 = FUN_01bd4ea8(iVar13);
                  if (iVar7 != -1) {
                    uVar14 = FUN_01899178(&local_4e0,iVar13,iVar10);
                    iVar7 = (int)((ulonglong)uVar14 >> 0x20);
                    uVar6 = param_7 + 3 & 0x7ffffffc;
                    if (0x400 < uVar6) {
                    /* WARNING: Subroutine does not return */
                      FUN_012faff4(0,uVar6,0x400,&DAT_01d21c2c);
                    }
                    FUN_01896024((int)uVar14,iVar7,&local_4b8,uVar6);
                    if (uVar6 < param_7) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d21c3c);
                    }
                    iVar11 = 0;
                    do {
                      if (param_7 - uVar6 == iVar11) {
                        if (iVar7 != 0) {
                          thunk_FUN_01be4678((int)uVar14);
                        }
                        if (iVar10 != 0) {
                          thunk_FUN_01be4678(iVar13);
                        }
                        uVar12 = *param_1;
                        iVar13 = param_1[1];
                        uVar8 = (**(code **)(iVar13 + 0x10))(uVar12);
                        FUN_0188fef8(auStack_b8,uVar8,param_4,param_5);
                        local_6c = 0;
                        local_70 = param_7;
                        local_74 = (int)&local_4b8 + (uVar6 - param_7);
                        FUN_01bed4e2(&local_68,auStack_b8,0x44);
                        uVar9 = (**(code **)(iVar13 + 0x14))(uVar12,&local_68,&local_74,uVar3);
                        uVar3 = local_6c;
                        uVar6 = local_70;
                        FUN_0188fa88(&local_4e0);
                        return uVar9 | uVar3 != uVar6;
                      }
                      pcVar1 = (char *)((int)&local_4b8 - iVar11);
                      iVar11 = iVar11 + -1;
                    } while (*pcVar1 == '\0');
                    /* WARNING: Subroutine does not return */
                    FUN_012fb0ec(&DAT_0051d634,0x31,&DAT_01d21c4c);
                  }
                  if (iVar10 != 0) {
                    thunk_FUN_01be4678(iVar13);
                  }
                }
              }
              FUN_0188fa88(&local_4e0);
              return 1;
            }
          }
        }
      }
    }
  }
  return 1;
}

