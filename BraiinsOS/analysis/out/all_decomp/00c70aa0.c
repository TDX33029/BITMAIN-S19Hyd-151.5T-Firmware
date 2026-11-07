// FUN_00c70aa0 @ 00c70aa0 size=188 calls_out=2 calls_in=3
// strings: 

void FUN_00c70aa0(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  
  uVar4 = param_3 * 4;
  bVar7 = 0x3ffffffe < param_3;
  bVar6 = param_3 == 0x3fffffff;
  if (param_3 < 0x40000000) {
    bVar7 = 0x7ffffffb < uVar4;
    bVar6 = uVar4 == 0x7ffffffc;
  }
  if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar4 == 0) {
    puVar2 = (undefined4 *)&DAT_00000004;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(uVar4);
    uVar1 = param_3;
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar4);
    }
  }
  if (param_3 == 0) {
    *param_1 = uVar1;
    param_1[1] = (uint)puVar2;
    param_1[2] = 0;
    return;
  }
  puVar3 = puVar2;
  uVar4 = param_3;
  puVar5 = (undefined4 *)(param_2 + 0x44);
  do {
    uVar4 = uVar4 - 1;
    *puVar3 = *puVar5;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 0x14;
  } while (uVar4 != 0);
  *param_1 = uVar1;
  param_1[1] = (uint)puVar2;
  param_1[2] = param_3;
  return;
}

