// FUN_019e8fd8 @ 019e8fd8 size=2660 calls_out=23 calls_in=1
// strings: 

void FUN_019e8fd8(undefined4 *param_1,uint *******param_2,int param_3,int param_4)

{
  char *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint *******pppppppuVar4;
  uint *******pppppppuVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 extraout_r1;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *******pppppppuVar25;
  int iVar26;
  uint *puVar27;
  uint *******pppppppuVar28;
  int local_260;
  uint *******local_224;
  uint *******local_220;
  uint *******local_21c;
  uint local_218;
  int local_214;
  uint local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  uint *******local_1f0 [2];
  uint local_1e8;
  int local_1e4;
  undefined4 local_160 [2];
  undefined4 local_158;
  uint *******local_150 [2];
  uint local_148;
  int local_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  undefined4 local_bc [2];
  undefined4 local_b4;
  code *local_b0;
  undefined1 auStack_ac [128];
  undefined4 local_2c;
  
  iVar6 = 0;
  while (local_224 = param_2, iVar6 != 0x14) {
    puVar10 = (undefined4 *)((int)&DAT_00528bb8 + iVar6);
    iVar6 = iVar6 + 4;
    if ((uint *******)*puVar10 == param_2) {
      local_150[0] = (uint *******)&local_224;
      local_150[1] = (uint *******)FUN_012fce60;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005a1600,local_150,&DAT_01d29394);
    }
  }
  DataMemoryBarrier(0xb);
  if (DAT_01d4fd8c != 0) {
    local_1f0[0] = (uint *******)CONCAT31(local_1f0[0]._1_3_,1);
    local_150[0] = (uint *******)local_1f0;
    FUN_019a768c(&DAT_01d4fd8c,0,local_150,&DAT_01d2747c,&DAT_01d2746c);
  }
  if (DAT_01d51a30 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2745c);
  }
  piVar7 = (int *)thunk_FUN_01be5118(0x10);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  piVar7[3] = param_4;
  *piVar7 = 1;
  piVar7[1] = 1;
  piVar7[2] = param_3;
  FUN_01656cb0(local_150,&DAT_01d51a3c);
  pppppppuVar5 = local_150[1];
  puVar10 = DAT_01d51a44;
  uVar8 = local_148 & 0xff;
  DataMemoryBarrier(0xb);
  uVar9 = DAT_01d51a44[4];
  uVar11 = DAT_01d51a44[5];
  uVar13 = DAT_01d51a44[6];
  uVar14 = DAT_01d51a44[7];
  if (DAT_01d51a44[1] == 0) {
    local_220 = (uint *******)&DAT_0056d238;
    local_21c = (uint *******)0x0;
    local_218 = 0;
    local_214 = 0;
  }
  else {
    FUN_019790d4(local_150,0xa0,4,DAT_01d51a44[1] + 1);
    pppppppuVar4 = local_150[0];
    puVar12 = (uint *)*puVar10;
    local_1e4 = local_144;
    local_1f0[1] = local_150[1];
    local_1e8 = local_148;
    local_1f0[0] = local_150[0];
    FUN_01bed4e2(local_150[0],puVar12,(int)local_150[1] + 5);
    iVar6 = puVar10[3];
    if (iVar6 != 0) {
      puVar19 = puVar12 + 1;
      uVar23 = ~*puVar12 & 0x80808080;
      iVar26 = iVar6;
      puVar27 = puVar12;
      do {
        puVar18 = puVar19;
        if (uVar23 == 0) {
          do {
            puVar19 = puVar18 + 1;
            uVar23 = *puVar18;
            puVar27 = puVar27 + -0xa0;
            puVar18 = puVar19;
          } while ((uVar23 & 0x80808080) == 0x80808080);
          uVar23 = uVar23 & 0x80808080 ^ 0x80808080;
        }
        puVar18 = puVar27 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                           (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3) *
                            -0x28;
        local_150[0] = (uint *******)puVar18[-0x28];
        pppppppuVar25 = (uint *******)puVar18[-0x27];
        FUN_01bed4e2(&local_148,puVar18 + -0x26,0x8c);
        if (puVar18[-1] == 0) {
          local_b4 = 0;
          local_bc[0] = 0;
        }
        else {
          if (puVar18[-3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d274a0);
          }
          FUN_019794bc(local_bc,puVar18[-3],puVar18[-2]);
        }
        local_150[1] = pppppppuVar25;
        FUN_01bed4e2(pppppppuVar4 + ((int)puVar12 - (int)puVar18 >> 5) * -8 + -0x28,local_150,0xa0);
        uVar23 = uVar23 - 1 & uVar23;
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
    }
    local_218 = puVar10[2];
    local_220 = local_1f0[0];
    local_21c = local_1f0[1];
    local_214 = iVar6;
    local_1e8 = local_218;
    local_1e4 = iVar6;
  }
  pppppppuVar25 = local_21c;
  pppppppuVar4 = local_220;
  uVar22 = puVar10[9];
  iVar6 = puVar10[0xb];
  uVar20 = puVar10[8];
  uVar16 = puVar10[10];
  local_200 = uVar20 + 1;
  bVar2 = CARRY4(uVar22,(uint)(0xfffffffe < uVar20));
  local_1fc = uVar22 + (0xfffffffe < uVar20);
  local_1f8 = uVar16 + bVar2;
  local_1f4 = iVar6 + (uint)CARRY4(uVar16,(uint)bVar2);
  pppppppuVar28 = param_2;
  local_210 = uVar9;
  local_20c = uVar11;
  local_208 = uVar13;
  local_204 = uVar14;
  uVar23 = FUN_01656218();
  local_260 = 0;
  uVar9 = uVar23;
  while( true ) {
    uVar9 = (uint)pppppppuVar25 & uVar9;
    uVar15 = *(uint *)((int)pppppppuVar4 + uVar9);
    uVar21 = uVar15 ^ (uVar23 >> 0x19) * 0x1010101;
    uVar21 = ~uVar21 & 0x80808080 & uVar21 + 0xfefefeff;
    while (uVar21 != 0) {
      uVar24 = uVar9 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                      (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
               (uint)pppppppuVar25;
      uVar21 = uVar21 - 1 & uVar21;
      if ((uint *******)(pppppppuVar4 + -0x28)[uVar24 * -0x28] == param_2) {
        piVar7 = (int *)FUN_019f70a4(pppppppuVar4 + uVar24 * -0x28 + -3,pppppppuVar4 + -0x28,uVar20,
                                     uVar22,uVar16,iVar6,piVar7);
        if (piVar7 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar7;
            bVar2 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar2);
          *piVar7 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00528bcc,0x49,&DAT_01d293bc);
        }
        goto LAB_019e9468;
      }
    }
    if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
    local_260 = local_260 + 4;
    uVar9 = uVar9 + local_260;
  }
  if (local_218 == 0) {
    FUN_019d8f8c(&local_220,&local_210,uVar9,uVar15,pppppppuVar28);
  }
  FUN_01656cb0(local_150,&DAT_01d51a54);
  pppppppuVar25 = local_150[1];
  DataMemoryBarrier(0xb);
  FUN_01bed93e(local_150,0,0x8c);
  iVar26 = FUN_01bea86c(param_2,0,local_150);
  pppppppuVar4 = local_150[0];
  if (iVar26 != 0) {
    puVar10 = (undefined4 *)FUN_01be3244();
    uVar11 = *puVar10;
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = uVar11;
    FUN_00a97e8c(pppppppuVar25,local_148 & 0xff);
LAB_019e97b0:
    FUN_01978fc4(&local_220);
    FUN_00a97e8c(pppppppuVar5,uVar8);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(piVar7);
    }
    return;
  }
  FUN_01bed4e2(local_1f0,(uint)local_150 | 4,0x88);
  puVar10 = (undefined4 *)thunk_FUN_01be5118(0x94);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x94);
  }
  *puVar10 = 1;
  puVar10[1] = param_2;
  puVar10[2] = pppppppuVar4;
  FUN_01bed4e2(puVar10 + 3,local_1f0,0x88);
  puVar3 = DAT_01d51a5c;
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(0x1d51a5c);
  } while (!bVar2);
  DataMemoryBarrier(0xb);
  local_150[0] = (uint *******)((uint)local_150[0] & 0xffff0000);
  DAT_01d51a5c = puVar10;
  FUN_01978f88(&DAT_01d51a4c,local_150);
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(0x1d51a60);
  } while (!bVar2);
  uVar9 = 0;
  DataMemoryBarrier(0xb);
  DAT_01d51a60 = DAT_01d51a60 + 1;
  do {
    iVar26 = 0;
    do {
      if (iVar26 == 2) {
        thunk_FUN_01be4678(puVar3);
        FUN_00a97e8c(pppppppuVar25,local_148 & 0xff);
        FUN_01bed93e(auStack_ac,0,0x88);
        local_2c = 0x10000004;
        local_b0 = FUN_01978b84;
        FUN_01bed93e(local_150,0,0x8c);
        iVar26 = FUN_01bea86c(param_2,&local_b0,local_150);
        pppppppuVar4 = local_150[0];
        if (iVar26 == 0) {
          FUN_01bed4e2(&local_1e8,(uint)local_150 | 4,0x88);
          local_1f0[1] = pppppppuVar4;
          local_158 = 0;
          local_160[0] = 0;
          local_1f0[0] = param_2;
          piVar7 = (int *)FUN_019f70a4(local_160,extraout_r1,uVar20,uVar22,uVar16,iVar6,piVar7);
          if (piVar7 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar26 = *piVar7;
              bVar2 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar2);
            *piVar7 = iVar26 + -1;
            if (iVar26 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0();
            }
          }
          FUN_01bed4e2(local_150,local_1f0,0x9c);
          uVar9 = (uint)local_21c & uVar23;
          uVar15 = *(uint *)((int)local_220 + uVar9) & 0x80808080;
          bVar17 = (byte)(uVar23 >> 0x19);
          if (uVar15 == 0) {
            iVar26 = 4;
            do {
              uVar9 = uVar9 + iVar26;
              iVar26 = iVar26 + 4;
              uVar9 = uVar9 & (uint)local_21c;
              uVar15 = *(uint *)((int)local_220 + uVar9) & 0x80808080;
            } while (uVar15 == 0);
          }
          uVar9 = uVar9 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                  (uint)local_21c;
          uVar23 = (uint)*(char *)((int)local_220 + uVar9);
          if (-1 < (int)uVar23) {
            uVar9 = (uint)*local_220 & 0x80808080;
            uVar9 = LZCOUNT(((uint)*local_220 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                            (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
            uVar23 = (uint)*(byte *)((int)local_220 + (uVar9 >> 3));
            uVar9 = uVar9 >> 3;
          }
          *(byte *)((int)local_220 + uVar9) = bVar17;
          *(byte *)((int)local_220 + (uVar9 - 4 & (uint)local_21c) + 4) = bVar17;
          local_220[uVar9 * -0x28 + -0x28] = (uint ******)param_2;
          local_218 = local_218 - (uVar23 & 1);
          FUN_01bed4e2(local_220 + uVar9 * -0x28 + -0x27,local_150,0x9c);
          local_214 = local_214 + 1;
LAB_019e9468:
          local_150[0] = local_220;
          local_150[1] = local_21c;
          local_148 = local_218;
          local_144 = local_214;
          uStack_140 = local_210;
          uStack_13c = local_20c;
          local_138 = local_208;
          uStack_134 = local_204;
          iStack_130 = local_200;
          iStack_12c = local_1fc;
          iStack_128 = local_1f8;
          iStack_124 = local_1f4;
          puVar10 = (undefined4 *)thunk_FUN_01be5118(0x30);
          if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x30);
          }
          *puVar10 = local_220;
          puVar10[1] = local_21c;
          puVar10[2] = local_218;
          puVar10[3] = local_214;
          puVar10[4] = local_210;
          puVar10[5] = local_20c;
          puVar10[6] = local_208;
          puVar10[7] = local_204;
          puVar10[8] = local_200;
          puVar10[9] = local_1fc;
          puVar10[10] = local_1f8;
          puVar10[0xb] = local_1f4;
          puVar3 = DAT_01d51a44;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(0x1d51a44);
          } while (!bVar2);
          DataMemoryBarrier(0xb);
          local_1f0[0] = (uint *******)((uint)local_1f0[0] & 0xffff0000);
          DAT_01d51a44 = puVar10;
          FUN_01978f88(&DAT_01d51a34,local_1f0);
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(0x1d51a48);
          } while (!bVar2);
          uVar9 = 0;
          DataMemoryBarrier(0xb);
          DAT_01d51a48 = DAT_01d51a48 + 1;
          do {
            iVar26 = 0;
            do {
              if (iVar26 == 2) {
                FUN_01978fc4(puVar3);
                thunk_FUN_01be4678(puVar3);
                param_1[6] = param_2;
                *param_1 = 0;
                param_1[2] = uVar20;
                param_1[3] = uVar22;
                param_1[4] = uVar16;
                param_1[5] = iVar6;
                FUN_00a97e8c(pppppppuVar5,uVar8);
                return;
              }
              pcVar1 = (char *)((int)local_1f0 + iVar26);
              iVar26 = iVar26 + 1;
            } while (*pcVar1 != '\0');
            uVar9 = uVar9 + 1;
            if ((uVar9 & 0xf) == 0) {
              FUN_01bea67c();
            }
            else {
              HintYield();
            }
            FUN_01978f88(&DAT_01d51a34,local_1f0);
          } while( true );
        }
        puVar10 = (undefined4 *)FUN_01be3244();
        uVar11 = *puVar10;
        param_1[1] = 0;
        param_1[2] = uVar11;
        *param_1 = 1;
        goto LAB_019e97b0;
      }
      pcVar1 = (char *)((int)local_150 + iVar26);
      iVar26 = iVar26 + 1;
    } while (*pcVar1 != '\0');
    uVar9 = uVar9 + 1;
    if ((uVar9 & 0xf) == 0) {
      FUN_01bea67c();
    }
    else {
      HintYield();
    }
    FUN_01978f88(&DAT_01d51a4c,local_150);
  } while( true );
}

