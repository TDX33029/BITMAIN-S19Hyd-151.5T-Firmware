// FUN_008b9600 @ 008b9600 size=236 calls_out=5 calls_in=1
// strings: 

void FUN_008b9600(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  byte unaff_r7;
  undefined1 auStack_1020 [4096];
  
  uVar4 = param_2 - (param_2 >> 1);
  uVar5 = 0xa2c2a;
  if (param_2 < 0xa2c2a) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  uVar2 = uVar5 >> 1;
  if (uVar2 < 0xab) {
    puVar3 = auStack_1020;
    uVar5 = 0x155;
  }
  else {
    if (0xaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    iVar1 = uVar5 * 0xc;
    if (iVar1 == 0) {
      puVar3 = &DAT_00000004;
      uVar5 = 0;
    }
    else {
      puVar3 = (undefined1 *)thunk_FUN_016d4a50(iVar1);
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar1);
      }
    }
    unaff_r7 = uVar5 == 0;
  }
  FUN_008d4368(param_1,param_2,puVar3,uVar5,param_2 < 0x41);
  if ((0xaa < uVar2 & (unaff_r7 ^ 1)) != 0) {
    thunk_FUN_016d3fb4(puVar3);
  }
  return;
}

