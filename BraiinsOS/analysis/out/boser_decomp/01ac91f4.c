// FUN_01ac91f4 @ 01ac91f4 size=1196 calls_out=9 calls_in=6
// strings: 

undefined4 FUN_01ac91f4(int *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  bool bVar14;
  uint local_3c;
  uint local_38 [2];
  undefined *local_30;
  
  if ((char)param_1[0xd] == '\0') {
    return 1;
  }
  FUN_01ac8d30(local_38,param_1);
  local_38[0] = local_38[0] & 0xff;
  puVar1 = (undefined *)local_38[0];
  if (local_38[0] == 0) {
    puVar1 = local_30;
  }
  if (local_38[0] == 0 && puVar1 == (undefined *)0x0) {
    return 1;
  }
  uVar6 = param_1[8];
  piVar12 = (int *)param_1[5];
  uVar8 = param_1[6];
  if (uVar6 != 0) {
    if (uVar6 < uVar8) {
      if (-0x41 < *(char *)((int)piVar12 + uVar6)) {
LAB_01ac9274:
        if ((uVar6 == 4) && (*piVar12 == 0x656c6966)) {
          return 1;
        }
        goto LAB_01ac9290;
      }
    }
    else if (uVar6 == uVar8) goto LAB_01ac9274;
    puVar1 = &DAT_01d2fde8;
    uVar11 = 0;
    goto LAB_01ac9678;
  }
LAB_01ac9290:
  uVar7 = param_1[9];
  uVar11 = uVar6 + 3;
  if (uVar7 < uVar11) goto LAB_01ac9664;
  if (uVar11 == 0) {
    if (uVar7 == 0) {
      return 0;
    }
LAB_01ac92dc:
    if (uVar7 < uVar8) {
      if (-0x41 < *(char *)((int)piVar12 + uVar7)) {
        if (uVar7 == uVar11) {
          return 0;
        }
        if (*(char *)((int)piVar12 + uVar7) < -0x40) {
          puVar1 = &DAT_01d2fcf8;
          uVar11 = uVar7;
          uVar6 = uVar8;
          goto LAB_01ac9678;
        }
LAB_01ac9340:
        uVar6 = uVar8 - uVar7;
        uVar9 = 0;
        if ((int)uVar6 < 0) {
LAB_01ac9350:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar9,uVar6);
        }
        if (uVar6 == 0) {
          pbVar2 = &DAT_00000001;
          local_3c = 0;
        }
        else {
          uVar9 = 1;
          pbVar2 = (byte *)FUN_01298504(uVar6,1);
          local_3c = uVar6;
          if (pbVar2 == (byte *)0x0) goto LAB_01ac9350;
        }
        FUN_01bed4e2(pbVar2,(int)piVar12 + uVar7,uVar6);
        if (uVar11 <= uVar8) {
          if (((uVar11 != 0) && (uVar11 < uVar8)) && (*(char *)((int)piVar12 + uVar11) < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01d2f9b8);
          }
          param_1[6] = uVar11;
        }
        puVar13 = (uint *)(param_1 + 4);
        local_38[1] = 0;
        local_38[0] = 1;
        local_30 = &DAT_0056a988;
        FUN_01655840(local_38,puVar13);
        uVar8 = param_1[6];
        iVar10 = param_1[9];
        param_1[9] = uVar8;
        if (uVar6 == 0) {
          if (uVar8 != uVar11) {
LAB_01ac9500:
            uVar5 = *puVar13;
            uVar7 = uVar8;
            if (uVar5 == uVar8) {
              FUN_01af7b44(puVar13,uVar8,1,1,1);
              uVar5 = param_1[4];
              uVar7 = param_1[6];
            }
            uVar11 = uVar8 + 1;
            iVar3 = param_1[5];
            *(undefined1 *)(iVar3 + uVar7) = 0x40;
            param_1[6] = uVar11;
            uVar7 = uVar11;
            if (uVar5 - uVar11 < uVar6) {
              FUN_01af7b44(puVar13,uVar11,uVar6,1,1);
              iVar3 = param_1[5];
              uVar7 = param_1[6];
            }
            iVar3 = iVar3 + uVar7;
            pbVar4 = pbVar2;
LAB_01ac953c:
            FUN_01bed4e2(iVar3,pbVar4,uVar6);
            uVar8 = uVar11;
            goto LAB_01ac9544;
          }
        }
        else {
          uVar7 = (uint)*pbVar2;
          if (0x7fffffff < (uint)(int)(char)*pbVar2) {
            if (uVar7 < 0xe0) {
              uVar7 = pbVar2[1] & 0x3f | (uVar7 & 0x1f) << 6;
            }
            else {
              uVar5 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
              if (uVar7 < 0xf0) {
                uVar7 = uVar5 | (uVar7 & 0x1f) << 0xc;
              }
              else {
                uVar7 = pbVar2[3] & 0x3f | uVar5 << 6 | (uVar7 & 7) << 0x12;
              }
            }
          }
          if (uVar8 == uVar11) {
            if (uVar7 == 0x40) {
              if ((uVar6 != 1) && ((char)pbVar2[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb514(pbVar2,uVar6,1,uVar6,&DAT_01d2f9c8);
              }
              uVar6 = uVar6 - 1;
              uVar7 = uVar11;
              if (*puVar13 - uVar11 < uVar6) {
                FUN_01af7b44(puVar13,uVar11,uVar6,1,1);
                uVar7 = param_1[6];
              }
              iVar10 = iVar10 + 1;
              iVar3 = param_1[5] + uVar7;
              pbVar4 = pbVar2 + 1;
              goto LAB_01ac953c;
            }
          }
          else if (uVar7 != 0x3a && uVar7 != 0x40) goto LAB_01ac9500;
        }
        uVar7 = uVar8;
        if (*puVar13 - uVar8 < uVar6) {
          FUN_01af7b44(puVar13,uVar8,uVar6,1,1);
          uVar7 = param_1[6];
        }
        FUN_01bed4e2(param_1[5] + uVar7,pbVar2,uVar6);
LAB_01ac9544:
        iVar3 = *param_1;
        param_1[6] = uVar7 + uVar6;
        iVar10 = uVar8 - iVar10;
        bVar14 = iVar3 == 1;
        if (bVar14) {
          iVar3 = param_1[1];
        }
        if (bVar14) {
          param_1[1] = iVar10 + iVar3;
        }
        param_1[10] = iVar10 + param_1[10];
        param_1[0xb] = iVar10 + param_1[0xb];
        param_1[0xc] = iVar10 + param_1[0xc];
        if (param_1[2] == 1) {
          param_1[3] = iVar10 + param_1[3];
        }
        FUN_019bb7e0(local_3c,pbVar2);
        return 0;
      }
    }
    else if (uVar8 == uVar7) {
      if (uVar7 == uVar11) {
        return 0;
      }
      goto LAB_01ac9340;
    }
  }
  else if (uVar11 < uVar8) {
    if (-0x41 < *(char *)((int)piVar12 + uVar11)) {
LAB_01ac92d4:
      if (uVar7 != 0) goto LAB_01ac92dc;
      if (uVar11 == 0) {
        return 0;
      }
      goto LAB_01ac9340;
    }
  }
  else if (uVar11 == uVar8) goto LAB_01ac92d4;
LAB_01ac9664:
  puVar1 = (undefined *)0x1d2fa58;
  uVar6 = uVar7;
LAB_01ac9678:
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(piVar12,uVar8,uVar11,uVar6,puVar1);
}

