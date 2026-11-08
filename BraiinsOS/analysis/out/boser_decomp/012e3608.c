// FUN_012e3608 @ 012e3608 size=4560 calls_out=26 calls_in=1
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_012e3608(uint *param_1,int *param_2,uint *******param_3)

{
  bool bVar1;
  char *pcVar2;
  uint ******ppppppuVar3;
  uint ******ppppppuVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint ******ppppppuVar8;
  uint ******ppppppuVar9;
  undefined4 *puVar10;
  byte bVar11;
  uint *puVar12;
  uint ***pppuVar13;
  int *piVar14;
  uint **ppuVar15;
  undefined *puVar16;
  uint *puVar17;
  uint uVar18;
  uint *****pppppuVar19;
  uint ******ppppppuVar20;
  uint uVar21;
  uint *****pppppuVar22;
  uint ****ppppuVar23;
  uint *****pppppuVar24;
  uint ****ppppuVar25;
  uint ******ppppppuVar26;
  uint uVar27;
  uint ******ppppppuVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  undefined8 uVar33;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint *******local_94;
  uint *******local_90;
  undefined4 *local_8c;
  undefined *local_88;
  uint *******local_84;
  int *******local_80;
  uint *******local_7c;
  undefined4 *local_78;
  uint *******local_70;
  undefined **local_6c;
  undefined4 *local_68;
  uint ******local_64;
  uint ******local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint *******local_50;
  uint *******local_4c;
  uint ******local_48;
  uint ******local_44;
  int *******local_40;
  uint *******local_3c;
  undefined4 *local_38;
  int *******local_30;
  uint *******local_2c;
  undefined4 *local_28;
  
  if (param_2[4] != 0) {
    puVar17 = (uint *)(param_2[3] + 0x10);
    iVar6 = param_2[4] * 0x14;
    do {
      ppppppuVar26 = (uint ******)puVar17[-4];
      bVar32 = ppppppuVar26 == *param_3;
      if (bVar32) {
        ppppppuVar26 = (uint ******)*puVar17;
      }
      if (bVar32 && ppppppuVar26 == param_3[4]) {
        if ((DAT_01d50f88 < 2) &&
           (((DAT_01d4ced0 - 1 < 2 ||
             ((DAT_01d4ced0 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4cec8), cVar5 != '\0')))) &&
            (iVar6 = FUN_01aaa278(DAT_01d4cec8), iVar6 != 0)))) {
          local_60 = *(uint *******)(DAT_01d4cec8 + 0x20);
          if (local_60 == (uint ******)0x0) {
LAB_012e4800:
            puVar16 = &DAT_01ce3880;
            goto LAB_012e4808;
          }
          local_3c = (uint *******)&local_50;
          local_5c = *(uint **)(DAT_01d4cec8 + 0x24);
          local_58 = *(undefined4 *)(DAT_01d4cec8 + 0x28);
          local_68 = (undefined4 *)(DAT_01d4cec8 + 0x1c);
          local_64 = (uint ******)*local_68;
          local_40 = (int *******)&local_64;
          local_70 = (uint *******)&local_40;
          local_54 = 0;
          local_6c = (undefined **)&DAT_00000001;
          local_4c = (uint *******)&local_94;
          local_38 = (undefined4 *)&DAT_01d2ea4c;
          local_50 = (uint *******)&DAT_0059a8fe;
          local_90 = (uint *******)FUN_012e4a30;
          local_94 = param_3;
          FUN_01aaaecc(DAT_01d4cec8,&local_70);
          iVar6 = DAT_01d4cec8;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_2c = *(uint ********)(DAT_01d4cec8 + 0x14);
            local_28 = *(undefined4 **)(DAT_01d4cec8 + 0x18);
            local_30 = (int *******)&SUB_00000004;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar7 = (*(code *)puVar10[3])(pcVar2,&local_30);
            if (iVar7 != 0) {
              FUN_01aaa328(iVar6,pcVar2,puVar10[4],&local_30,&local_70);
            }
          }
        }
        else {
          iVar6 = DAT_01d4cec8;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_9c = *(undefined4 *)(DAT_01d4cec8 + 0x14);
            local_98 = *(undefined4 *)(DAT_01d4cec8 + 0x18);
            local_a0 = 4;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar7 = (*(code *)puVar10[3])(pcVar2,&local_a0);
            if (iVar7 != 0) {
              local_38 = (undefined4 *)(DAT_01d4cec8 + 0x1c);
              local_64 = (uint ******)*local_38;
              local_60 = *(uint *******)(DAT_01d4cec8 + 0x20);
              if (local_60 == (uint ******)0x0) goto LAB_012e4800;
              local_2c = (uint *******)&local_94;
              local_5c = *(uint **)(DAT_01d4cec8 + 0x24);
              local_58 = *(undefined4 *)(DAT_01d4cec8 + 0x28);
              local_30 = (int *******)&local_64;
              local_40 = (int *******)&local_30;
              local_3c = (uint *******)&DAT_00000001;
              local_90 = (uint *******)&local_70;
              local_54 = 0;
              local_28 = (undefined4 *)&DAT_01d2ea4c;
              local_94 = (uint *******)&DAT_0059a8fe;
              local_6c = (undefined **)FUN_012e4a30;
              local_70 = param_3;
              FUN_01aaa328(iVar6,pcVar2,puVar10[4],&local_a0,&local_40);
            }
          }
        }
        ppppppuVar26 = param_3[1];
        ppppppuVar20 = param_3[2];
        *param_1 = 2;
        goto LAB_012e466c;
      }
      puVar17 = puVar17 + 5;
      iVar6 = iVar6 + -0x14;
    } while (iVar6 != 0);
  }
  if (((DAT_01d50f88 < 2) &&
      (((byte)DAT_01d4cedc - 1 < 2 ||
       (((byte)DAT_01d4cedc != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4ced4), cVar5 != '\0')))))) &&
     (iVar6 = FUN_01aaa278(DAT_01d4ced4), iVar6 != 0)) {
    local_60 = *(uint *******)(DAT_01d4ced4 + 0x20);
    if (local_60 == (uint ******)0x0) {
LAB_012e47ec:
      puVar16 = &DAT_01ce3870;
LAB_012e4808:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar16);
    }
    local_6c = &local_88;
    local_5c = *(uint **)(DAT_01d4ced4 + 0x24);
    local_58 = *(undefined4 *)(DAT_01d4ced4 + 0x28);
    local_8c = (undefined4 *)(DAT_01d4ced4 + 0x1c);
    local_64 = (uint ******)*local_8c;
    local_70 = &local_64;
    local_94 = (uint *******)&local_70;
    local_54 = 0;
    local_90 = (uint *******)&DAT_00000001;
    local_84 = (uint *******)&local_50;
    local_68 = (undefined4 *)&DAT_01d2ea4c;
    local_88 = &DAT_0057bc50;
    local_4c = (uint *******)FUN_012e4a30;
    local_50 = param_3;
    FUN_01aaaecc(DAT_01d4ced4,&local_94);
    iVar6 = DAT_01d4ced4;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_3c = *(uint ********)(DAT_01d4ced4 + 0x14);
      local_38 = *(undefined4 **)(DAT_01d4ced4 + 0x18);
      local_40 = (int *******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar10[3])(pcVar2,&local_40);
      if (iVar7 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar6,pcVar2,puVar10[4],&local_30,&local_94);
      }
    }
  }
  else {
    iVar6 = DAT_01d4ced4;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_7c = *(uint ********)(DAT_01d4ced4 + 0x14);
      local_78 = *(undefined4 **)(DAT_01d4ced4 + 0x18);
      local_80 = (int *******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar10[3])(pcVar2,&local_80);
      if (iVar7 != 0) {
        local_68 = (undefined4 *)(DAT_01d4ced4 + 0x1c);
        local_64 = (uint ******)*local_68;
        local_60 = *(uint *******)(DAT_01d4ced4 + 0x20);
        if (local_60 == (uint ******)0x0) goto LAB_012e47ec;
        local_3c = (uint *******)&local_50;
        local_5c = *(uint **)(DAT_01d4ced4 + 0x24);
        local_58 = *(undefined4 *)(DAT_01d4ced4 + 0x28);
        local_40 = (int *******)&local_64;
        local_70 = (uint *******)&local_40;
        local_54 = 0;
        local_6c = (undefined **)&DAT_00000001;
        local_38 = (undefined4 *)&DAT_01d2ea4c;
        local_4c = (uint *******)&local_94;
        local_50 = (uint *******)&DAT_0057bc50;
        local_90 = (uint *******)FUN_012e4a30;
        local_30 = local_80;
        local_2c = local_7c;
        local_28 = local_78;
        local_94 = param_3;
        FUN_01aaa328(iVar6,pcVar2,puVar10[4],&local_30,&local_70);
      }
    }
  }
  ppppppuVar8 = *param_3;
  if (ppppppuVar8 != (uint ******)0x1) {
    ppppppuVar28 = param_3[4];
    FUN_006666fc(&local_64,param_3[2],param_3[3]);
  }
  else {
    ppppppuVar28 = param_3[4];
    FUN_006666fc(&local_64,param_3[2],param_3[3]);
  }
  ppppppuVar20 = local_60;
  ppppppuVar26 = local_64;
  ppppppuVar8 = (uint ******)(uint)(ppppppuVar8 != (uint ******)0x1);
  uVar21 = param_2[4];
  if (uVar21 != 0) {
    iVar6 = param_2[3];
    uVar27 = 0;
    puVar17 = (uint *)(iVar6 + 0x24);
LAB_012e3b3c:
    ppppppuVar9 = (uint ******)puVar17[-9];
    bVar32 = ppppppuVar9 == ppppppuVar8;
    if (bVar32) {
      ppppppuVar9 = (uint ******)puVar17[-5];
    }
    if (!bVar32 || ppppppuVar9 != ppppppuVar28) goto code_r0x012e3b50;
    FUN_019bb7e0(puVar17[-8],puVar17[-7]);
    if (uVar27 + 1 < uVar21) {
      iVar7 = (uVar21 - 1) - uVar27;
      do {
        ppppppuVar9 = (uint ******)puVar17[-4];
        bVar32 = ppppppuVar9 == ppppppuVar8;
        if (bVar32) {
          ppppppuVar9 = (uint ******)*puVar17;
        }
        if (bVar32 && ppppppuVar9 == ppppppuVar28) {
          FUN_019bb7e0(puVar17[-3],puVar17[-2]);
        }
        else {
          uVar21 = puVar17[-3];
          uVar31 = puVar17[-2];
          uVar30 = puVar17[-1];
          uVar18 = *puVar17;
          puVar12 = (uint *)(iVar6 + uVar27 * 0x14);
          *puVar12 = puVar17[-4];
          puVar12[1] = uVar21;
          puVar12[2] = uVar31;
          puVar12[3] = uVar30;
          puVar12[4] = uVar18;
          uVar27 = uVar27 + 1;
        }
        puVar17 = puVar17 + 5;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    param_2[4] = uVar27;
    goto LAB_012e3b74;
  }
  uVar27 = 0;
LAB_012e3b74:
  ppppppuVar8 = *param_3;
  if (ppppppuVar8 != (uint ******)0x1) {
    ppppppuVar28 = param_3[4];
    FUN_006666fc(&local_64,param_3[2],param_3[3]);
  }
  else {
    ppppppuVar28 = param_3[4];
    FUN_006666fc(&local_64,param_3[2],param_3[3]);
  }
  puVar17 = local_5c;
  ppppppuVar4 = local_60;
  ppppppuVar9 = local_64;
  if (uVar27 == param_2[2]) {
    FUN_01429324();
  }
  iVar6 = *param_2;
  piVar29 = (int *)param_2[1];
  puVar12 = (uint *)(param_2[3] + uVar27 * 0x14);
  *puVar12 = (uint)(ppppppuVar8 == (uint ******)0x1);
  param_2[4] = uVar27 + 1;
  puVar12[1] = (uint)ppppppuVar9;
  puVar12[2] = (uint)ppppppuVar4;
  puVar12[3] = (uint)puVar17;
  puVar12[4] = (uint)ppppppuVar28;
  ppppppuVar9 = *param_3;
  ppppppuVar28 = param_3[1];
  ppppppuVar8 = param_3[2];
  local_48 = param_3[3];
  local_44 = param_3[4];
  if (iVar6 == 0) {
    uVar21 = piVar29[0x12];
    if ((uVar21 & piVar29[8]) == 0) {
      puVar17 = (uint *)(piVar29 + 8);
      uVar31 = 0;
      uVar27 = piVar29[8];
      do {
        uVar30 = uVar21 - 1 & uVar27;
        uVar21 = *(uint *)(piVar29[0x25] + uVar30 * 0x18);
        DataMemoryBarrier(0xb);
        if (uVar27 == uVar21) {
          if (uVar30 + 1 < (uint)piVar29[0x10]) {
            uVar21 = uVar27 + 1;
          }
          else {
            uVar21 = piVar29[0x11] + (uVar27 & -piVar29[0x11]);
          }
          uVar18 = *puVar17;
          if (uVar18 == uVar27) {
            DataMemoryBarrier(0xb);
            bVar1 = (bool)hasExclusiveAccess(puVar17);
            if (bVar1) {
              *puVar17 = uVar21;
            }
            bVar32 = false;
            if (bVar1) {
              DataMemoryBarrier(0xb);
              bVar32 = true;
            }
          }
          else {
            bVar32 = false;
            ClearExclusiveLocal();
          }
          if (bVar32) {
            piVar14 = (int *)(piVar29[0x25] + uVar30 * 0x18);
            uVar31 = 2;
            piVar14[1] = (int)ppppppuVar9;
            piVar14[2] = (int)ppppppuVar28;
            piVar14[3] = (int)ppppppuVar8;
            piVar14[4] = (int)local_48;
            piVar14[5] = (int)local_44;
            DataMemoryBarrier(0xb);
            *piVar14 = uVar27 + 1;
            FUN_012ec30c(piVar29 + 0x1c);
            goto LAB_012e3f88;
          }
          uVar21 = 6;
          if (uVar31 < 6) {
            uVar21 = uVar31;
          }
          uVar27 = 1;
          do {
            uVar30 = uVar27 >> (uVar21 & 0xff);
            uVar27 = uVar27 + 1;
            HintYield();
          } while (uVar30 == 0);
LAB_012e3f30:
          if (uVar31 < 7) {
            uVar31 = uVar31 + 1;
          }
        }
        else {
          if (piVar29[0x11] + uVar21 == uVar27 + 1) {
            DataMemoryBarrier(0xb);
            if (piVar29[0x11] + *piVar29 != uVar27) {
              uVar21 = 6;
              if (uVar31 < 6) {
                uVar21 = uVar31;
              }
              uVar27 = 1;
              do {
                uVar30 = uVar27 >> (uVar21 & 0xff);
                uVar27 = uVar27 + 1;
                HintYield();
              } while (uVar30 == 0);
              uVar18 = *puVar17;
              goto LAB_012e3f30;
            }
            uVar21 = 0;
            goto LAB_012e3f68;
          }
          if (uVar31 < 7) {
            uVar21 = 1;
            do {
              uVar27 = uVar21 >> (uVar31 & 0xff);
              uVar21 = uVar21 + 1;
              HintYield();
            } while (uVar27 == 0);
            uVar31 = uVar31 + 1;
          }
          else {
            FUN_01bea67c();
            if (uVar31 < 0xb) {
              uVar31 = uVar31 + 1;
            }
          }
          uVar18 = *puVar17;
        }
        uVar21 = piVar29[0x12];
        uVar27 = uVar18;
      } while ((uVar21 & uVar18) == 0);
    }
    uVar21 = 1;
    uVar31 = 2;
    if (ppppppuVar9 != (uint ******)0x2) {
LAB_012e3f68:
      param_1[1] = (uint)ppppppuVar9;
      param_1[2] = (uint)ppppppuVar28;
      param_1[3] = (uint)ppppppuVar8;
      param_1[4] = (uint)local_48;
      param_1[5] = (uint)local_44;
      uVar31 = uVar21;
    }
LAB_012e3f88:
    *param_1 = uVar31;
    goto LAB_012e466c;
  }
  if (iVar6 != 1) {
    FUN_01656cb0(&local_64,piVar29 + 2);
    ppppppuVar4 = local_60;
    if (local_64 != (uint ******)0x0) {
      local_2c = (uint *******)CONCAT31(local_2c._1_3_,local_5c._0_1_);
      local_30 = (int *******)local_60;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01ce3ba0,&DAT_01cf3738);
    }
    uVar21 = (uint)local_5c & 0xff;
    pppppuVar24 = local_60[10];
    if (pppppuVar24 != (uint *****)0x0) {
      uVar33 = thunk_FUN_01bee35a(0,0x280);
      piVar29 = (int *)((int)uVar33 + (int)((ulonglong)uVar33 >> 0x20));
      if ((char)piVar29[2] == '\0') {
        piVar29 = (int *)FUN_0140afe8();
      }
      iVar6 = 0;
      pppppuVar22 = ppppppuVar4[9];
      do {
        pppppuVar19 = pppppuVar22 + 3;
        ppppuVar25 = *pppppuVar22;
        if (ppppuVar25[2] != (uint ***)*piVar29 || ppppuVar25[3] != (uint ***)piVar29[1]) {
          ppppuVar23 = ppppuVar25 + 5;
          if (*ppppuVar23 == (uint ***)0x0) {
            DataMemoryBarrier(0xb);
LAB_012e4030:
            bVar32 = (bool)hasExclusiveAccess(ppppuVar23);
            if (!bVar32) goto code_r0x012e403c;
            *ppppuVar23 = (uint ***)pppppuVar22[1];
            DataMemoryBarrier(0xb);
            if (pppppuVar22[2] != (uint ****)0x0) {
              DataMemoryBarrier(0xb);
              ppppuVar25[6] = (uint ***)pppppuVar22[2];
            }
            DataMemoryBarrier(0xb);
            pppuVar13 = ppppuVar25[4] + 6;
            do {
              ppuVar15 = *pppuVar13;
              bVar32 = (bool)hasExclusiveAccess(pppuVar13);
            } while (!bVar32);
            *pppuVar13 = (uint **)0x1;
            if (ppuVar15 == (uint **)0xffffffff) {
              FUN_01be6c3c(0xf0,pppuVar13,0x81,1);
            }
            FUN_012e8fb8(&local_64,ppppppuVar4 + 8,iVar6,&DAT_01cf3aa8);
            puVar17 = local_5c;
            ppppppuVar3 = local_64;
            if (local_64 != (uint ******)0x0) {
              FUN_012e8f40(ppppppuVar4,uVar21);
              if (puVar17 == (uint *)0x0) {
                if (ppppppuVar9 != (uint ******)0x2) {
                  FUN_019bb7e0(ppppppuVar28,ppppppuVar8);
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01cf3748);
                }
              }
              else {
                puVar17[1] = (uint)ppppppuVar28;
                puVar17[3] = (uint)local_48;
                *puVar17 = (uint)ppppppuVar9;
                puVar17[2] = (uint)ppppppuVar8;
                puVar17[4] = (uint)local_44;
                DataMemoryBarrier(0xb);
                *(undefined1 *)(puVar17 + 5) = 1;
              }
              *param_1 = 2;
              DataMemoryBarrier(0xb);
              do {
                pppppuVar24 = *ppppppuVar3;
                bVar32 = (bool)hasExclusiveAccess(ppppppuVar3);
              } while (!bVar32);
              *ppppppuVar3 = (uint *****)((int)pppppuVar24 + -1);
              if (pppppuVar24 == (uint *****)0x1) {
                DataMemoryBarrier(0xb);
                FUN_01319d44(ppppppuVar3);
              }
              goto LAB_012e466c;
            }
            break;
          }
LAB_012e4048:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        iVar6 = iVar6 + 1;
        pppppuVar22 = pppppuVar19;
      } while (pppppuVar19 != ppppppuVar4[9] + (int)pppppuVar24 * 3);
    }
    *param_1 = (uint)*(byte *)(ppppppuVar4 + 0xe);
    param_1[1] = (uint)ppppppuVar9;
    param_1[2] = (uint)ppppppuVar28;
    param_1[4] = (uint)local_48;
    param_1[5] = (uint)local_44;
    param_1[3] = (uint)ppppppuVar8;
    FUN_012e8f40(ppppppuVar4,uVar21);
    goto LAB_012e466c;
  }
  DataMemoryBarrier(0xb);
  iVar6 = piVar29[9];
  DataMemoryBarrier(0xb);
  if ((piVar29[8] & 1U) == 0) {
    piVar14 = piVar29 + 9;
    puVar17 = (uint *)(piVar29 + 8);
    uVar27 = 0;
    iVar7 = 0;
    uVar21 = piVar29[8];
    do {
      uVar31 = (uVar21 & 0x3f) >> 1;
      if (uVar31 != 0x1f) {
        if (uVar31 == 0x1e && iVar7 == 0) {
          iVar7 = thunk_FUN_01be5118(0x2ec);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x2ec);
          }
          FUN_01bed93e(iVar7,0,0x2ec);
        }
        if (iVar6 == 0) {
          iVar6 = thunk_FUN_01be5118(0x2ec);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x2ec);
          }
          FUN_01bed93e(iVar6,0,0x2ec);
          if (*piVar14 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar32 = (bool)hasExclusiveAccess(piVar14);
              if (bVar32) {
                *piVar14 = iVar6;
                bVar32 = true;
                goto LAB_012e3d3c;
              }
            } while (*piVar14 == 0);
          }
          bVar32 = false;
          ClearExclusiveLocal();
LAB_012e3d3c:
          if (!bVar32) {
            bVar32 = iVar7 != 0;
            iVar7 = iVar6;
            if (bVar32) {
              thunk_FUN_01be4678();
            }
            goto LAB_012e3c98;
          }
          DataMemoryBarrier(0xb);
          piVar29[1] = iVar6;
        }
        uVar30 = *puVar17;
        if (uVar30 == uVar21) {
          DataMemoryBarrier(0xb);
          bVar11 = hasExclusiveAccess(puVar17);
          if ((bool)bVar11) {
            *puVar17 = uVar21 + 2;
          }
        }
        else {
          bVar11 = 0;
          ClearExclusiveLocal();
        }
        DataMemoryBarrier(0xb);
        if (!(bool)(bVar11 & 1)) {
          iVar6 = *piVar14;
          uVar31 = 1;
          uVar21 = uVar27;
          if (5 < uVar27) {
            uVar21 = 6;
          }
          DataMemoryBarrier(0xb);
          do {
            uVar18 = uVar31 >> (uVar21 & 0xff);
            uVar31 = uVar31 + 1;
            HintYield();
          } while (uVar18 == 0);
          if (uVar27 < 7) {
            uVar27 = uVar27 + 1;
          }
          goto LAB_012e3ca8;
        }
        if (uVar31 == 0x1e) {
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01cf3ad8);
          }
          DataMemoryBarrier(0xb);
          *piVar14 = iVar7;
          DataMemoryBarrier(0xb);
          do {
            bVar32 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar32);
          *puVar17 = *puVar17 + 2;
          DataMemoryBarrier(0xb);
          *(int *)(iVar6 + 0x2e8) = iVar7;
          uVar31 = 0x1e;
          goto LAB_012e4090;
        }
        goto LAB_012e406c;
      }
      if (uVar27 < 7) {
        uVar21 = 1;
        do {
          uVar31 = uVar21 >> (uVar27 & 0xff);
          uVar21 = uVar21 + 1;
          HintYield();
        } while (uVar31 == 0);
        uVar27 = uVar27 + 1;
      }
      else {
        FUN_01bea67c();
        if (uVar27 < 0xb) {
          uVar27 = uVar27 + 1;
        }
      }
LAB_012e3c98:
      uVar30 = *puVar17;
      DataMemoryBarrier(0xb);
      iVar6 = *piVar14;
      DataMemoryBarrier(0xb);
LAB_012e3ca8:
      uVar21 = uVar30;
    } while ((uVar30 & 1) == 0);
    uVar31 = 0;
    iVar6 = 0;
LAB_012e406c:
    if (iVar7 != 0) {
      thunk_FUN_01be4678(iVar7);
    }
    if (iVar6 == 0) goto LAB_012e41c4;
LAB_012e4090:
    puVar12 = (uint *)(iVar6 + uVar31 * 0x18);
    *puVar12 = (uint)ppppppuVar9;
    puVar12[2] = (uint)ppppppuVar8;
    puVar12[1] = (uint)ppppppuVar28;
    puVar12[3] = (uint)local_48;
    puVar17 = puVar12 + 5;
    puVar12[4] = (uint)local_44;
    DataMemoryBarrier(0xb);
    do {
      bVar32 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar32);
    *puVar17 = *puVar17 | 1;
    uVar21 = 2;
    DataMemoryBarrier(0xb);
    if ((char)piVar29[0x18] == '\0') {
      FUN_01656cb0(&local_64,piVar29 + 0x10);
      ppppppuVar8 = local_60;
      if (local_64 == (uint ******)&DAT_00000001) {
        local_2c = (uint *******)CONCAT31(local_2c._1_3_,local_5c._0_1_);
        local_30 = (int *******)local_60;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01ce3be0,&DAT_01cf3ac8);
      }
      uVar27 = (uint)local_5c & 0xff;
      DataMemoryBarrier(0xb);
      if ((char)piVar29[0x18] == '\0') {
        pppppuVar24 = local_60[4];
        ppppppuVar28 = local_60 + 2;
        if (pppppuVar24 != (uint *****)0x0) {
          uVar33 = thunk_FUN_01bee35a(ppppppuVar28,0x280);
          puVar10 = (undefined4 *)((int)uVar33 + (int)((ulonglong)uVar33 >> 0x20));
          if (*(char *)(puVar10 + 2) == '\0') {
            puVar10 = (undefined4 *)FUN_0140afe8();
          }
          iVar6 = 0;
          pppppuVar22 = ppppppuVar8[3];
          do {
            pppppuVar19 = pppppuVar22 + 3;
            ppppuVar25 = *pppppuVar22;
            if (ppppuVar25[2] != (uint ***)*puVar10 || ppppuVar25[3] != (uint ***)puVar10[1]) {
              ppppuVar23 = ppppuVar25 + 5;
              if (*ppppuVar23 == (uint ***)0x0) {
                DataMemoryBarrier(0xb);
LAB_012e4190:
                bVar32 = (bool)hasExclusiveAccess(ppppuVar23);
                if (!bVar32) goto code_r0x012e419c;
                *ppppuVar23 = (uint ***)pppppuVar22[1];
                DataMemoryBarrier(0xb);
                if (pppppuVar22[2] != (uint ****)0x0) {
                  DataMemoryBarrier(0xb);
                  ppppuVar25[6] = (uint ***)pppppuVar22[2];
                }
                DataMemoryBarrier(0xb);
                pppuVar13 = ppppuVar25[4] + 6;
                do {
                  ppuVar15 = *pppuVar13;
                  bVar32 = (bool)hasExclusiveAccess(pppuVar13);
                } while (!bVar32);
                *pppuVar13 = (uint **)0x1;
                if (ppuVar15 == (uint **)0xffffffff) {
                  FUN_01be6c3c(0xf0,pppuVar13,0x81,1);
                }
                FUN_012e8fb8(&local_64,ppppppuVar28,iVar6,&DAT_01cf3aa8);
                if (local_64 != (uint ******)0x0) {
                  DataMemoryBarrier(0xb);
                  do {
                    pppppuVar24 = *local_64;
                    bVar32 = (bool)hasExclusiveAccess(local_64);
                  } while (!bVar32);
                  *local_64 = (uint *****)((int)pppppuVar24 + -1);
                  if (pppppuVar24 == (uint *****)0x1) {
                    DataMemoryBarrier(0xb);
                    FUN_01319d44(local_64);
                  }
                }
                break;
              }
LAB_012e41a8:
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
            }
            iVar6 = iVar6 + 1;
            pppppuVar22 = pppppuVar19;
          } while (pppppuVar19 != ppppppuVar8[3] + (int)pppppuVar24 * 3);
        }
        FUN_012eb96c(ppppppuVar28);
        bVar32 = false;
        if (ppppppuVar8[4] == (uint *****)0x0) {
          bVar32 = ppppppuVar8[7] == (uint *****)0x0;
        }
        DataMemoryBarrier(0xb);
        *(bool *)(piVar29 + 0x18) = bVar32;
        DataMemoryBarrier(0xb);
      }
      FUN_00a97e8c(ppppppuVar8,uVar27);
    }
  }
  else {
LAB_012e41c4:
    uVar21 = 2;
    if (ppppppuVar9 != (uint ******)0x2) {
      uVar21 = 1;
      param_1[1] = (uint)ppppppuVar9;
      param_1[2] = (uint)ppppppuVar28;
      param_1[3] = (uint)ppppppuVar8;
      param_1[4] = (uint)local_48;
      param_1[5] = (uint)local_44;
    }
  }
  *param_1 = uVar21;
LAB_012e466c:
  FUN_019bb7e0(ppppppuVar26,ppppppuVar20);
  return;
code_r0x012e3b50:
  uVar27 = uVar27 + 1;
  puVar17 = puVar17 + 5;
  if (uVar21 == uVar27) goto code_r0x012e3b60;
  goto LAB_012e3b3c;
code_r0x012e3b60:
  uVar27 = uVar21;
  goto LAB_012e3b74;
code_r0x012e403c:
  if (*ppppuVar23 != (uint ***)0x0) goto LAB_012e4048;
  goto LAB_012e4030;
code_r0x012e419c:
  if (*ppppuVar23 != (uint ***)0x0) goto LAB_012e41a8;
  goto LAB_012e4190;
}

