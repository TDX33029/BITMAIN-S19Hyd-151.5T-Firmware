// FUN_014f67cc @ 014f67cc size=612 calls_out=1 calls_in=4
// strings: 

void FUN_014f67cc(int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  uVar5 = param_2[1];
  uVar4 = param_2[2];
  bVar10 = false;
  if ((uVar4 < uVar5) && (bVar10 = *(char *)(*param_2 + uVar4) == 'u', bVar10)) {
    uVar4 = uVar4 + 1;
    param_2[2] = uVar4;
  }
  if (uVar5 <= uVar4) goto LAB_014f68ac;
  iVar8 = *param_2;
  cVar1 = *(char *)(iVar8 + uVar4);
  uVar2 = (uint)(byte)(cVar1 - 0x30);
  if (9 < uVar2) goto LAB_014f68ac;
  uVar4 = uVar4 + 1;
  param_2[2] = uVar4;
  if (cVar1 != '0') {
    do {
      if (uVar5 == uVar4) {
        uVar4 = uVar5;
        goto LAB_014f6898;
      }
      uVar7 = *(byte *)(iVar8 + uVar4) - 0x30 & 0xff;
      if (9 < uVar7) goto LAB_014f6878;
      uVar3 = (uint)((ulonglong)uVar2 * 10);
      uVar4 = uVar4 + 1;
      param_2[2] = uVar4;
    } while (((int)((ulonglong)uVar2 * 10 >> 0x20) == 0) &&
            (uVar2 = uVar3 + uVar7, !CARRY4(uVar3,uVar7)));
    goto LAB_014f68ac;
  }
  uVar2 = 0;
LAB_014f6878:
  if ((uVar4 < uVar5) && (*(char *)(iVar8 + uVar4) == '_')) {
    uVar4 = uVar4 + 1;
    param_2[2] = uVar4;
  }
LAB_014f6898:
  uVar7 = uVar4 + uVar2;
  if ((CARRY4(uVar4,uVar2)) || (param_2[2] = uVar7, uVar5 < uVar7)) goto LAB_014f68ac;
  if (((uVar4 != 0) && ((uVar4 < uVar5 && (*(char *)(iVar8 + uVar4) < -0x40)))) ||
     ((uVar7 != 0 && ((uVar7 < uVar5 && (*(char *)(iVar8 + uVar7) < -0x40)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(iVar8,uVar5,uVar4,uVar7,&DAT_018a70d8);
  }
  iVar9 = iVar8 + uVar4;
  if (!bVar10) {
    *param_1 = iVar9;
    param_1[1] = uVar2;
    param_1[2] = 1;
    param_1[3] = 0;
    return;
  }
  uVar5 = uVar2;
  do {
    uVar7 = uVar5;
    if (uVar7 == 0) {
      uVar5 = 0;
      iVar6 = 1;
      iVar8 = iVar9;
      goto LAB_014f69c8;
    }
    uVar5 = uVar7 - 1;
  } while (*(char *)(iVar8 + uVar4 + -1 + uVar7) != '_');
  if (uVar5 == 0) {
LAB_014f6994:
    if (uVar7 < uVar2) {
      if (*(char *)(iVar9 + uVar7) < -0x40) {
LAB_014f6a00:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar9,uVar2,uVar7,uVar2,&DAT_018a70f8);
      }
      uVar4 = uVar7;
    }
    else {
      uVar4 = uVar2;
      if (uVar7 != uVar2) goto LAB_014f6a00;
    }
  }
  else {
    if (uVar5 < uVar2) {
      if (*(char *)(iVar9 + uVar5) < -0x40) goto LAB_014f6a18;
      goto LAB_014f6994;
    }
    if (uVar5 != uVar2) {
LAB_014f6a18:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar9,uVar2,0,uVar5,&DAT_018a70e8);
    }
    uVar7 = uVar2 + 1;
    uVar4 = 0;
    if (uVar2 != 0xffffffff) goto LAB_014f6994;
  }
  uVar2 = uVar2 - uVar4;
  iVar8 = iVar9 + uVar4;
  iVar6 = iVar9;
LAB_014f69c8:
  if (uVar2 != 0) {
    *param_1 = iVar6;
    param_1[1] = uVar5;
    param_1[2] = iVar8;
    param_1[3] = uVar2;
    return;
  }
LAB_014f68ac:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

