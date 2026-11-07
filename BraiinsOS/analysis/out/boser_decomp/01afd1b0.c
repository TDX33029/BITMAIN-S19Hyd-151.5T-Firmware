// FUN_01afd1b0 @ 01afd1b0 size=204 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01afd1b0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = param_4;
  for (uVar3 = param_3; uVar3 != 0 || uVar5 != 0; uVar3 = uVar3 >> 7 | uVar1) {
    uVar4 = uVar4 + 1;
    uVar1 = uVar5 << 0x19;
    uVar5 = uVar5 >> 7;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  uVar5 = uVar4 - 1;
  while( true ) {
    uVar3 = param_3 >> (uVar5 * 7 & 0xff) | param_4 << (uVar5 * -7 + 0x20 & 0xff) |
            param_4 >> (uVar5 * 7 - 0x20 & 0xff);
    if (uVar5 == 0) {
      uVar3 = uVar3 & 0x7f;
    }
    else {
      uVar3 = ~(~(uVar3 << 0x19) >> 0x19) & 0xff;
    }
    iVar2 = FUN_01afd168(param_1,uVar3);
    if (iVar2 == 0) break;
    uVar5 = uVar5 - 1;
    if (uVar4 <= uVar5) {
      return 1;
    }
  }
  return 0;
}

