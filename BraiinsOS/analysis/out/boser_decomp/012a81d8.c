// FUN_012a81d8 @ 012a81d8 size=1508 calls_out=13 calls_in=3
// strings: {before-help}{about-with-newline} {usage-heading} {usage}  {all-args}{after-help} | {before-help}{about-with-newline} {usage-heading} {usage}{after-help}

void FUN_012a81d8(uint *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined *puVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  byte *pbVar20;
  uint uVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  int iVar24;
  byte *pbVar25;
  bool bVar26;
  ulonglong uVar27;
  int local_54;
  undefined *local_50;
  undefined4 local_4c;
  uint local_48;
  byte *local_44;
  uint local_40;
  undefined1 auStack_3c [8];
  int local_34;
  char local_27;
  
  bVar1 = *(byte *)(param_2 + 0x168);
  puVar5 = (undefined *)FUN_012b9138(param_2 + 0x74);
  local_4c = 0;
  local_50 = &DAT_00420598;
  if (puVar5 != (undefined *)0x0) {
    local_50 = puVar5;
  }
  local_44 = &DAT_00000001;
  local_40 = 0;
  local_48 = 0;
  local_54 = param_2;
  if (*(int *)(param_2 + 0x104) == -0x80000000) {
    uVar6 = param_3 & bVar1;
    if (*(int *)(param_2 + 0x110) == -0x80000000) {
      FUN_012b0a10(auStack_3c,&local_48,param_2,&local_54,uVar6);
      iVar24 = *(int *)(local_34 + 0x4c);
      if (iVar24 == 0) {
        bVar11 = false;
        bVar16 = false;
      }
      else {
        iVar17 = iVar24 * 0x134;
        piVar19 = (int *)(*(int *)(local_34 + 0x48) + 0x120);
        iVar8 = iVar17;
        do {
          if (*piVar19 == 0) {
            if ((undefined1 *)piVar19[-0x3b] == &DAT_00110000) {
              param_3 = piVar19[-1];
            }
            if ((undefined1 *)piVar19[-0x3b] == &DAT_00110000 && (param_3 & 4) == 0) {
              if ((param_3 & 0x2000) == 0) {
                bVar11 = true;
                if (((param_3 & 0x1000) == 0) || (local_27 != '\0')) goto LAB_012a8334;
LAB_012a82e0:
                if ((param_3 & 8) == 0) goto LAB_012a82a4;
              }
              else if ((param_3 & 0x1000) != 0 || local_27 != '\0') goto LAB_012a82e0;
              bVar11 = true;
              goto LAB_012a8334;
            }
          }
LAB_012a82a4:
          piVar19 = piVar19 + 0x4d;
          iVar8 = iVar8 + -0x134;
        } while (iVar8 != 0);
        bVar11 = false;
LAB_012a8334:
        bVar16 = false;
        if (iVar24 != 0) {
          puVar9 = (undefined4 *)(*(int *)(local_34 + 0x48) + 0x120);
          do {
            puVar22 = (undefined1 *)*puVar9;
            bVar26 = puVar22 == (undefined1 *)0x0;
            if (bVar26) {
              puVar22 = (undefined1 *)puVar9[-0x3b];
            }
            if ((!bVar26 || puVar22 != &DAT_00110000) && (uVar6 = puVar9[-1], (uVar6 & 4) == 0)) {
              if ((uVar6 & 0x2000) == 0) {
                if (((uVar6 & 0x1000) != 0) && (local_27 == '\0')) {
LAB_012a8390:
                  if ((uVar6 & 8) == 0) goto LAB_012a8398;
                }
              }
              else if ((uVar6 & 0x1000) != 0 || local_27 != '\0') goto LAB_012a8390;
              bVar16 = true;
              break;
            }
LAB_012a8398:
            puVar9 = puVar9 + 0x4d;
            iVar17 = iVar17 + -0x134;
          } while (iVar17 != 0);
        }
      }
      iVar24 = FUN_012a9434(*(undefined4 *)(local_34 + 0x60),*(undefined4 *)(local_34 + 100));
      uVar12 = 0x45;
      pcVar3 = "{before-help}{about-with-newline}\n{usage-heading} {usage}{after-help}";
      if ((bVar11 || bVar16) || iVar24 != 0) {
        uVar12 = 0x51;
        pcVar3 = 
        "{before-help}{about-with-newline}\n{usage-heading} {usage}\n\n{all-args}{after-help}";
      }
      FUN_012a94f8(auStack_3c,pcVar3,uVar12);
    }
    else {
      FUN_012b0a10(auStack_3c,&local_48,param_2,&local_54,uVar6);
      FUN_012a94f8(auStack_3c,*(undefined4 *)(param_2 + 0x114),*(undefined4 *)(param_2 + 0x118));
    }
  }
  else {
    FUN_012b255c(&local_48,*(undefined4 *)(param_2 + 0x108),*(undefined4 *)(param_2 + 0x10c));
  }
  uVar6 = local_40;
  pbVar4 = local_44;
  uVar18 = 0;
  do {
    uVar13 = uVar6 - uVar18;
    if (uVar13 < 8) {
      uVar10 = 0;
      if (uVar13 == 0) {
        uVar27 = 0;
      }
      else {
        do {
          if ((pbVar4 + uVar18)[uVar10] == 10) {
            uVar27 = CONCAT44(uVar10,1);
            goto LAB_012a8458;
          }
          uVar10 = uVar10 + 1;
        } while (uVar13 != uVar10);
        uVar27 = (ulonglong)uVar13 << 0x20;
      }
    }
    else {
      uVar27 = FUN_01307168(10,pbVar4 + uVar18);
    }
LAB_012a8458:
    if ((uVar27 & 1) == 0) break;
    uVar18 = (int)(uVar27 >> 0x20) + uVar18;
    if ((uVar18 < uVar6) && (pbVar4[uVar18] == 10)) {
      uVar18 = uVar18 + 1;
      if ((uVar18 < uVar6) && ((char)pbVar4[uVar18] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pbVar4,uVar6,0,uVar18,&DAT_01d2e668);
      }
      pbVar25 = pbVar4 + uVar18;
      uVar13 = uVar6 - uVar18;
      pbVar23 = (byte *)0x0;
      pbVar7 = pbVar4;
      goto LAB_012a84e8;
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 <= uVar6);
  goto LAB_012a8484;
LAB_012a84e8:
  do {
    pbVar20 = pbVar7 + 1;
    uVar10 = (uint)*pbVar7;
    if (0x7fffffff < (uint)(int)(char)*pbVar7) {
      if (uVar10 < 0xe0) {
        uVar10 = pbVar7[1] & 0x3f | (uVar10 & 0x1f) << 6;
        pbVar20 = pbVar7 + 2;
      }
      else {
        uVar21 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
        if (uVar10 < 0xf0) {
          uVar10 = uVar21 | (uVar10 & 0x1f) << 0xc;
          pbVar20 = pbVar7 + 3;
        }
        else {
          pbVar20 = pbVar7 + 4;
          uVar10 = pbVar7[3] & 0x3f | uVar21 << 6 | (uVar10 & 7) << 0x12;
        }
      }
    }
    pbVar7 = pbVar23 + ((int)pbVar20 - (int)pbVar7);
    if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
      if (0x7f < uVar10) {
        uVar21 = uVar10 >> 8;
        if (uVar21 < 0x20) {
          if (uVar21 == 0) {
            bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 1;
joined_r0x012a85e8:
            if (bVar1 != 0) goto LAB_012a856c;
          }
          else if (uVar21 == 0x16 && uVar10 == 0x1680) goto LAB_012a856c;
        }
        else {
          if (uVar21 == 0x20) {
            bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 2;
            goto joined_r0x012a85e8;
          }
          if ((uVar21 == 0x30) && (uVar10 == 0x3000)) goto LAB_012a856c;
        }
      }
      if (pbVar20 == pbVar25) goto LAB_012a8718;
      pbVar14 = pbVar25;
      goto LAB_012a85fc;
    }
LAB_012a856c:
    pbVar23 = pbVar7;
    pbVar7 = pbVar20;
  } while (pbVar20 != pbVar25);
  goto LAB_012a8720;
LAB_012a85fc:
  do {
    pbVar15 = pbVar14 + -1;
    uVar10 = (uint)(char)*pbVar15;
    if (0x7fffffff < uVar10) {
      pbVar15 = pbVar14 + -2;
      bVar1 = *pbVar15;
      if ((char)bVar1 < -0x40) {
        pbVar15 = pbVar14 + -3;
        bVar2 = *pbVar15;
        if ((char)bVar2 < -0x40) {
          pbVar15 = pbVar14 + -4;
          uVar21 = (int)(char)bVar2 & 0x3fU | (*pbVar15 & 7) << 6;
        }
        else {
          uVar21 = bVar2 & 0xf;
        }
        uVar21 = (int)(char)bVar1 & 0x3fU | uVar21 << 6;
      }
      else {
        uVar21 = bVar1 & 0x1f;
      }
      uVar10 = uVar10 & 0x3f | uVar21 << 6;
    }
    if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
      if (0x7f < uVar10) {
        uVar21 = uVar10 >> 8;
        if (uVar21 < 0x20) {
          if (uVar21 == 0) {
            bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 1;
joined_r0x012a8708:
            if (bVar1 != 0) goto LAB_012a867c;
          }
          else if ((uVar21 == 0x16) && (uVar10 == 0x1680)) goto LAB_012a867c;
        }
        else {
          if (uVar21 == 0x20) {
            bVar1 = (&DAT_00533bcd)[uVar10 & 0xff] & 2;
            goto joined_r0x012a8708;
          }
          if (uVar21 == 0x30 && uVar10 == 0x3000) goto LAB_012a867c;
        }
      }
      pbVar7 = pbVar14 + ((int)pbVar7 - (int)pbVar20);
      break;
    }
LAB_012a867c:
    pbVar14 = pbVar15;
  } while (pbVar20 != pbVar15);
LAB_012a8718:
  if (pbVar7 != pbVar23) goto LAB_012a8484;
LAB_012a8720:
  uVar12 = 0;
  if ((int)uVar13 < 0) {
LAB_012a872c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,uVar13);
  }
  if (uVar6 == uVar18) {
    pbVar23 = &DAT_00000001;
    uVar6 = 0;
  }
  else {
    uVar12 = 1;
    pbVar23 = (byte *)FUN_01298504(uVar13,1);
    uVar6 = uVar13;
    if (pbVar23 == (byte *)0x0) goto LAB_012a872c;
  }
  FUN_01bed4e2(pbVar23,pbVar25,uVar13);
  FUN_0134bd64(local_48,pbVar4);
  local_48 = uVar6;
  local_44 = pbVar23;
  local_40 = uVar13;
LAB_012a8484:
  FUN_012b3044(&local_48);
  FUN_012b2fd4(&local_48,"\n",1);
  *param_1 = local_48;
  param_1[1] = (uint)local_44;
  param_1[2] = local_40;
  return;
}

