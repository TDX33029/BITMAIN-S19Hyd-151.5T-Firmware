// FUN_013cb9e8 @ 013cb9e8 size=224 calls_out=4 calls_in=2
// strings: 

void FUN_013cb9e8(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_102c [4096];
  uint local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  uVar3 = param_2 - (param_2 >> 1);
  uVar4 = 500000;
  if (param_2 < 500000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (uVar4 < 0x101) {
    puVar2 = auStack_102c;
    uVar3 = 0x100;
  }
  else {
    uVar1 = uVar4 * 0x10;
    bVar6 = 0xffffffe < uVar3;
    bVar5 = uVar3 == 0xfffffff;
    if (uVar3 < 0x10000000) {
      bVar6 = 0x7ffffffb < uVar1;
      bVar5 = uVar1 == 0x7ffffffc;
    }
    if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar1);
    }
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(uVar1);
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
    local_24 = 0;
    uVar3 = uVar4;
    local_2c = uVar4;
    local_28 = puVar2;
  }
  FUN_0137f86c(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if (0x100 < uVar4) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}

