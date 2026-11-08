// FUN_0096c918 @ 0096c918 size=1884 calls_out=16 calls_in=9
// strings: 

void FUN_0096c918(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  bool bVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  ushort *puVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined4 local_36c;
  undefined2 *local_368;
  undefined4 local_364;
  int *local_360;
  int local_35c [2];
  undefined2 *local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined1 auStack_344 [124];
  int local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  int local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined1 auStack_238 [120];
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined1 auStack_1b4 [92];
  int local_158;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 auStack_118 [120];
  int local_a0 [2];
  undefined2 *local_98;
  
  puVar4 = (undefined2 *)thunk_FUN_01be5118(3);
  if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,3);
  }
  uVar1 = *param_3;
  piVar8 = param_2 + 8;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(param_3 + 1);
  *puVar4 = uVar1;
  iVar17 = *piVar8;
  if (iVar17 == 0) {
    iVar17 = 0;
LAB_0096c9b8:
    local_35c[1] = 0;
    local_364 = 3;
    local_36c = 3;
    local_368 = puVar4;
    local_360 = piVar8;
    local_35c[0] = iVar17;
    local_354 = param_3;
    if (iVar17 == 0) {
      iVar17 = FUN_01adb66c();
      *(undefined4 *)(iVar17 + 0x528) = 0;
      *(undefined2 *)(iVar17 + 0x5b2) = 0;
      param_2[8] = iVar17;
      param_2[9] = 0;
      FUN_01ad2728(&local_128,iVar17,&local_36c,param_4);
    }
    else {
      puVar22 = (ushort *)(iVar17 + 0x5b2);
      if (*puVar22 < 0xb) {
        FUN_00976574(&local_1c0,local_35c,&local_36c,param_4);
      }
      else {
        uVar14 = 4;
        bVar3 = false;
        if (&SUB_00000004 < param_3) {
          if (param_3 == (undefined2 *)&DAT_00000005) {
            uVar14 = 5;
          }
          else {
            if (param_3 == (undefined2 *)&DAT_00000006) {
              uVar14 = 5;
              param_3 = (undefined2 *)0x0;
            }
            else {
              param_3 = (undefined2 *)((int)param_3 + -7);
              uVar14 = 6;
            }
            bVar3 = true;
          }
        }
        iVar5 = FUN_01adb66c();
        *(undefined2 *)(iVar5 + 0x5b2) = 0;
        *(undefined4 *)(iVar5 + 0x528) = 0;
        piVar8 = (int *)(iVar17 + 0x52c + uVar14 * 0xc);
        iVar13 = *piVar8;
        uVar20 = ~uVar14 + (uint)*puVar22;
        iVar6 = piVar8[1];
        iVar9 = piVar8[2];
        *(undefined2 *)(iVar5 + 0x5b2) = (short)uVar20;
        FUN_01bed4e2(&local_350,iVar17 + uVar14 * 0x78,0x78);
        if (0xb < uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar20,0xb,&DAT_01d2ff10);
        }
        FUN_01bed4e2(iVar5 + 0x52c,iVar17 + 0x52c + (uVar14 + 1) * 0xc,uVar20 * 0xc);
        FUN_01bed4e2(iVar5,iVar17 + (uVar14 + 1) * 0x78,uVar20 * 0x78);
        *puVar22 = (ushort)uVar14;
        FUN_01bed4e2((uint)&local_2c8 | 4,&local_350,0x78);
        local_1c0 = iVar13;
        local_1bc = iVar6;
        local_1b8 = iVar9;
        FUN_01bed4e2(auStack_1b4,&local_2c8,0x7c);
        local_12c = 0;
        local_134 = 0;
        local_a0[1] = 0;
        local_a0[0] = iVar5;
        if (!bVar3) {
          local_a0[0] = iVar17;
        }
        local_138 = iVar17;
        local_130 = iVar5;
        local_98 = param_3;
        FUN_00976574(&local_2c8,local_a0,&local_36c,param_4);
        uVar14 = (uint)&local_1c0 | 4;
        FUN_01bed4e2(&local_128,uVar14,0x84);
        if (iVar13 != -0x80000000) {
          FUN_01bed4e2(&local_350,&local_128,0x84);
          iVar6 = *(int *)(iVar17 + 0x528);
          if (iVar6 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = 0;
            do {
              uVar20 = (uint)*(ushort *)(iVar17 + 0x5b0);
              local_240 = local_350;
              uStack_23c = local_34c;
              local_244 = iVar13;
              FUN_01bed4e2(auStack_238,auStack_344,0x78);
              puVar22 = (ushort *)(iVar6 + 0x5b2);
              uVar2 = *puVar22;
              if (uVar2 < 0xb) {
                FUN_00976b98(iVar6,uVar20,&local_244,auStack_238,iVar5);
                goto LAB_0096cc28;
              }
              uVar15 = 4;
              piVar8 = &local_138;
              if (4 < uVar20) {
                if (uVar20 == 5) {
                  uVar15 = 5;
                }
                else {
                  if (uVar20 == 6) {
                    uVar20 = 0;
                    uVar15 = 5;
                  }
                  else {
                    uVar20 = uVar20 - 7;
                    uVar15 = 6;
                  }
                  piVar8 = &local_130;
                }
              }
              iVar17 = FUN_01adb6ac();
              puVar19 = (ushort *)(iVar17 + 0x5b2);
              *puVar19 = 0;
              *(undefined4 *)(iVar17 + 0x528) = 0;
              puVar11 = (undefined4 *)(iVar6 + 0x52c + uVar15 * 0xc);
              uVar7 = *puVar11;
              uVar21 = ~uVar15 + (uint)*puVar22;
              uVar10 = puVar11[1];
              uVar12 = puVar11[2];
              *puVar19 = (ushort)uVar21;
              FUN_01bed4e2(local_a0,iVar6 + uVar15 * 0x78,0x78);
              if (0xb < uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,uVar21,0xb,&DAT_01d2ff10);
              }
              FUN_01bed4e2(iVar17 + 0x52c,iVar6 + 0x52c + (uVar15 + 1) * 0xc,uVar21 * 0xc);
              FUN_01bed4e2(iVar17,iVar6 + (uVar15 + 1) * 0x78,uVar21 * 0x78);
              *puVar22 = (ushort)uVar15;
              local_128 = uVar7;
              local_124 = uVar10;
              local_120 = uVar12;
              FUN_01bed4e2(auStack_118,local_a0,0x78);
              uVar21 = (uint)*puVar19;
              iVar13 = uVar21 + 1;
              if (0xb < uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,iVar13,0xc,&DAT_01d2ff20);
              }
              if (uVar2 - uVar15 != iVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
              }
              iVar9 = iVar9 + 1;
              FUN_01bed4e2(iVar17 + 0x5b8,iVar6 + uVar15 * 4 + 0x5bc,iVar13 * 4);
              uVar15 = 0;
              do {
                iVar13 = *(int *)(iVar17 + 0x5b8 + uVar15 * 4);
                *(short *)(iVar13 + 0x5b0) = (short)uVar15;
                *(int *)(iVar13 + 0x528) = iVar17;
                if (uVar21 <= uVar15) break;
                uVar15 = uVar15 + 1;
              } while (uVar15 <= uVar21);
              FUN_01bed4e2(&local_1c0,&local_128,0x88);
              local_138 = iVar6;
              local_134 = iVar9;
              local_130 = iVar17;
              local_12c = iVar9;
              FUN_00976b98(*piVar8,uVar20,&local_244,auStack_238,iVar5);
              iVar13 = local_1c0;
              FUN_01bed4e2(&local_2c8,uVar14,0x84);
              iVar5 = local_130;
              iVar17 = local_138;
              if (iVar13 == -0x80000000) goto LAB_0096cc28;
              FUN_01bed4e2(&local_350,&local_2c8,0x84);
              iVar6 = *(int *)(iVar17 + 0x528);
            } while (iVar6 != 0);
          }
          local_1c0 = iVar13;
          FUN_01bed4e2(uVar14,&local_350,0x84);
          local_138 = iVar17;
          local_134 = iVar9;
          local_130 = iVar5;
          local_12c = iVar9;
          if (param_2[8] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fee0);
          }
          uVar24 = FUN_01ad3890(param_2[8],param_2[9]);
          local_2c0 = local_34c;
          local_2c4 = local_350;
          *(undefined8 *)(param_2 + 8) = uVar24;
          local_2c8 = iVar13;
          FUN_01bed4e2(&local_128,auStack_344,0x78);
          FUN_01ad35cc((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),&local_2c8,&local_128,iVar5,
                       iVar9);
        }
      }
LAB_0096cc28:
      piVar8 = local_360;
    }
    piVar8[2] = piVar8[2] + 1;
  }
  else {
    iVar13 = param_2[9];
    while( true ) {
      uVar23 = FUN_01ad4df8(iVar17,puVar4,3);
      param_3 = (undefined2 *)(uVar23 >> 0x20);
      if ((uVar23 & 1) == 0) break;
      if (iVar13 == 0) goto LAB_0096c9b8;
      iVar13 = iVar13 + -1;
      iVar17 = *(int *)(iVar17 + (int)param_3 * 4 + 0x5b8);
    }
    FUN_019bb7e0(3,puVar4);
    iVar17 = iVar17 + (int)param_3 * 0x78;
    FUN_01bed4e2(&local_1c0,iVar17,0x78);
    FUN_01bed4e2(iVar17,param_4,0x78);
    if (local_158 != -0x7fffffff) {
      FUN_0096d248(&local_1c0);
    }
  }
  uVar7 = param_2[1];
  uVar10 = param_2[2];
  uVar12 = param_2[3];
  uVar16 = param_2[4];
  uVar18 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  param_1[2] = uVar10;
  param_1[3] = uVar12;
  param_1[4] = uVar16;
  param_1[5] = uVar18;
  uVar7 = param_2[7];
  uVar10 = param_2[8];
  uVar12 = param_2[9];
  uVar16 = param_2[10];
  uVar18 = param_2[0xb];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  param_1[8] = uVar10;
  param_1[9] = uVar12;
  param_1[10] = uVar16;
  param_1[0xb] = uVar18;
  return;
}

