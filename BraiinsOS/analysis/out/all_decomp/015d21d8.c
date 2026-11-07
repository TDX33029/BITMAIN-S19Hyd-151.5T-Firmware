// FUN_015d21d8 @ 015d21d8 size=240 calls_out=5 calls_in=1
// strings: 

void FUN_015d21d8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_1030 [4096];
  uint local_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  
  uVar4 = param_2 - (param_2 >> 1);
  uVar5 = 0x51615;
  if (param_2 < 0x51615) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5;
  if (uVar5 < 0x31) {
    uVar3 = 0x30;
  }
  if (uVar5 < 0xab) {
    puVar2 = auStack_1030;
    uVar3 = 0xaa;
  }
  else {
    if (0x5555555 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    iVar1 = uVar3 * 0x18;
    if (iVar1 == 0) {
      puVar2 = &DAT_00000008;
      uVar3 = 0;
    }
    else {
      puVar2 = (undefined1 *)thunk_FUN_016d4a50(iVar1);
      if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,iVar1);
      }
    }
    uStack_28 = 0;
    local_30 = uVar3;
    puStack_2c = puVar2;
  }
  FUN_015d2a88(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if (uVar5 < 0xab) {
    return;
  }
  thunk_FUN_016d3fb4(puVar2);
  return;
}

