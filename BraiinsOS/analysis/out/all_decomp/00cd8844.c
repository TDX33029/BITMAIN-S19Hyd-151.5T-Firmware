// FUN_00cd8844 @ 00cd8844 size=240 calls_out=4 calls_in=0
// strings: 

void FUN_00cd8844(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_1030 [4100];
  uint local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  uVar5 = param_2 - (param_2 >> 1);
  uVar4 = 250000;
  if (param_2 < 250000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  uVar3 = uVar4;
  if (uVar4 < 0x31) {
    uVar3 = 0x30;
  }
  if (uVar4 < 0x81) {
    puVar2 = auStack_1030;
    uVar3 = 0x80;
  }
  else {
    uVar1 = uVar3 * 0x20;
    bVar7 = 0x7fffffe < uVar5;
    bVar6 = uVar5 == 0x7ffffff;
    if (uVar5 < 0x8000000) {
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
      FUN_00600af4(8,uVar1);
    }
    local_24 = 0;
    local_2c = uVar3;
    local_28 = puVar2;
  }
  FUN_00b7d724(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if (0x80 < uVar4) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}

