// FUN_01b5cdb8 @ 01b5cdb8 size=2196 calls_out=28 calls_in=2
// strings: 

undefined4
FUN_01b5cdb8(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStack_d360 [828];
  int aiStack_d024 [3889];
  int local_9360 [176];
  undefined1 auStack_90a0 [704];
  undefined1 auStack_8de0 [704];
  undefined1 auStack_8b20 [1984];
  undefined1 auStack_8360 [4096];
  undefined1 auStack_7360 [1024];
  undefined1 auStack_6f60 [1024];
  undefined1 auStack_6b60 [1024];
  undefined1 auStack_6760 [1020];
  uint uStack_6364;
  undefined1 local_6360 [4096];
  int local_5360 [16];
  undefined2 local_5320;
  undefined1 auStack_5300 [64];
  char local_52c0;
  undefined1 local_52bf;
  undefined1 auStack_52a0 [64];
  char local_5260;
  undefined1 local_525f;
  undefined1 auStack_5240 [64];
  char local_5200;
  undefined1 local_51ff;
  undefined1 auStack_4360 [4096];
  undefined1 auStack_3360 [4096];
  undefined1 auStack_2360 [4096];
  int local_1360 [256];
  undefined1 auStack_f60 [1024];
  undefined1 auStack_b60 [1024];
  undefined1 auStack_760 [32];
  undefined1 auStack_740 [64];
  undefined1 auStack_700 [32];
  undefined1 auStack_6e0 [64];
  undefined1 auStack_6a0 [64];
  undefined1 auStack_660 [48];
  undefined1 auStack_630 [1540];
  int local_2c;
  int iStack_28;
  
  piVar12 = (int *)(auStack_630 + 0x60c);
  do {
    piVar12 = piVar12 + -0x400;
    *piVar12 = param_1;
  } while (piVar12 != aiStack_d024);
  local_2c = DAT_01d53560;
  FUN_01b29678(auStack_760,auStack_740,auStack_700,auStack_3360,auStack_2360,auStack_4360,param_8);
  if (param_9 == 0) {
    FUN_01b5bbb8(auStack_6e0,0x40,auStack_740,0x40,param_5,param_6,param_3,param_4);
  }
  else {
    FUN_01b269d8(auStack_6e0,param_3,0x40);
  }
  uVar8 = 0;
  FUN_01b5bbb8(auStack_6a0,0x40,auStack_700,0x20,param_7,0x20,auStack_6e0,0x40);
  FUN_01b5cc70(auStack_d360,auStack_760);
  FUN_01b2556c(auStack_2360);
  FUN_01b2556c(auStack_4360);
  FUN_01b2556c(auStack_3360);
  do {
    FUN_01b269d8(local_5360,auStack_6a0,0x40);
    FUN_01b269d8(auStack_5300,auStack_6a0,0x40);
    FUN_01b269d8(auStack_52a0,auStack_6a0,0x40);
    FUN_01b269d8(auStack_5240,auStack_6a0,0x40);
    local_5200 = (char)uVar8;
    local_52c0 = local_5200 + '\x01';
    local_5260 = local_5200 + '\x02';
    local_5200 = local_5200 + '\x03';
    local_5320 = (undefined2)uVar8;
    local_52bf = (undefined1)(uVar8 + 1 >> 8);
    local_525f = (undefined1)(uVar8 + 2 >> 8);
    local_51ff = (undefined1)(uVar8 + 3 >> 8);
    FUN_01b5b5fc(auStack_630);
    FUN_01b5b678(auStack_630,local_5360,auStack_5300,auStack_52a0,auStack_5240);
    FUN_01b5c1a4(local_9360,auStack_90a0,auStack_8de0,auStack_8b20,5,auStack_630);
    FUN_01b1d18c(auStack_7360,local_9360);
    FUN_01b1d18c(auStack_6f60,auStack_90a0);
    iVar13 = 0;
    FUN_01b1d18c(auStack_6b60,auStack_8de0);
    FUN_01b1d18c(auStack_6760,auStack_8b20);
    FUN_01b6b174(local_9360,0xb00);
    FUN_01b6b174(local_5360,0x180);
    FUN_01bed4e2(auStack_8360,auStack_7360,0x1000);
    FUN_01b2556c(auStack_8360);
    FUN_01b1d274(local_5360,auStack_d360,auStack_8360);
    FUN_01b28e9c(local_5360);
    FUN_01b1d3b0(local_5360);
    piVar5 = local_9360;
    piVar12 = local_5360;
    do {
      iVar9 = 0;
      piVar11 = piVar12;
      do {
        iVar2 = (int)piVar5 + iVar9;
        iVar9 = iVar9 + 4;
        FUN_01b1c93c(piVar11,iVar2,*piVar11);
        piVar11 = piVar11 + 1;
      } while (iVar9 != 0x400);
      iVar13 = iVar13 + 0x100;
      piVar12 = piVar12 + 0x100;
      piVar5 = piVar5 + 0x100;
    } while (iVar13 != 0x400);
    iVar13 = 0;
    FUN_01b1d3f0(param_1,local_9360);
    FUN_01b5bbb8(auStack_660,0x20,auStack_6e0,0x40,param_1,0x300,0,0);
    FUN_01b5bcc4(auStack_f60,auStack_660);
    FUN_01b25490(auStack_f60);
    puVar14 = (undefined1 *)(param_1 + 0x20);
    do {
      FUN_01b1cb40(local_1360,auStack_f60,auStack_2360 + iVar13);
      FUN_01b28d84(local_1360);
      FUN_01b1ca84(local_1360,auStack_7360 + iVar13);
      FUN_01b1c9d0(local_1360);
      iVar9 = FUN_01b1cf6c(local_1360,0x1ffb2);
      if (iVar9 != 0) goto LAB_01b5d554;
      puVar15 = puVar14 + 0x240;
      puVar6 = puVar14;
      piVar12 = local_1360;
      do {
        puVar14 = puVar6 + 9;
        iVar9 = 0x20000 - *piVar12;
        uVar1 = 0x20000 - piVar12[1];
        uVar3 = 0x20000 - piVar12[2];
        uVar4 = 0x20000 - piVar12[3];
        puVar6[1] = (char)((uint)iVar9 >> 8);
        *puVar6 = (char)iVar9;
        puVar6[3] = (char)(uVar1 >> 6);
        puVar6[5] = (char)(uVar3 >> 4);
        puVar6[2] = (char)uVar1 * '\x04' | (byte)((uint)iVar9 >> 0x10);
        puVar6[4] = (char)uVar3 * '\x10' | (byte)(uVar1 >> 0xe);
        puVar6[6] = (char)uVar4 * '@' | (byte)(uVar3 >> 0xc);
        puVar6[7] = (char)(uVar4 >> 2);
        puVar6[8] = (char)(uVar4 >> 10);
        puVar6 = puVar14;
        piVar12 = piVar12 + 4;
      } while (puVar14 != puVar15);
      iVar13 = iVar13 + 0x400;
    } while (iVar13 != 0x1000);
    iVar13 = 0;
    do {
      puVar6 = auStack_4360 + iVar13;
      puVar14 = local_6360 + iVar13;
      iVar13 = iVar13 + 0x400;
      FUN_01b1cb40(puVar14,auStack_f60,puVar6);
    } while (iVar13 != 0x1000);
    FUN_01b28e9c(local_6360);
    iVar13 = 0;
    do {
      puVar14 = local_6360 + iVar13;
      iVar9 = (int)local_5360 + iVar13;
      iVar13 = iVar13 + 0x400;
      FUN_01b1cac8(iVar9,puVar14);
    } while (iVar13 != 0x1000);
    FUN_01b1d370(local_5360);
    iVar13 = FUN_01b1d31c(local_5360,0x173b2);
    if (iVar13 == 0) {
      iVar13 = 0;
      do {
        puVar6 = auStack_3360 + iVar13;
        puVar14 = local_6360 + iVar13;
        iVar13 = iVar13 + 0x400;
        FUN_01b1cb40(puVar14,auStack_f60,puVar6);
      } while (iVar13 != 0x1000);
      FUN_01b28e9c(local_6360);
      FUN_01b1d370(local_6360);
      iVar9 = FUN_01b1d31c(local_6360,0x17400);
      iVar13 = 0;
      if (iVar9 != 0) goto LAB_01b5d554;
      do {
        puVar14 = local_6360 + iVar13;
        iVar9 = (int)local_5360 + iVar13;
        iVar13 = iVar13 + 0x400;
        FUN_01b1ca84(iVar9,puVar14);
      } while (iVar13 != 0x1000);
      iVar13 = 0;
      uVar1 = 0;
      do {
        iVar9 = 0;
        iVar2 = 0;
        puVar10 = &uStack_6364;
        puVar16 = (uint *)(iVar13 + (int)puVar10);
        piVar12 = (int *)((int)local_5360 + iVar13);
        do {
          if (*piVar12 + 0x17400U < 0x2e801) {
            uVar3 = (uint)(*(int *)((int)local_9360 + iVar2 * 4 + iVar13) != 0);
            if (*piVar12 != -0x17400) {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 1;
          }
          iVar2 = iVar2 + 1;
          iVar9 = iVar9 + uVar3;
          puVar16 = puVar16 + 1;
          *puVar16 = uVar3;
          piVar12 = piVar12 + 1;
        } while (iVar2 != 0x100);
        iVar13 = iVar13 + 0x400;
        uVar1 = uVar1 + iVar9;
      } while (iVar13 != 0x1000);
      if (0x50 < uVar1) goto LAB_01b5d554;
      FUN_01b269d8(param_1,auStack_660,0x20);
      FUN_01b25814(param_1 + 0x920,0x54);
      puVar14 = (undefined1 *)(param_1 + 0x96f);
      uVar3 = 0;
      do {
        iVar13 = 0;
        puVar16 = puVar10;
        do {
          puVar16 = puVar16 + 1;
          if (*puVar16 != 0 && uVar3 < uVar1) {
            *(char *)(param_1 + 0x920 + uVar3) = (char)iVar13;
            uVar3 = uVar3 + 1;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 != 0x100);
        puVar14 = puVar14 + 1;
        *puVar14 = (char)uVar3;
        puVar10 = puVar10 + 0x100;
      } while ((undefined1 *)(param_1 + 0x973) != puVar14);
      iVar13 = 0;
    }
    else {
LAB_01b5d554:
      iVar13 = -1;
    }
    FUN_01b6b174(local_1360,0x400);
    FUN_01b6b174(auStack_f60,0x400);
    FUN_01b6b174(local_5360,0x1000);
    FUN_01b6b174(local_9360,0x2000);
    FUN_01b6b174(auStack_b60,0x400);
    FUN_01b6b174(auStack_7360,0x2000);
    FUN_01b6b174(auStack_660,0x20);
    if (iVar13 == 0) {
      *param_2 = 0x974;
      uVar7 = 0;
      goto LAB_01b5d5c8;
    }
    uVar8 = uVar8 + 4 & 0xffff;
    if (uVar8 == 0xfff8) {
      uVar7 = 0xffffffff;
      *param_2 = 0;
      FUN_01b25814(param_1,0x974);
LAB_01b5d5c8:
      FUN_01b6b174(auStack_4360,0x1000);
      FUN_01b6b174(auStack_3360,0x1000);
      FUN_01b6b174(auStack_2360,0x1000);
      FUN_01b6b174(auStack_d360,0x4000);
      FUN_01b6b174(auStack_760,0x100);
      if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return uVar7;
    }
  } while( true );
}

