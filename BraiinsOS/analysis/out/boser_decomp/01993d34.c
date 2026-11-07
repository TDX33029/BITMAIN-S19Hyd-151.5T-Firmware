// FUN_01993d34 @ 01993d34 size=232 calls_out=5 calls_in=1
// strings: 

void FUN_01993d34(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_1020 [4096];
  
  uVar4 = param_2 - (param_2 >> 1);
  uVar5 = 0x51615;
  if (param_2 < 0x51615) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5;
  if (uVar5 < 0x31) {
    uVar3 = 0x30;
  }
  if (uVar5 < 0xab) {
    puVar2 = auStack_1020;
    uVar3 = 0xaa;
  }
  else {
    if (0x5555555 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00664730();
    }
    iVar1 = uVar3 * 0x18;
    if (iVar1 == 0) {
      uVar3 = 0;
      puVar2 = &DAT_00000008;
    }
    else {
      puVar2 = (undefined1 *)FUN_01298504(iVar1,8);
      if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,iVar1);
      }
    }
  }
  FUN_01993fd4(param_1,param_2,puVar2,uVar3,param_2 < 0x41);
  if (uVar5 < 0xab) {
    return;
  }
  thunk_FUN_01be4678(puVar2);
  return;
}

