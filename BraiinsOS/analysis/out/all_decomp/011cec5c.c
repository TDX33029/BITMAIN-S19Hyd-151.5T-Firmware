// FUN_011cec5c @ 011cec5c size=272 calls_out=4 calls_in=1
// strings: 

void FUN_011cec5c(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte unaff_r5;
  uint uVar5;
  undefined1 auStack_102c [4096];
  uint uStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  
  uVar5 = param_2 - (param_2 >> 1);
  uVar4 = 0xa2c2a;
  if (param_2 < 0xa2c2a) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  uVar2 = uVar4 >> 1;
  if (uVar2 < 0xab) {
    puVar3 = auStack_102c;
    uVar4 = 0x155;
  }
  else {
    iVar1 = uVar4 * 0xc;
    if (0xaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar1);
    }
    if (iVar1 == 0) {
      puVar3 = &DAT_00000004;
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined1 *)thunk_FUN_016d4a50(iVar1);
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar1);
      }
    }
    local_24 = 0;
    unaff_r5 = uVar4 == 0;
    uStack_2c = uVar4;
    puStack_28 = puVar3;
  }
  FUN_0123f244(param_1,param_2,puVar3,uVar4,param_2 < 0x41);
  if ((0xaa < uVar2 & (unaff_r5 ^ 1)) != 0) {
    thunk_FUN_016d3fb4(puVar3);
  }
  return;
}

