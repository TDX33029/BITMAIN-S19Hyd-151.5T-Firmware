// FUN_010c7bf0 @ 010c7bf0 size=1392 calls_out=6 calls_in=2
// strings: 

void FUN_010c7bf0(undefined4 *param_1,int param_2,char *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  char cVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  char *pcVar21;
  uint uVar22;
  int iVar23;
  char *pcVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  ulonglong uVar28;
  char local_61;
  char *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 local_2b;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    *param_1 = 0x80000002;
    return;
  }
  uVar28 = FUN_010a61e4(*(undefined4 *)(param_3 + 0xc));
  iVar23 = (int)(uVar28 >> 0x20);
  pbVar7 = (byte *)uVar28;
  if (iVar23 == 0) {
    uVar28 = uVar28 & 0xffffffff;
  }
  else if (*pbVar7 == 0x5b) {
    pbVar19 = pbVar7 + iVar23;
    pbVar5 = (byte *)0x0;
    uVar11 = 0x5b;
    pbVar14 = pbVar7;
    do {
      pbVar6 = pbVar5;
      pbVar5 = pbVar14 + 1;
      pbVar13 = pbVar14;
      while( true ) {
        pbVar14 = pbVar5;
        pbVar5 = pbVar6 + ((int)pbVar14 - (int)pbVar13);
        if (uVar11 != 0x5d && uVar11 != 0x5b) {
          if (pbVar14 == pbVar19) goto LAB_010c7d04;
          goto LAB_010c7f10;
        }
        if (pbVar14 == pbVar19) {
          pbVar6 = (byte *)0x0;
          pbVar5 = (byte *)0x0;
          goto LAB_010c7d04;
        }
        uVar11 = (uint)*pbVar14;
        if ((uint)(int)(char)*pbVar14 < 0x80000000) break;
        pbVar6 = pbVar5;
        pbVar13 = pbVar14;
        if (uVar11 < 0xe0) {
          uVar11 = pbVar14[1] & 0x3f | (uVar11 & 0x1f) << 6;
          pbVar5 = pbVar14 + 2;
        }
        else {
          uVar22 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
          if (uVar11 < 0xf0) {
            uVar11 = uVar22 | (uVar11 & 0x1f) << 0xc;
            pbVar5 = pbVar14 + 3;
          }
          else {
            uVar11 = pbVar14[3] & 0x3f | uVar22 << 6 | (uVar11 & 7) << 0x12;
            pbVar5 = pbVar14 + 4;
          }
        }
      }
    } while( true );
  }
  goto LAB_010c7d0c;
  while (pbVar19 = pbVar13, pbVar14 != pbVar13) {
LAB_010c7f10:
    pbVar13 = pbVar19 + -1;
    uVar11 = (uint)(char)*pbVar13;
    if (0x7fffffff < uVar11) {
      pbVar13 = pbVar19 + -2;
      bVar2 = *pbVar13;
      if ((char)bVar2 < -0x40) {
        pbVar13 = pbVar19 + -3;
        bVar3 = *pbVar13;
        if ((char)bVar3 < -0x40) {
          pbVar13 = pbVar19 + -4;
          uVar22 = (int)(char)bVar3 & 0x3fU | (*pbVar13 & 7) << 6;
        }
        else {
          uVar22 = bVar3 & 0xf;
        }
        uVar22 = (int)(char)bVar2 & 0x3fU | uVar22 << 6;
      }
      else {
        uVar22 = bVar2 & 0x1f;
      }
      uVar11 = uVar11 & 0x3f | uVar22 << 6;
    }
    if (uVar11 != 0x5d && uVar11 != 0x5b) {
      pbVar5 = pbVar19 + ((int)pbVar5 - (int)pbVar14);
      break;
    }
  }
LAB_010c7d04:
  uVar28 = CONCAT44((int)pbVar5 - (int)pbVar6,pbVar7 + (int)pbVar6);
LAB_010c7d0c:
  uVar11 = (uint)(uVar28 >> 0x20);
  iVar23 = (int)uVar28;
  local_50 = uVar28;
  FUN_00fb3af4(&local_38,&local_50);
  if ((char)local_38 == '\0') {
    FUN_00fb3f68(&local_38,&local_50);
    if ((char)local_38 == '\x01') {
      pcVar21 = (char *)CONCAT13((undefined1)uStack_34,local_38._1_3_);
      local_48 = CONCAT13((undefined1)uStack_30,uStack_34._1_3_);
      uStack_44 = CONCAT13(uStack_2c,uStack_30._1_3_);
      uStack_40 = local_2b;
      if (local_50._4_4_ == 0) {
        cVar17 = '\x01';
        uStack_30 = local_2b;
        local_38 = local_48;
        uStack_34 = uStack_44;
        goto LAB_010c7fa8;
      }
    }
LAB_010c7d80:
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar25 = *(int *)(param_2 + 0x10);
      iVar8 = iVar25 + *(int *)(param_2 + 0x14) * 0xc;
      do {
        uVar22 = *(uint *)(iVar25 + 8);
        pbVar7 = *(byte **)(iVar25 + 4);
        if (uVar22 == uVar11) {
          pbVar14 = pbVar7;
          uVar4 = uVar28;
          do {
            iVar15 = (int)(uVar4 >> 0x20);
            if (iVar15 == 0) goto LAB_010c8084;
            uVar20 = (uint)*(byte *)uVar4;
            uVar4 = CONCAT44(iVar15 + -1,(byte *)uVar4 + 1);
            uVar18 = (uint)*pbVar14;
            if (uVar20 - 0x41 < 0x1a) {
              uVar20 = uVar20 | 0x20;
            }
            if (uVar18 - 0x41 < 0x1a) {
              uVar18 = uVar18 | 0x20;
            }
            pbVar14 = pbVar14 + 1;
          } while (uVar18 == uVar20);
        }
        if (uVar22 != 0) {
          uVar18 = (uint)*pbVar7;
          bVar26 = uVar18 == 0x2e;
          if (bVar26) {
            uVar18 = uVar22 - 1;
          }
          pbVar14 = pbVar7;
          uVar4 = uVar28;
          if (bVar26 && uVar18 == uVar11) {
            do {
              iVar15 = (int)(uVar4 >> 0x20);
              if (iVar15 == 0) goto LAB_010c8084;
              uVar18 = (uint)*(byte *)uVar4;
              uVar20 = (uint)pbVar14[1];
              if (uVar18 - 0x41 < 0x1a) {
                uVar18 = uVar18 | 0x20;
              }
              if (uVar20 - 0x41 < 0x1a) {
                uVar20 = uVar20 | 0x20;
              }
              pbVar14 = pbVar14 + 1;
              uVar4 = CONCAT44(iVar15 + -1,(byte *)uVar4 + 1);
            } while (uVar20 == uVar18);
          }
        }
        bVar27 = uVar22 <= uVar11;
        uVar18 = uVar11 - uVar22;
        bVar26 = uVar18 == 0;
        if (!bVar27) {
          uVar18 = 0;
        }
        if (bVar27 && !bVar26) {
          bVar27 = uVar18 <= uVar11;
          bVar26 = uVar11 == uVar18;
        }
        if (((!bVar27 || bVar26) || (-0x41 < *(char *)(iVar23 + uVar18))) &&
           (uVar11 - uVar18 == uVar22)) {
          uVar20 = 0;
          do {
            if (uVar22 == uVar20) {
              if (((uVar22 != 0) && (*pbVar7 == 0x2e)) ||
                 ((CARRY4(uVar11,~uVar22) && (*(char *)(iVar23 + uVar11 + ~uVar22) == '.'))))
              goto LAB_010c8084;
              goto LAB_010c7e80;
            }
            uVar12 = (uint)pbVar7[uVar20];
            uVar16 = (uint)*(byte *)(iVar23 + uVar20 + uVar18);
            uVar20 = uVar20 + 1;
            if (uVar12 - 0x41 < 0x1a) {
              uVar12 = uVar12 | 0x20;
            }
            if (uVar16 - 0x41 < 0x1a) {
              uVar16 = uVar16 | 0x20;
            }
          } while (uVar16 == uVar12);
        }
        if (uVar22 == 1) {
          pbVar7 = (byte *)(uint)*pbVar7;
        }
        if (uVar22 == 1 && pbVar7 == &DAT_0000002a) goto LAB_010c8084;
LAB_010c7e80:
        iVar25 = iVar25 + 0xc;
      } while (iVar25 != iVar8);
    }
  }
  else {
    if (local_50._4_4_ != 0) goto LAB_010c7d80;
    pcVar21 = (char *)CONCAT13((undefined1)uStack_34,local_38._1_3_);
    cVar17 = '\0';
LAB_010c7fa8:
    local_54 = uStack_30;
    local_58 = uStack_34;
    local_5c = local_38;
    local_61 = cVar17;
    local_60 = pcVar21;
    if (*(int *)(param_2 + 8) != 0) {
      iVar23 = *(int *)(param_2 + 8) * 0x12;
      if (cVar17 == '\0') {
        pcVar9 = *(char **)(param_2 + 4);
        do {
          pcVar24 = pcVar9 + 0x12;
          if (*pcVar9 == '\x02') {
            pcVar1 = pcVar9 + 1;
            if (*pcVar1 == '\0') {
              pcVar9 = *(char **)(pcVar9 + 2);
            }
            if (*pcVar1 == '\0' && pcVar21 == pcVar9) goto LAB_010c8084;
          }
          else {
            iVar8 = FUN_01154aec(pcVar9,&local_61);
            if (iVar8 != 0) goto LAB_010c8084;
          }
          iVar23 = iVar23 + -0x12;
          pcVar9 = pcVar24;
        } while (iVar23 != 0);
      }
      else {
        pcVar21 = *(char **)(param_2 + 4);
        do {
          if (*pcVar21 == '\x02') {
            if (cVar17 == pcVar21[1]) {
              iVar8 = thunk_FUN_016dd50a(&local_60,pcVar21 + 2,0x10);
              if (iVar8 == 0) goto LAB_010c8084;
            }
          }
          else {
            iVar8 = FUN_01154aec(pcVar21,&local_61);
            if (iVar8 != 0) {
LAB_010c8084:
              *param_1 = 0x80000002;
              return;
            }
          }
          iVar23 = iVar23 + -0x12;
          pcVar21 = pcVar21 + 0x12;
        } while (iVar23 != 0);
      }
    }
  }
  if (*param_3 == '\0') goto LAB_010c8130;
  if (*param_3 == '\x01') {
    if (param_3[1] == '\0') {
      piVar10 = &DAT_00567da8;
      goto LAB_010c8110;
    }
    piVar10 = (int *)&DAT_0041860c;
LAB_010c80e0:
    iVar23 = thunk_FUN_016dd50a(piVar10,&DAT_0041860c,5);
    if (iVar23 != 0) goto LAB_010c8130;
    piVar10 = (int *)(param_2 + 0x5c);
    iVar23 = *piVar10;
  }
  else {
    piVar10 = *(int **)(*(int *)(param_3 + 4) + 4);
    iVar23 = *(int *)(*(int *)(param_3 + 4) + 8);
    if (iVar23 == 5) goto LAB_010c80e0;
    if (iVar23 != 4) goto LAB_010c8130;
LAB_010c8110:
    if (*piVar10 != 0x70747468) goto LAB_010c8130;
    piVar10 = (int *)(param_2 + 0x18);
    iVar23 = *piVar10;
  }
  if (iVar23 != -0x7ffffffe) {
    FUN_010c72ac(param_1,piVar10);
    return;
  }
LAB_010c8130:
  *param_1 = 0x80000002;
  return;
}

