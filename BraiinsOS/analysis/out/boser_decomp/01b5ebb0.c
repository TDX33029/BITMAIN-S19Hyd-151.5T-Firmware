// FUN_01b5ebb0 @ 01b5ebb0 size=1928 calls_out=32 calls_in=2
// strings: 

undefined4
FUN_01b5ebb0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  short sVar12;
  int *piVar13;
  undefined1 auStack_13dc0 [3484];
  int aiStack_13024 [6809];
  undefined1 auStack_c5c0 [6144];
  undefined1 auStack_adc0 [5120];
  undefined1 auStack_99c0 [1024];
  undefined1 auStack_95c0 [1024];
  undefined1 auStack_91c0 [1024];
  undefined1 auStack_8dc0 [1024];
  undefined1 auStack_89c0 [1020];
  int iStack_85c4;
  undefined1 local_85c0 [6144];
  undefined4 local_6dc0 [1536];
  undefined1 auStack_55c0 [6144];
  undefined1 auStack_3dc0 [6144];
  undefined1 auStack_25c0 [5120];
  undefined1 auStack_11c0 [1024];
  undefined1 auStack_dc0 [1024];
  undefined1 auStack_9c0 [1024];
  undefined1 auStack_5c0 [704];
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [64];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [64];
  undefined1 auStack_200 [64];
  short local_1c0;
  undefined1 auStack_1b0 [388];
  int local_2c;
  int iStack_28;
  
  piVar5 = (int *)(auStack_1b0 + 0x18c);
  do {
    piVar5 = piVar5 + -0x400;
    *piVar5 = param_1;
  } while (piVar5 != aiStack_13024);
  local_2c = DAT_01d53560;
  FUN_01b26ac8(auStack_300,auStack_2e0,auStack_2a0,auStack_3dc0,auStack_25c0,auStack_55c0,param_8);
  if (param_9 == 0) {
    FUN_01b5bbb8(auStack_280,0x40,auStack_2e0,0x40,param_5,param_6,param_3,param_4);
  }
  else {
    FUN_01b269d8(auStack_280,param_3,0x40);
  }
  sVar12 = 4;
  FUN_01b5bbb8(auStack_240,0x40,auStack_2a0,0x20,param_7,0x20,auStack_280,0x40);
  FUN_01b5e9b0(auStack_13dc0,auStack_300);
  FUN_01b255ac(auStack_25c0);
  FUN_01b255ec(auStack_55c0);
  FUN_01b255ec(auStack_3dc0);
  do {
    iVar11 = 0;
    FUN_01b5c708(auStack_99c0,auStack_95c0,auStack_91c0,auStack_8dc0,auStack_240,sVar12 + -4,
                 sVar12 + -3,sVar12 + -2,sVar12 + -1);
    FUN_01b269d8(auStack_200,auStack_240,0x40);
    puVar10 = local_6dc0;
    local_1c0 = sVar12;
    FUN_01b5b5e4(auStack_1b0);
    FUN_01b5b638(auStack_1b0,auStack_200,0x42);
    FUN_01b5b9d0(auStack_5c0,auStack_1b0,0x2a8);
    FUN_01b1d768(auStack_89c0,auStack_5c0);
    FUN_01b6b174(auStack_5c0,0x2a8);
    FUN_01b6b174(auStack_200,0x42);
    FUN_01bed4e2(auStack_adc0,auStack_99c0,0x1400);
    FUN_01b255ac(auStack_adc0);
    FUN_01b1d834(local_6dc0,auStack_13dc0,auStack_adc0);
    FUN_01b28edc(local_6dc0);
    FUN_01b1d920(local_6dc0);
    puVar4 = auStack_c5c0;
    do {
      iVar6 = 0;
      puVar8 = puVar10;
      do {
        puVar2 = puVar4 + iVar6;
        iVar6 = iVar6 + 4;
        FUN_01b1d47c(puVar8,puVar2,*puVar8);
        puVar8 = puVar8 + 1;
      } while (iVar6 != 0x400);
      iVar11 = iVar11 + 0x100;
      puVar10 = puVar10 + 0x100;
      puVar4 = puVar4 + 0x400;
    } while (iVar11 != 0x600);
    iVar11 = param_1;
    puVar4 = auStack_c5c0;
    do {
      iVar6 = iVar11 + 0x80;
      FUN_01b1d7f0(iVar11,puVar4);
      puVar4 = puVar4 + 0x400;
      iVar11 = iVar6;
    } while (iVar6 != param_1 + 0x300);
    iVar6 = 0;
    FUN_01b5bbb8(auStack_5c0,0x30,auStack_280,0x40,param_1,0x300,0,0);
    FUN_01b5be64(auStack_dc0,auStack_5c0);
    FUN_01b25490(auStack_dc0);
    iVar11 = param_1 + 0x30;
    do {
      FUN_01b1cb40(auStack_11c0,auStack_dc0,auStack_25c0 + iVar6);
      FUN_01b28d84(auStack_11c0);
      FUN_01b1ca84(auStack_11c0,auStack_99c0 + iVar6);
      FUN_01b1c9d0(auStack_11c0);
      iVar1 = FUN_01b1cf6c(auStack_11c0,0x7ff3c);
      if (iVar1 != 0) goto LAB_01b5f234;
      iVar6 = iVar6 + 0x400;
      FUN_01b1d6f8(iVar11,auStack_11c0);
      iVar11 = iVar11 + 0x280;
    } while (iVar6 != 0x1400);
    iVar11 = 0;
    do {
      puVar2 = auStack_55c0 + iVar11;
      puVar4 = local_85c0 + iVar11;
      iVar11 = iVar11 + 0x400;
      FUN_01b1cb40(puVar4,auStack_dc0,puVar2);
    } while (iVar11 != 0x1800);
    FUN_01b28edc(local_85c0);
    iVar11 = 0;
    do {
      puVar4 = local_85c0 + iVar11;
      iVar6 = (int)local_6dc0 + iVar11;
      iVar11 = iVar11 + 0x400;
      FUN_01b1cac8(iVar6,puVar4);
    } while (iVar11 != 0x1800);
    FUN_01b1d8e0(local_6dc0);
    iVar11 = FUN_01b1d960(local_6dc0,0x3fe3c);
    if (iVar11 == 0) {
      iVar11 = 0;
      do {
        puVar2 = auStack_3dc0 + iVar11;
        puVar4 = local_85c0 + iVar11;
        iVar11 = iVar11 + 0x400;
        FUN_01b1cb40(puVar4,auStack_dc0,puVar2);
      } while (iVar11 != 0x1800);
      FUN_01b28edc(local_85c0);
      FUN_01b1d8e0(local_85c0);
      iVar6 = FUN_01b1d960(local_85c0,0x3ff00);
      iVar11 = 0;
      if (iVar6 != 0) goto LAB_01b5f234;
      do {
        puVar4 = local_85c0 + iVar11;
        iVar6 = (int)local_6dc0 + iVar11;
        iVar11 = iVar11 + 0x400;
        FUN_01b1ca84(iVar6,puVar4);
      } while (iVar11 != 0x1800);
      iVar11 = 0;
      uVar7 = 0;
      do {
        puVar4 = local_85c0 + iVar11;
        puVar2 = auStack_c5c0 + iVar11;
        iVar6 = (int)local_6dc0 + iVar11;
        iVar11 = iVar11 + 0x400;
        iVar6 = FUN_01b1d4ec(puVar4,iVar6,puVar2);
        uVar7 = uVar7 + iVar6;
      } while (iVar11 != 0x1800);
      if (0x37 < uVar7) goto LAB_01b5f234;
      FUN_01b269d8(param_1,auStack_5c0,0x30);
      FUN_01b25814(param_1 + 0xcb0,0x3d);
      puVar4 = (undefined1 *)(param_1 + 0xce6);
      uVar3 = 0;
      piVar5 = &iStack_85c4;
      do {
        iVar11 = 0;
        piVar13 = piVar5;
        do {
          piVar13 = piVar13 + 1;
          if (*piVar13 != 0 && uVar3 < uVar7) {
            *(char *)(param_1 + 0xcb0 + uVar3) = (char)iVar11;
            uVar3 = uVar3 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0x100);
        puVar4 = puVar4 + 1;
        *puVar4 = (char)uVar3;
        piVar5 = piVar5 + 0x100;
      } while (puVar4 != (undefined1 *)(param_1 + 0xcec));
      iVar11 = 0;
    }
    else {
LAB_01b5f234:
      iVar11 = -1;
    }
    FUN_01b6b174(auStack_11c0,0x400);
    FUN_01b6b174(auStack_dc0,0x400);
    FUN_01b6b174(local_6dc0,0x1800);
    FUN_01b6b174(auStack_c5c0,0x2c00);
    FUN_01b6b174(auStack_9c0,0x400);
    FUN_01b6b174(auStack_99c0,0x2c00);
    FUN_01b6b174(auStack_5c0,0x30);
    if (iVar11 == 0) {
      *param_2 = 0xced;
      uVar9 = 0;
      goto LAB_01b5f2b0;
    }
    sVar12 = sVar12 + 5;
    if (sVar12 == -2) {
      uVar9 = 0xffffffff;
      *param_2 = 0;
      FUN_01b25814(param_1,0xced);
LAB_01b5f2b0:
      FUN_01b6b174(auStack_55c0,0x1800);
      FUN_01b6b174(auStack_3dc0,0x1800);
      FUN_01b6b174(auStack_25c0,0x1400);
      FUN_01b6b174(auStack_13dc0,0x7800);
      FUN_01b6b174(auStack_300,0x100);
      if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return uVar9;
    }
  } while( true );
}

