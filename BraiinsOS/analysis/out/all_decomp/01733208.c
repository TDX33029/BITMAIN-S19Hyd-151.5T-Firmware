// FUN_01733208 @ 01733208 size=384 calls_out=0 calls_in=3
// strings: 

bool FUN_01733208(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0xec);
  if ((int)uVar6 < 1) {
    return true;
  }
  if (uVar6 - 1 < 2) {
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    uVar4 = uVar6 >> 1;
    if (uVar4 == 1) {
      uVar1 = *param_2 | param_2[1] | param_2[2];
      goto LAB_01733334;
    }
    uVar1 = *param_2 | param_2[2];
    uVar5 = param_2[1] | param_2[3];
    if (uVar4 != 2) {
      uVar1 = uVar1 | param_2[4];
      uVar5 = uVar5 | param_2[5];
      if (uVar4 != 3) {
        uVar1 = uVar1 | param_2[6];
        uVar5 = uVar5 | param_2[7];
        if (uVar4 != 4) {
          uVar1 = uVar1 | param_2[8];
          uVar5 = uVar5 | param_2[9];
          if (uVar4 != 5) {
            uVar1 = uVar1 | param_2[10];
            uVar5 = uVar5 | param_2[0xb];
            if (uVar4 != 6) {
              uVar1 = uVar1 | param_2[0xc];
              uVar5 = uVar5 | param_2[0xd];
              if (uVar4 != 7) {
                uVar1 = uVar1 | param_2[0xe];
                uVar5 = uVar5 | param_2[0xf];
                if (uVar4 != 8) {
                  uVar2 = 8;
                  do {
                    uVar3 = uVar2 + 1;
                    uVar1 = param_2[uVar2 * 2] | uVar1;
                    uVar5 = param_2[uVar2 * 2 + 1] | uVar5;
                    uVar2 = uVar3;
                  } while (uVar4 != uVar3);
                }
              }
            }
          }
        }
      }
    }
    uVar4 = uVar6 & 0xfffffffe;
    uVar1 = uVar1 | uVar5;
    if (uVar6 == uVar4) goto LAB_01733334;
  }
  uVar1 = uVar1 | param_2[uVar4];
  if ((int)(uVar4 + 1) < (int)uVar6) {
    uVar1 = uVar1 | param_2[uVar4 + 1];
  }
LAB_01733334:
  return uVar1 == 0;
}

