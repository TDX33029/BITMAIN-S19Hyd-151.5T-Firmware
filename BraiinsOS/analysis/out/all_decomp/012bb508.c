// FUN_012bb508 @ 012bb508 size=384 calls_out=3 calls_in=4
// strings: 

uint FUN_012bb508(uint *param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  uVar14 = param_1[7];
  if (param_1[6] < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar14,param_1[6],&DAT_0188f948);
  }
  uVar10 = param_2[7];
  if (param_2[6] < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar10,param_2[6],&DAT_0188f948);
  }
  if (uVar14 != uVar10) {
    return (uint)(uVar14 < uVar10);
  }
  uVar10 = param_1[5];
  iVar11 = uVar14 + 1;
  uVar14 = param_2[5];
  iVar15 = 0;
  do {
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) {
      uVar5 = 0;
      uVar12 = 0;
      uVar14 = 0;
      uVar10 = 0;
      if ((*param_1 & 1) != 0) {
        uVar5 = param_1[2];
        uVar12 = param_1[3];
      }
      if ((*param_2 & 1) != 0) {
        uVar14 = param_2[2];
        uVar10 = param_2[3];
      }
      return (uint)((int)(uVar12 - (uVar10 + (uVar5 < uVar14))) < 0 !=
                   (SBORROW4(uVar12,uVar10) != SBORROW4(uVar12 - uVar10,(uint)(uVar5 < uVar14))));
    }
    iVar13 = uVar10 + iVar15;
    iVar9 = uVar14 + iVar15;
    uVar3 = 1;
    iVar8 = 0;
    cVar1 = *(char *)(iVar13 + 0x1c);
    iVar6 = 0;
    cVar2 = *(char *)(iVar9 + 0x1c);
    uVar7 = 1;
    if (cVar1 != '\0') {
      iVar4 = uVar10 + iVar15;
      iVar8 = *(int *)(iVar4 + 0x18);
      uVar3 = *(undefined4 *)(iVar4 + 0x14);
    }
    if (cVar2 == '\x01') {
      iVar6 = uVar14 + iVar15;
      uVar7 = *(undefined4 *)(iVar6 + 0x14);
      iVar6 = *(int *)(iVar6 + 0x18);
    }
    if (iVar8 != iVar6) break;
    iVar15 = iVar15 + 0x28;
    iVar8 = thunk_FUN_016dd50a(uVar3,uVar7,iVar8);
  } while (iVar8 == 0);
  uVar10 = 0;
  uVar7 = 1;
  uVar14 = 0;
  if (cVar1 != '\0') {
    uVar7 = *(undefined4 *)(iVar13 + 0x14);
  }
  uVar3 = 1;
  if (cVar1 != '\0') {
    uVar10 = *(uint *)(iVar13 + 0x18);
  }
  if (cVar2 != '\0') {
    uVar14 = *(uint *)(iVar9 + 0x18);
    uVar3 = *(undefined4 *)(iVar9 + 0x14);
  }
  uVar5 = uVar14;
  if (uVar10 < uVar14) {
    uVar5 = uVar10;
  }
  uVar5 = FUN_016dd50a(uVar7,uVar3,uVar5);
  if (uVar5 == 0) {
    uVar5 = uVar10 - uVar14;
  }
  return uVar5 >> 0x1f;
}

