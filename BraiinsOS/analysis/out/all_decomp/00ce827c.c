// FUN_00ce827c @ 00ce827c size=212 calls_out=2 calls_in=0
// strings: 

void FUN_00ce827c(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar2 = (uint)(param_3 - param_2) >> 3;
  iVar1 = uVar2 * 0xc;
  if (0x55555550 < (uint)(param_3 - param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar7 = 0;
  if (iVar1 == 0) {
    uVar4 = 4;
    uVar3 = 0;
  }
  else {
    uVar4 = thunk_FUN_016d4a50(iVar1);
    uVar3 = uVar2;
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
  }
  if (param_2 != param_3) {
    puVar5 = (undefined4 *)(uVar4 + 4);
    puVar6 = (undefined4 *)(param_2 + 4);
    uVar7 = 0;
    do {
      uVar8 = *puVar6;
      uVar7 = uVar7 + 1;
      puVar5[-1] = puVar6[-1];
      puVar6 = puVar6 + 2;
      *puVar5 = 1;
      puVar5[1] = uVar8;
      puVar5 = puVar5 + 3;
    } while (uVar2 != uVar7);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar7;
  return;
}

