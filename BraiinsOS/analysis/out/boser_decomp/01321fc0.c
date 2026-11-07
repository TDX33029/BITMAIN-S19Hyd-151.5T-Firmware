// FUN_01321fc0 @ 01321fc0 size=7584 calls_out=34 calls_in=9
// strings: explicit panic

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01321fc0(undefined4 *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  int local_54;
  int local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar4 = FUN_0131d1c8(param_2,param_3,param_5);
  FUN_018a7af8(&local_38,uVar4);
  uVar3 = local_30;
  iVar2 = local_34;
  local_2c = local_30;
  local_28 = FUN_0131d1c8(param_2,param_3,param_5);
  if (uVar3 != local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_2c,&local_28,0);
  }
  if (param_3 < 0x202) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0x201,param_3,&DAT_01ce4f00);
  }
  bVar1 = *(byte *)(param_2 + 0x201);
  switch(bVar1 & 7) {
  case 1:
    iVar6 = (int)*(char *)(param_2 + 0x200);
    if ((bVar1 & 8) == 0) {
      if (iVar6 < 0) {
        if (param_3 < 0x204) {
          FUN_0131d5a0(param_2,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 8) goto LAB_01323d80;
        uVar9 = bVar1 & 0xf8;
        uVar7 = (uint)(bVar1 >> 3);
        iVar6 = uVar9 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        uVar12 = extraout_r3;
        if (uVar7 <= param_5) {
          uVar11 = 0;
          iVar13 = iVar2;
          uVar10 = param_4;
          do {
            FUN_0131d5a0(param_2,uVar10,uVar7,iVar13,uVar9);
            FUN_01bed4e2(iVar13 + uVar9,param_2 + 0x203,param_3 - 0x203);
            uVar11 = uVar11 + 1;
            iVar13 = iVar13 + iVar6;
            uVar10 = uVar10 + uVar7;
            uVar12 = extraout_r3_00;
          } while (uVar11 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar5 = uVar5 * iVar6;
        iVar6 = param_5 - uVar7;
        uVar10 = uVar5 + iVar6 * 8;
        bVar14 = uVar10 < (uint)(iVar6 * 8);
        if (!bVar14) {
          uVar12 = uVar3;
        }
        if (bVar14 || uVar12 < uVar10) goto LAB_01323ca8;
        FUN_0131d5a0(param_2,param_4 + uVar7,iVar6,iVar2 + uVar5,iVar6 * 8);
      }
      else {
        if (param_3 < 0x204) {
          FUN_0131d640(param_2,iVar6,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 8) {
LAB_01323d80:
                    /* WARNING: Subroutine does not return */
          FUN_012ffdf4(&DAT_01ce4e50);
        }
        uVar12 = bVar1 & 0xf8;
        uVar7 = (uint)(bVar1 >> 3);
        iVar13 = uVar12 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar8 = iVar2;
          uVar9 = param_4;
          do {
            FUN_0131d5a0(param_2,uVar9,uVar7,iVar8,uVar12);
            FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + iVar13;
            uVar9 = uVar9 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar5 = uVar5 * iVar13;
        iVar13 = param_5 - uVar7;
        uVar10 = uVar5 + iVar13 * 8;
        bVar14 = uVar10 < (uint)(iVar13 * 8);
        if (!bVar14) {
          param_5 = uVar3;
        }
        if (bVar14 || param_5 < uVar10) {
LAB_01323ca8:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar5,uVar10,uVar3,&DAT_01ce4e60);
        }
        FUN_0131d640(param_2,iVar6,param_4 + uVar7,iVar13,iVar2 + uVar5,iVar13 * 8);
      }
    }
    else if (iVar6 < 0) {
      if (param_3 < 0x204) {
        FUN_0131d6cc(param_2,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 8) goto LAB_01323d80;
      uVar9 = bVar1 & 0xf8;
      uVar7 = (uint)(bVar1 >> 3);
      iVar6 = uVar9 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      uVar12 = extraout_r3_01;
      if (uVar7 <= param_5) {
        uVar11 = 0;
        iVar13 = iVar2;
        uVar10 = param_4;
        do {
          FUN_0131d6cc(param_2,uVar10,uVar7,iVar13,uVar9);
          FUN_01bed4e2(iVar13 + uVar9,param_2 + 0x203,param_3 - 0x203);
          uVar11 = uVar11 + 1;
          iVar13 = iVar13 + iVar6;
          uVar10 = uVar10 + uVar7;
          uVar12 = extraout_r3_02;
        } while (uVar11 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar5 = uVar5 * iVar6;
      iVar6 = param_5 - uVar7;
      uVar10 = uVar5 + iVar6 * 8;
      bVar14 = uVar10 < (uint)(iVar6 * 8);
      if (!bVar14) {
        uVar12 = uVar3;
      }
      if (bVar14 || uVar12 < uVar10) goto LAB_01323ca8;
      FUN_0131d6cc(param_2,param_4 + uVar7,iVar6,iVar2 + uVar5,iVar6 * 8);
    }
    else {
      if (param_3 < 0x204) {
        FUN_0131d768(param_2,iVar6,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 8) goto LAB_01323d80;
      uVar12 = bVar1 & 0xf8;
      uVar7 = (uint)(bVar1 >> 3);
      iVar13 = uVar12 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar8 = iVar2;
        uVar9 = param_4;
        do {
          FUN_0131d6cc(param_2,uVar9,uVar7,iVar8,uVar12);
          FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar8 = iVar8 + iVar13;
          uVar9 = uVar9 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar5 = uVar5 * iVar13;
      iVar13 = param_5 - uVar7;
      uVar10 = uVar5 + iVar13 * 8;
      bVar14 = uVar10 < (uint)(iVar13 * 8);
      if (!bVar14) {
        param_5 = uVar3;
      }
      if (bVar14 || param_5 < uVar10) goto LAB_01323ca8;
      FUN_0131d768(param_2,iVar6,param_4 + uVar7,iVar13,iVar2 + uVar5,iVar13 * 8);
    }
    break;
  case 2:
    iVar6 = (int)*(char *)(param_2 + 0x200);
    if ((bVar1 & 8) == 0) {
      if (iVar6 < 0) {
        if (param_3 < 0x204) {
          FUN_0131d7f4(param_2,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 4) goto LAB_01323d80;
        uVar12 = bVar1 & 0xfc;
        uVar7 = (uint)(bVar1 >> 2);
        iVar6 = uVar12 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar13 = iVar2;
          uVar9 = param_4;
          do {
            FUN_0131d7f4(param_2,uVar9,uVar7,iVar13,uVar12);
            FUN_01bed4e2(iVar13 + uVar12,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar13 = iVar13 + iVar6;
            uVar9 = uVar9 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar5 = uVar5 * iVar6;
        uVar12 = (param_5 - uVar7) * 4 & 0x7ffffffc;
        uVar10 = uVar12 + uVar5;
        if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
        FUN_0131d7f4(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
      }
      else {
        if (param_3 < 0x204) {
          FUN_0131d898(param_2,iVar6,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 4) goto LAB_01323d80;
        uVar12 = bVar1 & 0xfc;
        uVar7 = (uint)(bVar1 >> 2);
        iVar13 = uVar12 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar8 = iVar2;
          uVar9 = param_4;
          do {
            FUN_0131d7f4(param_2,uVar9,uVar7,iVar8,uVar12);
            FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + iVar13;
            uVar9 = uVar9 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar5 = uVar5 * iVar13;
        iVar13 = param_5 - uVar7;
        uVar10 = uVar5 + iVar13 * 4;
        bVar14 = uVar10 < (uint)(iVar13 * 4);
        if (!bVar14) {
          param_5 = uVar3;
        }
        if (bVar14 || param_5 < uVar10) goto LAB_01323ca8;
        FUN_0131d898(param_2,iVar6,param_4 + uVar7,iVar13,iVar2 + uVar5,iVar13 * 4);
      }
    }
    else if (iVar6 < 0) {
      if (param_3 < 0x204) {
        FUN_0131d928(param_2,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 4) goto LAB_01323d80;
      uVar12 = bVar1 & 0xfc;
      uVar7 = (uint)(bVar1 >> 2);
      iVar6 = uVar12 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar13 = iVar2;
        uVar9 = param_4;
        do {
          FUN_0131d928(param_2,uVar9,uVar7,iVar13,uVar12);
          FUN_01bed4e2(iVar13 + uVar12,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar13 = iVar13 + iVar6;
          uVar9 = uVar9 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar5 = uVar5 * iVar6;
      uVar12 = (param_5 - uVar7) * 4 & 0x7ffffffc;
      uVar10 = uVar12 + uVar5;
      if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
      FUN_0131d928(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
    }
    else {
      if (param_3 < 0x204) {
        FUN_0131d9c4(param_2,iVar6,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 4) goto LAB_01323d80;
      uVar12 = bVar1 & 0xfc;
      uVar7 = (uint)(bVar1 >> 2);
      iVar13 = uVar12 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar8 = iVar2;
        uVar9 = param_4;
        do {
          FUN_0131d928(param_2,uVar9,uVar7,iVar8,uVar12);
          FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar8 = iVar8 + iVar13;
          uVar9 = uVar9 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar5 = uVar5 * iVar13;
      iVar13 = param_5 - uVar7;
      uVar10 = uVar5 + iVar13 * 4;
      bVar14 = uVar10 < (uint)(iVar13 * 4);
      if (!bVar14) {
        param_5 = uVar3;
      }
      if (bVar14 || param_5 < uVar10) goto LAB_01323ca8;
      FUN_0131d9c4(param_2,iVar6,param_4 + uVar7,iVar13,iVar2 + uVar5,iVar13 * 4);
    }
    break;
  case 3:
    iVar6 = (int)*(char *)(param_2 + 0x200);
    if ((bVar1 & 8) == 0) {
      if (iVar6 < 0) {
        if (param_3 < 0x204) {
          FUN_0131da54(param_2,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 8) goto LAB_01323d80;
        uVar9 = bVar1 & 0xf8;
        uVar7 = (uint)(bVar1 >> 3) * 3;
        iVar6 = uVar9 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        uVar12 = param_5;
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar13 = iVar2;
          uVar12 = param_4;
          do {
            FUN_0131da54(param_2,uVar12,uVar7,iVar13,uVar9);
            FUN_01bed4e2(iVar13 + uVar9,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar13 = iVar13 + iVar6;
            uVar12 = uVar12 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar9 = (param_5 - uVar7) * 8 | 2;
        uVar5 = uVar5 * iVar6;
        uVar10 = uVar5 + uVar9 / 3;
        bVar14 = uVar10 < uVar9 / 3;
        if (!bVar14) {
          uVar12 = uVar3;
        }
        if (bVar14 || uVar12 < uVar10) goto LAB_01323ca8;
        FUN_0131da54(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar9 / 3);
      }
      else {
        if (param_3 < 0x204) {
          FUN_0131dbfc(param_2,iVar6,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 8) goto LAB_01323d80;
        uVar12 = bVar1 & 0xf8;
        uVar7 = (uint)(bVar1 >> 3) * 3;
        iVar13 = uVar12 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar8 = iVar2;
          uVar9 = param_4;
          do {
            FUN_0131da54(param_2,uVar9,uVar7,iVar8,uVar12);
            FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + iVar13;
            uVar9 = uVar9 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar5 = uVar5 * iVar13;
        uVar12 = ((uint)((ulonglong)((param_5 - uVar7) + 2) * 0xaaaaaaab >> 0x20) & 0x3ffffffe) * 4;
        uVar10 = uVar12 + uVar5;
        if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
        FUN_0131dbfc(param_2,iVar6,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
      }
    }
    else if (iVar6 < 0) {
      if (param_3 < 0x204) {
        FUN_0131dc9c(param_2,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 8) goto LAB_01323d80;
      uVar9 = bVar1 & 0xf8;
      uVar7 = (uint)(bVar1 >> 3) * 3;
      iVar6 = uVar9 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      uVar12 = param_5;
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar13 = iVar2;
        uVar12 = param_4;
        do {
          FUN_0131dc9c(param_2,uVar12,uVar7,iVar13,uVar9);
          FUN_01bed4e2(iVar13 + uVar9,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar13 = iVar13 + iVar6;
          uVar12 = uVar12 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar9 = (param_5 - uVar7) * 8 | 2;
      uVar5 = uVar5 * iVar6;
      uVar10 = uVar5 + uVar9 / 3;
      bVar14 = uVar10 < uVar9 / 3;
      if (!bVar14) {
        uVar12 = uVar3;
      }
      if (bVar14 || uVar12 < uVar10) goto LAB_01323ca8;
      FUN_0131dc9c(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar9 / 3);
    }
    else {
      if (param_3 < 0x204) {
        FUN_0131dd80(param_2,iVar6,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 8) goto LAB_01323d80;
      uVar12 = bVar1 & 0xf8;
      uVar7 = (uint)(bVar1 >> 3) * 3;
      iVar13 = uVar12 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar8 = iVar2;
        uVar9 = param_4;
        do {
          FUN_0131dc9c(param_2,uVar9,uVar7,iVar8,uVar12);
          FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar8 = iVar8 + iVar13;
          uVar9 = uVar9 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar5 = uVar5 * iVar13;
      uVar12 = ((uint)((ulonglong)((param_5 - uVar7) + 2) * 0xaaaaaaab >> 0x20) & 0x3ffffffe) * 4;
      uVar10 = uVar12 + uVar5;
      if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
      FUN_0131dd80(param_2,iVar6,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
    }
    break;
  case 4:
    iVar6 = (int)*(char *)(param_2 + 0x200);
    if ((bVar1 & 8) == 0) {
      if (iVar6 < 0) {
        if (param_3 < 0x204) {
          FUN_0131de20(param_2,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 2) goto LAB_01323d80;
        uVar12 = bVar1 & 0xfe;
        uVar7 = (uint)(bVar1 >> 1);
        iVar6 = uVar12 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar13 = iVar2;
          uVar9 = param_4;
          do {
            FUN_0131de20(param_2,uVar9,uVar7,iVar13,uVar12);
            FUN_01bed4e2(iVar13 + uVar12,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar13 = iVar13 + iVar6;
            uVar9 = uVar9 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar5 = uVar5 * iVar6;
        uVar12 = (param_5 - uVar7) * 2 & 0x3ffffffe;
        uVar10 = uVar12 + uVar5;
        if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
        FUN_0131de20(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
      }
      else {
        if (param_3 < 0x204) {
          FUN_0131dec4(param_2,iVar6,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 2) goto LAB_01323d80;
        uVar12 = bVar1 & 0xfe;
        uVar7 = (uint)(bVar1 >> 1);
        iVar13 = uVar12 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar8 = iVar2;
          uVar9 = param_4;
          do {
            FUN_0131de20(param_2,uVar9,uVar7,iVar8,uVar12);
            FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + iVar13;
            uVar9 = uVar9 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar5 = uVar5 * iVar13;
        iVar13 = param_5 - uVar7;
        uVar10 = uVar5 + iVar13 * 2;
        bVar14 = uVar10 < (uint)(iVar13 * 2);
        if (!bVar14) {
          param_5 = uVar3;
        }
        if (bVar14 || param_5 < uVar10) goto LAB_01323ca8;
        FUN_0131dec4(param_2,iVar6,param_4 + uVar7,iVar13,iVar2 + uVar5,iVar13 * 2);
      }
    }
    else if (iVar6 < 0) {
      if (param_3 < 0x204) {
        FUN_0131df54(param_2,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 2) goto LAB_01323d80;
      uVar12 = bVar1 & 0xfe;
      uVar7 = (uint)(bVar1 >> 1);
      iVar6 = uVar12 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar13 = iVar2;
        uVar9 = param_4;
        do {
          FUN_0131df54(param_2,uVar9,uVar7,iVar13,uVar12);
          FUN_01bed4e2(iVar13 + uVar12,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar13 = iVar13 + iVar6;
          uVar9 = uVar9 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar5 = uVar5 * iVar6;
      uVar12 = (param_5 - uVar7) * 2 & 0x3ffffffe;
      uVar10 = uVar12 + uVar5;
      if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
      FUN_0131df54(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
    }
    else {
      if (param_3 < 0x204) {
        FUN_0131dff0(param_2,iVar6,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 2) goto LAB_01323d80;
      uVar12 = bVar1 & 0xfe;
      uVar7 = (uint)(bVar1 >> 1);
      iVar13 = uVar12 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar8 = iVar2;
        uVar9 = param_4;
        do {
          FUN_0131df54(param_2,uVar9,uVar7,iVar8,uVar12);
          FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar8 = iVar8 + iVar13;
          uVar9 = uVar9 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar5 = uVar5 * iVar13;
      iVar13 = param_5 - uVar7;
      uVar10 = uVar5 + iVar13 * 2;
      bVar14 = uVar10 < (uint)(iVar13 * 2);
      if (!bVar14) {
        param_5 = uVar3;
      }
      if (bVar14 || param_5 < uVar10) goto LAB_01323ca8;
      FUN_0131dff0(param_2,iVar6,param_4 + uVar7,iVar13,iVar2 + uVar5,iVar13 * 2);
    }
    break;
  case 5:
    iVar6 = (int)*(char *)(param_2 + 0x200);
    if ((bVar1 & 8) == 0) {
      if (iVar6 < 0) {
        if (param_3 < 0x204) {
          FUN_0131e080(param_2,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 8) goto LAB_01323d80;
        uVar9 = bVar1 & 0xf8;
        uVar7 = (uint)(bVar1 >> 3) * 5;
        iVar6 = uVar9 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        uVar12 = param_5;
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar13 = iVar2;
          uVar12 = param_4;
          do {
            FUN_0131e080(param_2,uVar12,uVar7,iVar13,uVar9);
            FUN_01bed4e2(iVar13 + uVar9,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar13 = iVar13 + iVar6;
            uVar12 = uVar12 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar9 = (param_5 - uVar7) * 8 | 4;
        uVar5 = uVar5 * iVar6;
        uVar10 = uVar5 + uVar9 / 5;
        bVar14 = uVar10 < uVar9 / 5;
        if (!bVar14) {
          uVar12 = uVar3;
        }
        if (bVar14 || uVar12 < uVar10) goto LAB_01323ca8;
        FUN_0131e080(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar9 / 5);
      }
      else {
        if (param_3 < 0x204) {
          FUN_0131e324(param_2,iVar6,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 8) goto LAB_01323d80;
        uVar12 = bVar1 & 0xf8;
        uVar7 = (uint)(bVar1 >> 3) * 5;
        iVar13 = uVar12 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar8 = iVar2;
          uVar9 = param_4;
          do {
            FUN_0131e080(param_2,uVar9,uVar7,iVar8,uVar12);
            FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + iVar13;
            uVar9 = uVar9 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar5 = uVar5 * iVar13;
        uVar12 = ((uint)((ulonglong)((param_5 - uVar7) + 4) * 0xcccccccd >> 0x20) & 0x7ffffffc) * 2;
        uVar10 = uVar12 + uVar5;
        if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
        FUN_0131e324(param_2,iVar6,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
      }
    }
    else if (iVar6 < 0) {
      if (param_3 < 0x204) {
        FUN_0131e3c4(param_2,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 8) goto LAB_01323d80;
      uVar9 = bVar1 & 0xf8;
      uVar7 = (uint)(bVar1 >> 3) * 5;
      iVar6 = uVar9 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      uVar12 = param_5;
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar13 = iVar2;
        uVar12 = param_4;
        do {
          FUN_0131e3c4(param_2,uVar12,uVar7,iVar13,uVar9);
          FUN_01bed4e2(iVar13 + uVar9,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar13 = iVar13 + iVar6;
          uVar12 = uVar12 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar9 = (param_5 - uVar7) * 8 | 4;
      uVar5 = uVar5 * iVar6;
      uVar10 = uVar5 + uVar9 / 5;
      bVar14 = uVar10 < uVar9 / 5;
      if (!bVar14) {
        uVar12 = uVar3;
      }
      if (bVar14 || uVar12 < uVar10) goto LAB_01323ca8;
      FUN_0131e3c4(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar9 / 5);
    }
    else {
      if (param_3 < 0x204) {
        FUN_0131e524(param_2,iVar6,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 8) goto LAB_01323d80;
      uVar12 = bVar1 & 0xf8;
      uVar7 = (uint)(bVar1 >> 3) * 5;
      iVar13 = uVar12 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar8 = iVar2;
        uVar9 = param_4;
        do {
          FUN_0131e3c4(param_2,uVar9,uVar7,iVar8,uVar12);
          FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar8 = iVar8 + iVar13;
          uVar9 = uVar9 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar5 = uVar5 * iVar13;
      uVar12 = ((uint)((ulonglong)((param_5 - uVar7) + 4) * 0xcccccccd >> 0x20) & 0x7ffffffc) * 2;
      uVar10 = uVar12 + uVar5;
      if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
      FUN_0131e524(param_2,iVar6,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
    }
    break;
  case 6:
    iVar6 = (int)*(char *)(param_2 + 0x200);
    if ((bVar1 & 8) == 0) {
      if (iVar6 < 0) {
        if (param_3 < 0x204) {
          FUN_0131e5c4(param_2,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 4) goto LAB_01323d80;
        uVar9 = bVar1 & 0xfc;
        uVar7 = (uint)(bVar1 >> 2) * 3;
        iVar6 = uVar9 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        uVar12 = param_5;
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar13 = iVar2;
          uVar12 = param_4;
          do {
            FUN_0131e5c4(param_2,uVar12,uVar7,iVar13,uVar9);
            FUN_01bed4e2(iVar13 + uVar9,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar13 = iVar13 + iVar6;
            uVar12 = uVar12 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar9 = (param_5 - uVar7) * 8 | 4;
        uVar5 = uVar5 * iVar6;
        uVar10 = uVar5 + uVar9 / 6;
        bVar14 = uVar10 < uVar9 / 6;
        if (!bVar14) {
          uVar12 = uVar3;
        }
        if (bVar14 || uVar12 < uVar10) goto LAB_01323ca8;
        FUN_0131e5c4(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar9 / 6);
      }
      else {
        if (param_3 < 0x204) {
          FUN_0131e868(param_2,iVar6,param_4,param_5,iVar2,uVar3);
          goto LAB_01323d00;
        }
        bVar1 = *(byte *)(param_2 + 0x202);
        if (bVar1 < 4) goto LAB_01323d80;
        uVar12 = bVar1 & 0xfc;
        uVar7 = (uint)(bVar1 >> 2) * 3;
        iVar13 = uVar12 + (param_3 - 0x203);
        uVar5 = FUN_01bf1250(param_5,uVar7);
        if (uVar7 <= param_5) {
          uVar10 = 0;
          iVar8 = iVar2;
          uVar9 = param_4;
          do {
            FUN_0131e5c4(param_2,uVar9,uVar7,iVar8,uVar12);
            FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + iVar13;
            uVar9 = uVar9 + uVar7;
          } while (uVar10 < uVar5);
        }
        uVar7 = uVar5 * uVar7;
        if (param_5 <= uVar7) goto LAB_01323d00;
        uVar5 = uVar5 * iVar13;
        uVar12 = ((uint)((ulonglong)((param_5 - uVar7) + 2) * 0xaaaaaaab >> 0x20) & 0x7ffffffe) * 2;
        uVar10 = uVar12 + uVar5;
        if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
        FUN_0131e868(param_2,iVar6,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
      }
    }
    else if (iVar6 < 0) {
      if (param_3 < 0x204) {
        FUN_0131e908(param_2,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 4) goto LAB_01323d80;
      uVar9 = bVar1 & 0xfc;
      uVar7 = (uint)(bVar1 >> 2) * 3;
      iVar6 = uVar9 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      uVar12 = param_5;
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar13 = iVar2;
        uVar12 = param_4;
        do {
          FUN_0131e908(param_2,uVar12,uVar7,iVar13,uVar9);
          FUN_01bed4e2(iVar13 + uVar9,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar13 = iVar13 + iVar6;
          uVar12 = uVar12 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar9 = (param_5 - uVar7) * 8 | 4;
      uVar5 = uVar5 * iVar6;
      uVar10 = uVar5 + uVar9 / 6;
      bVar14 = uVar9 / 6 <= uVar10;
      if (bVar14) {
        uVar12 = uVar3;
      }
      if (!bVar14 || uVar12 < uVar10) goto LAB_01323ca8;
      FUN_0131e908(param_2,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar9 / 6);
    }
    else {
      if (param_3 < 0x204) {
        FUN_0131ea68(param_2,iVar6,param_4,param_5,iVar2,uVar3);
        goto LAB_01323d00;
      }
      bVar1 = *(byte *)(param_2 + 0x202);
      if (bVar1 < 4) goto LAB_01323d80;
      uVar12 = bVar1 & 0xfc;
      uVar7 = (uint)(bVar1 >> 2) * 3;
      iVar13 = uVar12 + (param_3 - 0x203);
      uVar5 = FUN_01bf1250(param_5,uVar7);
      if (uVar7 <= param_5) {
        uVar10 = 0;
        iVar8 = iVar2;
        uVar9 = param_4;
        do {
          FUN_0131e908(param_2,uVar9,uVar7,iVar8,uVar12);
          FUN_01bed4e2(iVar8 + uVar12,param_2 + 0x203,param_3 - 0x203);
          uVar10 = uVar10 + 1;
          iVar8 = iVar8 + iVar13;
          uVar9 = uVar9 + uVar7;
        } while (uVar10 < uVar5);
      }
      uVar7 = uVar5 * uVar7;
      if (param_5 <= uVar7) goto LAB_01323d00;
      uVar5 = uVar5 * iVar13;
      uVar12 = ((uint)((ulonglong)((param_5 - uVar7) + 2) * 0xaaaaaaab >> 0x20) & 0x7ffffffe) * 2;
      uVar10 = uVar12 + uVar5;
      if ((CARRY4(uVar12,uVar5)) || (uVar3 < uVar10)) goto LAB_01323ca8;
      FUN_0131ea68(param_2,iVar6,param_4 + uVar7,param_5 - uVar7,iVar2 + uVar5,uVar12);
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("explicit panic",0xe,&DAT_01ce4ef0);
  }
  local_3c = param_3 - 0x203;
  local_54 = param_2 + 0x203;
  if (uVar3 - uVar10 != local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(uVar3 - uVar10,local_3c,&DAT_01ce4e70);
  }
  FUN_01bed4e2(iVar2 + uVar10,local_54,local_3c);
LAB_01323d00:
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  return;
}

