// FUN_00047044 @ 00047044  size=2064  callers=2
// program: cgminer


uint FUN_00047044(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  char *local_30;
  undefined4 uStack_2c;
  
  iVar11 = param_1 + 0x28;
  FUN_0004842c(iVar11);
  if (*(int *)(param_1 + 0x3c) == 0x100) {
    FUN_00048310(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  do {
    uVar9 = *(uint *)(param_1 + 0x14);
    if (uVar9 == 0) {
      uVar9 = FUN_00046e30(param_1,param_2);
    }
    bVar12 = 0x1f < uVar9;
    if (uVar9 != 0x20) {
      bVar12 = uVar9 != 9;
    }
  } while ((!bVar12 || (uVar9 == 0x20 || uVar9 == 10)) || (uVar9 == 0xd));
  if (uVar9 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return 0;
  }
  if (uVar9 == 0xfffffffe) {
LAB_0004718c:
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    return 0xffffffff;
  }
  FUN_00048528(iVar11,uVar9 & 0xff);
  if ((((uVar9 & 0xffffffdf) - 0x5b & 0xfffffffd) == 0) || (uVar9 == 0x2c || uVar9 == 0x3a)) {
LAB_000471b8:
    *(uint *)(param_1 + 0x3c) = uVar9;
    return uVar9;
  }
  if (uVar9 == 0x22) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
LAB_000471f4:
    do {
      uVar9 = FUN_00046fb8(param_1,param_2);
      while( true ) {
        if (uVar9 == 0x22) {
          pbVar4 = (byte *)FUN_000482f8(*(int *)(param_1 + 0x2c) + 1);
          if (pbVar4 == (byte *)0x0) goto LAB_00047280;
          *(byte **)(param_1 + 0x40) = pbVar4;
          iVar11 = FUN_00048440(iVar11);
          pbVar10 = (byte *)(iVar11 + 1);
          goto LAB_00047528;
        }
        if (uVar9 == 0xfffffffe) goto LAB_00047280;
        if (uVar9 == 0xffffffff) {
          FUN_00046b44(param_2,param_1,6,"premature end of input");
          goto LAB_00047280;
        }
        if (uVar9 < 0x20) {
          FUN_00046ff8(param_1,uVar9);
          if (uVar9 == 10) {
            FUN_00046b44(param_2,param_1,8,"unexpected newline");
          }
          else {
            FUN_00046b44(param_2,param_1,8,"control character 0x%x",uVar9);
          }
          goto LAB_00047280;
        }
        if (uVar9 != 0x5c) goto LAB_000471f4;
        uVar9 = FUN_00046fb8(param_1,param_2);
        if (uVar9 != 0x75) break;
        uVar9 = FUN_00046fb8(param_1,param_2);
        iVar7 = 4;
        do {
          uVar8 = (uVar9 & 0xffffffdf) - 0x41;
          bVar13 = 4 < uVar8;
          bVar12 = uVar8 == 5;
          if (5 < uVar8) {
            bVar13 = 8 < uVar9 - 0x30;
            bVar12 = uVar9 - 0x30 == 9;
          }
          if (bVar13 && !bVar12) goto LAB_00047268;
          uVar9 = FUN_00046fb8(param_1,param_2);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    } while (((uVar9 == 0x5c || (uVar9 & 0xffffffbf) == 0x22) || (uVar9 == 0x2f)) ||
            (((uVar9 & 0xfffffff7) == 0x66 || ((uVar9 - 0x72 & 0xfffffffd) == 0))));
LAB_00047268:
    FUN_00046b44(param_2,param_1,8,"invalid escape");
LAB_00047280:
    FUN_00048310(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    return *(uint *)(param_1 + 0x3c);
  }
  bVar12 = 0x2c < uVar9;
  if (uVar9 != 0x2d) {
    bVar12 = 8 < uVar9 - 0x30;
  }
  if (bVar12 && (uVar9 != 0x2d && uVar9 - 0x30 != 9)) {
    if ((uVar9 & 0xffffffdf) - 0x41 < 0x1a) {
      do {
        uVar9 = FUN_00046fb8(param_1,param_2);
      } while ((uVar9 & 0xffffffdf) - 0x41 < 0x1a);
      FUN_00046ff8(param_1,uVar9);
      pcVar2 = (char *)FUN_00048440(iVar11);
      iVar11 = strcmp(pcVar2,"true");
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0x103;
        return 0x103;
      }
      iVar11 = strcmp(pcVar2,"false");
      if (iVar11 == 0) {
        uVar9 = 0x104;
        goto LAB_000471b8;
      }
      iVar11 = strcmp(pcVar2,"null");
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0x105;
        return 0x105;
      }
    }
    else {
      cVar1 = *(char *)(param_1 + *(int *)(param_1 + 0x10) + 8);
      while (cVar1 != '\0') {
        FUN_00048528(iVar11);
        iVar7 = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = iVar7;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        cVar1 = *(char *)(param_1 + iVar7 + 8);
      }
    }
    goto LAB_0004718c;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  if (uVar9 == 0x2d) {
    uVar9 = FUN_00046fb8(param_1,param_2);
    if (uVar9 == 0x30) goto LAB_00047624;
    if (9 < uVar9 - 0x30) goto LAB_00047640;
LAB_000472b4:
    do {
      uVar9 = FUN_00046fb8(param_1,param_2);
    } while (uVar9 - 0x30 < 10);
  }
  else {
    if (uVar9 != 0x30) goto LAB_000472b4;
LAB_00047624:
    uVar9 = FUN_00046fb8(param_1,param_2);
    if (uVar9 - 0x30 < 10) goto LAB_00047640;
  }
  if (((*(uint *)(param_1 + 0x34) & 8) == 0) && (uVar9 != 0x2e && uVar9 != 0x45)) {
    if (uVar9 != 0x65) {
      FUN_00046ff8(param_1,uVar9);
      pcVar2 = (char *)FUN_00048440(iVar11);
      piVar3 = __errno_location();
      *piVar3 = 0;
      lVar14 = strtoll(pcVar2,&local_30,10);
      if (*piVar3 == 0x22) {
        if (lVar14 < 0) {
          pcVar2 = "too big negative integer";
        }
        else {
          pcVar2 = "too big integer";
        }
        FUN_00046b44(param_2,param_1,0xf,pcVar2);
        return *(uint *)(param_1 + 0x3c);
      }
      if (local_30 != pcVar2 + *(int *)(param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("end == saved_text + lex->saved_text.length","load.c",0x21d,"lex_scan_number")
        ;
      }
      *(longlong *)(param_1 + 0x40) = lVar14;
      *(undefined4 *)(param_1 + 0x3c) = 0x101;
      return 0x101;
    }
  }
  else {
    if (uVar9 == 0x2e) {
      uVar9 = *(uint *)(param_1 + 0x14);
      if (uVar9 == 0) {
        uVar9 = FUN_00046e30(param_1,param_2);
      }
      if (9 < uVar9 - 0x30) {
        FUN_00046d74(param_1);
        return *(uint *)(param_1 + 0x3c);
      }
      FUN_00048528(iVar11,uVar9 & 0xff);
      do {
        uVar9 = FUN_00046fb8(param_1,param_2);
      } while (uVar9 - 0x30 < 10);
    }
    if ((uVar9 & 0xffffffdf) != 0x45) goto LAB_000473ac;
  }
  uVar9 = FUN_00046fb8(param_1,param_2);
  if ((uVar9 - 0x2b & 0xfffffffd) == 0) {
    uVar9 = FUN_00046fb8(param_1,param_2);
  }
  if (9 < uVar9 - 0x30) {
LAB_00047640:
    FUN_00046ff8(param_1,uVar9);
    return *(uint *)(param_1 + 0x3c);
  }
  do {
    uVar9 = FUN_00046fb8(param_1,param_2);
  } while (uVar9 - 0x30 < 10);
LAB_000473ac:
  FUN_00046ff8(param_1,uVar9);
  iVar11 = FUN_00048578(iVar11,&local_30);
  if (iVar11 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0x102;
    *(char **)(param_1 + 0x40) = local_30;
    *(undefined4 *)(param_1 + 0x44) = uStack_2c;
    return 0x102;
  }
  FUN_00046b44(param_2,param_1,0xf,"real number overflow");
  return *(uint *)(param_1 + 0x3c);
LAB_00047528:
  while( true ) {
    bVar6 = *pbVar10;
    if (bVar6 == 0x22) {
      *pbVar4 = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0x100;
      *(int *)(param_1 + 0x44) = (int)pbVar4 - *(int *)(param_1 + 0x40);
      return 0x100;
    }
    if (bVar6 == 0x5c) break;
    *pbVar4 = bVar6;
    pbVar4 = pbVar4 + 1;
    pbVar10 = pbVar10 + 1;
  }
  bVar6 = pbVar10[1];
  if (bVar6 != 0x75) {
    if (bVar6 == 0x62) {
      *pbVar4 = 8;
    }
    else if (bVar6 < 99) {
      if (((bVar6 != 0x2f) && (bVar6 != 0x5c)) && (bVar6 != 0x22)) goto LAB_000476b4;
LAB_0004768c:
      *pbVar4 = bVar6;
    }
    else if (bVar6 == 0x6e) {
      *pbVar4 = 10;
    }
    else {
      if (bVar6 < 0x6f) {
        if (bVar6 != 0x66) {
LAB_000476b4:
                    /* WARNING: Subroutine does not return */
          __assert_fail("0","load.c",0x1d0,"lex_scan_string");
        }
        bVar6 = 0xc;
        goto LAB_0004768c;
      }
      if (bVar6 == 0x72) {
        *pbVar4 = 0xd;
      }
      else {
        if (bVar6 != 0x74) goto LAB_000476b4;
        *pbVar4 = 9;
      }
    }
    pbVar4 = pbVar4 + 1;
    pbVar10 = pbVar10 + 2;
    goto LAB_00047528;
  }
  iVar11 = FUN_00046ce0();
  if (iVar11 < 0) {
LAB_00047750:
    FUN_00046b44(param_2,param_1,8,"invalid Unicode escape \'%.6s\'",pbVar10);
    goto LAB_00047280;
  }
  pbVar5 = pbVar10 + 6;
  if (iVar11 - 0xd800U < 0x400) {
    if ((pbVar10[6] == 0x5c) && (pbVar10[7] == 0x75)) {
      iVar7 = FUN_00046ce0(pbVar10 + 7);
      if (iVar7 < 0) {
        pbVar10 = pbVar5;
        goto LAB_00047750;
      }
      pbVar5 = pbVar10 + 0xc;
      if (iVar7 - 0xdc00U < 0x400) {
        iVar11 = (iVar7 - 0xdc00U) + (iVar11 - 0xd800U) * 0x400 + 0x10000;
        goto LAB_00047600;
      }
      FUN_00046b44(param_2,param_1,8,"invalid Unicode \'\\u%04X\\u%04X\'",iVar11,iVar7);
    }
    else {
LAB_000477a4:
      FUN_00046b44(param_2,param_1,8,"invalid Unicode \'\\u%04X\'",iVar11);
    }
    goto LAB_00047280;
  }
  if (iVar11 - 0xdc00U < 0x400) goto LAB_000477a4;
LAB_00047600:
  iVar11 = FUN_000487a8(iVar11,pbVar4,&local_30);
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","load.c",0x1c4,"lex_scan_string");
  }
  pbVar4 = pbVar4 + (int)local_30;
  pbVar10 = pbVar5;
  goto LAB_00047528;
}

