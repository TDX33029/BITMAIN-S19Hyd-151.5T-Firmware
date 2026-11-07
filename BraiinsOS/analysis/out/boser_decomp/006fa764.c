// FUN_006fa764 @ 006fa764 size=188 calls_out=4 calls_in=1
// strings: 

void FUN_006fa764(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_1020 [4096];
  
  uVar1 = param_2 - (param_2 >> 1);
  uVar3 = 8000000;
  if (param_2 < 8000000) {
    uVar3 = param_2;
  }
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  if (0x1000 < uVar3) {
    uVar4 = 0;
    if (-1 < (int)uVar3) {
      uVar4 = 1;
      puVar2 = (undefined1 *)FUN_01298504(uVar3,1);
      uVar1 = uVar3;
      if (puVar2 != (undefined1 *)0x0) goto LAB_006fa7e0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,uVar3);
  }
  puVar2 = auStack_1020;
  uVar1 = 0x1000;
LAB_006fa7e0:
  FUN_006fa840(param_1,param_2,puVar2,uVar1,param_2 < 0x41);
  if (0x1000 < uVar3) {
    FUN_019bb7e0(uVar3,puVar2);
  }
  return;
}

