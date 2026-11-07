// FUN_016470f4 @ 016470f4 size=6780 calls_out=29 calls_in=2
// strings: carry overflow during multiplication!

void FUN_016470f4(uint *param_1,uint param_2,uint *param_3,uint param_4,uint *param_5,uint param_6)

{
  longlong lVar1;
  int iVar2;
  undefined4 *******pppppppuVar3;
  int iVar4;
  int iVar5;
  undefined4 *******pppppppuVar6;
  undefined4 *******pppppppuVar7;
  undefined4 *******pppppppuVar8;
  undefined4 *******pppppppuVar9;
  int iVar10;
  uint uVar11;
  undefined4 *******extraout_r2;
  undefined4 *******extraout_r2_00;
  undefined4 *******extraout_r2_01;
  undefined4 *******extraout_r2_02;
  undefined4 *******extraout_r2_03;
  undefined4 *******extraout_r2_04;
  undefined4 *******extraout_r2_05;
  undefined4 *******extraout_r2_06;
  undefined4 *******extraout_r2_07;
  undefined4 ******ppppppuVar12;
  undefined *puVar13;
  undefined1 uVar14;
  char cVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined4 ******ppppppuVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *******pppppppuVar24;
  undefined4 *******pppppppuVar25;
  undefined4 uVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  undefined4 uVar30;
  undefined4 ******ppppppuVar31;
  int iVar32;
  uint uVar33;
  undefined4 *******pppppppuVar34;
  uint *puVar35;
  bool bVar36;
  bool bVar37;
  uint local_184;
  undefined1 auStack_180 [12];
  char local_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [12];
  char local_154;
  undefined1 auStack_150 [12];
  char local_144;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [12];
  char local_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [12];
  char local_f4;
  undefined1 auStack_f0 [12];
  char local_e4;
  undefined4 *******local_e0;
  undefined4 *******local_dc;
  undefined4 *******pppppppuStack_d8;
  undefined1 local_d4;
  undefined4 *******local_d0;
  undefined4 *******local_cc;
  undefined4 *******local_c8;
  char local_c4;
  undefined4 *******local_c0;
  undefined4 *******pppppppuStack_bc;
  undefined4 *******pppppppuStack_b8;
  undefined1 local_b4;
  undefined4 *******local_b0;
  undefined4 *******pppppppuStack_ac;
  undefined4 *******pppppppuStack_a8;
  undefined1 local_a4;
  undefined4 *******local_a0;
  undefined4 *******pppppppuStack_9c;
  undefined4 *******pppppppuStack_98;
  undefined1 local_94;
  undefined4 *******local_90;
  undefined4 *******local_8c;
  undefined4 *******local_88;
  undefined4 local_84;
  undefined4 *******local_80;
  undefined4 *******local_7c;
  undefined4 *******pppppppuStack_78;
  uint uStack_74;
  undefined4 *******local_70;
  undefined4 *******local_6c;
  undefined4 *******local_68;
  undefined4 local_64;
  undefined4 *******local_60;
  undefined4 *******local_5c;
  undefined4 *******local_58;
  uint local_54;
  undefined4 *******local_50 [3];
  undefined4 local_44;
  undefined4 *******local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 *******local_38;
  undefined4 *******local_34;
  undefined4 *******local_30;
  uint local_2c;
  
  local_184 = param_4;
  while( true ) {
    if (local_184 == 0) {
      local_184 = 0;
    }
    else if (*param_3 == 0) {
      iVar10 = local_184 * 4;
      uVar23 = 0;
      uVar11 = 0;
      while (iVar10 = iVar10 + -4, uVar11 == 0) {
        if (iVar10 == 0) {
          return;
        }
        iVar29 = uVar23 + 1;
        uVar23 = uVar23 + 1;
        uVar11 = param_3[iVar29];
      }
      if (param_2 < uVar23) {
        puVar13 = &DAT_01d065cc;
        goto LAB_01648ac4;
      }
      param_1 = param_1 + uVar23;
      param_2 = param_2 - uVar23;
      local_184 = local_184 - uVar23;
      param_3 = param_3 + uVar23;
    }
    if (param_6 == 0) {
      param_6 = 0;
    }
    else if (*param_5 == 0) {
      iVar10 = param_6 * 4;
      uVar23 = 0;
      uVar11 = 0;
      while (iVar10 = iVar10 + -4, uVar11 == 0) {
        if (iVar10 == 0) {
          return;
        }
        iVar29 = uVar23 + 1;
        uVar23 = uVar23 + 1;
        uVar11 = param_5[iVar29];
      }
      if (param_2 < uVar23) {
        puVar13 = &DAT_01d065dc;
        goto LAB_01648ac4;
      }
      param_1 = param_1 + uVar23;
      param_2 = param_2 - uVar23;
      param_6 = param_6 - uVar23;
      param_5 = param_5 + uVar23;
    }
    if (local_184 < param_6) {
      puVar27 = param_3;
      param_3 = param_5;
      uVar11 = local_184;
      local_184 = param_6;
    }
    else {
      puVar27 = param_5;
      uVar11 = param_6;
    }
    if (uVar11 < 0x21) {
      if (uVar11 == 0) {
        return;
      }
      uVar23 = 0;
      puVar21 = puVar27 + uVar11;
      iVar10 = param_2 * -4;
      puVar19 = param_1;
      while (uVar23 <= param_2) {
        uVar11 = *puVar27;
        if (uVar11 != 0) {
          if (param_2 - uVar23 < local_184) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d066ac);
          }
          if (local_184 == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = 0;
            puVar28 = puVar19;
            uVar22 = local_184;
            puVar35 = param_3;
            do {
              uVar22 = uVar22 - 1;
              lVar1 = (ulonglong)uVar11 * (ulonglong)*puVar35 +
                      (ulonglong)CONCAT14(CARRY4(uVar20,*puVar28),uVar20 + *puVar28);
              uVar20 = (uint)((ulonglong)lVar1 >> 0x20);
              *puVar28 = (uint)lVar1;
              puVar28 = puVar28 + 1;
              puVar35 = puVar35 + 1;
            } while (uVar22 != 0);
          }
          if (param_2 - uVar23 == local_184) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d066fc);
          }
          uVar11 = param_1[uVar23 + local_184];
          param_1[uVar23 + local_184] = uVar20 + uVar11;
          if (CARRY4(uVar20,uVar11)) {
            iVar29 = ~local_184 << 2;
            do {
              if (iVar10 == iVar29) {
                local_50[0] = (undefined4 *******)&DAT_00000001;
                FUN_019b6878(0,local_50,&DAT_00533278,"carry overflow during multiplication!",0x4b,
                             &DAT_01d066bc);
                goto LAB_01648ba4;
              }
              uVar11 = *(uint *)((int)puVar19 - iVar29);
              *(uint *)((int)puVar19 - iVar29) = uVar11 + 1;
              iVar29 = iVar29 + -4;
            } while (0xfffffffe < uVar11);
          }
        }
        puVar27 = puVar27 + 1;
        uVar23 = uVar23 + 1;
        iVar10 = iVar10 + 4;
        puVar19 = puVar19 + 1;
        if (puVar27 == puVar21) {
          return;
        }
      }
      puVar13 = &DAT_01d0667c;
      goto LAB_01648ac4;
    }
    if (local_184 < uVar11 << 1) break;
    uVar23 = local_184 >> 1;
    FUN_016470f4(param_1,param_2,puVar27,uVar11,param_3,uVar23);
    if (param_2 < local_184 >> 1) {
      puVar13 = &DAT_01d0666c;
LAB_01648ac4:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar23,param_2,param_2,puVar13);
    }
    param_1 = param_1 + uVar23;
    param_2 = param_2 - uVar23;
    param_5 = param_3 + uVar23;
    param_6 = local_184 - uVar23;
    param_3 = puVar27;
    local_184 = uVar11;
  }
  if (uVar11 < 0x101) {
    if (local_184 < uVar11 >> 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d0663c);
    }
    uVar23 = uVar11 >> 1;
    iVar32 = uVar11 - (uVar11 >> 1);
    iVar29 = local_184 - uVar23;
    iVar10 = iVar29 + iVar32 + 1;
    FUN_0164a964(&local_38);
    pppppppuVar25 = local_30;
    pppppppuVar7 = local_34;
    pppppppuVar3 = (undefined4 *******)
                   FUN_016470f4(local_34,local_30,puVar27 + uVar23,iVar32,param_3 + uVar23,iVar29);
    bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
    if (!bVar36) {
      pppppppuVar3 = pppppppuVar7 + (int)pppppppuVar25 + -1;
      bVar36 = pppppppuVar3 == (undefined4 *******)0x0;
    }
    if (!bVar36) {
      if (*pppppppuVar3 == (undefined4 ******)0x0) {
        iVar4 = (int)pppppppuVar25 << 2;
        pppppppuVar3 = (undefined4 *******)((uint)pppppppuVar25 & 0x3fffffff);
        do {
          pppppppuVar8 = pppppppuVar3;
          if (iVar4 == 0) {
            pppppppuVar8 = (undefined4 *******)0x0;
            goto LAB_01648388;
          }
          iVar5 = iVar4 + -4;
          iVar4 = iVar4 + -4;
          pppppppuVar3 = (undefined4 *******)((int)pppppppuVar8 - 1);
        } while (*(int *)((int)pppppppuVar7 + iVar5) == 0);
        if (pppppppuVar8 <= pppppppuVar25) {
LAB_01648388:
          pppppppuVar25 = pppppppuVar8;
          local_30 = pppppppuVar8;
        }
      }
    }
    if ((pppppppuVar25 < (undefined4 *******)((uint)local_38 >> 2)) &&
       (iVar4 = FUN_0164bb38(&local_38,pppppppuVar25), iVar4 != -0x7fffffff)) {
LAB_01648b48:
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    if (param_2 < uVar23) {
      puVar13 = &DAT_01d0664c;
LAB_01648b5c:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar23,param_2,param_2,puVar13);
    }
    puVar19 = param_1 + uVar23;
    iVar4 = param_2 - uVar23;
    FUN_0164a7b0(puVar19,iVar4,local_34,local_30);
    uVar11 = uVar11 & 0x1fe;
    if (param_2 < uVar11) {
      puVar13 = &DAT_01d0665c;
      uVar23 = uVar11;
      goto LAB_01648b5c;
    }
    FUN_0164a7b0(param_1 + uVar11,param_2 - uVar11,local_34,local_30);
    local_30 = (undefined4 *******)0x0;
    FUN_0164a8c4(&local_38,iVar10);
    pppppppuVar25 = local_30;
    pppppppuVar7 = local_34;
    pppppppuVar3 = (undefined4 *******)FUN_016470f4(local_34,local_30,puVar27,uVar23,param_3,uVar23)
    ;
    bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
    if (!bVar36) {
      pppppppuVar3 = pppppppuVar7 + (int)pppppppuVar25 + -1;
      bVar36 = pppppppuVar3 == (undefined4 *******)0x0;
    }
    if (!bVar36) {
      if (*pppppppuVar3 == (undefined4 ******)0x0) {
        iVar5 = (int)pppppppuVar25 << 2;
        pppppppuVar3 = (undefined4 *******)((uint)pppppppuVar25 & 0x3fffffff);
        do {
          pppppppuVar8 = pppppppuVar3;
          if (iVar5 == 0) {
            pppppppuVar8 = (undefined4 *******)0x0;
            goto LAB_01648398;
          }
          iVar2 = iVar5 + -4;
          iVar5 = iVar5 + -4;
          pppppppuVar3 = (undefined4 *******)((int)pppppppuVar8 - 1);
        } while (*(int *)((int)pppppppuVar7 + iVar2) == 0);
        if (pppppppuVar8 <= pppppppuVar25) {
LAB_01648398:
          pppppppuVar25 = pppppppuVar8;
          local_30 = pppppppuVar8;
        }
      }
    }
    if (pppppppuVar25 < (undefined4 *******)((uint)local_38 >> 2)) {
      iVar5 = FUN_0164bb38(&local_38,pppppppuVar25);
      if (iVar5 != -0x7fffffff) goto LAB_01648b48;
      pppppppuVar25 = local_30;
      pppppppuVar7 = local_34;
    }
    FUN_0164a7b0(param_1,param_2,pppppppuVar7,pppppppuVar25);
    FUN_0164a7b0(puVar19,iVar4,local_34,local_30);
    FUN_0164a2a0(local_50,puVar27 + uVar23,iVar32,puVar27,uVar23);
    pppppppuVar6 = local_44;
    pppppppuVar3 = local_50[2];
    pppppppuVar7 = local_50[1];
    uVar11 = (uint)local_50[0] & 0xff;
    FUN_0164a2a0(local_50,param_3 + uVar23,iVar29,param_3,uVar23);
    pppppppuVar9 = local_44;
    pppppppuVar8 = local_50[2];
    pppppppuVar25 = local_50[1];
    if (uVar11 != 1) {
      if (((uint)local_50[0] & 0xff) == 2) {
        if (uVar11 == 0) goto LAB_01647578;
LAB_01647770:
        local_30 = (undefined4 *******)0x0;
        FUN_0164a8c4(&local_38,iVar10);
        pppppppuVar24 = local_30;
        pppppppuVar34 = local_34;
        pppppppuVar6 = (undefined4 *******)
                       FUN_016470f4(local_34,local_30,pppppppuVar3,pppppppuVar6,pppppppuVar8,
                                    pppppppuVar9);
        bVar36 = pppppppuVar24 == (undefined4 *******)0x0;
        if (!bVar36) {
          pppppppuVar6 = pppppppuVar34 + (int)pppppppuVar24 + -1;
          bVar36 = pppppppuVar6 == (undefined4 *******)0x0;
        }
        if (!bVar36) {
          if (*pppppppuVar6 == (undefined4 ******)0x0) {
            iVar10 = (int)pppppppuVar24 << 2;
            pppppppuVar6 = (undefined4 *******)((uint)pppppppuVar24 & 0x3fffffff);
            do {
              pppppppuVar9 = pppppppuVar6;
              if (iVar10 == 0) {
                pppppppuVar9 = (undefined4 *******)0x0;
                goto LAB_01648a8c;
              }
              iVar29 = iVar10 + -4;
              iVar10 = iVar10 + -4;
              pppppppuVar6 = (undefined4 *******)((int)pppppppuVar9 - 1);
            } while (*(int *)((int)pppppppuVar34 + iVar29) == 0);
            if (pppppppuVar9 <= pppppppuVar24) {
LAB_01648a8c:
              pppppppuVar24 = pppppppuVar9;
              local_30 = pppppppuVar9;
            }
          }
        }
        if (pppppppuVar24 < (undefined4 *******)((uint)local_38 >> 2)) {
          iVar10 = FUN_0164bb38(&local_38,pppppppuVar24);
          if (iVar10 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620();
          }
          pppppppuVar24 = local_30;
          pppppppuVar34 = local_34;
        }
        FUN_0164a6d4(puVar19,iVar4,pppppppuVar34,pppppppuVar24);
      }
      else if (((uint)local_50[0] & 0xff) != 1) {
        if (uVar11 == 0) goto LAB_01647770;
LAB_01647578:
        FUN_016470f4(puVar19,iVar4,pppppppuVar3,pppppppuVar6,local_50[2],local_44);
      }
    }
    FUN_0134aee0(pppppppuVar25,pppppppuVar8,4,4);
    FUN_0134aee0(pppppppuVar7,pppppppuVar3,4,4);
    pppppppuVar7 = local_38;
    pppppppuVar25 = local_34;
    goto LAB_01648960;
  }
  uVar20 = local_184 / 3 + 1;
  uVar23 = uVar11;
  if (uVar20 < uVar11) {
    uVar23 = uVar20;
  }
  FUN_01649264(auStack_180,puVar27,uVar23);
  uVar22 = uVar11 - uVar23;
  if (uVar20 < uVar11 - uVar23) {
    uVar22 = uVar20;
  }
  uVar22 = uVar22 + uVar23;
  uVar33 = local_184 - uVar20;
  if (uVar20 < local_184 - uVar20) {
    uVar33 = uVar20;
  }
  if (uVar11 < uVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar23,uVar22,uVar11,&DAT_01d065ec);
  }
  FUN_01649264(auStack_170,puVar27 + uVar23);
  FUN_01649264(auStack_160,puVar27 + uVar22,uVar11 - uVar22);
  if (local_184 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,1,0,&DAT_01d065fc);
  }
  FUN_01649264(auStack_150,param_3,uVar20);
  uVar23 = uVar33 + uVar20;
  if (local_184 < uVar23) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar20,uVar23,local_184,&DAT_01d0660c);
  }
  FUN_01649264(auStack_140,param_3 + uVar20,uVar33);
  FUN_01649264(auStack_130,param_3 + uVar23,local_184 - uVar23);
  FUN_016493d8(auStack_120,auStack_180,auStack_160);
  FUN_016493d8(auStack_110,auStack_150,auStack_130);
  FUN_016495e8(auStack_100,auStack_120,auStack_170);
  FUN_016495e8(auStack_f0,auStack_110,auStack_140);
  bVar36 = true;
  uVar14 = 1;
  if (local_174 != '\x01') {
    if (local_144 == '\0') {
      if (local_174 == '\0') goto LAB_016476d4;
LAB_0164782c:
      bVar36 = false;
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
      if (local_144 != '\x01') {
        if (local_174 == '\0') goto LAB_0164782c;
LAB_016476d4:
        uVar14 = 2;
        bVar36 = false;
      }
    }
  }
  FUN_01649808(local_50,auStack_180,auStack_150);
  if (!bVar36) {
    if (local_50[2] == (undefined4 *******)0x0) {
      uVar14 = 1;
    }
  }
  else {
    local_50[2] = (undefined4 *******)0x0;
    pppppppuVar7 = (undefined4 *******)FUN_0164a850(local_50,4,4);
    bVar36 = local_50[2] == (undefined4 *******)0x0;
    pppppppuVar25 = extraout_r2;
    if (!bVar36) {
      pppppppuVar25 = local_50[1] + (int)local_50[2] + -1;
      bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
      pppppppuVar7 = local_50[1];
    }
    if ((!bVar36) && (*pppppppuVar25 == (undefined4 ******)0x0)) {
      iVar10 = (int)local_50[2] << 2;
      pppppppuVar25 = (undefined4 *******)((uint)local_50[2] & 0x3fffffff);
      do {
        pppppppuVar3 = pppppppuVar25;
        if (iVar10 == 0) {
          pppppppuVar3 = (undefined4 *******)0x0;
          goto LAB_016489b0;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar25 = (undefined4 *******)((int)pppppppuVar3 - 1);
      } while (*(int *)((int)pppppppuVar7 + iVar29) == 0);
      if (pppppppuVar3 <= local_50[2]) {
LAB_016489b0:
        local_50[2] = pppppppuVar3;
      }
    }
    uVar14 = 1;
    if ((local_50[2] < (undefined4 *******)((uint)local_50[0] >> 2)) &&
       (iVar10 = FUN_0164bb38(local_50), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  bVar36 = true;
  local_e0 = local_50[0];
  local_dc = local_50[1];
  pppppppuStack_d8 = local_50[2];
  cVar15 = '\x01';
  if (local_154 != '\x01') {
    if (local_124 == '\x02') {
      if (local_154 == '\0') goto LAB_016478f4;
LAB_0164794c:
      cVar15 = '\x02';
      bVar36 = false;
    }
    else {
      cVar15 = '\x01';
      if (local_124 != '\x01') {
        if (local_154 == '\0') goto LAB_0164794c;
LAB_016478f4:
        bVar36 = false;
        cVar15 = '\0';
      }
    }
  }
  local_d4 = uVar14;
  FUN_01649808(local_50,auStack_160,auStack_130);
  if (bVar36) {
    local_50[2] = (undefined4 *******)0x0;
    pppppppuVar7 = (undefined4 *******)FUN_0164a850(local_50,4,4);
    bVar36 = local_50[2] == (undefined4 *******)0x0;
    pppppppuVar25 = extraout_r2_00;
    if (!bVar36) {
      pppppppuVar25 = local_50[1] + (int)local_50[2] + -1;
      bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
      pppppppuVar7 = local_50[1];
    }
    if ((!bVar36) && (*pppppppuVar25 == (undefined4 ******)0x0)) {
      iVar10 = (int)local_50[2] << 2;
      pppppppuVar25 = (undefined4 *******)((uint)local_50[2] & 0x3fffffff);
      do {
        pppppppuVar3 = pppppppuVar25;
        if (iVar10 == 0) {
          pppppppuVar3 = (undefined4 *******)0x0;
          goto LAB_016489c0;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar25 = (undefined4 *******)((int)pppppppuVar3 - 1);
      } while (*(int *)((int)pppppppuVar7 + iVar29) == 0);
      if (pppppppuVar3 <= local_50[2]) {
LAB_016489c0:
        local_50[2] = pppppppuVar3;
      }
    }
    cVar15 = '\x01';
    if ((local_50[2] < (undefined4 *******)((uint)local_50[0] >> 2)) &&
       (iVar10 = FUN_0164bb38(local_50), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  else if (local_50[2] == (undefined4 *******)0x0) {
    cVar15 = '\x01';
  }
  local_d0 = local_50[0];
  local_cc = local_50[1];
  local_c8 = local_50[2];
  local_c4 = cVar15;
  FUN_016499e4(&local_38,auStack_120,auStack_170);
  FUN_016499e4(local_50,auStack_110,auStack_140);
  uVar23 = local_2c & 0xff;
  bVar36 = true;
  uVar14 = 1;
  if (uVar23 != 1) {
    if (((uint)local_44 & 0xff) == 2) {
      if (uVar23 == 0) goto LAB_01647a34;
LAB_01647a8c:
      uVar14 = 2;
      bVar36 = false;
    }
    else {
      uVar14 = (char)local_44;
      if (((uint)local_44 & 0xff) != 1) {
        if (uVar23 == 0) goto LAB_01647a8c;
LAB_01647a34:
        bVar36 = false;
        uVar14 = 0;
      }
    }
  }
  FUN_01582374(&local_60,&local_38,local_50);
  if (bVar36) {
    local_58 = (undefined4 *******)0x0;
    pppppppuVar7 = (undefined4 *******)FUN_0164a850(&local_60,4,4);
    bVar36 = local_58 == (undefined4 *******)0x0;
    pppppppuVar25 = extraout_r2_01;
    if (!bVar36) {
      pppppppuVar25 = local_5c + (int)local_58 + -1;
      bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
      pppppppuVar7 = local_5c;
    }
    if ((!bVar36) && (*pppppppuVar25 == (undefined4 ******)0x0)) {
      iVar10 = (int)local_58 << 2;
      pppppppuVar25 = (undefined4 *******)((uint)local_58 & 0x3fffffff);
      do {
        pppppppuVar3 = pppppppuVar25;
        if (iVar10 == 0) {
          pppppppuVar3 = (undefined4 *******)0x0;
          goto LAB_016489d0;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar25 = (undefined4 *******)((int)pppppppuVar3 - 1);
      } while (*(int *)((int)pppppppuVar7 + iVar29) == 0);
      if (pppppppuVar3 <= local_58) {
LAB_016489d0:
        local_58 = pppppppuVar3;
      }
    }
    uVar14 = 1;
    if ((local_58 < (undefined4 *******)((uint)local_60 >> 2)) &&
       (iVar10 = FUN_0164bb38(&local_60), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  else if (local_58 == (undefined4 *******)0x0) {
    uVar14 = 1;
  }
  bVar36 = true;
  local_c0 = local_60;
  pppppppuStack_bc = local_5c;
  pppppppuStack_b8 = local_58;
  uVar16 = 1;
  if (local_f4 != '\x01') {
    if (local_e4 == '\x02') {
      if (local_f4 == '\0') goto LAB_01647b5c;
LAB_01647bb4:
      uVar16 = 2;
      bVar36 = false;
    }
    else {
      uVar16 = 1;
      if (local_e4 != '\x01') {
        if (local_f4 == '\0') goto LAB_01647bb4;
LAB_01647b5c:
        bVar36 = false;
        uVar16 = 0;
      }
    }
  }
  local_b4 = uVar14;
  FUN_01649808(local_50,auStack_100,auStack_f0);
  if (bVar36) {
    local_50[2] = (undefined4 *******)0x0;
    pppppppuVar7 = (undefined4 *******)FUN_0164a850(local_50,4,4);
    bVar36 = local_50[2] == (undefined4 *******)0x0;
    pppppppuVar25 = extraout_r2_02;
    if (!bVar36) {
      pppppppuVar25 = local_50[1] + (int)local_50[2] + -1;
      bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
      pppppppuVar7 = local_50[1];
    }
    if ((!bVar36) && (*pppppppuVar25 == (undefined4 ******)0x0)) {
      iVar10 = (int)local_50[2] << 2;
      pppppppuVar25 = (undefined4 *******)((uint)local_50[2] & 0x3fffffff);
      do {
        pppppppuVar3 = pppppppuVar25;
        if (iVar10 == 0) {
          pppppppuVar3 = (undefined4 *******)0x0;
          goto LAB_016489e0;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar25 = (undefined4 *******)((int)pppppppuVar3 - 1);
      } while (*(int *)((int)pppppppuVar7 + iVar29) == 0);
      if (pppppppuVar3 <= local_50[2]) {
LAB_016489e0:
        local_50[2] = pppppppuVar3;
      }
    }
    uVar16 = 1;
    if ((local_50[2] < (undefined4 *******)((uint)local_50[0] >> 2)) &&
       (iVar10 = FUN_0164bb38(local_50), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  else if (local_50[2] == (undefined4 *******)0x0) {
    uVar16 = 1;
  }
  local_b0 = local_50[0];
  pppppppuStack_ac = local_50[1];
  pppppppuStack_a8 = local_50[2];
  local_a4 = uVar16;
  FUN_016499e4(local_50,auStack_100,auStack_160);
  local_38 = local_50[0];
  local_34 = local_50[1];
  local_30 = local_50[2];
  cVar15 = (char)local_44;
  FUN_01646e78(&local_38,2);
  local_60 = local_38;
  local_5c = local_34;
  local_58 = local_30;
  if (cVar15 == '\x01') {
    local_58 = (undefined4 *******)0x0;
    pppppppuVar7 = (undefined4 *******)FUN_0164a850(&local_60,4,4);
    bVar36 = local_58 == (undefined4 *******)0x0;
    pppppppuVar25 = extraout_r2_03;
    if (!bVar36) {
      pppppppuVar25 = local_5c + (int)local_58 + -1;
      bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
      pppppppuVar7 = local_5c;
    }
    if ((!bVar36) && (*pppppppuVar25 == (undefined4 ******)0x0)) {
      iVar10 = (int)local_58 << 2;
      pppppppuVar25 = (undefined4 *******)((uint)local_58 & 0x3fffffff);
      do {
        pppppppuVar3 = pppppppuVar25;
        if (iVar10 == 0) {
          pppppppuVar3 = (undefined4 *******)0x0;
          goto LAB_016489f0;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar25 = (undefined4 *******)((int)pppppppuVar3 - 1);
      } while (*(int *)((int)pppppppuVar7 + iVar29) == 0);
      if (pppppppuVar3 <= local_58) {
LAB_016489f0:
        local_58 = pppppppuVar3;
      }
    }
    cVar15 = '\x01';
    if ((local_58 < (undefined4 *******)((uint)local_60 >> 2)) &&
       (iVar10 = FUN_0164bb38(&local_60), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  else if (local_30 == (undefined4 *******)0x0) {
    cVar15 = '\x01';
  }
  local_38 = local_60;
  local_34 = local_5c;
  local_30 = local_58;
  local_2c = CONCAT31(local_2c._1_3_,cVar15);
  FUN_01649c54(&local_60,&local_38,auStack_180);
  FUN_016499e4(local_50,auStack_f0,auStack_130);
  local_38 = local_50[0];
  local_34 = local_50[1];
  local_30 = local_50[2];
  cVar15 = (char)local_44;
  FUN_01646e78(&local_38,2);
  local_70 = local_38;
  local_6c = local_34;
  local_68 = local_30;
  if (cVar15 == '\x01') {
    local_68 = (undefined4 *******)0x0;
    pppppppuVar7 = (undefined4 *******)FUN_0164a850(&local_70,4,4);
    bVar36 = local_68 == (undefined4 *******)0x0;
    pppppppuVar25 = extraout_r2_04;
    if (!bVar36) {
      pppppppuVar25 = local_6c + (int)local_68 + -1;
      bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
      pppppppuVar7 = local_6c;
    }
    if ((!bVar36) && (*pppppppuVar25 == (undefined4 ******)0x0)) {
      iVar10 = (int)local_68 << 2;
      pppppppuVar25 = (undefined4 *******)((uint)local_68 & 0x3fffffff);
      do {
        pppppppuVar3 = pppppppuVar25;
        if (iVar10 == 0) {
          pppppppuVar3 = (undefined4 *******)0x0;
          goto LAB_01648a00;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar25 = (undefined4 *******)((int)pppppppuVar3 - 1);
      } while (*(int *)((int)pppppppuVar7 + iVar29) == 0);
      if (pppppppuVar3 <= local_68) {
LAB_01648a00:
        local_68 = pppppppuVar3;
      }
    }
    cVar15 = '\x01';
    if ((local_68 < (undefined4 *******)((uint)local_70 >> 2)) &&
       (iVar10 = FUN_0164bb38(&local_70), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  else if (local_30 == (undefined4 *******)0x0) {
    cVar15 = '\x01';
  }
  local_38 = local_70;
  local_34 = local_6c;
  local_30 = local_68;
  local_2c = CONCAT31(local_2c._1_3_,cVar15);
  FUN_01649c54(local_50,&local_38,auStack_150);
  uVar23 = local_54 & 0xff;
  bVar36 = true;
  uVar14 = 1;
  if (uVar23 != 1) {
    if (((uint)local_44 & 0xff) == 2) {
      if (uVar23 == 0) goto LAB_01647e30;
LAB_01647f10:
      uVar14 = 2;
      bVar36 = false;
    }
    else {
      uVar14 = (char)local_44;
      if (((uint)local_44 & 0xff) != 1) {
        if (uVar23 == 0) goto LAB_01647f10;
LAB_01647e30:
        bVar36 = false;
        uVar14 = 0;
      }
    }
  }
  FUN_01582374(&local_38,&local_60,local_50);
  if (bVar36) {
    local_30 = (undefined4 *******)0x0;
    pppppppuVar7 = (undefined4 *******)FUN_0164a850(&local_38,4,4);
    bVar36 = local_30 == (undefined4 *******)0x0;
    pppppppuVar25 = extraout_r2_05;
    if (!bVar36) {
      pppppppuVar25 = local_34 + (int)local_30 + -1;
      bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
      pppppppuVar7 = local_34;
    }
    if ((!bVar36) && (*pppppppuVar25 == (undefined4 ******)0x0)) {
      iVar10 = (int)local_30 << 2;
      pppppppuVar25 = (undefined4 *******)((uint)local_30 & 0x3fffffff);
      do {
        pppppppuVar3 = pppppppuVar25;
        if (iVar10 == 0) {
          pppppppuVar3 = (undefined4 *******)0x0;
          goto LAB_01648a10;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar25 = (undefined4 *******)((int)pppppppuVar3 - 1);
      } while (*(int *)((int)pppppppuVar7 + iVar29) == 0);
      if (pppppppuVar3 <= local_30) {
LAB_01648a10:
        local_30 = pppppppuVar3;
      }
    }
    uVar14 = 1;
    if ((local_30 < (undefined4 *******)((uint)local_38 >> 2)) &&
       (iVar10 = FUN_0164bb38(&local_38), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  else if (local_30 == (undefined4 *******)0x0) {
    uVar14 = 1;
  }
  local_a0 = local_38;
  pppppppuStack_9c = local_34;
  pppppppuStack_98 = local_30;
  local_94 = uVar14;
  FUN_01649edc(local_50,&local_a0,&local_c0);
  cVar15 = (char)local_44;
  if (local_50[2] == (undefined4 *******)0x0) {
    local_30 = (undefined4 *******)0x0;
  }
  else {
    iVar32 = (int)local_50[2] * -4 + 4;
    iVar10 = (int)local_50[2] << 2;
    iVar29 = 0;
    do {
      uVar11 = *(uint *)((int)local_50[1] - iVar32);
      uVar23 = (iVar29 << 0x10 | uVar11 >> 0x10) / 3;
      uVar11 = (uVar11 & 0xffff) + ((uVar11 >> 0x10) + uVar23 * -3) * 0x10000;
      uVar22 = (uint)((ulonglong)uVar11 * 0x55555556 >> 0x20);
      *(uint *)((int)local_50[1] - iVar32) = uVar22 | uVar23 << 0x10;
      iVar32 = iVar32 + 4;
      iVar29 = uVar11 + uVar22 * -3;
    } while (iVar32 != 4);
    local_30 = local_50[2];
    if ((local_50[1] + (int)local_50[2] + -1 != (undefined4 *******)0x0) &&
       (local_50[1][(int)local_50[2] + -1] == (undefined4 ******)0x0)) {
      pppppppuVar7 = (undefined4 *******)((uint)local_50[2] & 0x3fffffff);
      do {
        pppppppuVar25 = pppppppuVar7;
        if (iVar10 == 0) {
          pppppppuVar25 = (undefined4 *******)0x0;
          goto LAB_016480f4;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar7 = (undefined4 *******)((int)pppppppuVar25 - 1);
      } while (*(int *)((int)local_50[1] + iVar29) == 0);
      if (pppppppuVar25 <= local_50[2]) {
LAB_016480f4:
        local_30 = pppppppuVar25;
      }
    }
  }
  local_34 = local_50[1];
  local_38 = local_50[0];
  if ((local_30 < (undefined4 *******)((uint)local_50[0] >> 2)) &&
     (iVar10 = FUN_0164bb38(&local_38), iVar10 != -0x7fffffff)) {
LAB_01648ba4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  local_60 = local_38;
  local_5c = local_34;
  local_58 = local_30;
  if (cVar15 == '\x01') {
    local_58 = (undefined4 *******)0x0;
    pppppppuVar7 = (undefined4 *******)FUN_0164a850(&local_60,4,4);
    bVar36 = local_58 == (undefined4 *******)0x0;
    pppppppuVar25 = extraout_r2_06;
    if (!bVar36) {
      pppppppuVar25 = local_5c + (int)local_58 + -1;
      bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
      pppppppuVar7 = local_5c;
    }
    if ((!bVar36) && (*pppppppuVar25 == (undefined4 ******)0x0)) {
      iVar10 = (int)local_58 << 2;
      pppppppuVar25 = (undefined4 *******)((uint)local_58 & 0x3fffffff);
      do {
        pppppppuVar3 = pppppppuVar25;
        if (iVar10 == 0) {
          pppppppuVar3 = (undefined4 *******)0x0;
          goto LAB_01648a20;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar25 = (undefined4 *******)((int)pppppppuVar3 - 1);
      } while (*(int *)((int)pppppppuVar7 + iVar29) == 0);
      if (pppppppuVar3 <= local_58) {
LAB_01648a20:
        local_58 = pppppppuVar3;
      }
    }
    cVar15 = '\x01';
    if ((local_58 < (undefined4 *******)((uint)local_60 >> 2)) &&
       (iVar10 = FUN_0164bb38(&local_60), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  else if (local_30 == (undefined4 *******)0x0) {
    cVar15 = '\x01';
  }
  local_90 = local_60;
  local_8c = local_5c;
  local_88 = local_58;
  local_84 = CONCAT31(local_84._1_3_,cVar15);
  FUN_01649edc(local_50,&local_c0,&local_b0);
  FUN_0164a0b8(&local_80,local_50);
  FUN_01649edc(&local_70,&local_b0,&local_e0);
  pppppppuVar25 = local_8c;
  pppppppuVar7 = local_90;
  uVar23 = local_84 & 0xff;
  uVar14 = (undefined1)local_64;
  if (uVar23 == 1) {
    FUN_0164a9cc(local_50,local_6c,local_68);
    local_44 = (undefined4 *******)CONCAT31(local_44._1_3_,uVar14);
LAB_01648210:
    FUN_0134aee0(pppppppuVar7,pppppppuVar25,4,4);
  }
  else {
    uVar11 = local_64 & 0xff;
    if (uVar11 == 0) {
      if (uVar23 == 0) goto LAB_0164831c;
LAB_016482cc:
      local_50[0] = local_90;
      local_50[1] = local_8c;
      local_50[2] = local_88;
      FUN_01646814(&local_38,local_50,local_6c,local_68);
      FUN_016498e0(local_50,uVar11,&local_38);
    }
    else if (uVar11 == 1) {
      uVar14 = 0;
      if (uVar23 == 0) {
        uVar14 = 2;
      }
      local_50[0] = local_90;
      local_50[1] = local_8c;
      local_50[2] = local_88;
      local_44 = (undefined4 *******)CONCAT13(local_84._3_1_,CONCAT21(local_84._1_2_,uVar14));
    }
    else {
      if (uVar23 == 0) goto LAB_016482cc;
LAB_0164831c:
      if (local_68 != local_88) {
        cVar15 = (local_68 >= local_88 && local_68 != local_88) - (local_68 < local_88);
      }
      else {
        iVar10 = (int)local_88 << 2;
        do {
          pppppppuVar3 = (undefined4 *******)((int)local_8c + iVar10);
          if (iVar10 == 0) {
            cVar15 = '\0';
            if (local_8c != pppppppuVar3) {
              cVar15 = -1;
            }
            goto LAB_016483f0;
          }
          ppppppuVar12 = *(undefined4 *******)((int)local_6c + iVar10 + -4);
          iVar10 = iVar10 + -4;
          ppppppuVar18 = pppppppuVar3[-1];
        } while (ppppppuVar12 == ppppppuVar18);
        cVar15 = (ppppppuVar12 >= ppppppuVar18) - (ppppppuVar12 < ppppppuVar18);
      }
LAB_016483f0:
      if (cVar15 == '\0') {
        local_50[0] = (undefined4 *******)0x0;
        local_50[1] = (undefined4 *******)&SUB_00000004;
        local_50[2] = (undefined4 *******)0x0;
        local_44 = (undefined4 *******)&DAT_00000001;
        goto LAB_01648210;
      }
      if (cVar15 == -1) {
        local_50[0] = local_90;
        local_50[1] = local_8c;
        local_50[2] = local_88;
        FUN_016464c8(&local_38,local_50,local_6c,local_68);
        FUN_016498e0(local_50,2 - uVar11,&local_38);
      }
      else {
        local_50[0] = local_90;
        local_50[1] = local_8c;
        local_50[2] = local_88;
        FUN_016465bc(&local_38,local_6c,local_68,local_50);
        FUN_016498e0(local_50,uVar11,&local_38);
      }
    }
  }
  FUN_0164a0b8(&local_38,local_50);
  cVar15 = local_c4;
  if (local_c8 == (undefined4 *******)0x0) {
    FUN_0164a9cc(&local_60,local_cc,0);
  }
  else {
    local_50[1] = &local_d0;
    local_50[0] = (undefined4 *******)&DAT_80000000;
    FUN_0164b560(&local_60,local_50,0,1);
  }
  if (cVar15 == '\x01') {
    local_58 = (undefined4 *******)0x0;
    pppppppuVar7 = (undefined4 *******)FUN_0164a850(&local_60,4,4);
    bVar36 = local_58 == (undefined4 *******)0x0;
    pppppppuVar25 = extraout_r2_07;
    if (!bVar36) {
      pppppppuVar25 = local_5c + (int)local_58 + -1;
      bVar36 = pppppppuVar25 == (undefined4 *******)0x0;
      pppppppuVar7 = local_5c;
    }
    if ((!bVar36) && (*pppppppuVar25 == (undefined4 ******)0x0)) {
      iVar10 = (int)local_58 << 2;
      pppppppuVar25 = (undefined4 *******)((uint)local_58 & 0x3fffffff);
      do {
        pppppppuVar3 = pppppppuVar25;
        if (iVar10 == 0) {
          pppppppuVar3 = (undefined4 *******)0x0;
          goto LAB_01648a30;
        }
        iVar29 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        pppppppuVar25 = (undefined4 *******)((int)pppppppuVar3 - 1);
      } while (*(int *)((int)pppppppuVar7 + iVar29) == 0);
      if (pppppppuVar3 <= local_58) {
LAB_01648a30:
        local_58 = pppppppuVar3;
      }
    }
    cVar15 = '\x01';
    if ((local_58 < (undefined4 *******)((uint)local_60 >> 2)) &&
       (iVar10 = FUN_0164bb38(&local_60), iVar10 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  else if (local_58 == (undefined4 *******)0x0) {
    cVar15 = '\x01';
  }
  local_50[0] = local_60;
  local_50[1] = local_5c;
  local_50[2] = local_58;
  local_44 = (undefined4 *******)CONCAT31(local_44._1_3_,cVar15);
  FUN_016499e4(&local_60,&local_38,local_50);
  local_90 = local_60;
  local_8c = local_5c;
  local_88 = local_58;
  local_84 = local_54;
  FUN_016495e8(&local_38,&local_80,&local_d0);
  pppppppuVar25 = local_6c;
  pppppppuVar7 = local_70;
  local_3c = local_64._1_2_;
  local_3a = local_64._3_1_;
  uVar11 = local_64 & 0xff;
  ppppppuVar12 = (undefined4 ******)0x0;
  uVar17 = 4;
  uVar26 = 0;
  uVar30 = 1;
  uVar14 = (undefined1)local_2c;
  uVar23 = local_2c & 0xff;
  if (uVar23 == 1) {
    local_50[2] = local_68;
    local_50[1] = local_6c;
    local_50[0] = local_70;
    local_44 = (undefined4 *******)local_64;
    local_70 = (undefined4 *******)ppppppuVar12;
    local_6c = (undefined4 *******)uVar17;
    local_68 = (undefined4 *******)uVar26;
    local_64 = uVar30;
  }
  else if (uVar11 == 0) {
    if (uVar23 == 0) goto LAB_01648700;
LAB_01648698:
    bVar37 = local_68 < local_30;
    bVar36 = !bVar37 && local_68 != local_30;
    if (local_68 == local_30) {
      iVar10 = (int)local_68 << 2;
      do {
        pppppppuVar3 = (undefined4 *******)((int)local_34 + iVar10);
        if (iVar10 == 0) {
          cVar15 = '\0';
          if (local_34 != pppppppuVar3) {
            cVar15 = -1;
          }
          goto LAB_01648740;
        }
        ppppppuVar18 = *(undefined4 *******)((int)local_6c + iVar10 + -4);
        iVar10 = iVar10 + -4;
        ppppppuVar31 = pppppppuVar3[-1];
        bVar37 = ppppppuVar18 < ppppppuVar31;
      } while (ppppppuVar18 == ppppppuVar31);
      bVar36 = false;
      if (!bVar37) {
        bVar36 = true;
      }
    }
    cVar15 = bVar36 - bVar37;
LAB_01648740:
    if (cVar15 == '\0') {
      local_50[0] = (undefined4 *******)0x0;
      local_50[1] = (undefined4 *******)&SUB_00000004;
      local_50[2] = (undefined4 *******)0x0;
      local_44 = (undefined4 *******)0x1;
      local_70 = (undefined4 *******)ppppppuVar12;
      local_6c = (undefined4 *******)uVar17;
      local_68 = (undefined4 *******)uVar26;
      local_64 = uVar30;
      goto LAB_016487a0;
    }
    if (cVar15 == -1) {
      local_50[2] = local_68;
      local_50[1] = local_6c;
      local_50[0] = local_70;
      local_70 = (undefined4 *******)ppppppuVar12;
      local_6c = (undefined4 *******)uVar17;
      local_68 = (undefined4 *******)uVar26;
      local_64 = uVar30;
      FUN_016465bc(&local_60,local_34,local_30,local_50);
      FUN_016498e0(local_50,uVar23,&local_60);
    }
    else {
      local_50[2] = local_68;
      local_50[1] = local_6c;
      local_50[0] = local_70;
      local_70 = (undefined4 *******)ppppppuVar12;
      local_6c = (undefined4 *******)uVar17;
      local_68 = (undefined4 *******)uVar26;
      local_64 = uVar30;
      FUN_016464c8(&local_60,local_50,local_34,local_30);
      FUN_016498e0(local_50,uVar11,&local_60);
    }
  }
  else if (uVar11 == 1) {
    local_70 = (undefined4 *******)ppppppuVar12;
    local_6c = (undefined4 *******)uVar17;
    local_68 = (undefined4 *******)uVar26;
    local_64 = uVar30;
    FUN_0164a9cc(local_50,local_34,local_30);
    local_44 = (undefined4 *******)CONCAT31(local_44._1_3_,uVar14);
LAB_016487a0:
    FUN_0134aee0(pppppppuVar7,pppppppuVar25,4,4);
  }
  else {
    if (uVar23 == 0) goto LAB_01648698;
LAB_01648700:
    local_50[2] = local_68;
    local_50[1] = local_6c;
    local_50[0] = local_70;
    local_70 = (undefined4 *******)ppppppuVar12;
    local_6c = (undefined4 *******)uVar17;
    local_68 = (undefined4 *******)uVar26;
    local_64 = uVar30;
    FUN_01646814(&local_60,local_50,local_34,local_30);
    FUN_016498e0(local_50,uVar11,&local_60);
  }
  FUN_0134aee0(local_70,local_6c,4,4);
  local_70 = local_50[0];
  local_6c = local_50[1];
  local_68 = local_50[2];
  local_64 = (uint)local_44;
  FUN_0134aee0(local_38,local_34,4,4);
  local_38 = local_80;
  local_34 = local_7c;
  local_30 = pppppppuStack_78;
  local_2c = uStack_74;
  local_80 = (undefined4 *******)0x0;
  local_7c = (undefined4 *******)0x4;
  pppppppuStack_78 = (undefined4 *******)0x0;
  uStack_74 = 1;
  FUN_01649edc(local_50,&local_38,&local_90);
  FUN_0134aee0(local_80,local_7c,4,4);
  local_80 = local_50[0];
  local_7c = local_50[1];
  pppppppuStack_78 = local_50[2];
  uStack_74 = (uint)local_44;
  local_40 = &local_d0;
  local_50[2] = &local_70;
  local_44 = &local_90;
  local_50[1] = &local_80;
  local_50[0] = &local_e0;
  uVar23 = 0x10;
  do {
    iVar10 = *(int *)((int)local_50 + uVar23);
    uVar11 = uVar23 >> 2;
    if (*(char *)(iVar10 + 0xc) == '\x02') {
      uVar22 = uVar11 * uVar20;
      if (param_2 < uVar22) {
        puVar13 = &DAT_01d0662c;
LAB_01648a9c:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar11 * uVar20,param_2,param_2,puVar13);
      }
      FUN_0164a7b0(param_1 + uVar22,param_2 - uVar22,*(undefined4 *)(iVar10 + 4),
                   *(undefined4 *)(iVar10 + 8));
    }
    else if (*(char *)(iVar10 + 0xc) != '\x01') {
      uVar22 = uVar11 * uVar20;
      puVar13 = &DAT_01d0661c;
      if (param_2 < uVar22) goto LAB_01648a9c;
      FUN_0164a6d4(param_1 + uVar22,param_2 - uVar22,*(undefined4 *)(iVar10 + 4),
                   *(undefined4 *)(iVar10 + 8));
    }
    bVar36 = uVar23 != 0;
    uVar23 = uVar23 - 4;
  } while (bVar36);
  FUN_0134aee0(local_70,local_6c,4,4);
  FUN_0134aee0(local_80,local_7c,4,4);
  FUN_0134aee0(local_90,local_8c,4,4);
  FUN_0134aee0(local_d0,local_cc,4,4);
  pppppppuVar7 = local_e0;
  pppppppuVar25 = local_dc;
LAB_01648960:
  FUN_0134aee0(pppppppuVar7,pppppppuVar25,4,4);
  return;
}

