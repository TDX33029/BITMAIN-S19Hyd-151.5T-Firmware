// FUN_016e4448 @ 016e4448 size=192 calls_out=2 calls_in=5
// strings: 

void FUN_016e4448(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_28;
  uint local_24;
  
  local_28 = param_3 - param_2;
  uVar5 = 0;
  if (0x7ffffffc < local_28) {
LAB_016e4460:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,local_28);
  }
  if (param_3 == param_2) {
    uVar1 = 0;
    local_24 = 4;
    local_28 = 0;
  }
  else {
    uVar5 = 4;
    local_24 = FUN_01298504(local_28,4);
    if (local_24 == 0) goto LAB_016e4460;
    local_28 = local_28 >> 3;
    uVar1 = 0;
    do {
      puVar2 = (uint *)(param_2 + uVar1 * 8);
      uVar6 = *puVar2;
      uVar3 = puVar2[1];
      uVar4 = uVar3;
      if (uVar6 >= uVar3 && uVar6 != uVar3) {
        uVar4 = uVar6;
      }
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      puVar2 = (uint *)(local_24 + uVar1 * 8);
      *puVar2 = uVar3;
      uVar1 = uVar1 + 1;
      puVar2[1] = uVar4;
    } while (local_28 != uVar1);
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = uVar1;
  return;
}

