// FUN_005ff9d4 @ 005ff9d4 size=232 calls_out=2 calls_in=17
// strings: 

void FUN_005ff9d4(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint local_28;
  undefined4 *puStack_24;
  
  uVar4 = param_2 * 4;
  bVar6 = 0x3ffffffe < param_2;
  bVar5 = param_2 == 0x3fffffff;
  if (param_2 < 0x40000000) {
    bVar6 = 0x7ffffffb < uVar4;
    bVar5 = uVar4 == 0x7ffffffc;
  }
  if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar4);
  }
  if (uVar4 == 0) {
    puStack_24 = (undefined4 *)&DAT_00000004;
    local_28 = 0;
  }
  else {
    puStack_24 = (undefined4 *)thunk_FUN_016d4a50(uVar4);
    local_28 = param_2;
    if (puStack_24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar4);
    }
  }
  if (param_2 < 2) {
    uVar4 = 1;
    puVar2 = puStack_24;
    if (param_2 == 0) {
      *param_1 = local_28;
      param_1[1] = (uint)puStack_24;
      param_1[2] = 0;
      return;
    }
  }
  else {
    iVar3 = param_2 - 1;
    puVar1 = puStack_24;
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = 0;
      iVar3 = iVar3 + -1;
      puVar1 = puVar2;
    } while (iVar3 != 0);
    uVar4 = param_2;
  }
  *puVar2 = 0;
  *param_1 = local_28;
  param_1[1] = (uint)puStack_24;
  param_1[2] = uVar4;
  return;
}

