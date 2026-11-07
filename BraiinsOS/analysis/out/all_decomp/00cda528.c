// FUN_00cda528 @ 00cda528 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_00cda528(undefined4 param_1,uint param_2)

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
  uVar5 = 250000;
  if (param_2 < 250000) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5;
  if (uVar5 < 0x31) {
    uVar3 = 0x30;
  }
  if (uVar5 < 0x81) {
    puVar2 = auStack_1020;
    uVar3 = 0x80;
  }
  else {
    uVar1 = uVar3 * 0x20;
    bVar7 = 0x7fffffe < uVar4;
    bVar6 = uVar4 == 0x7ffffff;
    if (uVar4 < 0x8000000) {
      bVar7 = 0x7ffffff7 < uVar1;
      bVar6 = uVar1 == 0x7ffffff8;
    }
    if (bVar7 && !bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar1);
    }
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(uVar1);
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar1,8,uVar3);
    }
  }
  FUN_00b739b0(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if (0x80 < uVar5) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}

