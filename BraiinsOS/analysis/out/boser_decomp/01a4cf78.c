// FUN_01a4cf78 @ 01a4cf78 size=240 calls_out=4 calls_in=1
// strings: 

void FUN_01a4cf78(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_102c [4096];
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
    puVar3 = auStack_102c;
    uVar2 = 0xaa;
  }
  else {
    uVar5 = 0;
    iVar1 = uVar4 * 0x18;
    if (0x5555555 < uVar2) {
LAB_01a4cfcc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,iVar1);
    }
    if (iVar1 == 0) {
      puVar3 = &SUB_00000004;
      uVar2 = 0;
    }
    else {
      uVar5 = 4;
      puVar3 = (undefined1 *)FUN_01298504(iVar1,4);
      uVar2 = uVar4;
      if (puVar3 == (undefined1 *)0x0) goto LAB_01a4cfcc;
    }
    local_24 = 0;
    local_2c = uVar2;
    puStack_28 = puVar3;
  }
  FUN_01a51394(param_1,param_2,puVar3,uVar2,param_2 < 0x41);
  if (0xaa < uVar4) {
    FUN_01a4d08c(&local_2c);
  }
  return;
}

