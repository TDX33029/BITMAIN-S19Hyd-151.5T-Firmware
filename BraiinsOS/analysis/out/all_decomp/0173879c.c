// FUN_0173879c @ 0173879c size=2568 calls_out=5 calls_in=3
// strings: 

undefined8
FUN_0173879c(int *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  undefined1 auStack_12d0 [76];
  undefined1 auStack_1284 [608];
  int *local_1024;
  char acStack_444 [523];
  char cStack_239;
  char acStack_238 [524];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar10 = *param_1;
  local_1024 = param_1;
  FUN_0170bd5c(param_1,auStack_1284,param_6,param_7,param_8);
  iVar14 = param_1[0xb];
  iVar11 = *param_1;
  FUN_016dd606(acStack_444,0,0x20a);
  FUN_016dd606(acStack_238,0,0x20a);
  FUN_01738484(acStack_444,param_9,param_1[1],5);
  FUN_01738484(acStack_238,param_5,param_1[1],5);
  iVar8 = param_1[1];
  if (iVar8 < 0) {
LAB_01738d44:
    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
  iVar1 = iVar11 * 2;
  iVar11 = iVar11 * 3;
  uVar2 = iVar10 * 4;
  if (uVar2 == 0) {
    pcVar12 = acStack_444 + iVar8;
    bVar6 = true;
    pcVar13 = acStack_238 + iVar8;
    do {
      iVar8 = (int)*pcVar12;
      if (iVar8 == 0) {
        iVar8 = (int)*pcVar13;
        if (iVar8 != 0) {
          if (-1 < iVar8) {
            if (bVar6) goto LAB_0173904c;
LAB_017390cc:
            iVar8 = iVar1 * (iVar8 + -1 >> 1);
            puVar7 = (undefined1 *)(iVar14 + (iVar8 + *param_1) * 4);
            goto LAB_017390fc;
          }
          if (!bVar6) goto LAB_01739150;
LAB_0173904c:
          if (&cStack_239 != pcVar13 + -1) goto LAB_01738ffc;
          goto LAB_01738d44;
        }
        if (acStack_238 == pcVar13) goto LAB_01738d44;
        if (!bVar6) goto LAB_01738ffc;
      }
      else {
        if (iVar8 < 0) {
          if (!bVar6) {
            iVar10 = iVar11 * ~(iVar8 >> 1);
            (*(code *)param_1[6])(auStack_12d0,auStack_1284 + (iVar10 + *param_1) * 4);
            iVar8 = *param_1;
            puVar7 = auStack_12d0;
LAB_01738f88:
            (*(code *)param_1[10])
                      (param_2,param_3,param_4,param_2,param_3,param_4,0,auStack_1284 + iVar10 * 4,
                       puVar7,auStack_1284 + (iVar10 + iVar8 * 2) * 4);
          }
        }
        else if (!bVar6) {
          iVar10 = iVar11 * (iVar8 + -1 >> 1);
          iVar8 = *param_1;
          puVar7 = auStack_1284 + (iVar10 + iVar8) * 4;
          goto LAB_01738f88;
        }
        iVar8 = (int)*pcVar13;
        if (iVar8 != 0) {
          if (-1 < iVar8) goto LAB_017390cc;
LAB_01739150:
          iVar8 = iVar1 * ~(iVar8 >> 1);
          (*(code *)param_1[6])(auStack_12d0,iVar14 + (iVar8 + *param_1) * 4);
          puVar7 = auStack_12d0;
LAB_017390fc:
          (*(code *)param_1[10])
                    (param_2,param_3,param_4,param_2,param_3,param_4,1,iVar14 + iVar8 * 4,puVar7,
                     param_1[8]);
          goto LAB_0173904c;
        }
        if (acStack_238 == pcVar13) goto LAB_01738d44;
LAB_01738ffc:
        (*(code *)param_1[9])(param_2,param_3,param_4,param_2,param_3,param_4);
        bVar6 = false;
      }
      pcVar13 = pcVar13 + -1;
      pcVar12 = pcVar12 + -1;
    } while( true );
  }
  pcVar13 = acStack_444 + iVar8;
  bVar6 = true;
  pcVar12 = acStack_238 + iVar8;
  do {
    iVar8 = (int)*pcVar13;
    if (iVar8 == 0) {
      iVar8 = (int)*pcVar12;
      if (iVar8 != 0) {
        if (-1 < iVar8) {
          iVar8 = iVar8 + -1 >> 1;
          if (bVar6) {
            sVar3 = (short)iVar8;
            goto LAB_01738ae0;
          }
          goto LAB_01738a0c;
        }
        uVar9 = ~(iVar8 >> 1);
        if (!bVar6) goto LAB_01738ddc;
        sVar3 = (short)uVar9;
LAB_01738ae0:
        puVar7 = (undefined1 *)(iVar14 + iVar1 * sVar3 * 4);
        if (param_2 < puVar7) {
          if (puVar7 < param_2 + uVar2) goto LAB_01738e40;
        }
        else if ((param_2 != puVar7) && (param_2 < puVar7 + uVar2)) goto LAB_01738e40;
        FUN_016dd1aa(param_2,puVar7,uVar2);
        puVar7 = (undefined1 *)(iVar14 + (iVar1 * sVar3 + *param_1) * 4);
        if (param_3 < puVar7) {
          if (puVar7 < param_3 + uVar2) goto LAB_01738e40;
        }
        else if ((puVar7 < param_3) && (param_3 < puVar7 + uVar2)) goto LAB_01738e40;
        FUN_016dd1aa(param_3,puVar7,uVar2);
        puVar7 = (undefined1 *)param_1[8];
        if (param_4 < puVar7) {
          if (puVar7 < param_4 + uVar2) goto LAB_01738e40;
        }
        else if ((param_4 != puVar7) && (param_4 < puVar7 + uVar2)) goto LAB_01738e40;
        FUN_016dd1aa(param_4,puVar7,uVar2);
        goto LAB_01738a7c;
      }
      if (acStack_238 == pcVar12) goto LAB_01738d44;
      if (!bVar6) goto LAB_01738a90;
    }
    else {
      if (iVar8 < 0) {
        if (!bVar6) {
          iVar8 = iVar11 * ~(iVar8 >> 1);
          (*(code *)param_1[6])(auStack_12d0,auStack_1284 + (iVar8 + *param_1) * 4);
          iVar10 = *param_1;
          puVar7 = auStack_12d0;
          goto LAB_0173899c;
        }
        sVar3 = (short)~(iVar8 >> 1);
LAB_01738be8:
        iVar8 = iVar11 * sVar3;
        puVar7 = auStack_1284 + iVar8 * 4;
        if (param_2 < puVar7) {
          if (puVar7 < param_2 + uVar2) goto LAB_01738e40;
        }
        else if ((param_2 != puVar7) && (param_2 < puVar7 + uVar2)) goto LAB_01738e40;
        if ((uint)(iVar8 * 4) < 0xe40) {
          uVar9 = iVar8 * -4 + 0xe40;
        }
        else {
          uVar9 = 0;
        }
        if (uVar9 < uVar2) {
LAB_01738e40:
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0,0x1738e40);
          (*pcVar4)();
        }
        FUN_016dd1aa(param_2);
        uVar9 = (iVar8 + *param_1) * 4;
        puVar7 = auStack_1284 + uVar9;
        if (param_3 < puVar7) {
          if (puVar7 < param_3 + uVar2) goto LAB_01738e40;
        }
        else if ((puVar7 < param_3) && (param_3 < puVar7 + uVar2)) goto LAB_01738e40;
        if (uVar9 < 0xe40) {
          uVar9 = (iVar8 + *param_1) * -4 + 0xe40;
        }
        else {
          uVar9 = 0;
        }
        if (uVar9 < uVar2) goto LAB_01738e40;
        FUN_016dd1aa(param_3);
        iVar8 = iVar8 + *param_1 * 2;
        uVar9 = iVar8 * 4;
        puVar7 = auStack_1284 + uVar9;
        if (param_4 < puVar7) {
          if (puVar7 < param_4 + uVar2) goto LAB_01738e40;
        }
        else if ((param_4 != puVar7) && (param_4 < puVar7 + uVar2)) goto LAB_01738e40;
        if (uVar9 < 0xe40) {
          uVar9 = iVar8 * -4 + 0xe40;
        }
        else {
          uVar9 = 0;
        }
        if (uVar9 < uVar2) goto LAB_01738e40;
        FUN_016dd1aa(param_4);
        cVar5 = *pcVar12;
      }
      else {
        iVar8 = iVar8 + -1 >> 1;
        if (bVar6) {
          sVar3 = (short)iVar8;
          goto LAB_01738be8;
        }
        iVar8 = iVar11 * iVar8;
        iVar10 = *param_1;
        puVar7 = auStack_1284 + (iVar10 + iVar8) * 4;
LAB_0173899c:
        (*(code *)param_1[10])
                  (param_2,param_3,param_4,param_2,param_3,param_4,0,auStack_1284 + iVar8 * 4,puVar7
                   ,auStack_1284 + (iVar8 + iVar10 * 2) * 4);
        cVar5 = *pcVar12;
      }
      iVar8 = (int)cVar5;
      if (iVar8 == 0) {
        if (acStack_238 == pcVar12) goto LAB_01738d44;
      }
      else {
        if (iVar8 < 0) {
          uVar9 = ~(iVar8 >> 1);
LAB_01738ddc:
          iVar8 = iVar1 * uVar9;
          (*(code *)param_1[6])(auStack_12d0,iVar14 + (iVar8 + *param_1) * 4);
          puVar7 = auStack_12d0;
        }
        else {
          iVar8 = iVar8 + -1 >> 1;
LAB_01738a0c:
          iVar8 = iVar1 * iVar8;
          puVar7 = (undefined1 *)(iVar14 + (iVar8 + *param_1) * 4);
        }
        (*(code *)param_1[10])
                  (param_2,param_3,param_4,param_2,param_3,param_4,1,iVar14 + iVar8 * 4,puVar7,
                   param_1[8]);
LAB_01738a7c:
        if (&cStack_239 == pcVar12 + -1) goto LAB_01738d44;
      }
LAB_01738a90:
      (*(code *)param_1[9])(param_2,param_3,param_4,param_2,param_3,param_4);
      bVar6 = false;
    }
    pcVar12 = pcVar12 + -1;
    pcVar13 = pcVar13 + -1;
  } while( true );
}

