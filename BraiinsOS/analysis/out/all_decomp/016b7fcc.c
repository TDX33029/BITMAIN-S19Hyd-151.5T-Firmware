// FUN_016b7fcc @ 016b7fcc size=5748 calls_out=22 calls_in=1
// strings: 

void FUN_016b7fcc(uint *param_1,uint *param_2,byte *param_3,byte *param_4,uint *param_5)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined *puVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  undefined1 uVar25;
  char cVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined1 local_84;
  byte *local_80;
  byte *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_34;
  undefined1 local_32;
  bool local_30;
  undefined2 uStack_2f;
  int iStack_2d;
  undefined1 uStack_29;
  undefined1 uStack_25;
  
  pbVar23 = param_3;
LAB_016b7ff8:
  do {
    if (pbVar23 == param_4) {
LAB_016b8440:
      if (param_5 != (uint *)0x0) goto LAB_016b8448;
      goto LAB_016b8818;
    }
    pbVar20 = pbVar23 + 1;
    puVar12 = (undefined1 *)(uint)*pbVar23;
    if ((char)*pbVar23 < '\0') {
      if (puVar12 < (undefined1 *)0xe0) {
        puVar12 = (undefined1 *)(pbVar23[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
        pbVar23 = pbVar23 + 2;
        if (&DAT_0000000e <= puVar12) goto LAB_016b809c;
      }
      else {
        uVar9 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
        if (puVar12 < (undefined1 *)0xf0) {
          puVar12 = (undefined1 *)(uVar9 | ((uint)puVar12 & 0x1f) << 0xc);
          pbVar23 = pbVar23 + 3;
          if (&DAT_0000000e <= puVar12) goto LAB_016b809c;
        }
        else {
          puVar12 = (undefined1 *)(pbVar23[3] & 0x3f | uVar9 << 6 | ((uint)puVar12 & 7) << 0x12);
          if (puVar12 == &DAT_00110000) goto LAB_016b8440;
          pbVar23 = pbVar23 + 4;
          if (&DAT_0000000e <= puVar12) goto LAB_016b809c;
        }
      }
LAB_016b801c:
      puVar13 = &DAT_00110000;
      if ((1 << ((uint)puVar12 & 0xff) & 0x2600U) == 0) {
        puVar13 = puVar12;
      }
      puVar12 = puVar13;
      if (puVar13 != &DAT_00110000) break;
      goto LAB_016b7ff8;
    }
    pbVar23 = pbVar20;
    if (puVar12 <= &DAT_0000000d) goto LAB_016b801c;
LAB_016b809c:
  } while (puVar12 == &DAT_00110000);
  if (puVar12 != (undefined1 *)0x2f && puVar12 != (undefined1 *)0x5c) {
    if (param_5 == (uint *)0x0) {
LAB_016b8818:
      uVar9 = param_2[2];
      if (*param_2 - uVar9 < 8) {
        FUN_016bd7fc(param_2,uVar9,8,1,1);
        uVar9 = param_2[2];
      }
      uVar4 = param_2[1];
      *(undefined4 *)(uVar4 + uVar9) = 0x656c6966;
      ((undefined4 *)(uVar4 + uVar9))[1] = 0x2f2f2f3a;
      param_2[2] = param_2[2] + 8;
      local_70 = local_70 & 0xffffff00;
      uVar29 = FUN_016b3bfc(param_2,0,&local_70,7,param_3,param_4);
      FUN_016baa30(&local_70,param_2,0,4,uVar29);
LAB_016b8890:
      if (local_70 != 2) {
        uVar17 = *param_2;
        uVar4 = param_2[1];
        param_1[8] = 4;
        uVar9 = param_2[2];
        param_1[4] = uVar17;
        param_1[5] = uVar4;
        param_1[9] = 7;
        param_1[10] = 7;
        param_1[0xb] = 7;
        param_1[0xc] = 7;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined2 *)(param_1 + 7) = 0;
        *param_1 = local_70;
        param_1[1] = (uint)local_6c;
        param_1[2] = (uint)local_68;
        param_1[3] = (uint)local_64;
        param_1[6] = uVar9;
        return;
      }
    }
    else {
      if (puVar12 == (undefined1 *)0x23) {
        local_70 = *param_2;
        local_6c = (byte *)param_2[1];
        local_68 = (byte *)param_2[2];
        local_64 = (byte *)param_2[3];
        local_60 = (byte *)param_2[4];
        local_5c = param_2[5];
        uStack_58 = param_2[6];
        uStack_54 = param_2[7];
        uStack_50 = param_2[8];
        FUN_016ba67c(param_1,&local_70,param_5,param_3,param_4);
        return;
      }
      if (puVar12 != (undefined1 *)0x3f) {
        if (puVar12 == &DAT_00110000) {
LAB_016b8448:
          if (param_5[2] == 1) {
            pbVar21 = (byte *)param_5[3];
            pbVar20 = (byte *)param_5[5];
            if (pbVar21 == (byte *)0x0) {
              pbVar21 = (byte *)0x0;
              goto LAB_016b8b44;
            }
            pbVar23 = (byte *)param_5[6];
            if (pbVar21 < pbVar23) {
              if ((char)pbVar20[(int)pbVar21] < -0x40) {
                puVar7 = &DAT_018aee08;
                goto LAB_016b9440;
              }
            }
            else if (pbVar21 != pbVar23) {
              puVar7 = &DAT_018aee08;
              goto LAB_016b9440;
            }
          }
          else {
            pbVar21 = (byte *)param_5[6];
            pbVar20 = (byte *)param_5[5];
          }
          if ((byte *)(*param_2 - param_2[2]) < pbVar21) {
            FUN_016bd7fc(param_2,param_2[2],pbVar21,1,1);
          }
LAB_016b8b44:
          FUN_016dd1aa(param_2[1] + param_2[2],pbVar20,pbVar21);
          uVar9 = *param_2;
          uVar4 = param_2[2];
          param_1[5] = param_2[1];
          param_1[4] = uVar9;
          param_2[2] = (uint)(pbVar21 + uVar4);
          param_1[6] = (uint)(pbVar21 + uVar4);
          uVar27 = param_5[8];
          uVar28 = param_5[9];
          uVar24 = param_5[10];
          uVar22 = param_5[0xb];
          uVar9 = param_5[0xe];
          uVar4 = param_5[0xf];
          uVar17 = param_5[0x10];
          param_1[0xd] = param_5[0xd];
          param_1[0xe] = uVar9;
          param_1[0xf] = uVar4;
          param_1[0x10] = uVar17;
          uVar4 = *param_5;
          uVar17 = param_5[1];
          param_1[0xb] = uVar22;
          uVar22 = param_5[7];
          uVar19 = param_5[0xc];
          uVar9 = param_5[0x11];
          param_1[10] = uVar24;
          param_1[9] = uVar28;
          param_1[8] = uVar27;
          *(char *)(param_1 + 0x11) = (char)uVar9;
          param_1[0xc] = uVar19;
          param_1[7] = uVar22;
          *param_1 = uVar4;
          param_1[1] = uVar17;
          param_1[2] = 0;
          return;
        }
        iVar14 = FUN_016bb1f8(param_3,param_4);
        if (iVar14 != 0) {
          uVar9 = param_2[2];
          if (*param_2 - uVar9 < 8) {
            FUN_016bd7fc(param_2,uVar9,8,1,1);
            uVar9 = param_2[2];
          }
          uVar4 = param_2[1];
          *(undefined4 *)(uVar4 + uVar9) = 0x656c6966;
          ((undefined4 *)(uVar4 + uVar9))[1] = 0x2f2f2f3a;
          param_2[2] = param_2[2] + 8;
          local_70 = local_70 & 0xffffff00;
          uVar29 = FUN_016b3bfc(param_2,0,&local_70,7,param_3,param_4);
          FUN_016baa30(&local_70,param_2,0,4,uVar29);
          goto LAB_016b8890;
        }
        if (*param_5 == 0) {
          if (param_5[2] != 0) {
            puVar8 = param_5 + 3;
            goto LAB_016b8da0;
          }
          uVar22 = param_5[5];
          uVar9 = param_5[6];
          goto LAB_016b8ed4;
        }
        puVar8 = param_5 + 1;
LAB_016b8da0:
        uVar9 = *puVar8;
        uVar22 = param_5[5];
        if (uVar9 == 0) {
          uVar9 = 0;
LAB_016b8ee8:
          FUN_016dd1aa(param_2[1] + param_2[2],uVar22,uVar9);
          uVar17 = param_5[0xc];
          uVar4 = param_2[2] + uVar9;
          param_2[2] = uVar4;
          if (uVar4 == uVar17) {
LAB_016b8f80:
            local_70 = CONCAT31(local_70._1_3_,1);
            uVar29 = FUN_016b3bfc(param_2,0,&local_70,uVar17,param_3,param_4);
            local_70 = *param_2;
            local_6c = (byte *)param_2[1];
            local_68 = (byte *)param_2[2];
            local_64 = (byte *)param_2[3];
            local_60 = (byte *)param_2[4];
            local_5c = param_2[5];
            uStack_58 = param_2[6];
            uStack_54 = param_2[7];
            uStack_50 = param_2[8];
            FUN_016b7738(param_1,&local_70,0,param_5[8],param_5[9],param_5[10],param_5[0xb],
                         param_5 + 0xd,(short)param_5[7],*(undefined2 *)((int)param_5 + 0x1e),uVar17
                         ,uVar29);
            return;
          }
          uVar22 = param_2[1];
          if ((uVar17 == 0) ||
             ((puVar7 = &DAT_018aeea8, uVar17 < uVar4 && (-0x41 < *(char *)(uVar22 + uVar17))))) {
            if ((uVar4 - uVar17 != 2) ||
               ((0x19 < (*(byte *)(uVar22 + uVar17) & 0xdf) - 0x41 ||
                (((byte *)(uVar22 + uVar17))[1] != 0x3a)))) {
              FUN_016b5290(param_2,0,uVar17);
            }
            goto LAB_016b8f80;
          }
          uVar9 = uVar4;
          goto LAB_016b914c;
        }
        uVar4 = param_5[6];
        if (uVar9 < uVar4) {
          if (-0x41 < *(char *)(uVar22 + uVar9)) goto LAB_016b8ed4;
        }
        else if (uVar9 == uVar4) {
LAB_016b8ed4:
          if (*param_2 - param_2[2] < uVar9) {
            FUN_016bd7fc(param_2,param_2[2],uVar9,1,1);
          }
          goto LAB_016b8ee8;
        }
        goto LAB_016b9460;
      }
      if (*param_5 == 0) {
        if (param_5[2] != 0) {
          puVar8 = param_5 + 3;
          goto LAB_016b8c50;
        }
        uVar22 = param_5[5];
        uVar9 = param_5[6];
        goto LAB_016b8dd4;
      }
      puVar8 = param_5 + 1;
LAB_016b8c50:
      uVar9 = *puVar8;
      uVar22 = param_5[5];
      if (uVar9 != 0) {
        uVar4 = param_5[6];
        if (uVar9 < uVar4) {
          if (-0x41 < *(char *)(uVar22 + uVar9)) goto LAB_016b8dd4;
        }
        else if (uVar9 == uVar4) {
LAB_016b8dd4:
          if (*param_2 - param_2[2] < uVar9) {
            FUN_016bd7fc(param_2,param_2[2],uVar9,1,1);
          }
          goto LAB_016b8de8;
        }
LAB_016b9460:
        uVar17 = 0;
        puVar7 = &DAT_018af070;
LAB_016b914c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(uVar22,uVar4,uVar17,uVar9,puVar7);
      }
      uVar9 = 0;
LAB_016b8de8:
      FUN_016dd1aa(param_2[1] + param_2[2],uVar22,uVar9);
      uVar4 = param_5[8];
      param_2[2] = param_2[2] + uVar9;
      FUN_016baa30(&local_70,param_2,0,uVar4,param_3,param_4);
      if (local_70 != 2) {
        uVar17 = param_2[1];
        uVar9 = param_2[2];
        param_1[4] = *param_2;
        param_1[6] = uVar9;
        param_1[5] = uVar17;
        uVar19 = param_5[9];
        uVar27 = param_5[10];
        uVar24 = param_5[0xb];
        uVar9 = param_5[0xe];
        uVar17 = param_5[0xf];
        uVar22 = param_5[0x10];
        param_1[0xd] = param_5[0xd];
        param_1[0xe] = uVar9;
        param_1[0xf] = uVar17;
        param_1[0x10] = uVar22;
        uVar17 = param_5[7];
        uVar22 = param_5[0xc];
        param_1[2] = (uint)local_68;
        uVar9 = param_5[0x11];
        *param_1 = local_70;
        param_1[3] = (uint)local_64;
        param_1[1] = (uint)local_6c;
        *(char *)(param_1 + 0x11) = (char)uVar9;
        param_1[0xb] = uVar24;
        param_1[0xc] = uVar22;
        param_1[7] = uVar17;
        param_1[8] = uVar4;
        param_1[9] = uVar19;
        param_1[10] = uVar27;
        return;
      }
    }
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = (undefined1)local_6c;
    uVar9 = *param_2;
    goto joined_r0x016b88b4;
  }
  if ((param_2[6] != 0) && (puVar12 == (undefined1 *)0x5c)) {
    (**(code **)(param_2[7] + 0x14))(param_2[6],0);
  }
  pbVar20 = pbVar23;
  do {
    while( true ) {
      if (pbVar20 == param_4) goto LAB_016b8494;
      puVar13 = (undefined1 *)(uint)*pbVar20;
      pbVar21 = pbVar20 + 1;
      if (-1 < (char)*pbVar20) break;
      if (puVar13 < (undefined1 *)0xe0) {
        puVar13 = (undefined1 *)(pbVar20[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
        pbVar21 = pbVar20 + 2;
        break;
      }
      uVar9 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
      if (&DAT_000000f0 <= puVar13) {
        puVar13 = (undefined1 *)(pbVar20[3] & 0x3f | uVar9 << 6 | ((uint)puVar13 & 7) << 0x12);
        if (puVar13 != &DAT_00110000) {
          pbVar20 = pbVar20 + 4;
          if (puVar13 <= &DAT_0000000d) goto LAB_016b8128;
          goto LAB_016b81ac;
        }
        goto LAB_016b8494;
      }
      puVar13 = (undefined1 *)(uVar9 | ((uint)puVar13 & 0x1f) << 0xc);
      pbVar20 = pbVar20 + 3;
      if (&DAT_0000000e <= puVar13) goto LAB_016b81ac;
LAB_016b8128:
      puVar18 = &DAT_00110000;
      if ((1 << ((uint)puVar13 & 0xff) & 0x2600U) == 0) {
        puVar18 = puVar13;
      }
      if (puVar18 != &DAT_00110000) goto LAB_016b81d8;
    }
    pbVar20 = pbVar21;
    if (puVar13 < (undefined1 *)0xe) goto LAB_016b8128;
LAB_016b81ac:
    puVar18 = puVar13;
  } while (puVar13 == &DAT_00110000);
LAB_016b81d8:
  if (puVar18 == (undefined1 *)0x2f || puVar18 == (undefined1 *)0x5c) {
    if ((param_2[6] != 0) && (puVar18 == (undefined1 *)0x5c)) {
      (**(code **)(param_2[7] + 0x14))(param_2[6],0);
    }
    uVar9 = param_2[2];
    if (*param_2 - uVar9 < 7) {
      FUN_016bd7fc(param_2,uVar9,7,1,1);
      uVar9 = param_2[2];
    }
    uVar4 = param_2[1];
    pbVar23 = param_4 + -(int)pbVar20;
    *(undefined4 *)(uVar4 + uVar9) = 0x656c6966;
    *(undefined4 *)((int)(uVar4 + uVar9) + 3) = 0x2f2f3a65;
    param_2[2] = param_2[2] + 7;
    uStack_29 = (undefined1)((uint)param_4 >> 0x18);
    local_30 = SUB41(pbVar20,0);
    iStack_2d._0_1_ = (undefined1)((uint)pbVar20 >> 0x18);
    uStack_2f = (undefined2)((uint)pbVar20 >> 8);
    local_78 = param_3;
    if (pbVar23 == (byte *)0x0) {
      iStack_2d = CONCAT31((int3)param_4,(undefined1)iStack_2d);
LAB_016b8a60:
      pbVar20 = (byte *)CONCAT13((undefined1)iStack_2d,CONCAT21(uStack_2f,local_30));
      param_4 = (byte *)CONCAT13(uStack_29,iStack_2d._1_3_);
LAB_016b8a68:
      uVar4 = param_2[2];
      pbVar21 = (byte *)0x0;
      local_30 = false;
      uVar9 = uVar4;
      if (*param_2 == uVar4) {
LAB_016b96b0:
        FUN_016bd7fc(param_2,uVar9,1,1,1);
        uVar4 = param_2[2];
      }
LAB_016b8a84:
      *(undefined1 *)(param_2[1] + uVar4) = 0x2f;
      param_2[2] = uVar9 + 1;
      uVar29 = FUN_016b3bfc(param_2,0,&local_30,uVar9,pbVar20,param_4);
    }
    else {
      bVar1 = false;
      iVar14 = 0;
      pbVar21 = (byte *)0x0;
      pbVar10 = pbVar20;
      do {
        uVar9 = (uint)*pbVar10;
        pbVar6 = pbVar10 + 1;
        if (-1 < (char)*pbVar10) {
joined_r0x016b840c:
          pbVar10 = pbVar6;
          uVar4 = uVar9 - 9;
          if (0x36 < uVar4) goto LAB_016b8260;
LAB_016b82b8:
          iVar16 = 1;
          bVar3 = true;
          switch((int)&switchD_016b82c4::switchdataD_016b82c8 +
                 (&switchD_016b82c4::switchdataD_016b82c8)[uVar4] & 0xfffffffe) {
          default:
            goto switchD_016b82c4_caseD_16b8268;
          case 0x16b8280:
            goto switchD_016b82c4_caseD_16b8280;
          case 0x16b86fc:
            goto switchD_016b82c4_caseD_16b86fc;
          }
        }
        if (uVar9 < 0xe0) {
          uVar9 = pbVar10[1] & 0x3f | (uVar9 & 0x1f) << 6;
          pbVar6 = pbVar10 + 2;
          goto joined_r0x016b840c;
        }
        uVar4 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
        if (uVar9 < 0xf0) {
          uVar9 = uVar4 | (uVar9 & 0x1f) << 0xc;
          pbVar6 = pbVar10 + 3;
          goto joined_r0x016b840c;
        }
        uVar9 = pbVar10[3] & 0x3f | uVar4 << 6 | (uVar9 & 7) << 0x12;
        pbVar10 = pbVar10 + 4;
        uVar4 = uVar9 - 9;
        if (uVar4 < 0x37) goto LAB_016b82b8;
LAB_016b8260:
        if (uVar9 == 0x5c) break;
switchD_016b82c4_caseD_16b8268:
        iVar16 = 1;
        iVar14 = iVar14 + 1;
        if (0x7f < uVar9) {
          iVar16 = 2;
        }
        if ((0x7ff < uVar9) && (iVar16 = 4, uVar9 < 0x10000)) {
          iVar16 = 3;
        }
        bVar3 = bVar1;
switchD_016b82c4_caseD_16b8280:
        bVar1 = bVar3;
        pbVar21 = pbVar21 + iVar16;
      } while (pbVar10 != param_4);
switchD_016b82c4_caseD_16b86fc:
      iStack_2d = CONCAT31((int3)param_4,(undefined1)iStack_2d);
      if (bVar1) {
        FUN_016bd1e0(&local_70,&local_30);
        pbVar23 = local_68;
        pbVar10 = local_6c;
joined_r0x016b8bdc:
        pbVar21 = pbVar23;
        if (pbVar21 != &SUB_00000002) goto LAB_016b8be0;
LAB_016b872c:
        pbVar23 = &SUB_00000002;
        pbVar21 = pbVar23;
        if ((0x19 < (*pbVar10 & 0xdf) - 0x41) || (pbVar10[1] != 0x3a && pbVar10[1] != 0x7c))
        goto LAB_016b9484;
        if (!bVar1) goto LAB_016b8a68;
        pbVar21 = (byte *)0x0;
        iVar14 = 1;
LAB_016b94b8:
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(pbVar10);
        }
      }
      else {
        if (iVar14 != 0) {
          pbVar10 = pbVar20;
          do {
            pbVar6 = pbVar10;
            do {
              pbVar10 = pbVar6;
              if (pbVar6 == param_4) {
LAB_016b8a1c:
                local_30 = SUB41(pbVar10,0);
                uStack_2f = (undefined2)((uint)pbVar10 >> 8);
                iStack_2d._0_1_ = (undefined1)((uint)pbVar10 >> 0x18);
                goto LAB_016b8a20;
              }
              pbVar10 = pbVar6 + 1;
              puVar12 = (undefined1 *)(uint)*pbVar6;
              if (0x7fffffff < (uint)(int)(char)*pbVar6) {
                if (puVar12 < (undefined1 *)0xe0) {
                  puVar12 = (undefined1 *)(pbVar6[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
                  pbVar10 = pbVar6 + 2;
                }
                else {
                  uVar9 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
                  if (puVar12 < (undefined1 *)0xf0) {
                    puVar12 = (undefined1 *)(uVar9 | ((uint)puVar12 & 0x1f) << 0xc);
                    pbVar10 = pbVar6 + 3;
                  }
                  else {
                    puVar12 = (undefined1 *)
                              (pbVar6[3] & 0x3f | uVar9 << 6 | ((uint)puVar12 & 7) << 0x12);
                    pbVar10 = pbVar6 + 4;
                    if (puVar12 == &DAT_00110000) goto LAB_016b8a1c;
                  }
                }
              }
              pbVar6 = pbVar10;
            } while (((puVar12 < (undefined1 *)0xe) &&
                     ((1 << ((uint)puVar12 & 0xff) & 0x2600U) != 0)) || (puVar12 == &DAT_00110000));
            iVar14 = iVar14 + -1;
            local_30 = SUB41(pbVar10,0);
            uStack_2f = (undefined2)((uint)pbVar10 >> 8);
            iStack_2d._0_1_ = (undefined1)((uint)pbVar10 >> 0x18);
          } while (iVar14 != 0);
        }
LAB_016b8a20:
        if (pbVar21 == (byte *)0x0) goto LAB_016b8a60;
        puVar7 = &DAT_018af050;
        pbVar10 = pbVar20;
        if (pbVar23 <= pbVar21) {
          if (pbVar21 != pbVar23) goto LAB_016b9440;
          goto joined_r0x016b8bdc;
        }
        if ((char)pbVar20[(int)pbVar21] < -0x40) {
LAB_016b9440:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar20,pbVar23,0,pbVar21,puVar7);
        }
        if (pbVar21 == &SUB_00000002) goto LAB_016b872c;
LAB_016b8be0:
        if ((int)pbVar21 < 0) {
          uVar15 = 0;
          goto LAB_016b8bec;
        }
        if (pbVar21 == (byte *)0x0) {
          iVar14 = 1;
          pbVar21 = (byte *)0x0;
        }
        else {
LAB_016b9484:
          iVar14 = thunk_FUN_016d4a50(pbVar21);
          if (iVar14 == 0) {
            uVar15 = 1;
LAB_016b8bec:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar15,pbVar21);
          }
        }
        FUN_016dd1aa(iVar14,pbVar10,pbVar21);
        pbVar20 = (byte *)CONCAT13((undefined1)iStack_2d,CONCAT21(uStack_2f,local_30));
        param_4 = (byte *)CONCAT13(uStack_29,iStack_2d._1_3_);
        if (bVar1) goto LAB_016b94b8;
      }
      pbVar23 = (byte *)0x0;
      if (pbVar21 == (byte *)0x0) goto LAB_016b8a68;
      FUN_016bc2fc(&local_70,iVar14,pbVar21);
      pbVar6 = local_60;
      pbVar23 = local_64;
      pbVar10 = local_68;
      pbVar21 = local_6c;
      uVar9 = local_70;
      uVar25 = local_70._1_1_;
      if ((local_70 & 0xff) == 3) {
        thunk_FUN_016d3fb4(iVar14);
        *(undefined1 *)(param_1 + 1) = uVar25;
        *param_1 = 2;
        uVar9 = *param_2;
        goto joined_r0x016b88b4;
      }
      if ((local_70 & 0xff) == 0 && local_64 == &DAT_00000009) {
        local_78 = local_60;
        iVar16 = thunk_FUN_016dd50a(local_68,&DAT_00418637,9);
        if (iVar16 != 0) goto LAB_016b9578;
        if (pbVar21 != (byte *)0x0) {
          thunk_FUN_016d3fb4(pbVar10);
        }
        pbVar21 = (byte *)0x0;
        bVar1 = false;
      }
      else {
LAB_016b9578:
        uStack_29 = 1;
        local_30 = SUB41(&local_70,0);
        uStack_2f = (undefined2)((uint)&local_70 >> 8);
        iStack_2d._0_1_ = (undefined1)((uint)&local_70 >> 0x18);
        iStack_2d = CONCAT31(0x6bd04c,(undefined1)iStack_2d);
        local_70 = uVar9;
        local_6c = pbVar21;
        local_68 = pbVar10;
        local_64 = pbVar23;
        local_60 = pbVar6;
        iVar16 = FUN_00fa948c(param_2,&DAT_018aeed8,&DAT_00590e71,&local_30);
        if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018af060,&DAT_018aeef0);
        }
        puVar11 = (undefined4 *)((uint)&local_70 | 1);
        uVar15 = *puVar11;
        iStack_2d = *(int *)((int)puVar11 + 3);
        local_30 = SUB41(uVar15,0);
        uStack_2f = (undefined2)((uint)uVar15 >> 8);
        pbVar23 = local_64;
        if ((local_70 & 0xff) == 0) {
          if (local_64 != (byte *)0x0) {
            pbVar23 = &DAT_00000001;
          }
          if (iStack_2d != 0) {
            thunk_FUN_016d3fb4();
          }
          pbVar21 = pbVar23;
        }
        else if ((local_70 & 0xff) == 1) {
          local_78 = (byte *)CONCAT13((undefined1)iStack_2d,(int3)uVar15);
          pbVar21 = &SUB_00000002;
        }
        else {
          local_80 = local_68;
          local_78 = (byte *)CONCAT13((undefined1)iStack_2d,(int3)uVar15);
          local_84 = SUB41(local_60,0);
          local_34 = local_6c._1_2_;
          local_32 = local_6c._3_1_;
          pbVar21 = (byte *)0x3;
        }
        bVar1 = true;
      }
      thunk_FUN_016d3fb4(iVar14);
      local_30 = pbVar21 != (byte *)0x0;
      uVar4 = param_2[2];
      uVar9 = uVar4;
      if (!bVar1) {
        if (*param_2 == uVar4) goto LAB_016b96b0;
        goto LAB_016b8a84;
      }
      uVar29 = FUN_016b56ec(param_2,0,&local_30,pbVar20,param_4);
    }
    uVar25 = SUB41(pbVar21,0);
    if (local_30 == false) {
      FUN_016bd110(&local_70,param_2,7,uVar9,&DAT_018aede8);
      pbVar21 = local_64;
      pbVar20 = local_68;
      if ((local_64 <= local_60) && (pbVar10 = *(byte **)(local_68 + 8), local_60 <= pbVar10)) {
        iVar14 = (int)pbVar10 - (int)local_60;
        *(byte **)(local_68 + 8) = local_64;
        if (local_60 == local_64) {
          if (pbVar10 != local_60) goto LAB_016b8cb4;
        }
        else if (pbVar10 != local_60) {
          FUN_016dd52c(local_64 + *(int *)(local_68 + 4),local_60 + *(int *)(local_68 + 4),iVar14);
LAB_016b8cb4:
          *(byte **)(pbVar20 + 8) = pbVar21 + iVar14;
        }
      }
      uVar25 = 0;
      uVar9 = 7;
    }
    FUN_016baa30(&local_70,param_2,0,4,uVar29);
    if (local_70 != 2) {
      uVar22 = param_2[2];
      *(byte **)((int)param_1 + 0x35) = local_78;
      *(undefined2 *)((int)param_1 + 0x39) = local_34;
      *(undefined1 *)((int)param_1 + 0x3b) = local_32;
      *(undefined1 *)(param_1 + 0x11) = local_84;
      param_1[0xf] = (uint)local_80;
      uVar17 = *param_2;
      uVar4 = param_2[1];
      param_1[9] = 7;
      param_1[10] = 7;
      param_1[0x10] = (uint)pbVar23;
      *(undefined1 *)(param_1 + 0xd) = uVar25;
      param_1[8] = 4;
      param_1[0xb] = uVar9;
      param_1[0xc] = uVar9;
      *(undefined2 *)(param_1 + 7) = 0;
      *param_1 = local_70;
      param_1[1] = (uint)local_6c;
      param_1[2] = (uint)local_68;
      param_1[3] = (uint)local_64;
      param_1[4] = uVar17;
      param_1[5] = uVar4;
      param_1[6] = uVar22;
      return;
    }
  }
  else {
LAB_016b8494:
    uVar9 = param_2[2];
    if (*param_2 - uVar9 < 7) {
      FUN_016bd7fc(param_2,uVar9,7,1,1);
      uVar9 = param_2[2];
    }
    uVar4 = param_2[1];
    *(undefined4 *)(uVar4 + uVar9) = 0x656c6966;
    *(undefined4 *)((int)(uVar4 + uVar9) + 3) = 0x2f2f3a65;
    param_2[2] = param_2[2] + 7;
    iVar14 = FUN_016bb1f8(pbVar23,param_4);
    if ((param_5 == (uint *)0x0) || (iVar14 != 0)) {
LAB_016b9110:
      cVar26 = '\0';
      uVar9 = 7;
      cVar2 = '\0';
      if ((undefined1 *)0x1c < puVar12 + -0x23) goto LAB_016b91e8;
LAB_016b91cc:
      cVar26 = cVar2;
      if ((1 << ((uint)(puVar12 + -0x23) & 0xff) & 0x10001001U) == 0) goto LAB_016b91e8;
      pbVar23 = param_3;
    }
    else {
      uVar29 = FUN_016b3674(param_5);
      iVar14 = (int)((ulonglong)uVar29 >> 0x20);
      pcVar5 = (char *)uVar29;
      if ((iVar14 == 0) || (*pcVar5 != '/')) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018aedf8);
      }
      local_68 = (byte *)(iVar14 + -1);
      pbVar21 = (byte *)(pcVar5 + 1);
      pbVar20 = (byte *)0x0;
      local_5c = 0x2f;
      local_64 = (byte *)0x0;
      local_70 = 0x2f;
      do {
        while( true ) {
          uVar9 = (int)local_68 - (int)pbVar20;
          pbVar10 = pbVar21 + (int)pbVar20;
          local_6c = pbVar21;
          local_60 = local_68;
          if (7 < uVar9) break;
          if (local_68 == pbVar20) goto joined_r0x016b8a14;
          uVar4 = 0;
          while (pbVar10[uVar4] != 0x2f) {
            uVar4 = uVar4 + 1;
            if (uVar9 == uVar4) goto joined_r0x016b8a14;
          }
joined_r0x016b86f4:
          pbVar10 = pbVar20 + uVar4;
          pbVar20 = pbVar10 + 1;
          if (local_68 <= pbVar10) goto LAB_016b86cc;
LAB_016b8698:
          if ((pbVar21[(int)pbVar10] == 0x2f) || (local_68 < pbVar20)) {
            pbVar20 = local_68;
            if (pbVar21[(int)pbVar10] == 0x2f) {
              pbVar20 = pbVar10;
            }
            if (pbVar20 == &SUB_00000002) goto LAB_016b9030;
            goto LAB_016b90bc;
          }
        }
        uVar4 = ((uint)(pbVar10 + 3) & 0xfffffffc) - (int)pbVar10;
        if (uVar4 == 0) {
          uVar4 = 0;
LAB_016b85a8:
          do {
            uVar17 = *(uint *)(pcVar5 + (int)pbVar20 + uVar4 + 1);
            uVar22 = *(uint *)(pcVar5 + (int)pbVar20 + uVar4 + 5) ^ 0x2f2f2f2f;
            if (((0x1010100 - (uVar17 ^ 0x2f2f2f2f) | uVar17) & 0x80808080 &
                (0x1010100 - uVar22 | uVar22)) != 0x80808080) break;
            uVar4 = uVar4 + 8;
          } while (uVar4 <= uVar9 - 8);
        }
        else {
          iVar14 = 0;
          do {
            if (pbVar10[-iVar14] == 0x2f) {
              uVar4 = -iVar14;
              goto joined_r0x016b86f4;
            }
            iVar14 = iVar14 + -1;
          } while ((int)pbVar10 - ((uint)(pbVar10 + 3) & 0xfffffffc) != iVar14);
          if (uVar4 <= uVar9 - 8) goto LAB_016b85a8;
        }
        if (uVar9 == uVar4) break;
        pbVar6 = (byte *)0x0;
        while (pbVar10[(int)(pbVar6 + uVar4)] != 0x2f) {
          pbVar6 = pbVar6 + 1;
          if (local_68 + (-(int)pbVar20 - uVar4) == pbVar6) goto joined_r0x016b8a14;
        }
        pbVar10 = pbVar20 + (int)(pbVar6 + uVar4);
        pbVar20 = pbVar10 + 1;
        if (pbVar10 < local_68) goto LAB_016b8698;
LAB_016b86cc:
      } while (pbVar20 <= local_68);
joined_r0x016b8a14:
      if (local_68 == &SUB_00000002) {
LAB_016b9030:
        if (((*pbVar21 & 0xdf) - 0x41 < 0x1a) && (pcVar5[2] == ':')) {
          uVar4 = param_2[2];
          uVar9 = uVar4;
          if (*param_2 == uVar4) {
            FUN_016bd7fc(param_2,uVar4,1,1,1);
            uVar9 = param_2[2];
          }
          *(undefined1 *)(param_2[1] + uVar9) = 0x2f;
          uVar4 = uVar4 + 1;
          param_2[2] = uVar4;
          if (*param_2 - uVar4 < 2) {
            FUN_016bd7fc(param_2,uVar4,2,1,1);
            uVar4 = param_2[2];
          }
          *(undefined2 *)(param_2[1] + uVar4) = *(undefined2 *)pbVar21;
          param_2[2] = param_2[2] + 2;
          goto LAB_016b9110;
        }
      }
LAB_016b90bc:
      cVar26 = (char)param_5[0xd];
      if (cVar26 == '\0') goto LAB_016b9110;
      uVar22 = param_5[5];
      uVar4 = param_5[6];
      uVar17 = param_5[10];
      uVar9 = param_5[0xb];
      puVar7 = &DAT_018aedb8;
      if (uVar9 < uVar17) goto LAB_016b9144;
      if (uVar17 != 0) {
        if (uVar17 < uVar4) {
          if (-0x41 < *(char *)(uVar22 + uVar17)) goto LAB_016b9124;
        }
        else if (uVar17 == uVar4) goto LAB_016b9124;
        goto LAB_016b9144;
      }
LAB_016b9124:
      if (uVar9 != 0) {
        if (uVar9 < uVar4) {
          if (*(char *)(uVar22 + uVar9) < -0x40) goto LAB_016b9144;
        }
        else if (uVar9 != uVar4) {
LAB_016b9144:
          goto LAB_016b914c;
        }
      }
      uVar9 = uVar9 - uVar17;
      uVar4 = param_2[2];
      if (*param_2 - uVar4 < uVar9) {
        FUN_016bd7fc(param_2,uVar4,uVar9,1,1);
        uVar4 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + uVar4,uVar22 + uVar17,uVar9);
      uVar9 = param_2[2] + uVar9;
      local_48 = *(undefined4 *)((int)param_5 + 0x35);
      local_44 = *(undefined4 *)((int)param_5 + 0x39);
      local_40 = *(undefined4 *)((int)param_5 + 0x3d);
      local_3c = *(undefined4 *)((int)param_5 + 0x41);
      param_2[2] = uVar9;
      cVar2 = cVar26;
      if (puVar12 + -0x23 < (undefined1 *)0x1d) goto LAB_016b91cc;
LAB_016b91e8:
      if (puVar12 == (undefined1 *)0x5c) {
        pbVar23 = param_3;
      }
    }
    local_70 = local_70 & 0xffffff00;
    uVar29 = FUN_016b3bfc(param_2,0,&local_70,uVar9,pbVar23,param_4);
    FUN_016baa30(&local_70,param_2,0,4,uVar29);
    if (local_70 != 2) {
      *(undefined4 *)((int)param_1 + 0x35) = local_48;
      *(undefined4 *)((int)param_1 + 0x39) = local_44;
      *(undefined4 *)((int)param_1 + 0x3d) = local_40;
      uVar22 = *param_2;
      uVar17 = param_2[1];
      uVar4 = param_2[2];
      *(undefined4 *)((int)param_1 + 0x41) = local_3c;
      param_1[8] = 4;
      *(char *)(param_1 + 0xd) = cVar26;
      param_1[9] = 7;
      param_1[10] = 7;
      param_1[0xb] = uVar9;
      param_1[0xc] = uVar9;
      *(undefined2 *)(param_1 + 7) = 0;
      *param_1 = local_70;
      param_1[1] = (uint)local_6c;
      param_1[2] = (uint)local_68;
      param_1[3] = (uint)local_64;
      param_1[4] = uVar22;
      param_1[5] = uVar17;
      param_1[6] = uVar4;
      return;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = (undefined1)local_6c;
  uVar9 = *param_2;
joined_r0x016b88b4:
  if (uVar9 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(param_2[1]);
  return;
}

