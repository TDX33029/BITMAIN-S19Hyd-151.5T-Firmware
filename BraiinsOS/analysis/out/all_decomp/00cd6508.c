// FUN_00cd6508 @ 00cd6508 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_00cd6508(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_1020 [4096];
  
  uVar4 = param_2 - (param_2 >> 1);
  uVar5 = 2000000;
  if (param_2 < 2000000) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5;
  if (uVar5 < 0x31) {
    uVar3 = 0x30;
  }
  if (uVar5 < 0x401) {
    puVar2 = auStack_1020;
    uVar3 = 0x400;
  }
  else {
    uVar1 = uVar3 * 4;
    bVar7 = 0x3ffffffe < uVar4;
    bVar6 = uVar4 == 0x3fffffff;
    if (uVar4 < 0x40000000) {
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
      FUN_00600af4(4,uVar1,4,uVar3);
    }
  }
  FUN_00b78fb0(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if (0x400 < uVar5) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}

