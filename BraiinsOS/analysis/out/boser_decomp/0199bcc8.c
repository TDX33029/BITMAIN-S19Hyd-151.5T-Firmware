// FUN_0199bcc8 @ 0199bcc8 size=204 calls_out=5 calls_in=1
// strings: 

void FUN_0199bcc8(undefined4 param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r5;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_1020 [4096];
  
  uVar3 = param_2 - (param_2 >> 1);
  uVar4 = 1000000;
  if (param_2 < 1000000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  uVar2 = uVar4;
  if (uVar4 < 0x31) {
    uVar2 = 0x30;
  }
  if (uVar4 < 0x201) {
    puVar1 = auStack_1020;
    uVar2 = 0x200;
  }
  else {
    bVar5 = 0x1ffffffe < uVar3;
    if (uVar3 < 0x20000000) {
      unaff_r5 = uVar2 << 3;
      bVar5 = 0x7ffffffc < unaff_r5;
    }
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00664730();
    }
    puVar1 = (undefined1 *)FUN_01298504(unaff_r5,4);
    if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,unaff_r5);
    }
  }
  FUN_0199d7e4(param_1,param_2,puVar1,uVar2,param_2 < 0x41);
  if (0x200 < uVar4) {
    thunk_FUN_01be4678(puVar1);
  }
  return;
}

