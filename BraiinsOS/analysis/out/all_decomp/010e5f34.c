// FUN_010e5f34 @ 010e5f34 size=376 calls_out=6 calls_in=2
// strings: 

void FUN_010e5f34(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  uint local_2c;
  undefined2 *local_28;
  int local_24;
  
  iVar5 = param_2[3];
  local_28 = (undefined2 *)thunk_FUN_016d4a50(2);
  if (local_28 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,2);
  }
  uVar1 = *(undefined2 *)((int)param_2 + 0xe);
  *local_28 = (short)iVar5;
  local_2c = 2;
  local_24 = 2;
  FUN_010e555c(&local_2c,2,2,1,1);
  iVar5 = param_2[1];
  uVar6 = param_2[2];
  *(undefined2 *)((int)local_28 + local_24) = uVar1;
  local_24 = local_24 + 2;
  if (local_2c - local_24 < uVar6) {
    FUN_010e555c(&local_2c,local_24,uVar6,1,1);
  }
  iVar3 = local_24;
  puVar4 = local_28;
  uVar2 = local_2c;
  FUN_016dd1aa((int)local_28 + local_24,iVar5,uVar6);
  uVar6 = iVar3 + uVar6;
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  if (uVar6 < uVar2) {
    if (uVar6 == 0) {
      thunk_FUN_016d3fb4(puVar4);
      *param_1 = 0x80000001;
      param_1[1] = 1;
      param_1[2] = 0;
      return;
    }
    puVar4 = (undefined2 *)thunk_FUN_016d4ea4(puVar4,uVar6);
    if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar6);
    }
  }
  if (uVar6 < 0x10000) {
    *param_1 = 0x80000001;
    param_1[1] = puVar4;
    param_1[2] = uVar6;
    return;
  }
  thunk_FUN_016d3fb4();
  *param_1 = 0x80000000;
  param_1[1] = &DAT_005643e0;
  param_1[2] = 0x10;
  return;
}

