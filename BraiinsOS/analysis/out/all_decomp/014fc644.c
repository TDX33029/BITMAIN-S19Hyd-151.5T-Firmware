// FUN_014fc644 @ 014fc644 size=600 calls_out=1 calls_in=4
// strings: 

void FUN_014fc644(int *param_1,int *param_2)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  uVar6 = param_2[1];
  uVar5 = param_2[2];
  bVar11 = false;
  if ((uVar5 < uVar6) && (bVar11 = *(char *)(*param_2 + uVar5) == 'u', bVar11)) {
    uVar5 = uVar5 + 1;
    param_2[2] = uVar5;
  }
  if (uVar6 <= uVar5) goto LAB_014fc728;
  iVar9 = *param_2;
  cVar1 = *(char *)(iVar9 + uVar5);
  uVar3 = (uint)(byte)(cVar1 - 0x30);
  if (9 < uVar3) goto LAB_014fc728;
  uVar5 = uVar5 + 1;
  param_2[2] = uVar5;
  if (cVar1 != '0') {
    do {
      if (uVar6 == uVar5) {
        uVar5 = uVar6;
        goto LAB_014fc714;
      }
      uVar8 = *(byte *)(iVar9 + uVar5) - 0x30 & 0xff;
      if (9 < uVar8) goto LAB_014fc6f4;
      uVar4 = (uint)((ulonglong)uVar3 * 10);
      uVar5 = uVar5 + 1;
      param_2[2] = uVar5;
    } while (((int)((ulonglong)uVar3 * 10 >> 0x20) == 0) &&
            (uVar3 = uVar4 + uVar8, !CARRY4(uVar4,uVar8)));
    goto LAB_014fc728;
  }
  uVar3 = 0;
LAB_014fc6f4:
  if ((uVar5 < uVar6) && (*(char *)(iVar9 + uVar5) == '_')) {
    uVar5 = uVar5 + 1;
    param_2[2] = uVar5;
  }
LAB_014fc714:
  uVar8 = uVar5 + uVar3;
  if ((CARRY4(uVar5,uVar3)) || (param_2[2] = uVar8, uVar6 < uVar8)) goto LAB_014fc728;
  if (((uVar5 != 0) && ((uVar5 < uVar6 && (*(char *)(iVar9 + uVar5) < -0x40)))) ||
     ((uVar8 != 0 && ((uVar8 < uVar6 && (*(char *)(iVar9 + uVar8) < -0x40)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(iVar9,uVar6,uVar5,uVar8,&DAT_018a7278);
  }
  iVar10 = iVar9 + uVar5;
  if (!bVar11) {
    *param_1 = iVar10;
    param_1[1] = uVar3;
    param_1[2] = 1;
    param_1[3] = 0;
    return;
  }
  uVar6 = uVar3;
  do {
    uVar8 = uVar6;
    if (uVar8 == 0) {
      uVar6 = 0;
      iVar7 = 1;
      iVar9 = iVar10;
      goto LAB_014fc850;
    }
    uVar6 = uVar8 - 1;
  } while (*(char *)(iVar9 + uVar5 + -1 + uVar8) != '_');
  if (uVar6 == 0) {
LAB_014fc808:
    if (uVar8 < uVar3) {
      if (*(char *)(iVar10 + uVar8) < -0x40) {
LAB_014fc830:
        puVar2 = &DAT_018a7298;
        uVar6 = uVar3;
LAB_014fc890:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar10,uVar3,uVar8,uVar6,puVar2);
      }
      uVar5 = uVar8;
    }
    else {
      uVar5 = uVar3;
      if (uVar8 != uVar3) goto LAB_014fc830;
    }
  }
  else {
    if (uVar6 < uVar3) {
      if (*(char *)(iVar10 + uVar6) < -0x40) goto LAB_014fc884;
      goto LAB_014fc808;
    }
    if (uVar6 != uVar3) {
LAB_014fc884:
      uVar8 = 0;
      puVar2 = &DAT_018a7288;
      goto LAB_014fc890;
    }
    if (uVar8 != 0) goto LAB_014fc808;
    uVar5 = 0;
  }
  uVar3 = uVar3 - uVar5;
  iVar9 = iVar10 + uVar5;
  iVar7 = iVar10;
LAB_014fc850:
  if (uVar3 != 0) {
    *param_1 = iVar7;
    param_1[1] = uVar6;
    param_1[2] = iVar9;
    param_1[3] = uVar3;
    return;
  }
LAB_014fc728:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

