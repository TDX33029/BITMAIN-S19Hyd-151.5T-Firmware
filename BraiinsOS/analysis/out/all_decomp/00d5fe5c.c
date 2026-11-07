// FUN_00d5fe5c @ 00d5fe5c size=244 calls_out=3 calls_in=1
// strings: 

void FUN_00d5fe5c(uint *param_1,short *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 local_28;
  undefined4 local_24;
  short local_20;
  
  if (*param_2 == 1) {
    local_20 = param_2[5];
    local_28 = *(undefined4 *)(param_2 + 1);
    local_24 = *(undefined4 *)(param_2 + 3);
    FUN_00d5f6d8(param_1,&local_28);
    return;
  }
  uVar6 = *(uint *)(param_2 + 4);
  bVar8 = 0x3ffffffe < uVar6;
  bVar7 = uVar6 == 0x3fffffff;
  uVar4 = uVar6 * 4;
  if (uVar6 < 0x40000000) {
    bVar8 = 0x7ffffffd < uVar4;
    bVar7 = uVar4 == 0x7ffffffe;
  }
  if (bVar8 && !bVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  puVar5 = *(undefined4 **)(param_2 + 2);
  if (uVar4 == 0) {
    puVar2 = (undefined4 *)&SUB_00000002;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(uVar4);
    uVar1 = uVar6;
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,uVar4);
    }
  }
  if (uVar6 == 0) {
    *param_1 = uVar1;
    param_1[1] = (uint)puVar2;
    param_1[2] = 0;
    return;
  }
  puVar3 = puVar2;
  uVar4 = uVar6;
  do {
    uVar4 = uVar4 - 1;
    *puVar3 = *puVar5;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar4 != 0);
  *param_1 = uVar1;
  param_1[1] = (uint)puVar2;
  param_1[2] = uVar6;
  return;
}

