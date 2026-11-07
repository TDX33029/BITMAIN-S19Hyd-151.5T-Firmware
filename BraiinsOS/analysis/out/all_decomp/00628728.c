// FUN_00628728 @ 00628728 size=264 calls_out=4 calls_in=1
// strings: 

void FUN_00628728(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte unaff_r5;
  uint uVar4;
  undefined1 auStack_1030 [4100];
  uint uStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  
  uVar3 = param_2 - (param_2 >> 1);
  uVar4 = 0x51615;
  if (param_2 < 0x51615) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (uVar4 < 0xab) {
    puVar2 = auStack_1030;
    uVar3 = 0xaa;
  }
  else {
    iVar1 = uVar4 * 0x18;
    if (0x5555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar1);
    }
    if (iVar1 == 0) {
      puVar2 = &DAT_00000008;
      uVar3 = 0;
    }
    else {
      puVar2 = (undefined1 *)thunk_FUN_016d4a50(iVar1);
      uVar3 = uVar4;
      if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,iVar1);
      }
    }
    local_24 = 0;
    unaff_r5 = uVar3 == 0;
    uStack_2c = uVar3;
    puStack_28 = puVar2;
  }
  FUN_0060c588(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if ((0xaa < uVar4 & (unaff_r5 ^ 1)) != 0) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}

