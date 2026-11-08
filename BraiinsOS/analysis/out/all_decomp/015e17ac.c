// FUN_015e17ac @ 015e17ac size=200 calls_out=5 calls_in=1
// strings: 

void FUN_015e17ac(undefined4 param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r5;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_1020 [4096];
  
  uVar3 = param_2 - (param_2 >> 1);
  uVar4 = 250000;
  if (param_2 < 250000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  uVar2 = uVar4;
  if (uVar4 < 0x31) {
    uVar2 = 0x30;
  }
  if (uVar4 < 0x81) {
    puVar1 = auStack_1020;
    uVar2 = 0x80;
  }
  else {
    bVar5 = 0x7fffffe < uVar3;
    if (uVar3 < 0x8000000) {
      unaff_r5 = uVar2 << 5;
      bVar5 = 0x7ffffff8 < unaff_r5;
    }
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    puVar1 = (undefined1 *)thunk_FUN_016d4a50(unaff_r5);
    if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,unaff_r5);
    }
  }
  FUN_015e24d0(param_1,param_2,puVar1,uVar2,param_2 < 0x41);
  if (0x80 < uVar4) {
    thunk_FUN_016d3fb4(puVar1);
  }
  return;
}

