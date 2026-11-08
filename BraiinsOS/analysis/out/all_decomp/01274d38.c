// FUN_01274d38 @ 01274d38 size=304 calls_out=5 calls_in=4
// strings: 

void FUN_01274d38(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_3 + param_5;
  uVar4 = iVar7 + 1;
  iVar1 = uVar4 * 4;
  if (0x1ffffffe < uVar4 && iVar7 != 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  uVar3 = FUN_016d38c8(iVar1,1);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar1);
  }
  FUN_01274e84(uVar3,uVar4,param_2,param_3,param_4,param_5);
  if (*(int *)(uVar3 + uVar4 * 4 + -4) == 0) {
    uVar5 = iVar7 + 2;
    iVar7 = iVar7 * -4;
    do {
      if (iVar7 == 4) {
        uVar6 = 0;
        uVar5 = uVar6;
        if (uVar4 >> 2 != 0) goto LAB_01274e4c;
        goto LAB_01274dbc;
      }
      piVar2 = (int *)(uVar3 - iVar7);
      uVar5 = uVar5 - 1;
      iVar7 = iVar7 + 4;
    } while (*piVar2 == 0);
    if (uVar4 <= uVar5) {
      uVar5 = uVar4;
    }
    uVar6 = uVar5;
    if (uVar5 < uVar4 >> 2) {
      if (uVar5 == 0) {
LAB_01274e4c:
        thunk_FUN_016d3fb4(uVar3);
        uVar3 = 4;
        uVar6 = uVar5;
      }
      else {
        uVar3 = thunk_FUN_016d4ea4(uVar3,uVar5 << 2);
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar5 << 2);
        }
      }
      goto LAB_01274dc0;
    }
  }
  else {
    uVar6 = uVar4;
  }
LAB_01274dbc:
  uVar5 = uVar4;
LAB_01274dc0:
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  *param_1 = uVar5;
  return;
}

