// FUN_013dba50 @ 013dba50 size=520 calls_out=5 calls_in=1
// strings: 

void FUN_013dba50(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar1 = FUN_013d2518(param_2);
  switch(uVar1) {
  case 0x52:
    *param_1 = 0x22;
    *(undefined1 *)(param_1 + 1) = 5;
    return;
  case 0x55:
    *param_1 = 0x22;
    *(undefined1 *)(param_1 + 1) = 3;
    return;
  case 0x69:
    *param_1 = 0x22;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  case 0x6d:
    *param_1 = 0x22;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  case 0x73:
    *param_1 = 0x22;
    *(undefined1 *)(param_1 + 1) = 2;
    return;
  case 0x75:
    *param_1 = 0x22;
    *(undefined1 *)(param_1 + 1) = 4;
    return;
  case 0x78:
    *param_1 = 0x22;
    *(undefined1 *)(param_1 + 1) = 6;
    return;
  }
  iVar7 = *param_2;
  uVar9 = *(uint *)(iVar7 + 0x50);
  uVar2 = FUN_013d2518(param_2);
  uVar5 = 1;
  if (0x7f < uVar2) {
    uVar5 = 2;
  }
  if ((0x7ff < uVar2) && (uVar5 = 4, uVar2 < 0x10000)) {
    uVar5 = 3;
  }
  if (CARRY4(uVar5,uVar9)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01894f38);
  }
  iVar10 = *(int *)(iVar7 + 0x58);
  if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01894f28);
  }
  iVar12 = *(int *)(iVar7 + 0x54);
  iVar3 = FUN_013d2518(param_2);
  uVar2 = *(uint *)(iVar7 + 0x50);
  uVar1 = *(undefined4 *)(iVar7 + 0x54);
  uVar6 = *(undefined4 *)(iVar7 + 0x58);
  iVar11 = param_2[2];
  iVar7 = param_2[1];
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar11);
  }
  if (iVar11 == 0) {
    iVar8 = 0;
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar11);
    iVar8 = iVar11;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar11);
    }
  }
  FUN_016dd1aa(iVar4,iVar7,iVar11);
  iVar10 = iVar10 + 1;
  if (iVar3 == 10) {
    iVar12 = iVar12 + 1;
    iVar10 = 1;
  }
  param_1[0xf] = iVar10;
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar6;
  param_1[0xd] = uVar5 + uVar9;
  param_1[7] = iVar8;
  param_1[8] = iVar4;
  param_1[9] = iVar11;
  param_1[0xe] = iVar12;
  *param_1 = 0x10;
  return;
}

