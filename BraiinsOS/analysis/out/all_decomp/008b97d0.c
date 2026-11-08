// FUN_008b97d0 @ 008b97d0 size=208 calls_out=5 calls_in=8
// strings: 

void FUN_008b97d0(undefined4 param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint unaff_r5;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_102c [4096];
  uint local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar3 = 500000;
  if (param_2 < 500000) {
    uVar3 = param_2;
  }
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  if (uVar3 < 0x101) {
    puVar1 = auStack_102c;
    uVar2 = 0x100;
  }
  else {
    bVar4 = 0xffffffe < uVar2;
    if (uVar2 < 0x10000000) {
      unaff_r5 = uVar3 << 4;
      bVar4 = 0x7ffffffc < unaff_r5;
    }
    if (bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    puVar1 = (undefined1 *)thunk_FUN_016d4a50(unaff_r5);
    if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,unaff_r5);
    }
    local_24 = 0;
    uVar2 = uVar3;
    local_2c = uVar3;
    local_28 = puVar1;
  }
  FUN_008d4f44(param_1,param_2,puVar1,uVar2,param_2 < 0x41);
  if (0x100 < uVar3) {
    thunk_FUN_016d3fb4(puVar1);
  }
  return;
}

