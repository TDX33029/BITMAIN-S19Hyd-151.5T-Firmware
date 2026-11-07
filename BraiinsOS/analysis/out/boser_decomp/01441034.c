// FUN_01441034 @ 01441034 size=1292 calls_out=6 calls_in=2
// strings: 

void FUN_01441034(undefined4 *param_1,int param_2,char *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  bool bVar23;
  bool bVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  
  if (*(int *)(param_3 + 0x10) == 0) {
LAB_01441140:
    *param_1 = 0x80000002;
    return;
  }
  uVar25 = FUN_01415984(*(undefined4 *)(param_3 + 0xc));
  iVar15 = (int)(uVar25 >> 0x20);
  pbVar19 = (byte *)uVar25;
  if (pbVar19 == (byte *)0x0) goto LAB_01441140;
  if (iVar15 == 0) {
    uVar25 = uVar25 & 0xffffffff;
  }
  else if (*pbVar19 == 0x5b) {
    pbVar20 = pbVar19 + iVar15;
    uVar10 = 0x5b;
    pbVar11 = pbVar19;
    pbVar22 = (byte *)0x0;
    while( true ) {
      if ((char)uVar10 < '\0') {
        if (uVar10 < 0xe0) {
          uVar10 = pbVar11[1] & 0x3f | (uVar10 & 0x1f) << 6;
          pbVar13 = pbVar11 + 2;
        }
        else {
          uVar18 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
          if (uVar10 < 0xf0) {
            uVar10 = uVar18 | (uVar10 & 0x1f) << 0xc;
            pbVar13 = pbVar11 + 3;
          }
          else {
            uVar10 = pbVar11[3] & 0x3f | uVar18 << 6 | (uVar10 & 7) << 0x12;
            pbVar13 = pbVar11 + 4;
          }
        }
      }
      else {
        pbVar13 = pbVar11 + 1;
      }
      iVar15 = 0;
      pbVar17 = pbVar22 + ((int)pbVar13 - (int)pbVar11);
      do {
        if (iVar15 == 8) {
          if (pbVar13 == pbVar20) goto LAB_01441208;
          goto LAB_01441160;
        }
        puVar1 = (uint *)((int)&DAT_00570700 + iVar15);
        iVar15 = iVar15 + 4;
      } while (*puVar1 != uVar10);
      if (pbVar13 == pbVar20) break;
      uVar10 = (uint)*pbVar13;
      pbVar11 = pbVar13;
      pbVar22 = pbVar17;
    }
    pbVar22 = (byte *)0x0;
    pbVar17 = (byte *)0x0;
    goto LAB_01441208;
  }
  goto LAB_01441210;
LAB_01441160:
  do {
    pbVar11 = pbVar20 + -1;
    uVar10 = (uint)(char)*pbVar11;
    if (0x7fffffff < uVar10) {
      pbVar11 = pbVar20 + -2;
      bVar2 = *pbVar11;
      if ((char)bVar2 < -0x40) {
        pbVar11 = pbVar20 + -3;
        bVar3 = *pbVar11;
        if ((char)bVar3 < -0x40) {
          pbVar11 = pbVar20 + -4;
          uVar18 = (int)(char)bVar3 & 0x3fU | (*pbVar11 & 7) << 6;
        }
        else {
          uVar18 = bVar3 & 0xf;
        }
        uVar18 = (int)(char)bVar2 & 0x3fU | uVar18 << 6;
      }
      else {
        uVar18 = bVar2 & 0x1f;
      }
      uVar10 = uVar10 & 0x3f | uVar18 << 6;
    }
    iVar15 = 0;
    do {
      if (iVar15 == 8) {
        pbVar17 = pbVar20 + ((int)pbVar17 - (int)pbVar13);
        goto LAB_01441208;
      }
      puVar1 = (uint *)((int)&DAT_00570700 + iVar15);
      iVar15 = iVar15 + 4;
    } while (*puVar1 != uVar10);
    pbVar20 = pbVar11;
  } while (pbVar13 != pbVar11);
LAB_01441208:
  uVar25 = CONCAT44(pbVar17 + -(int)pbVar22,pbVar19 + (int)pbVar22);
LAB_01441210:
  puVar16 = (undefined1 *)(uVar25 >> 0x20);
  iVar15 = (int)uVar25;
  FUN_01304dac(&local_50,iVar15,puVar16);
  if ((char)local_50 == '\x02') {
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar14 = *(int *)(param_2 + 0x10);
      iVar6 = iVar14 + *(int *)(param_2 + 0x14) * 0xc;
      do {
        pbVar19 = *(byte **)(iVar14 + 4);
        puVar21 = *(undefined1 **)(iVar14 + 8);
        if (puVar21 == puVar16) {
          pbVar11 = pbVar19;
          uVar4 = uVar25;
          do {
            iVar7 = (int)(uVar4 >> 0x20);
            if (iVar7 == 0) goto LAB_01441468;
            uVar10 = (uint)*(byte *)uVar4;
            uVar4 = CONCAT44(iVar7 + -1,(byte *)uVar4 + 1);
            uVar18 = (uint)*pbVar11;
            if (uVar10 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 0x20;
            }
            if (uVar18 - 0x41 < 0x1a) {
              uVar18 = uVar18 | 0x20;
            }
            pbVar11 = pbVar11 + 1;
          } while (uVar18 == uVar10);
        }
        uVar26 = FUN_01443294(pbVar19,puVar21,0x2e);
        pbVar11 = (byte *)uVar26;
        if ((pbVar11 != (byte *)0x0) &&
           (uVar4 = uVar25, (undefined1 *)((ulonglong)uVar26 >> 0x20) == puVar16)) {
          do {
            iVar7 = (int)(uVar4 >> 0x20);
            if (iVar7 == 0) goto LAB_01441468;
            uVar10 = (uint)*(byte *)uVar4;
            uVar18 = (uint)*pbVar11;
            if (uVar10 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 0x20;
            }
            if (uVar18 - 0x41 < 0x1a) {
              uVar18 = uVar18 | 0x20;
            }
            pbVar11 = pbVar11 + 1;
            uVar4 = CONCAT44(iVar7 + -1,(byte *)uVar4 + 1);
          } while (uVar18 == uVar10);
        }
        bVar24 = puVar21 <= puVar16;
        puVar8 = puVar16 + -(int)puVar21;
        bVar23 = puVar8 == (undefined1 *)0x0;
        if (!bVar24) {
          puVar8 = (undefined1 *)0x0;
        }
        if (bVar24 && !bVar23) {
          bVar24 = puVar8 <= puVar16;
          bVar23 = puVar16 == puVar8;
        }
        if (((!bVar24 || bVar23) || (-0x41 < (char)puVar8[iVar15])) &&
           (puVar16 + -(int)puVar8 == puVar21)) {
          puVar8 = puVar8 + iVar15;
          puVar12 = (undefined1 *)0x0;
          do {
            if (puVar21 == puVar12) {
              if (((puVar21 != (undefined1 *)0x0) && (*pbVar19 == 0x2e)) ||
                 ((CARRY4((uint)puVar16,~(uint)puVar21) &&
                  ((puVar16 + ~(uint)puVar21)[iVar15] == '.')))) goto LAB_01441468;
              goto LAB_01441378;
            }
            uVar10 = (uint)pbVar19[(int)puVar12];
            uVar18 = (uint)(byte)puVar8[(int)puVar12];
            puVar12 = puVar12 + 1;
            if (uVar10 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 0x20;
            }
            if (uVar18 - 0x41 < 0x1a) {
              uVar18 = uVar18 | 0x20;
            }
          } while (uVar18 == uVar10);
        }
        if (puVar21 == &DAT_00000001) {
          puVar8 = (undefined1 *)(uint)*pbVar19;
        }
        if (puVar21 == &DAT_00000001 && puVar8 == &DAT_0000002a) {
LAB_01441468:
          *param_1 = 0x80000002;
          return;
        }
LAB_01441378:
        iVar14 = iVar14 + 0xc;
      } while (iVar14 != iVar6);
    }
  }
  else {
    local_38 = local_50;
    uVar10 = local_38;
    uStack_34 = uStack_4c;
    uVar5 = uStack_34;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    local_28 = local_40;
    if (*(int *)(param_2 + 8) != 0) {
      local_38._1_3_ = (undefined3)(local_50 >> 8);
      uStack_34._0_1_ = (undefined1)uStack_4c;
      iVar6 = CONCAT13((undefined1)uStack_34,local_38._1_3_);
      piVar9 = (int *)(*(int *)(param_2 + 4) + 2);
      iVar15 = *(int *)(param_2 + 8) * 0x12;
      local_38 = uVar10;
      uStack_34 = uVar5;
      do {
        if (*(char *)((int)piVar9 + -2) == '\x02') {
          if ((local_50 & 0xff) == (uint)*(byte *)((int)piVar9 + -1)) {
            if ((local_50 & 1) == 0) {
              if (iVar6 == *piVar9) goto LAB_01441468;
            }
            else {
              iVar14 = thunk_FUN_01bed842((uint)&local_38 | 1,piVar9,0x10);
              if (iVar14 == 0) goto LAB_01441468;
            }
          }
        }
        else {
          iVar14 = FUN_014f8d34((char *)((int)piVar9 + -2),&local_50);
          if (iVar14 != 0) goto LAB_01441468;
        }
        piVar9 = (int *)((int)piVar9 + 0x12);
        iVar15 = iVar15 + -0x12;
      } while (iVar15 != 0);
    }
  }
  if (*param_3 == '\0') goto LAB_01441510;
  if (*param_3 == '\x02') {
    piVar9 = *(int **)(*(int *)(param_3 + 4) + 4);
    if (piVar9 == (int *)0x0) goto LAB_01441510;
    iVar15 = *(int *)(*(int *)(param_3 + 4) + 8);
    if (iVar15 != 5) {
      if (iVar15 != 4) goto LAB_01441510;
      goto LAB_014414fc;
    }
  }
  else {
    if (param_3[1] == '\0') {
      piVar9 = &DAT_0056dc34;
LAB_014414fc:
      if (*piVar9 == 0x70747468) {
        param_2 = param_2 + 0x18;
        goto LAB_01441524;
      }
      goto LAB_01441510;
    }
    piVar9 = (int *)&DAT_0053278b;
  }
  iVar15 = thunk_FUN_01bed842(piVar9,&DAT_0053278b,5);
  if (iVar15 == 0) {
    param_2 = param_2 + 0x5c;
LAB_01441524:
    FUN_01440ae4(param_1,param_2);
    return;
  }
LAB_01441510:
  *param_1 = 0x80000002;
  return;
}

