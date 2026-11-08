// FUN_008b9438 @ 008b9438 size=228 calls_out=5 calls_in=1
// strings: 

void FUN_008b9438(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  byte unaff_r7;
  undefined1 auStack_1020 [4096];
  
  uVar3 = param_2 - (param_2 >> 1);
  uVar4 = 400000;
  if (param_2 < 400000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (uVar4 < 0xcd) {
    puVar2 = auStack_1020;
    uVar3 = 0xcc;
  }
  else {
    if (0x6666666 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    iVar1 = uVar4 * 0x14;
    if (iVar1 == 0) {
      puVar2 = &DAT_00000004;
      uVar3 = 0;
    }
    else {
      puVar2 = (undefined1 *)thunk_FUN_016d4a50(iVar1);
      uVar3 = uVar4;
      if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar1);
      }
    }
    unaff_r7 = uVar3 == 0;
  }
  FUN_008d491c(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if ((0xcc < uVar4 & (unaff_r7 ^ 1)) != 0) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}

