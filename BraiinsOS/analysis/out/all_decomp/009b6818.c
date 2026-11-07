// FUN_009b6818 @ 009b6818 size=200 calls_out=4 calls_in=1
// strings: 

void FUN_009b6818(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_1018 [4096];
  
  uVar3 = param_2 - (param_2 >> 1);
  uVar4 = 500000;
  if (param_2 < 500000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (uVar4 < 0x101) {
    puVar2 = auStack_1018;
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
    uVar3 = uVar4;
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1,4,uVar4);
    }
  }
  FUN_009d6994(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if (0x100 < uVar4) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}

