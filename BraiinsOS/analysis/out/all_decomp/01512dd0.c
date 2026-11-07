// FUN_01512dd0 @ 01512dd0 size=316 calls_out=5 calls_in=9
// strings: 

void FUN_01512dd0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  
  iVar4 = param_2[2];
  iVar9 = param_2[1];
  uVar10 = *param_2;
  iVar3 = iVar9 + iVar4 * 0xc;
  if (iVar4 == 0) {
    iVar4 = iVar9;
    if (iVar3 != iVar9) {
      puVar6 = (undefined4 *)(iVar9 + 4);
      iVar3 = 0;
      do {
        if ((puVar6[-1] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*puVar6);
        }
        puVar6 = puVar6 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar8 = 0;
    do {
      piVar5 = (int *)(iVar9 + iVar8);
      iVar1 = *piVar5;
      iVar7 = piVar5[1];
      iVar11 = piVar5[2];
      if (iVar1 == -0x80000000) {
        if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600c10();
        }
        if (iVar11 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = thunk_FUN_016d4a50(iVar11);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar11);
          }
          param_4 = extraout_r3;
        }
        FUN_016dd1aa(iVar2,iVar7,iVar11,param_4,param_1,iVar3);
        iVar1 = iVar11;
        iVar7 = iVar2;
        param_4 = extraout_r3_00;
      }
      piVar5 = (int *)(iVar9 + iVar8);
      *piVar5 = iVar1;
      iVar8 = iVar8 + 0xc;
      piVar5[1] = iVar7;
      piVar5[2] = iVar11;
    } while (iVar4 * 0xc != iVar8);
    iVar4 = iVar9 + iVar8;
  }
  *param_1 = uVar10;
  param_1[1] = iVar9;
  param_1[2] = ((uint)(iVar4 - iVar9) >> 2) * -0x55555555;
  return;
}

