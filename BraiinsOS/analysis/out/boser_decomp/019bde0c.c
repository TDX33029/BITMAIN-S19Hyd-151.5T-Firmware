// FUN_019bde0c @ 019bde0c size=4516 calls_out=18 calls_in=2
// strings: cmdline | environ | statm | write_bytesARM810ARM920ARM922ARM926ARM940ARM946ARM966ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1 | read_bytes

void FUN_019bde0c(uint *param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                 uint param_7,undefined4 param_8,uint param_9,uint param_10,uint param_11,
                 uint param_12)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  undefined4 uVar15;
  int iVar16;
  char cVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined8 local_c0;
  uint local_b4;
  uint local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  byte *local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  uint local_80;
  undefined2 local_7c;
  uint local_78;
  byte *local_74;
  uint local_70;
  undefined2 local_6c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  
  bVar23 = (param_2 & 1) != 0;
  uVar8 = param_4;
  if (bVar23) {
    uVar8 = param_3;
  }
  if (bVar23 && param_3 != 0) {
    *param_1 = 1;
    param_1[1] = uVar8;
    if (param_7 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(2,param_7,&DAT_01d2834c);
    }
  }
  else {
    if (param_7 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(3,param_7,&DAT_01d2836c);
    }
    uVar12 = *(uint *)(param_6 + 0x1c);
    uVar7 = 0;
    if (uVar12 != 0) {
      pbVar18 = *(byte **)(param_6 + 0x18);
      if (uVar12 == 1) {
        bVar21 = *pbVar18;
        if ((bVar21 == 0x2b) || (bVar21 == 0x2d)) goto LAB_019bdfb8;
      }
      else {
        bVar21 = *pbVar18;
      }
      if (bVar21 == 0x2d) {
        iVar10 = uVar12 - 1;
        pbVar18 = pbVar18 + 1;
        if (uVar12 < 9) {
          if (iVar10 == 0) goto LAB_019bdf68;
          uVar8 = 0;
          do {
            bVar21 = *pbVar18;
            if (9 < bVar21 - 0x30) goto LAB_019bdfb8;
            pbVar18 = pbVar18 + 1;
            iVar10 = iVar10 + -1;
            uVar8 = uVar8 * 10 - (bVar21 - 0x30);
          } while (iVar10 != 0);
        }
        else {
          uVar8 = 0;
          do {
            lVar3 = (longlong)(int)uVar8;
            uVar8 = (uint)(lVar3 * 10);
            if ((((int)((ulonglong)(lVar3 * 10) >> 0x20) != (int)uVar8 >> 0x1f) ||
                (uVar12 = *pbVar18 - 0x30, 9 < uVar12)) ||
               (bVar23 = SBORROW4(uVar8,uVar12), uVar8 = uVar8 - uVar12, bVar23)) goto LAB_019bdfb8;
            iVar10 = iVar10 + -1;
            pbVar18 = pbVar18 + 1;
          } while (iVar10 != 0);
        }
      }
      else {
        if (bVar21 == 0x2b) {
          uVar12 = uVar12 - 1;
          pbVar18 = pbVar18 + 1;
        }
        if (uVar12 < 8) {
          if (uVar12 == 0) {
LAB_019bdf68:
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            do {
              bVar21 = *pbVar18;
              if (9 < bVar21 - 0x30) goto LAB_019bdfb8;
              pbVar18 = pbVar18 + 1;
              uVar12 = uVar12 - 1;
              uVar8 = (bVar21 - 0x30) + uVar8 * 10;
            } while (uVar12 != 0);
          }
        }
        else {
          uVar8 = 0;
          do {
            lVar3 = (longlong)(int)uVar8;
            uVar8 = (uint)(lVar3 * 10);
            if ((((int)((ulonglong)(lVar3 * 10) >> 0x20) != (int)uVar8 >> 0x1f) ||
                (uVar20 = *pbVar18 - 0x30, 9 < uVar20)) ||
               (bVar23 = SCARRY4(uVar8,uVar20), uVar8 = uVar8 + uVar20, bVar23)) goto LAB_019bdfb8;
            uVar12 = uVar12 - 1;
            pbVar18 = pbVar18 + 1;
          } while (uVar12 != 0);
        }
      }
      uVar7 = (uint)(uVar8 != 0);
    }
LAB_019bdfb8:
    *param_1 = uVar7;
    param_1[1] = uVar8;
  }
  uVar8 = 0xc;
  if (*(int *)(param_6 + 0x14) == 0) {
    puVar13 = (undefined1 *)0x0;
  }
  else {
    pbVar18 = *(byte **)(param_6 + 0x10);
    puVar13 = (undefined1 *)(uint)*pbVar18;
    if (0x7fffffff < (uint)(int)(char)*pbVar18) {
      if (puVar13 < (undefined1 *)0xe0) {
        puVar13 = (undefined1 *)(pbVar18[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
      }
      else {
        uVar12 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
        if (puVar13 < (undefined1 *)0xf0) {
          puVar13 = (undefined1 *)(uVar12 | ((uint)puVar13 & 0x1f) << 0xc);
        }
        else {
          puVar13 = (undefined1 *)(pbVar18[3] & 0x3f | uVar12 << 6 | ((uint)puVar13 & 7) << 0x12);
        }
      }
    }
    if (puVar13 < (undefined1 *)0x74) {
      uVar8 = 0xc;
      switch(puVar13) {
      case (undefined1 *)0x44:
        uVar8 = 0xb;
        break;
      case (undefined1 *)0x49:
        uVar8 = 0;
        break;
      case (undefined1 *)0x4b:
        uVar8 = 7;
        break;
      case (undefined1 *)0x50:
        uVar8 = 9;
        break;
      case (undefined1 *)0x52:
        uVar8 = 1;
        break;
      case (undefined1 *)0x53:
        uVar8 = 2;
        break;
      case (undefined1 *)0x54:
        uVar8 = 3;
        break;
      case (undefined1 *)0x57:
        uVar8 = 8;
        break;
      case (undefined1 *)0x58:
switchD_019be658_caseD_58:
        uVar8 = 6;
        break;
      case (undefined1 *)0x5a:
        uVar8 = 4;
      }
    }
    else if (puVar13 == (undefined1 *)0x74) {
      uVar8 = 5;
    }
    else {
      if (puVar13 == (undefined1 *)0x78) goto switchD_019be658_caseD_58;
      if (puVar13 == &DAT_00110000) {
        puVar13 = (undefined1 *)0x0;
      }
    }
  }
  param_1[10] = uVar8;
  param_1[0xb] = (uint)puVar13;
  FUN_019bf080(param_1,param_5,*(undefined1 *)(param_4 + 3));
  if (*(char *)(param_4 + 8) != '\0') {
    if (*(char *)(param_4 + 8) == '\x02') {
      uVar8 = 0x80000000;
      if (param_1[0x3a] != 0x80000000) goto LAB_019be0bc;
    }
    else {
      uVar8 = param_1[0x3a];
    }
    FUN_019afed4(param_5);
    FUN_019b0140(param_5,"exe",3);
    FUN_019cac1c(&local_78,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8));
    if (uVar8 != 0x80000000) {
      FUN_0134bd64(uVar8,param_1[0x3b]);
    }
    param_1[0x3a] = local_78;
    param_1[0x3b] = (uint)local_74;
    param_1[0x3c] = local_70;
  }
LAB_019be0bc:
  cVar17 = *(char *)(param_4 + 7);
  if (cVar17 != '\0') {
    uVar8 = 1;
    if (cVar17 != '\x01') {
      uVar8 = param_1[0x33];
    }
    if (cVar17 == '\x01' || uVar8 == 0) {
      FUN_019afed4(param_5);
      FUN_019b0140(param_5,"cmdline",7);
      FUN_019bf7c4(&local_78,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8));
      FUN_006a41c0(param_1 + 0x31);
      param_1[0x31] = local_78;
      param_1[0x32] = (uint)local_74;
      param_1[0x33] = local_70;
    }
  }
  cVar17 = *(char *)(param_4 + 6);
  if (cVar17 != '\0') {
    uVar8 = 1;
    if (cVar17 != '\x01') {
      uVar8 = param_1[0x36];
    }
    if (cVar17 == '\x01' || uVar8 == 0) {
      FUN_019afed4(param_5);
      FUN_019b0140(param_5,"environ",7);
      FUN_019bf7c4(&local_78,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8));
      FUN_006a41c0(param_1 + 0x34);
      param_1[0x34] = local_78;
      param_1[0x35] = (uint)local_74;
      param_1[0x36] = local_70;
    }
  }
  if (*(char *)(param_4 + 4) != '\0') {
    if (*(char *)(param_4 + 4) == '\x02') {
      uVar8 = 0x80000000;
      if (param_1[0x3d] != 0x80000000) goto LAB_019be210;
    }
    else {
      uVar8 = param_1[0x3d];
    }
    FUN_019afed4(param_5);
    FUN_019b0140(param_5,"cwd",3);
    FUN_019cac1c(&local_78,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8));
    if (uVar8 != 0x80000000) {
      FUN_0134bd64(uVar8,param_1[0x3e]);
    }
    param_1[0x3d] = local_78;
    param_1[0x3e] = (uint)local_74;
    param_1[0x3f] = local_70;
  }
LAB_019be210:
  if (*(char *)(param_4 + 5) != '\0') {
    if (*(char *)(param_4 + 5) == '\x02') {
      uVar8 = 0x80000000;
      if (param_1[0x40] != 0x80000000) goto LAB_019be294;
    }
    else {
      uVar8 = param_1[0x40];
    }
    FUN_019afed4(param_5);
    FUN_019b0140(param_5,&DAT_0056d0fc,4);
    FUN_019cac1c(&local_78,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8));
    if (uVar8 != 0x80000000) {
      FUN_0134bd64(uVar8,param_1[0x41]);
    }
    param_1[0x40] = local_78;
    param_1[0x41] = (uint)local_74;
    param_1[0x42] = local_70;
  }
LAB_019be294:
  if ((*(byte *)(param_4 + 2) & 1) != 0) {
    FUN_019afed4(param_5);
    FUN_019b0140(param_5,"statm",5);
    local_74 = &DAT_000001b6;
    local_78 = 0;
    local_6c = 0;
    local_70 = 1;
    FUN_019a581c(&local_a0,&local_78,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8));
    pbVar18 = local_9c;
    if ((char)local_a0 == '\x04') {
      local_a4 = local_9c;
      local_70 = 0;
      local_74 = &DAT_00000001;
      local_78 = 0;
      FUN_019a65b4(&local_a0,&local_a4,&local_78);
      if ((char)local_a0 == '\x04') {
        if (local_70 == 0) {
          param_1[0xe] = 0;
          param_1[0xf] = 0;
LAB_019be700:
          uVar1 = 0;
        }
        else {
          uVar8 = 0;
          do {
            bVar21 = local_74[uVar8];
            if (bVar21 == 0x20) {
              pbVar9 = local_74 + uVar8 + 1;
              uVar12 = local_70 - (uVar8 + 1);
              goto LAB_019be774;
            }
            uVar8 = uVar8 + 1;
          } while (local_70 != uVar8);
          pbVar9 = local_74;
          uVar8 = local_70;
          uVar12 = local_70;
LAB_019be774:
          if (uVar8 == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = 0;
            pbVar14 = local_74;
            do {
              uVar8 = uVar8 - 1;
              uVar1 = (uVar1 & 0xffffffff) * 10 +
                      (CONCAT44((int)(uVar1 >> 0x20) * 10,*pbVar14 - 0x30) & 0xffffffff000000ff);
              pbVar14 = pbVar14 + 1;
            } while (uVar8 != 0);
          }
          uVar19 = (uint)(uVar1 >> 0x20);
          lVar3 = (uVar1 & 0xffffffff) * (ulonglong)param_12;
          lVar4 = (ulonglong)param_11 * (uVar1 & 0xffffffff);
          uVar22 = (uint)lVar4;
          uVar20 = (uint)((ulonglong)lVar4 >> 0x20);
          lVar4 = (ulonglong)param_11 * (ulonglong)uVar19;
          uVar7 = (int)lVar4 + (int)lVar3;
          uVar8 = uVar20 + uVar7;
          if (((uVar19 != 0 && param_12 != 0 || (int)((ulonglong)lVar4 >> 0x20) != 0) ||
              (int)((ulonglong)lVar3 >> 0x20) != 0) || CARRY4(uVar20,uVar7)) {
            uVar8 = 0xffffffff;
            uVar22 = 0xffffffff;
          }
          uVar1 = 0;
          param_1[0xe] = uVar22;
          param_1[0xf] = uVar8;
          if (bVar21 == 0x20) {
            if (uVar12 == 0) {
              uVar1 = 0;
            }
            else {
              uVar8 = 0;
              do {
                if (pbVar9[uVar8] == 0x20) goto LAB_019be86c;
                uVar8 = uVar8 + 1;
              } while (uVar12 != uVar8);
              uVar8 = uVar12;
LAB_019be86c:
              if (uVar8 == 0) goto LAB_019be700;
              uVar1 = 0;
              do {
                uVar8 = uVar8 - 1;
                uVar1 = (uVar1 & 0xffffffff) * 10 +
                        (CONCAT44((int)(uVar1 >> 0x20) * 10,*pbVar9 - 0x30) & 0xffffffff000000ff);
                pbVar9 = pbVar9 + 1;
              } while (uVar8 != 0);
            }
          }
        }
        uVar19 = (uint)(uVar1 >> 0x20);
        lVar3 = (uVar1 & 0xffffffff) * (ulonglong)param_12;
        lVar4 = (ulonglong)param_11 * (ulonglong)uVar19;
        lVar5 = (ulonglong)param_11 * (uVar1 & 0xffffffff);
        uVar20 = (uint)lVar5;
        uVar7 = (uint)((ulonglong)lVar5 >> 0x20);
        uVar12 = (int)lVar4 + (int)lVar3;
        uVar8 = uVar7 + uVar12;
        if (((uVar19 != 0 && param_12 != 0 || (int)((ulonglong)lVar4 >> 0x20) != 0) ||
            (int)((ulonglong)lVar3 >> 0x20) != 0) || CARRY4(uVar7,uVar12)) {
          uVar8 = 0xffffffff;
          uVar20 = 0xffffffff;
        }
        param_1[0xc] = uVar20;
        param_1[0xd] = uVar8;
        FUN_0134bd64(local_78,local_74);
        FUN_01bf01d6(pbVar18);
        goto LAB_019be928;
      }
      FUN_0069263c(local_a0,local_9c);
      FUN_0134bd64(local_78,local_74);
      FUN_01bf01d6(pbVar18);
    }
    else {
      FUN_0069263c(local_a0,local_9c);
    }
    if (param_7 < 0x18) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0x17,param_7,&DAT_01d2833c);
    }
    uVar8 = *(uint *)(param_6 + 0xbc);
    if (uVar8 == 0) {
LAB_019be4c0:
      uVar1 = 0;
    }
    else {
      pbVar18 = *(byte **)(param_6 + 0xb8);
      if (uVar8 != 1) {
        bVar21 = *pbVar18;
LAB_019be3f4:
        if (bVar21 == 0x2b) {
          pbVar18 = pbVar18 + 1;
          uVar8 = uVar8 - 1;
        }
        if (uVar8 < 0x11) {
          if (uVar8 != 0) {
            uVar1 = 0;
            do {
              bVar21 = *pbVar18;
              if (9 < bVar21 - 0x30) goto LAB_019be4c0;
              pbVar18 = pbVar18 + 1;
              uVar8 = uVar8 - 1;
              uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,bVar21 - 0x30);
            } while (uVar8 != 0);
            goto LAB_019be4c4;
          }
        }
        else {
          uVar7 = 0;
          uVar12 = 0;
          do {
            uVar1 = CONCAT44(uVar12,uVar7);
            if (uVar8 == 0) goto LAB_019be4c4;
            uVar20 = (uint)((ulonglong)uVar7 * 10);
            uVar22 = (uint)((ulonglong)uVar7 * 10 >> 0x20);
            uVar7 = (uint)((ulonglong)uVar12 * 10);
            uVar19 = uVar22 + uVar7;
            if (((int)((ulonglong)uVar12 * 10 >> 0x20) != 0 || CARRY4(uVar22,uVar7)) ||
               (uVar22 = *pbVar18 - 0x30, 9 < uVar22)) break;
            uVar7 = uVar20 + uVar22;
            pbVar18 = pbVar18 + 1;
            uVar12 = uVar19 + CARRY4(uVar20,uVar22);
            uVar8 = uVar8 - 1;
          } while (!CARRY4(uVar19,(uint)CARRY4(uVar20,uVar22)));
        }
        goto LAB_019be4c0;
      }
      bVar21 = *pbVar18;
      if (bVar21 == 0x2b) goto LAB_019be4c0;
      uVar1 = 0;
      if (bVar21 != 0x2d) goto LAB_019be3f4;
    }
LAB_019be4c4:
    uVar22 = (uint)(uVar1 >> 0x20);
    lVar3 = (uVar1 & 0xffffffff) * (ulonglong)param_12;
    lVar4 = (ulonglong)param_11 * (uVar1 & 0xffffffff);
    uVar8 = (uint)lVar4;
    uVar20 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar4 = (ulonglong)param_11 * (ulonglong)uVar22;
    uVar12 = (int)lVar4 + (int)lVar3;
    uVar19 = uVar20 + uVar12;
    pbVar18 = *(byte **)(param_6 + 0xb0);
    uVar7 = *(uint *)(param_6 + 0xb4);
    if (((uVar22 != 0 && param_12 != 0 || (int)((ulonglong)lVar4 >> 0x20) != 0) ||
        (int)((ulonglong)lVar3 >> 0x20) != 0) || CARRY4(uVar20,uVar12)) {
      uVar8 = 0xffffffff;
      uVar19 = 0xffffffff;
    }
    param_1[0xc] = uVar8;
    param_1[0xd] = uVar19;
    if (uVar7 == 0) {
      uVar1 = 0;
    }
    else {
      if (uVar7 == 1) {
        bVar21 = *pbVar18;
        if (bVar21 != 0x2b) {
          uVar1 = 0;
          if (bVar21 == 0x2d) goto LAB_019be75c;
          goto LAB_019be57c;
        }
      }
      else {
        bVar21 = *pbVar18;
LAB_019be57c:
        if (bVar21 == 0x2b) {
          pbVar18 = pbVar18 + 1;
          uVar7 = uVar7 - 1;
        }
        if (uVar7 < 0x11) {
          if (uVar7 != 0) {
            uVar1 = 0;
            do {
              bVar21 = *pbVar18;
              if (9 < bVar21 - 0x30) goto LAB_019be6e8;
              pbVar18 = pbVar18 + 1;
              uVar7 = uVar7 - 1;
              uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,bVar21 - 0x30);
            } while (uVar7 != 0);
            goto LAB_019be75c;
          }
        }
        else {
          uVar8 = 0;
          uVar12 = 0;
          do {
            uVar1 = CONCAT44(uVar12,uVar8);
            if (uVar7 == 0) goto LAB_019be75c;
            uVar20 = (uint)((ulonglong)uVar8 * 10);
            uVar22 = (uint)((ulonglong)uVar8 * 10 >> 0x20);
            uVar8 = (uint)((ulonglong)uVar12 * 10);
            uVar19 = uVar22 + uVar8;
            if (((int)((ulonglong)uVar12 * 10 >> 0x20) != 0 || CARRY4(uVar22,uVar8)) ||
               (uVar22 = *pbVar18 - 0x30, 9 < uVar22)) break;
            uVar8 = uVar20 + uVar22;
            pbVar18 = pbVar18 + 1;
            uVar12 = uVar19 + CARRY4(uVar20,uVar22);
            uVar7 = uVar7 - 1;
          } while (!CARRY4(uVar19,(uint)CARRY4(uVar20,uVar22)));
        }
      }
LAB_019be6e8:
      uVar1 = 0;
    }
LAB_019be75c:
    *(ulonglong *)(param_1 + 0xe) = uVar1;
  }
LAB_019be928:
  if (param_7 < 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0xd,param_7,&DAT_01d2837c);
  }
  uVar8 = *(uint *)(param_6 + 0x6c);
  if (uVar8 == 0) {
LAB_019be9c8:
    uVar1 = 0;
  }
  else {
    pbVar18 = *(byte **)(param_6 + 0x68);
    if (uVar8 != 1) {
      bVar21 = *pbVar18;
LAB_019be96c:
      if (bVar21 == 0x2b) {
        pbVar18 = pbVar18 + 1;
        uVar8 = uVar8 - 1;
      }
      if (uVar8 < 0x11) {
        if (uVar8 != 0) {
          uVar1 = 0;
          do {
            bVar21 = *pbVar18;
            if (9 < bVar21 - 0x30) goto LAB_019be9c8;
            pbVar18 = pbVar18 + 1;
            uVar8 = uVar8 - 1;
            uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,bVar21 - 0x30);
          } while (uVar8 != 0);
          goto LAB_019be9cc;
        }
      }
      else {
        uVar12 = 0;
        uVar7 = 0;
        do {
          uVar1 = CONCAT44(uVar7,uVar12);
          if (uVar8 == 0) goto LAB_019be9cc;
          uVar20 = (uint)((ulonglong)uVar12 * 10);
          uVar22 = (uint)((ulonglong)uVar12 * 10 >> 0x20);
          uVar12 = (uint)((ulonglong)uVar7 * 10);
          uVar19 = uVar22 + uVar12;
          if (((int)((ulonglong)uVar7 * 10 >> 0x20) != 0 || CARRY4(uVar22,uVar12)) ||
             (uVar22 = *pbVar18 - 0x30, 9 < uVar22)) break;
          uVar12 = uVar20 + uVar22;
          pbVar18 = pbVar18 + 1;
          uVar7 = uVar19 + CARRY4(uVar20,uVar22);
          uVar8 = uVar8 - 1;
        } while (!CARRY4(uVar19,(uint)CARRY4(uVar20,uVar22)));
      }
      goto LAB_019be9c8;
    }
    bVar21 = *pbVar18;
    if (bVar21 == 0x2b) goto LAB_019be9c8;
    uVar1 = 0;
    if (bVar21 != 0x2d) goto LAB_019be96c;
  }
LAB_019be9cc:
  if (param_7 == 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0xe,0xe,&DAT_01d2838c);
  }
  uVar8 = *(uint *)(param_6 + 0x74);
  if (uVar8 != 0) {
    pbVar18 = *(byte **)(param_6 + 0x70);
    if (uVar8 == 1) {
      bVar21 = *pbVar18;
      if (bVar21 == 0x2b) goto LAB_019bea80;
      uVar25 = 0;
      if (bVar21 == 0x2d) goto LAB_019beb6c;
    }
    else {
      bVar21 = *pbVar18;
    }
    if (bVar21 == 0x2b) {
      pbVar18 = pbVar18 + 1;
      uVar8 = uVar8 - 1;
    }
    if (0x10 < uVar8) {
      uVar12 = 0;
      uVar7 = 0;
      do {
        if (uVar8 == 0) goto LAB_019beb64;
        uVar20 = (uint)((ulonglong)uVar12 * 10);
        uVar12 = (uint)((ulonglong)uVar12 * 10 >> 0x20);
        uVar19 = (uint)((ulonglong)uVar7 * 10);
        uVar22 = uVar12 + uVar19;
        if (((int)((ulonglong)uVar7 * 10 >> 0x20) != 0 || CARRY4(uVar12,uVar19)) ||
           (uVar19 = *pbVar18 - 0x30, 9 < uVar19)) break;
        uVar12 = uVar20 + uVar19;
        pbVar18 = pbVar18 + 1;
        uVar7 = uVar22 + CARRY4(uVar20,uVar19);
        uVar8 = uVar8 - 1;
      } while (!CARRY4(uVar22,(uint)CARRY4(uVar20,uVar19)));
      uVar7 = 0;
      uVar12 = 0;
LAB_019beb64:
      uVar25 = CONCAT44(uVar7,uVar12);
      goto LAB_019beb6c;
    }
    if (uVar8 != 0) {
      uVar25 = 0;
      do {
        bVar21 = *pbVar18;
        if (9 < bVar21 - 0x30) goto LAB_019bea80;
        pbVar18 = pbVar18 + 1;
        uVar8 = uVar8 - 1;
        uVar25 = (uVar25 & 0xffffffff) * 10 + CONCAT44((int)(uVar25 >> 0x20) * 10,bVar21 - 0x30);
      } while (uVar8 != 0);
      goto LAB_019beb6c;
    }
  }
LAB_019bea80:
  uVar25 = 0;
LAB_019beb6c:
  uVar8 = param_1[0x12];
  param_1[0x12] = (uint)uVar25;
  param_1[0x14] = (uint)*(ulonglong *)(param_1 + 0x10);
  param_1[0x15] = param_1[0x11];
  param_1[0x16] = uVar8;
  param_1[0x17] = param_1[0x13];
  uVar20 = param_1[0x18];
  uVar12 = param_1[0x19];
  uVar7 = param_9 - uVar20;
  uVar8 = param_10 - (uVar12 + (uVar20 > param_9));
  cVar17 = *(char *)(param_4 + 1);
  *(undefined1 *)(param_1 + 0x46) = 1;
  if (param_10 <= uVar12 && (uint)(uVar20 <= param_9) <= param_10 - uVar12) {
    uVar8 = 0;
    uVar7 = 0;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar1;
  param_1[0x13] = (uint)(uVar25 >> 0x20);
  param_1[0x1c] = uVar7;
  param_1[0x1d] = uVar8;
  if (cVar17 != '\0') {
    FUN_019afed4(param_5);
    FUN_019b0140(param_5,"io",2);
    FUN_019caabc(&local_78,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8),0x4000);
    pbVar18 = local_74;
    uVar8 = local_78;
    if (local_78 == 0x80000000) {
      FUN_019bd494(&local_78);
    }
    else {
      local_80 = local_70;
      local_90 = local_70;
      local_98 = local_70;
      local_9c = local_74;
      local_c0 = *(ulonglong *)(param_1 + 0x2a);
      local_7c = 1;
      local_84 = 0;
      local_88 = 1;
      local_8c = 10;
      local_a0 = 10;
      local_94 = 0;
      uVar1 = *(ulonglong *)(param_1 + 0x2c);
      bVar23 = true;
LAB_019becac:
      do {
        do {
          bVar6 = bVar23;
          uVar24 = FUN_00b156d4(&local_a0);
          uVar15 = (undefined4)((ulonglong)uVar24 >> 0x20);
          if ((int)uVar24 == 0) goto LAB_019befa4;
          FUN_01306b30(&local_78,(int)uVar24,uVar15,0x5312dd,2);
          local_30 = 1;
          local_38 = 0;
          local_34 = uVar15;
          uVar24 = FUN_007a6d1c(&local_78);
          iVar16 = (int)((ulonglong)uVar24 >> 0x20);
          iVar10 = (int)uVar24;
          bVar23 = bVar6;
        } while (iVar10 == 0);
        if (iVar16 == 10) {
          iVar10 = thunk_FUN_01bed842(iVar10,"read_bytes",10);
          if (iVar10 != 0) goto LAB_019becac;
          param_1[0x26] = (uint)local_c0;
          param_1[0x27] = local_c0._4_4_;
          uVar25 = FUN_007a6d1c(&local_78);
          iVar10 = (int)(uVar25 >> 0x20);
          pcVar11 = (char *)uVar25;
          if (pcVar11 == (char *)0x0 || iVar10 == 0) {
LAB_019bed64:
            uVar2 = local_c0;
          }
          else {
            if (iVar10 == 1) {
              cVar17 = *pcVar11;
              if ((cVar17 == '+') || (cVar17 == '-')) goto LAB_019bed64;
            }
            else {
              cVar17 = *pcVar11;
            }
            if (cVar17 == '+') {
              uVar25 = CONCAT44(iVar10 + -1,pcVar11 + 1);
            }
            if (0x10ffffffff < uVar25) {
              uVar12 = 0;
              uVar7 = 0;
              do {
                iVar10 = (int)(uVar25 >> 0x20);
                uVar2 = CONCAT44(uVar7,uVar12);
                if (iVar10 == 0) goto LAB_019bed6c;
                uVar20 = (uint)((ulonglong)uVar12 * 10);
                uVar22 = (uint)((ulonglong)uVar12 * 10 >> 0x20);
                uVar12 = (uint)((ulonglong)uVar7 * 10);
                uVar19 = uVar22 + uVar12;
                if (((int)((ulonglong)uVar7 * 10 >> 0x20) != 0 || CARRY4(uVar22,uVar12)) ||
                   (uVar22 = *(byte *)uVar25 - 0x30, 9 < uVar22)) break;
                uVar12 = uVar20 + uVar22;
                uVar7 = uVar19 + CARRY4(uVar20,uVar22);
                uVar25 = CONCAT44(iVar10 + -1,(byte *)uVar25 + 1);
              } while (!CARRY4(uVar19,(uint)CARRY4(uVar20,uVar22)));
              goto LAB_019bed64;
            }
            if ((int)(uVar25 >> 0x20) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = 0;
              do {
                uVar12 = *(byte *)uVar25 - 0x30;
                if (9 < uVar12) goto LAB_019bed64;
                iVar10 = (int)(uVar25 >> 0x20) + -1;
                uVar25 = CONCAT44(iVar10,(byte *)uVar25 + 1);
                uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,uVar12);
              } while (iVar10 != 0);
            }
          }
LAB_019bed6c:
          *(ulonglong *)(param_1 + 0x2a) = uVar2;
          local_c0 = uVar2;
        }
        else {
          if ((iVar16 != 0xb) ||
             (iVar10 = thunk_FUN_01bed842(iVar10,
                                          "write_bytesARM810ARM920ARM922ARM926ARM940ARM946ARM966ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
                                          ,0xb), iVar10 != 0)) goto LAB_019becac;
          local_b0 = (uint)(uVar1 >> 0x20);
          local_b4 = (uint)uVar1;
          param_1[0x28] = local_b4;
          param_1[0x29] = local_b0;
          uVar25 = FUN_007a6d1c(&local_78);
          iVar10 = (int)(uVar25 >> 0x20);
          pcVar11 = (char *)uVar25;
          if (pcVar11 == (char *)0x0 || iVar10 == 0) {
LAB_019bedb0:
            uVar2 = uVar1;
          }
          else {
            if (iVar10 == 1) {
              cVar17 = *pcVar11;
              if ((cVar17 == '+') || (cVar17 == '-')) goto LAB_019bedb0;
            }
            else {
              cVar17 = *pcVar11;
            }
            if (cVar17 == '+') {
              uVar25 = CONCAT44(iVar10 + -1,pcVar11 + 1);
            }
            if (0x10ffffffff < uVar25) {
              uVar12 = 0;
              uVar7 = 0;
              do {
                iVar10 = (int)(uVar25 >> 0x20);
                uVar2 = CONCAT44(uVar7,uVar12);
                if (iVar10 == 0) goto LAB_019bedb8;
                uVar20 = (uint)((ulonglong)uVar12 * 10);
                uVar22 = (uint)((ulonglong)uVar12 * 10 >> 0x20);
                uVar12 = (uint)((ulonglong)uVar7 * 10);
                uVar19 = uVar22 + uVar12;
                if (((int)((ulonglong)uVar7 * 10 >> 0x20) != 0 || CARRY4(uVar22,uVar12)) ||
                   (uVar22 = *(byte *)uVar25 - 0x30, 9 < uVar22)) break;
                uVar12 = uVar20 + uVar22;
                uVar7 = uVar19 + CARRY4(uVar20,uVar22);
                uVar25 = CONCAT44(iVar10 + -1,(byte *)uVar25 + 1);
              } while (!CARRY4(uVar19,(uint)CARRY4(uVar20,uVar22)));
              goto LAB_019bedb0;
            }
            if ((int)(uVar25 >> 0x20) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = 0;
              do {
                uVar12 = *(byte *)uVar25 - 0x30;
                if (9 < uVar12) goto LAB_019bedb0;
                iVar10 = (int)(uVar25 >> 0x20) + -1;
                uVar25 = CONCAT44(iVar10,(byte *)uVar25 + 1);
                uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,uVar12);
              } while (iVar10 != 0);
            }
          }
LAB_019bedb8:
          *(ulonglong *)(param_1 + 0x2c) = uVar2;
          uVar1 = uVar2;
        }
        bVar23 = false;
      } while (bVar6);
LAB_019befa4:
      FUN_0134bd64(uVar8,pbVar18);
    }
  }
  return;
}

