// FUN_00703c2c @ 00703c2c size=432 calls_out=9 calls_in=1
// strings: 

void FUN_00703c2c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    param_2[1] = *param_2;
    param_2[2] = 0xffffffff;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187af20);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187af20);
  }
  iVar1 = FUN_006f6440(param_2 + 1,param_3);
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 3) = 3;
    param_1[0xc] = &DAT_3b9aca00;
    return;
  }
  iVar2 = param_2[1];
  if (iVar2 != 0) {
    FUN_006f5d1c(iVar2,param_2[2],1);
  }
  uVar9 = *(uint *)(iVar1 + 0x40);
  iVar2 = uVar9 * 0x28;
  uVar3 = 0;
  if (0x3333333 < uVar9) {
LAB_00703cc0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,iVar2);
  }
  uVar11 = *(undefined4 *)(iVar1 + 0x3c);
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  uVar10 = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(undefined4 *)(iVar1 + 0x28);
  uVar7 = *(undefined4 *)(iVar1 + 0x2c);
  uVar8 = *(undefined4 *)(iVar1 + 0x30);
  uVar3 = *(undefined4 *)(iVar1 + 0x34);
  if (iVar2 == 0) {
    iVar4 = 8;
    local_3c = 0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar2);
    local_3c = uVar9;
    if (iVar4 == 0) {
      uVar3 = 8;
      goto LAB_00703cc0;
    }
  }
  FUN_016dd1aa(iVar4,uVar11,iVar2);
  FUN_015f3b0c(&local_38,1);
  FUN_006f625c(iVar1);
  param_1[6] = local_3c;
  param_1[7] = iVar4;
  *param_1 = uVar10;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  param_1[4] = uVar8;
  param_1[5] = uVar3;
  param_1[8] = uVar9;
  param_1[10] = local_38;
  param_1[0xb] = local_34;
  *(undefined1 *)(param_2 + 3) = 1;
  param_1[0xc] = local_30;
  return;
}

