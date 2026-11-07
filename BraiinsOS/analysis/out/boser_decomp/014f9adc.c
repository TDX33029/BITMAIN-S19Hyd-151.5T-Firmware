// FUN_014f9adc @ 014f9adc size=1032 calls_out=2 calls_in=2
// strings: 

void FUN_014f9adc(uint *param_1,undefined4 *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  piVar9 = (int *)*param_2;
  uVar11 = param_2[1];
  bVar1 = false;
  iVar3 = piVar9[2];
  uVar4 = piVar9[3];
  uVar15 = piVar9[1];
  uVar16 = 0;
  if (iVar3 != 0) {
    uVar16 = uVar4;
  }
  uVar17 = uVar16 + uVar15;
  if (uVar17 <= uVar11) goto LAB_014f9eb4;
  uVar5 = uVar11;
  if (iVar3 == 0) {
LAB_014f9b3c:
    bVar2 = 0;
    cVar13 = '\0';
    if (uVar5 < uVar15) {
      cVar13 = *(char *)(*piVar9 + uVar5);
      goto LAB_014f9b54;
    }
  }
  else {
    if (uVar4 <= uVar11) {
      uVar5 = uVar11 - uVar4;
      goto LAB_014f9b3c;
    }
    cVar13 = *(char *)(iVar3 + uVar11);
LAB_014f9b54:
    bVar2 = 1;
  }
  bVar1 = (bool)(bVar2 & cVar13 == '/');
  if ((uVar16 - 1 < uVar16) && (uVar11 == uVar16 - 1)) {
    iVar3 = *piVar9;
    uVar11 = 0;
    do {
      uVar4 = uVar15 - uVar11;
      iVar12 = iVar3 + uVar11;
      if (uVar4 < 8) {
        uVar5 = 0;
        if (uVar4 == 0) {
          uVar18 = 0;
        }
        else {
          do {
            if (*(char *)(iVar12 + uVar5) == '/') {
              uVar18 = CONCAT44(uVar5,1);
              goto LAB_014f9be0;
            }
            uVar5 = uVar5 + 1;
          } while (uVar4 != uVar5);
          uVar18 = (ulonglong)uVar4 << 0x20;
        }
      }
      else {
        uVar18 = FUN_01307168(0x2f,iVar12);
      }
LAB_014f9be0:
      if ((uVar18 & 1) == 0) break;
      uVar11 = (int)(uVar18 >> 0x20) + uVar11;
      if ((uVar11 < uVar15) && (*(char *)(iVar3 + uVar11) == '/')) {
        uVar17 = uVar11 + uVar16;
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 <= uVar15);
  }
  else {
    if (bVar1) {
      uVar11 = uVar11 + 1;
      param_2[1] = uVar11;
    }
    uVar16 = uVar11;
    if (iVar3 == 0) {
      iVar3 = *piVar9;
      if (uVar11 != 0) {
        if (uVar11 < uVar15) {
          if (*(char *)(iVar3 + uVar11) < -0x40) goto LAB_014f9d04;
        }
        else if (uVar15 != uVar11) {
LAB_014f9d04:
          puVar7 = &DAT_01cfa644;
LAB_014f9d48:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar3,uVar15,uVar11,uVar15,puVar7);
        }
      }
      uVar15 = uVar15 - uVar11;
      uVar5 = 0;
      do {
        uVar4 = uVar15 - uVar5;
        iVar12 = iVar3 + uVar11 + uVar5;
        if (uVar4 < 8) {
          uVar6 = 0;
          if (uVar4 == 0) {
            uVar18 = 0;
          }
          else {
            do {
              if (*(char *)(iVar12 + uVar6) == '/') {
                uVar18 = CONCAT44(uVar6,1);
                goto LAB_014f9dc8;
              }
              uVar6 = uVar6 + 1;
            } while (uVar4 != uVar6);
            uVar18 = (ulonglong)uVar4 << 0x20;
          }
        }
        else {
          uVar18 = FUN_01307168(0x2f,iVar12);
        }
LAB_014f9dc8:
        if ((uVar18 & 1) == 0) break;
        uVar5 = (int)(uVar18 >> 0x20) + uVar5;
        if ((uVar5 < uVar15) && (*(char *)(iVar3 + uVar11 + uVar5) == '/')) goto LAB_014f9ec0;
        uVar5 = uVar5 + 1;
      } while (uVar5 <= uVar15);
    }
    else if (uVar11 < uVar4) {
      if ((uVar11 != 0) && (*(char *)(iVar3 + uVar11) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar3,uVar4,uVar11,uVar4,&DAT_01cfa634);
      }
      uVar4 = uVar4 - uVar11;
      uVar5 = 0;
      do {
        uVar15 = uVar4 - uVar5;
        iVar12 = iVar3 + uVar11 + uVar5;
        if (uVar15 < 8) {
          uVar6 = 0;
          if (uVar15 == 0) {
            uVar18 = 0;
          }
          else {
            do {
              if (*(char *)(iVar12 + uVar6) == '/') {
                uVar18 = CONCAT44(uVar6,1);
                goto LAB_014f9cb0;
              }
              uVar6 = uVar6 + 1;
            } while (uVar15 != uVar6);
            uVar18 = (ulonglong)uVar15 << 0x20;
          }
        }
        else {
          uVar18 = FUN_01307168(0x2f,iVar12);
        }
LAB_014f9cb0:
        if ((uVar18 & 1) == 0) break;
        uVar5 = (int)(uVar18 >> 0x20) + uVar5;
        if ((uVar5 < uVar4) && (*(char *)(iVar3 + uVar11 + uVar5) == '/')) goto LAB_014f9ec0;
        uVar5 = uVar5 + 1;
      } while (uVar5 <= uVar4);
    }
    else {
      iVar3 = *piVar9;
      uVar6 = uVar11 - uVar4;
      if (uVar11 != uVar4) {
        if (uVar6 < uVar15) {
          if (*(char *)(iVar3 + uVar6) < -0x40) goto LAB_014f9d3c;
        }
        else if (uVar15 != uVar6) {
LAB_014f9d3c:
          puVar7 = &DAT_01cfa624;
          uVar11 = uVar6;
          goto LAB_014f9d48;
        }
      }
      uVar14 = uVar15 - uVar6;
      uVar5 = 0;
      do {
        uVar10 = uVar14 - uVar5;
        iVar12 = iVar3 + uVar6 + uVar5;
        if (uVar10 < 8) {
          if (uVar10 == 0) {
            uVar18 = 0;
          }
          else {
            iVar8 = 0;
            do {
              if (*(char *)(iVar12 + iVar8) == '/') {
                uVar18 = CONCAT44(iVar8,1);
                goto LAB_014f9e7c;
              }
              iVar8 = iVar8 + 1;
            } while (((uVar15 + uVar4) - uVar11) - uVar5 != iVar8);
            uVar18 = (ulonglong)uVar10 << 0x20;
          }
        }
        else {
          uVar18 = FUN_01307168(0x2f,iVar12);
        }
LAB_014f9e7c:
        if ((uVar18 & 1) == 0) break;
        uVar5 = (int)(uVar18 >> 0x20) + uVar5;
        if ((uVar5 < uVar14) && (*(char *)(iVar3 + uVar6 + uVar5) == '/')) goto LAB_014f9ec0;
        uVar5 = uVar5 + 1;
      } while (uVar5 <= uVar14);
    }
  }
LAB_014f9eac:
  *param_1 = uVar16;
  param_1[1] = uVar17;
  param_2[1] = uVar17;
LAB_014f9eb4:
  *(bool *)(param_1 + 2) = bVar1;
  return;
LAB_014f9ec0:
  uVar17 = uVar5 + uVar11;
  goto LAB_014f9eac;
}

