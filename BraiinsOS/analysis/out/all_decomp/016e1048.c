// FUN_016e1048 @ 016e1048 size=748 calls_out=5 calls_in=25
// strings: /aws-lc/crypto/bytestring/cbb.c | /aws-lc/crypto/bytestring/cbb.c | aws_lc_0_39_0_CBB_flush | /aws-lc/crypto/bytestring/cbb.c | cbb->child->is_child | aws_lc_0_39_0_CBB_flush

undefined4 FUN_016e1048(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined1 local_30;
  
  if ((char)param_1[1] == '\0') {
    piVar6 = param_1 + 2;
  }
  else {
    piVar6 = (int *)param_1[2];
  }
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  if ((*(byte *)(piVar6 + 3) & 2) != 0) {
    return 0;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return 1;
  }
  if (*(char *)(iVar5 + 4) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("cbb->child->is_child","/aws-lc/crypto/bytestring/cbb.c",0xbb,
                 "aws_lc_0_39_0_CBB_flush");
  }
  if (*(int **)(iVar5 + 8) != piVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("child->base == base","/aws-lc/crypto/bytestring/cbb.c",0xbd,
                 "aws_lc_0_39_0_CBB_flush");
  }
  iVar7 = *(int *)(iVar5 + 0xc);
  bVar10 = *(byte *)(iVar5 + 0x10);
  iVar1 = FUN_016e1048(iVar5);
  if (iVar1 == 0) goto LAB_016e120c;
  uVar3 = (uint)bVar10 + iVar7;
  uVar2 = *(uint *)(iVar5 + 0xc);
  if ((uVar3 < uVar2) || ((uint)piVar6[1] < uVar3)) goto LAB_016e120c;
  uVar9 = piVar6[1] - uVar3;
  bVar10 = *(byte *)(iVar5 + 0x10);
  uVar4 = (uint)bVar10;
  if ((*(byte *)(iVar5 + 0x11) & 1) == 0) {
    uVar8 = uVar4 - 1;
    if (uVar4 != 0) {
      while( true ) {
        iVar1 = *piVar6 + uVar8;
        uVar8 = uVar8 - 1;
        *(char *)(iVar1 + uVar2) = (char)uVar9;
        uVar9 = uVar9 >> 8;
        if (*(byte *)(iVar5 + 0x10) <= uVar8) break;
LAB_016e1114:
        uVar2 = *(uint *)(iVar5 + 0xc);
      }
    }
    if (uVar9 == 0) {
LAB_016e1140:
      *(undefined4 *)(iVar5 + 8) = 0;
      *param_1 = 0;
      return 1;
    }
LAB_016e11ec:
    uVar11 = 0xf9;
  }
  else {
    if (uVar4 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("child->pending_len_len == 1","/aws-lc/crypto/bytestring/cbb.c",0xcf,
                   "aws_lc_0_39_0_CBB_flush");
    }
    if (uVar9 != 0xffffffff) {
      if (uVar9 < 0x1000000) {
        if (uVar9 < 0x10000) {
          if (uVar9 < 0x100) {
            if (uVar9 < 0x80) {
              iVar1 = *piVar6;
              *(uint *)(iVar5 + 0xc) = uVar2 + 1;
              *(char *)(iVar1 + uVar2) = (char)uVar9;
              *(undefined1 *)(iVar5 + 0x10) = 0;
              goto LAB_016e1140;
            }
            uVar8 = 0;
            uVar2 = 1;
            local_30 = 0x81;
          }
          else {
            uVar8 = 1;
            bVar10 = 2;
            uVar2 = 2;
            local_30 = 0x82;
          }
        }
        else {
          uVar8 = 2;
          bVar10 = 3;
          uVar2 = 3;
          local_30 = 0x83;
        }
      }
      else {
        uVar8 = 3;
        bVar10 = 4;
        uVar2 = 4;
        local_30 = 0x84;
      }
      iVar1 = FUN_016e0d7c(piVar6,0,uVar2);
      if (iVar1 == 0) goto LAB_016e120c;
      piVar6[1] = piVar6[1] + uVar2;
      FUN_016dd52c(*piVar6 + uVar3 + uVar2,*piVar6 + uVar3,uVar9);
      iVar1 = *piVar6;
      iVar7 = *(int *)(iVar5 + 0xc);
      *(int *)(iVar5 + 0xc) = iVar7 + 1;
      *(undefined1 *)(iVar1 + iVar7) = local_30;
      *(byte *)(iVar5 + 0x10) = bVar10;
      if (uVar8 < uVar2) goto LAB_016e1114;
      goto LAB_016e11ec;
    }
    uVar11 = 0xd2;
  }
  FUN_016e9cd0(0xe,0,0x45,"/aws-lc/crypto/bytestring/cbb.c",uVar11);
LAB_016e120c:
  if ((char)param_1[1] == '\0') {
    piVar6 = param_1 + 2;
  }
  else {
    piVar6 = (int *)param_1[2];
  }
  *(byte *)(piVar6 + 3) = *(byte *)(piVar6 + 3) | 2;
  *param_1 = 0;
  return 0;
}

