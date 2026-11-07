// FUN_012a0bb8 @ 012a0bb8 size=468 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_012a0bb8(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_r7;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar10 = param_2[1];
  iVar8 = 0;
  if (*param_2 != 0) goto LAB_012a0d7c;
  iVar1 = *(int *)(param_1 + 8);
  uVar5 = 1;
  iVar7 = param_2[2];
  uVar3 = *(uint *)(iVar1 + 0x144);
  if ((uVar3 & 0x2000) == 0) {
    uVar5 = (*(byte *)(iVar1 + 0x149) & 0x3f) >> 5;
  }
  if ((param_3 != 0) && (uVar5 != 0)) goto LAB_012a0d7c;
  bVar11 = (uVar3 & 0x100) == 0;
  if (bVar11) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x149);
  }
  local_34 = iVar10;
  local_30 = iVar7;
  if (bVar11 && (uVar3 & 1) == 0) {
    iVar9 = *(int *)(iVar1 + 0x60);
    iVar4 = *(int *)(iVar1 + 100);
  }
  else {
    iVar4 = *(int *)(iVar1 + 100);
    iVar9 = *(int *)(iVar1 + 0x60);
    if (iVar4 != 0) {
      iVar1 = iVar4 * 0x16c;
      iVar6 = iVar9;
      do {
        iVar1 = iVar1 + -0x16c;
        uVar12 = FUN_012a46ec(&local_34,iVar6);
        unaff_r7 = (int)((ulonglong)uVar12 >> 0x20);
        iVar8 = (int)uVar12;
        iVar6 = iVar6 + 0x16c;
        if (iVar8 != 0) {
          if (iVar6 == iVar4 * 0x16c + iVar9) goto LAB_012a0cb8;
          goto LAB_012a0c98;
        }
      } while (iVar1 != 0);
    }
  }
  goto LAB_012a0cd4;
  while( true ) {
    iVar6 = iVar6 + 0x16c;
    iVar1 = iVar1 + -0x16c;
    if (iVar1 == 0) break;
LAB_012a0c98:
    iVar2 = FUN_012a46ec(&local_34,iVar6);
    if (iVar2 != 0) goto LAB_012a0cbc;
  }
LAB_012a0cb8:
  iVar2 = 0;
LAB_012a0cbc:
  if (iVar2 == 0) goto LAB_012a0d7c;
LAB_012a0cd4:
  unaff_r7 = iVar4 * 0x16c;
  iVar1 = 0;
  do {
    if (unaff_r7 == iVar1) {
      iVar8 = 0;
      goto LAB_012a0d7c;
    }
    iVar4 = iVar9 + iVar1;
    if (iVar7 == *(int *)(iVar4 + 0x120)) {
      iVar8 = *(int *)(iVar4 + 0x11c);
      iVar6 = thunk_FUN_01bed842(iVar10,iVar8,iVar7);
      if (iVar6 == 0) {
        unaff_r7 = iVar7;
        goto LAB_012a0d7c;
      }
    }
    local_2c = *(int *)(iVar4 + 0x24);
    local_28 = local_2c + *(int *)(iVar4 + 0x28) * 0xc;
    iVar8 = FUN_012b10f8(&local_2c,iVar10,iVar7);
    iVar1 = iVar1 + 0x16c;
  } while (iVar8 == 0);
  iVar8 = *(int *)(iVar9 + -0x50 + iVar1);
  unaff_r7 = *(int *)(iVar9 + iVar1 + -0x4c);
LAB_012a0d7c:
  return CONCAT44(unaff_r7,iVar8);
}

