// FUN_00f5f804 @ 00f5f804 size=184 calls_out=2 calls_in=11
// strings: 

void FUN_00f5f804(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 != 0) {
    uVar5 = param_1[3];
    if ((uVar5 & 1) != 0) {
      uVar3 = param_2 + (uVar5 >> 5);
      if (uVar3 < 0x8000000) {
        piVar4 = (int *)(uVar5 & 0x1f | uVar3 * 0x20);
      }
      else {
        iVar1 = *param_1;
        iVar6 = param_1[1];
        iVar2 = param_1[2];
        uVar3 = uVar5 >> 5;
        piVar4 = (int *)thunk_FUN_016d4a50(0x14);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        piVar4[4] = 1;
        piVar4[3] = (uVar5 & 0x1f) >> 2;
        piVar4[2] = iVar6 + uVar3;
        piVar4[1] = iVar1 - uVar3;
        *piVar4 = iVar2 + uVar3;
      }
      param_1[3] = (int)piVar4;
    }
    iVar2 = param_1[1] - param_2;
    if ((uint)param_1[1] < param_2) {
      iVar2 = 0;
    }
    *param_1 = *param_1 + param_2;
    param_1[1] = iVar2;
    param_1[2] = param_1[2] - param_2;
  }
  return;
}

