// FUN_013f3640 @ 013f3640 size=416 calls_out=3 calls_in=0
// strings: 

void FUN_013f3640(int *param_1,int *param_2,uint *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  bVar1 = *(byte *)(*param_2 + 0x14);
  if ((bVar1 == 2) || ((bVar1 & 1) != 0)) {
    uVar4 = *param_3;
  }
  else {
    cVar2 = (char)param_3[7];
    uVar4 = *param_3;
    bVar12 = cVar2 == '\x04';
    if (bVar12) {
      cVar2 = *(char *)((int)param_3 + 0x1d);
    }
    if (((bVar12 && cVar2 == '\0') && (uVar4 < 0x100)) && (0x7f < uVar4)) {
      if (*(char *)(*param_2 + 0x17) != '\x01') goto LAB_013f36e0;
      iVar6 = param_2[2];
      if (iVar6 < 0) goto LAB_013f3704;
      iVar8 = param_2[1];
      if (iVar6 == 0) {
        iVar11 = 0;
        iVar3 = 1;
LAB_013f3798:
        FUN_016dd1aa(iVar3,iVar8,iVar6);
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        uVar7 = param_3[4];
        uVar9 = param_3[5];
        uVar10 = param_3[6];
        param_1[3] = param_3[1];
        param_1[4] = uVar4;
        param_1[5] = uVar5;
        param_1[6] = uVar7;
        param_1[7] = uVar9;
        param_1[8] = uVar10;
        *(short *)((int)param_1 + 6) = (short)((uint)iVar3 >> 0x10);
        *(undefined1 *)(param_1 + 9) = 1;
        param_1[2] = iVar6;
        *(char *)((int)param_1 + 5) = (char)((uint)iVar3 >> 8);
        *(char *)(param_1 + 1) = (char)iVar3;
        *param_1 = iVar11;
        return;
      }
      iVar3 = thunk_FUN_016d4a50(iVar6);
      if (iVar3 != 0) {
        iVar11 = iVar6;
        goto LAB_013f3798;
      }
      goto LAB_013f3738;
    }
  }
  if (uVar4 < 0x80) {
LAB_013f36e0:
    *(char *)(param_1 + 1) = (char)uVar4;
    *param_1 = -0x80000000;
    return;
  }
  iVar6 = param_2[2];
  if (iVar6 < 0) {
LAB_013f3704:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar6);
  }
  iVar8 = param_2[1];
  if (iVar6 == 0) {
    iVar3 = 1;
    iVar11 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(iVar6);
    iVar11 = iVar6;
    if (iVar3 == 0) {
LAB_013f3738:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar6);
    }
  }
  FUN_016dd1aa(iVar3,iVar8,iVar6);
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar7 = param_3[4];
  uVar9 = param_3[5];
  uVar10 = param_3[6];
  param_1[3] = param_3[1];
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar7;
  param_1[7] = uVar9;
  param_1[8] = uVar10;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = iVar11;
  param_1[1] = iVar3;
  param_1[2] = iVar6;
  return;
}

