// FUN_00df16d0 @ 00df16d0 size=372 calls_out=4 calls_in=2
// strings: 

void FUN_00df16d0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_30;
  int *local_2c;
  int local_28;
  
  iVar7 = param_2[3];
  iVar8 = param_2[1];
  iVar12 = param_2[2];
  iVar9 = *param_2;
  do {
    iVar6 = iVar9;
    if (iVar6 == iVar8) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    pcVar4 = *(code **)(iVar6 + 0x38);
    iVar9 = iVar6 + 0xc0;
    *param_2 = iVar9;
  } while (((pcVar4 != (code *)0x0) && (iVar1 = (*pcVar4)(iVar12), iVar1 == 0)) ||
          (iVar1 = FUN_011dde6c(iVar7,iVar6), iVar1 == 0));
  iVar1 = param_2[4];
  iVar11 = param_2[5];
  piVar2 = (int *)thunk_FUN_01be5118(0x30);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x30);
  }
  piVar2[1] = iVar11;
  piVar2[2] = iVar6;
  *piVar2 = iVar1;
  local_28 = 1;
  local_30 = 4;
  iVar6 = 1;
  local_2c = piVar2;
  while (iVar10 = iVar9, iVar10 != iVar8) {
    iVar9 = iVar10 + 0xc0;
    if (((*(code **)(iVar10 + 0x38) == (code *)0x0) ||
        (iVar3 = (**(code **)(iVar10 + 0x38))(iVar12), iVar3 != 0)) &&
       (iVar3 = FUN_011dde6c(iVar7,iVar10), iVar3 != 0)) {
      if (iVar6 == local_30) {
        FUN_0132b898(&local_30,iVar6,1,4,0xc);
        piVar2 = local_2c;
      }
      local_28 = iVar6 + 1;
      piVar5 = piVar2 + iVar6 * 3;
      *piVar5 = iVar1;
      piVar5[1] = iVar11;
      piVar5[2] = iVar10;
      iVar6 = local_28;
    }
  }
  *param_1 = local_30;
  param_1[1] = (int)local_2c;
  param_1[2] = local_28;
  return;
}

