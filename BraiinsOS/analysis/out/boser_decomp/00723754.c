// FUN_00723754 @ 00723754 size=240 calls_out=4 calls_in=1
// strings: 

void FUN_00723754(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_1030 [4100];
  uint local_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 0x51615;
  if (param_2 < 0x51615) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0xab) {
    puVar3 = auStack_1030;
    uVar2 = 0xaa;
  }
  else {
    uVar5 = 0;
    iVar1 = uVar4 * 0x18;
    if (0x5555555 < uVar2) {
LAB_007237a8:
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
      if (puVar3 == (undefined1 *)0x0) goto LAB_007237a8;
    }
    local_24 = 0;
    local_2c = uVar2;
    puStack_28 = puVar3;
  }
  FUN_0071c87c(param_1,param_2,puVar3,uVar2,param_2 < 0x41);
  if (0xaa < uVar4) {
    FUN_00721560(&local_2c);
  }
  return;
}

