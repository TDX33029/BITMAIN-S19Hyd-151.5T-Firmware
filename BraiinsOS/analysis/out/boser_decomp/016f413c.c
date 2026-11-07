// FUN_016f413c @ 016f413c size=660 calls_out=7 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016f413c(uint *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  short *psVar4;
  uint uVar5;
  undefined *puVar6;
  short sVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int local_34;
  short *psStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar8 = 0;
  if ((int)param_3 < 0) {
LAB_016f4154:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,param_3);
  }
  if (param_3 == 0) {
    psVar4 = (short *)&DAT_00000001;
    FUN_01bed4e2(1,param_2,0);
    uVar11 = 0;
LAB_016f421c:
    bVar3 = false;
    uVar5 = 0;
  }
  else {
    uVar8 = 1;
    psVar4 = (short *)FUN_01298504(param_3,1);
    if (psVar4 == (short *)0x0) goto LAB_016f4154;
    FUN_01bed4e2(psVar4,param_2,param_3);
    uVar11 = param_3;
    if (param_3 < 2) goto LAB_016f421c;
    sVar2 = *psVar4;
    sVar7 = 0x7369;
    uVar5 = 2;
    bVar3 = true;
    bVar12 = sVar2 != 0x7369;
    if (bVar12) {
      sVar2 = *psVar4;
      sVar7 = 0x5349;
    }
    if ((bVar12 && sVar2 != sVar7) && (*psVar4 != 0x5369)) {
      if (*psVar4 != 0x7349) {
        uVar5 = 0;
      }
      bVar3 = *psVar4 == 0x7349;
    }
  }
  uVar10 = 0;
  if (uVar5 < param_3) {
    puVar6 = &DAT_01d17618;
    do {
      bVar1 = *(byte *)((int)psVar4 + uVar5);
      uVar9 = (uint)bVar1;
      uVar5 = uVar5 + 1;
      if ((uVar9 != 0x20 && uVar9 != 0x5f) && (uVar9 != 0x2d)) {
        if (uVar9 - 0x41 < 0x1a) {
          if (param_3 <= uVar10) {
            puVar6 = &DAT_01d17628;
            goto LAB_016f43cc;
          }
          *(byte *)((int)psVar4 + uVar10) = bVar1 | 0x20;
        }
        else {
          if ((char)bVar1 < '\0') goto LAB_016f4250;
          if (param_3 <= uVar10) goto LAB_016f43cc;
          *(byte *)((int)psVar4 + uVar10) = bVar1;
        }
        uVar10 = uVar10 + 1;
      }
LAB_016f4250:
    } while (uVar5 < param_3);
    if (((bool)(bVar3 & uVar10 == 1)) && (uVar10 = 1, (char)*psVar4 == 'c')) {
      *(char *)psVar4 = 'i';
      if (param_3 == 1) {
        param_3 = 1;
        puVar6 = &DAT_01d175e8;
LAB_016f43cc:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,param_3,puVar6);
      }
      *(char *)((int)psVar4 + 1) = 's';
      if (param_3 < 3) {
        uVar10 = 2;
        param_3 = 2;
        puVar6 = &DAT_01d175f8;
        goto LAB_016f43cc;
      }
      uVar10 = 3;
      *(char *)(psVar4 + 1) = 'c';
    }
    if (param_3 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar10,param_3,&DAT_01d17608);
    }
  }
  FUN_012fbd94(&local_34,psVar4,uVar10);
  if (local_34 != 0) {
    uStack_28 = psStack_30;
    uStack_24 = uStack_2c;
    psStack_30 = psVar4;
    uStack_2c = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_34,&DAT_01d187a8);
  }
  *param_1 = uVar11;
  param_1[1] = (uint)psVar4;
  param_1[2] = uVar10;
  return;
}

