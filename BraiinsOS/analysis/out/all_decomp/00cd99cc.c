// FUN_00cd99cc @ 00cd99cc size=240 calls_out=4 calls_in=0
// strings: 

void FUN_00cd99cc(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_102c [4096];
  uint local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  uVar5 = param_2 - (param_2 >> 1);
  uVar4 = 500000;
  if (param_2 < 500000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  uVar3 = uVar4;
  if (uVar4 < 0x31) {
    uVar3 = 0x30;
  }
  if (uVar4 < 0x101) {
    puVar2 = auStack_102c;
    uVar3 = 0x100;
  }
  else {
    uVar1 = uVar3 * 0x10;
    bVar7 = 0xffffffe < uVar5;
    bVar6 = uVar5 == 0xfffffff;
    if (uVar5 < 0x10000000) {
      bVar7 = 0x7ffffffb < uVar1;
      bVar6 = uVar1 == 0x7ffffffc;
    }
    if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar1);
    }
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(uVar1);
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
    local_24 = 0;
    local_2c = uVar3;
    local_28 = puVar2;
  }
  FUN_00b7e804(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if (0x100 < uVar4) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}

