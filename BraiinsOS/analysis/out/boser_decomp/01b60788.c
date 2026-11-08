// FUN_01b60788 @ 01b60788 size=1924 calls_out=28 calls_in=2
// strings: 

undefined4
FUN_01b60788(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined1 auStack_1e180 [348];
  int aiStack_1e024 [14249];
  undefined1 auStack_10180 [8192];
  undefined1 auStack_e180 [7168];
  undefined1 auStack_c580 [1024];
  undefined1 auStack_c180 [1024];
  undefined1 auStack_bd80 [1024];
  undefined1 auStack_b980 [1024];
  undefined1 auStack_b580 [1024];
  undefined1 auStack_b180 [1024];
  undefined1 auStack_ad80 [1020];
  int iStack_a984;
  undefined1 local_a980 [8192];
  undefined4 local_8980 [2048];
  undefined1 auStack_6980 [8192];
  undefined1 auStack_4980 [8192];
  undefined1 auStack_2980 [7168];
  undefined1 auStack_d80 [1024];
  undefined1 auStack_980 [1024];
  undefined1 auStack_580 [1024];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [92];
  
  piVar5 = (int *)(auStack_80 + 0x5c);
  do {
    piVar5 = piVar5 + -0x400;
    *piVar5 = param_1;
    iVar1 = DAT_01d53560;
  } while (piVar5 != aiStack_1e024);
  FUN_01b269ec(auStack_180,auStack_160,auStack_120,auStack_4980,auStack_2980,auStack_6980,param_8);
  if (param_9 == 0) {
    FUN_01b5bbb8(auStack_100,0x40,auStack_160,0x40,param_5,param_6,param_3,param_4);
  }
  else {
    FUN_01b269d8(auStack_100,param_3,0x40);
  }
  sVar6 = 0;
  FUN_01b5bbb8(auStack_c0,0x40,auStack_120,0x20,param_7,0x20,auStack_100,0x40);
  FUN_01b60654(auStack_1e180,auStack_180);
  FUN_01b2562c(auStack_2980);
  FUN_01b2566c(auStack_6980);
  FUN_01b2566c(auStack_4980);
  do {
    puVar13 = auStack_10180;
    iVar12 = 0;
    FUN_01b5c708(auStack_c580,auStack_c180,auStack_bd80,auStack_b980,auStack_c0,sVar6,sVar6 + 1,
                 sVar6 + 2,0xff);
    puVar11 = local_8980;
    FUN_01b5c708(auStack_b980,auStack_b580,auStack_b180,auStack_ad80,auStack_c0,sVar6 + 3,sVar6 + 4,
                 sVar6 + 5,sVar6 + 6);
    FUN_01bed4e2(auStack_e180,auStack_c580,0x1c00);
    FUN_01b2562c(auStack_e180);
    FUN_01b1d9b4(local_8980,auStack_1e180,auStack_e180);
    FUN_01b28f1c(local_8980);
    FUN_01b1daa0(local_8980);
    do {
      iVar7 = 0;
      puVar10 = puVar11;
      do {
        puVar3 = puVar13 + iVar7;
        iVar7 = iVar7 + 4;
        FUN_01b1d47c(puVar10,puVar3,*puVar10);
        puVar10 = puVar10 + 1;
      } while (iVar7 != 0x400);
      iVar12 = iVar12 + 0x100;
      puVar11 = puVar11 + 0x100;
      puVar13 = puVar13 + 0x400;
    } while (iVar12 != 0x800);
    iVar12 = param_1;
    puVar13 = auStack_10180;
    do {
      iVar7 = iVar12 + 0x80;
      FUN_01b1d7f0(iVar12,puVar13);
      puVar13 = puVar13 + 0x400;
      iVar12 = iVar7;
    } while (iVar7 != param_1 + 0x400);
    iVar7 = 0;
    FUN_01b5bbb8(auStack_80,0x40,auStack_100,0x40,param_1,0x400,0,0);
    FUN_01b5c004(auStack_980,auStack_80);
    FUN_01b25490(auStack_980);
    iVar12 = param_1 + 0x40;
    do {
      FUN_01b1cb40(auStack_d80,auStack_980,auStack_2980 + iVar7);
      FUN_01b28d84(auStack_d80);
      FUN_01b1ca84(auStack_d80,auStack_c580 + iVar7);
      FUN_01b1c9d0(auStack_d80);
      iVar2 = FUN_01b1cf6c(auStack_d80,0x7ff88);
      if (iVar2 != 0) goto LAB_01b60e04;
      iVar7 = iVar7 + 0x400;
      FUN_01b1d6f8(iVar12,auStack_d80);
      iVar12 = iVar12 + 0x280;
    } while (iVar7 != 0x1c00);
    iVar12 = 0;
    do {
      puVar3 = auStack_6980 + iVar12;
      puVar13 = local_a980 + iVar12;
      iVar12 = iVar12 + 0x400;
      FUN_01b1cb40(puVar13,auStack_980,puVar3);
    } while (iVar12 != 0x2000);
    FUN_01b28f1c(local_a980);
    iVar12 = 0;
    do {
      puVar13 = local_a980 + iVar12;
      iVar7 = (int)local_8980 + iVar12;
      iVar12 = iVar12 + 0x400;
      FUN_01b1cac8(iVar7,puVar13);
    } while (iVar12 != 0x2000);
    FUN_01b1da60(local_8980);
    iVar12 = FUN_01b1dae0(local_8980,0x3fe88);
    if (iVar12 == 0) {
      iVar12 = 0;
      do {
        puVar3 = auStack_4980 + iVar12;
        puVar13 = local_a980 + iVar12;
        iVar12 = iVar12 + 0x400;
        FUN_01b1cb40(puVar13,auStack_980,puVar3);
      } while (iVar12 != 0x2000);
      FUN_01b28f1c(local_a980);
      FUN_01b1da60(local_a980);
      iVar7 = FUN_01b1dae0(local_a980,0x3ff00);
      iVar12 = 0;
      if (iVar7 != 0) goto LAB_01b60e04;
      do {
        puVar13 = local_a980 + iVar12;
        iVar7 = (int)local_8980 + iVar12;
        iVar12 = iVar12 + 0x400;
        FUN_01b1ca84(iVar7,puVar13);
      } while (iVar12 != 0x2000);
      iVar12 = 0;
      uVar8 = 0;
      do {
        puVar13 = local_a980 + iVar12;
        puVar3 = auStack_10180 + iVar12;
        iVar7 = (int)local_8980 + iVar12;
        iVar12 = iVar12 + 0x400;
        iVar7 = FUN_01b1d4ec(puVar13,iVar7,puVar3);
        uVar8 = uVar8 + iVar7;
      } while (iVar12 != 0x2000);
      if (0x4b < uVar8) goto LAB_01b60e04;
      FUN_01b269d8(param_1,auStack_80,0x40);
      FUN_01b25814(param_1 + 0x11c0,0x53);
      puVar13 = (undefined1 *)(param_1 + 0x120a);
      uVar4 = 0;
      piVar5 = &iStack_a984;
      do {
        iVar12 = 0;
        piVar14 = piVar5;
        do {
          piVar14 = piVar14 + 1;
          if (*piVar14 != 0 && uVar4 < uVar8) {
            *(char *)(param_1 + 0x11c0 + uVar4) = (char)iVar12;
            uVar4 = uVar4 + 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 0x100);
        puVar13 = puVar13 + 1;
        *puVar13 = (char)uVar4;
        piVar5 = piVar5 + 0x100;
      } while (puVar13 != (undefined1 *)(param_1 + 0x1212));
      iVar12 = 0;
    }
    else {
LAB_01b60e04:
      iVar12 = -1;
    }
    FUN_01b6b174(auStack_d80,0x400);
    FUN_01b6b174(auStack_980,0x400);
    FUN_01b6b174(local_8980,0x2000);
    FUN_01b6b174(auStack_10180,0x3c00);
    FUN_01b6b174(auStack_580,0x400);
    FUN_01b6b174(auStack_c580,0x3c00);
    FUN_01b6b174(auStack_80,0x40);
    if (iVar12 == 0) {
      *param_2 = 0x1213;
      uVar9 = 0;
      goto LAB_01b60e80;
    }
    sVar6 = sVar6 + 7;
    if (sVar6 == -9) {
      uVar9 = 0xffffffff;
      *param_2 = 0;
      FUN_01b25814(param_1,0x1213);
LAB_01b60e80:
      FUN_01b6b174(auStack_6980,0x2000);
      FUN_01b6b174(auStack_4980,0x2000);
      FUN_01b6b174(auStack_2980,0x1c00);
      FUN_01b6b174(auStack_1e180,0xe000);
      FUN_01b6b174(auStack_180,0x100);
      if (iVar1 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return uVar9;
    }
  } while( true );
}

