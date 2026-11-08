// FUN_01528578 @ 01528578 size=196 calls_out=2 calls_in=3
// strings: 

void FUN_01528578(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  uVar4 = param_3 * 4;
  bVar7 = 0x3ffffffe < param_3;
  bVar6 = param_3 == 0x3fffffff;
  if (param_3 < 0x40000000) {
    bVar7 = 0x7ffffffd < uVar4;
    bVar6 = uVar4 == 0x7ffffffe;
  }
  if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar4 == 0) {
    uVar3 = 2;
    uVar2 = 0;
  }
  else {
    uVar3 = thunk_FUN_016d4a50(uVar4);
    uVar2 = param_3;
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,uVar4);
    }
  }
  if (param_3 == 0) {
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = 0;
    return;
  }
  iVar5 = uVar3 + 2;
  param_2 = param_2 + 2;
  uVar4 = param_3;
  do {
    puVar1 = (undefined4 *)(param_2 + -2);
    param_2 = param_2 + 0xc;
    *(undefined4 *)(iVar5 + -2) = *puVar1;
    iVar5 = iVar5 + 4;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = param_3;
  return;
}

