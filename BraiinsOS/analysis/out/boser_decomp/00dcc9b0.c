// FUN_00dcc9b0 @ 00dcc9b0 size=328 calls_out=5 calls_in=1
// strings: 

void FUN_00dcc9b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *param_2;
  uVar5 = param_2[3];
  uVar2 = param_2[1];
  uVar6 = param_2[2];
  uVar1 = uVar6 * 0x20;
  uVar3 = uVar4;
  if (uVar2 != uVar5) {
    do {
      FUN_01bed864(uVar3,uVar2 + 8,0x18);
      uVar2 = uVar2 + 0x20;
      uVar3 = uVar3 + 0x18;
    } while (uVar2 != uVar5);
    param_2[1] = uVar2;
  }
  uVar3 = uVar3 - uVar4;
  param_2[2] = 0;
  *param_2 = 4;
  param_2[1] = 4;
  param_2[3] = 4;
  FUN_00dcd128(uVar2,uVar5 - uVar2 >> 5);
  if (uVar6 != 0) {
    uVar2 = (uVar1 / 0x18) * 0x18;
  }
  if (uVar6 != 0 && uVar1 != uVar2) {
    if (uVar1 == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = FUN_01298554(uVar4,uVar1,4,uVar2);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,uVar2);
      }
    }
  }
  *param_1 = uVar1 / 0x18;
  param_1[1] = uVar4;
  param_1[2] = (uVar3 >> 3) * -0x55555555;
  FUN_00dcd128(param_2[1],param_2[3] - param_2[1] >> 5);
  FUN_0132b958(param_2[2],*param_2,4,0x20);
  return;
}

