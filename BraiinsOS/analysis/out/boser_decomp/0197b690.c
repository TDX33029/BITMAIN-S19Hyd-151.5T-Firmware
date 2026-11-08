// FUN_0197b690 @ 0197b690 size=300 calls_out=9 calls_in=4
// strings: 

void FUN_0197b690(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_2c = thunk_FUN_01be5118(0x200);
  if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x200);
  }
  local_30 = 0x200;
  while( true ) {
    uVar1 = local_2c;
    uVar5 = local_30;
    iVar2 = FUN_01bf0266(local_2c,local_30);
    if (iVar2 != 0) {
      uVar4 = FUN_01bedbda(uVar1);
      local_28 = uVar4;
      if (uVar4 < uVar5) {
        if (uVar4 == 0) {
          thunk_FUN_01be4678(uVar1);
          uVar5 = 1;
        }
        else {
          uVar5 = FUN_01298554(uVar1,uVar5,1,uVar4);
          if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,uVar4);
          }
        }
        local_30 = uVar4;
        local_2c = uVar5;
      }
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      return;
    }
    puVar3 = (uint *)FUN_01be3244();
    uVar4 = *puVar3;
    if (uVar4 != 0x22) break;
    local_28 = uVar5;
    FUN_0197ac30(&local_30,uVar5,1,1,1);
  }
  *param_1 = 0x80000000;
  param_1[1] = 0;
  param_1[2] = uVar4;
  if (uVar5 == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar1);
  return;
}

