// FUN_01afca7c @ 01afca7c size=620 calls_out=6 calls_in=24
// strings: aws_lc_0_39_0_CBB_flush | /aws-lc/crypto/bytestring/cbb.c | cbb->child->is_child | aws_lc_0_39_0_CBB_flush | /aws-lc/crypto/bytestring/cbb.c | child->base == base

undefined4 FUN_01afca7c(int *param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined1 uVar11;
  
  if ((char)param_1[1] == '\0') {
    piVar9 = param_1 + 2;
  }
  else {
    piVar9 = (int *)param_1[2];
  }
  if (piVar9 == (int *)0x0) {
    return 0;
  }
  if ((*(byte *)(piVar9 + 3) & 2) != 0) {
    return 0;
  }
  iVar8 = *param_1;
  if (iVar8 == 0) {
    return 1;
  }
  if (*(char *)(iVar8 + 4) == '\0') {
    uVar4 = 0xbb;
    pcVar2 = "cbb->child->is_child";
LAB_01afcaf0:
                    /* WARNING: Subroutine does not return */
    FUN_01be3310(pcVar2,"/aws-lc/crypto/bytestring/cbb.c",uVar4,"aws_lc_0_39_0_CBB_flush");
  }
  if (*(int **)(iVar8 + 8) != piVar9) {
    uVar4 = 0xbd;
    pcVar2 = "child->base == base";
    goto LAB_01afcaf0;
  }
  iVar6 = *(int *)(iVar8 + 0xc);
  bVar1 = *(byte *)(iVar8 + 0x10);
  iVar3 = FUN_01afca7c(iVar8);
  if (((iVar3 == 0) || (uVar10 = (uint)bVar1 + iVar6, uVar10 < *(uint *)(iVar8 + 0xc))) ||
     ((uint)piVar9[1] < uVar10)) goto LAB_01afcbb8;
  uVar7 = piVar9[1] - uVar10;
  if ((*(byte *)(iVar8 + 0x11) & 1) == 0) {
LAB_01afcc64:
    uVar10 = (uint)*(byte *)(iVar8 + 0x10);
    while (uVar10 = uVar10 - 1, uVar10 < *(byte *)(iVar8 + 0x10)) {
      *(char *)(*piVar9 + uVar10 + *(int *)(iVar8 + 0xc)) = (char)uVar7;
      uVar7 = uVar7 >> 8;
    }
    if (uVar7 == 0) {
      *(undefined4 *)(iVar8 + 8) = 0;
      *param_1 = 0;
      return 1;
    }
    uVar4 = 0xf9;
  }
  else {
    if (*(char *)(iVar8 + 0x10) != '\x01') {
      uVar4 = 0xcf;
      pcVar2 = "child->pending_len_len == 1";
      goto LAB_01afcaf0;
    }
    if (uVar7 != 0xffffffff) {
      if (uVar7 < 0x1000000) {
        if (0xffff < uVar7) {
          uVar11 = 0x83;
          iVar3 = 4;
          goto LAB_01afcc04;
        }
        if (0xff < uVar7) {
          uVar11 = 0x82;
          iVar3 = 3;
          goto LAB_01afcc04;
        }
        if (0x7f < uVar7) {
          uVar11 = 0x81;
          iVar3 = 2;
          goto LAB_01afcc04;
        }
        uVar11 = (undefined1)uVar7;
        uVar7 = 0;
        iVar3 = 1;
      }
      else {
        uVar11 = 0x84;
        iVar3 = 5;
LAB_01afcc04:
        iVar6 = FUN_01afc604(piVar9,0);
        if (iVar6 == 0) goto LAB_01afcbb8;
        piVar9[1] = piVar9[1] + iVar3 + -1;
        FUN_01bed864(*piVar9 + uVar10 + iVar3 + -1,*piVar9 + uVar10,uVar7);
      }
      iVar6 = *piVar9;
      iVar5 = *(int *)(iVar8 + 0xc);
      *(int *)(iVar8 + 0xc) = iVar5 + 1;
      *(undefined1 *)(iVar6 + iVar5) = uVar11;
      *(char *)(iVar8 + 0x10) = (char)iVar3 + -1;
      goto LAB_01afcc64;
    }
    uVar4 = 0xd2;
  }
  FUN_01b053d4(0xe,0,0x45,"/aws-lc/crypto/bytestring/cbb.c",uVar4);
LAB_01afcbb8:
  FUN_01afc5c8(param_1);
  return 0;
}

