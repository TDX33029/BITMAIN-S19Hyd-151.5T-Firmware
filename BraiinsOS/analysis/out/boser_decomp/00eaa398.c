// FUN_00eaa398 @ 00eaa398 size=236 calls_out=4 calls_in=1
// strings: 

void FUN_00eaa398(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_1020 [4096];
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 100000;
  if (param_2 < 100000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x34) {
    puVar3 = auStack_1020;
    uVar2 = 0x33;
  }
  else {
    uVar5 = 0;
    iVar1 = uVar4 * 0x50;
    if (0x1999999 < uVar2) {
LAB_00eaa3ec:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,iVar1);
    }
    if (iVar1 == 0) {
      puVar3 = &DAT_00000008;
      uVar2 = 0;
    }
    else {
      uVar5 = 8;
      puVar3 = (undefined1 *)FUN_01298504(iVar1,8);
      uVar2 = uVar4;
      if (puVar3 == (undefined1 *)0x0) goto LAB_00eaa3ec;
    }
  }
  FUN_0117a924(param_1,param_2,puVar3,uVar2,param_2 < 0x41);
  if (0x33 < uVar4) {
    FUN_0132b958(uVar2,puVar3,8,0x50);
  }
  return;
}

