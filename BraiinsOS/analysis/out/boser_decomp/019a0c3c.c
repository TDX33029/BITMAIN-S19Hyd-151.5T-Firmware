// FUN_019a0c3c @ 019a0c3c size=296 calls_out=8 calls_in=2
// strings: 

void FUN_019a0c3c(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_2c = thunk_FUN_01be5118(0x100);
  if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x100);
  }
  local_30 = 0x100;
  while( true ) {
    uVar1 = local_2c;
    uVar4 = local_30;
    uVar2 = FUN_01bf0446(param_2,local_2c,local_30);
    if (uVar2 == 0xffffffff) {
      puVar3 = (uint *)FUN_01be3244();
      uVar2 = *puVar3;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0x80000000;
      param_1[2] = uVar2;
      if (uVar4 == 0) {
        return;
      }
      thunk_FUN_01be4678(uVar1);
      return;
    }
    local_28 = uVar2;
    if (uVar2 != uVar4) break;
    FUN_0197ac30(&local_30,uVar4,1,1,1);
  }
  if (uVar2 < uVar4) {
    if (uVar2 == 0) {
      thunk_FUN_01be4678(uVar1);
      uVar4 = 1;
    }
    else {
      uVar4 = FUN_01298554(uVar1,uVar4,1,uVar2);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar2);
      }
    }
    local_30 = uVar2;
    local_2c = uVar4;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

