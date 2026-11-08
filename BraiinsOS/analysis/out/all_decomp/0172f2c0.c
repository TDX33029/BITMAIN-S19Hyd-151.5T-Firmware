// FUN_0172f2c0 @ 0172f2c0 size=388 calls_out=0 calls_in=6
// strings: 

uint FUN_0172f2c0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x11c);
  if ((int)uVar6 < 1) {
    return 0;
  }
  if (uVar6 - 1 < 2) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = uVar6 >> 1;
    if (uVar4 == 1) {
      uVar5 = *param_2 | param_2[1] | param_2[2];
      goto LAB_0172f3ec;
    }
    uVar3 = param_2[2] | *param_2;
    uVar5 = param_2[3] | param_2[1];
    if (uVar4 != 2) {
      uVar3 = uVar3 | param_2[4];
      uVar5 = uVar5 | param_2[5];
      if (uVar4 != 3) {
        uVar3 = uVar3 | param_2[6];
        uVar5 = uVar5 | param_2[7];
        if (uVar4 != 4) {
          uVar3 = uVar3 | param_2[8];
          uVar5 = uVar5 | param_2[9];
          if (uVar4 != 5) {
            uVar3 = uVar3 | param_2[10];
            uVar5 = uVar5 | param_2[0xb];
            if (uVar4 != 6) {
              uVar3 = uVar3 | param_2[0xc];
              uVar5 = uVar5 | param_2[0xd];
              if (uVar4 != 7) {
                uVar3 = uVar3 | param_2[0xe];
                uVar5 = uVar5 | param_2[0xf];
                if (uVar4 != 8) {
                  uVar1 = 8;
                  do {
                    uVar2 = uVar1 + 1;
                    uVar3 = param_2[uVar1 * 2] | uVar3;
                    uVar5 = param_2[uVar1 * 2 + 1] | uVar5;
                    uVar1 = uVar2;
                  } while (uVar4 != uVar2);
                }
              }
            }
          }
        }
      }
    }
    uVar5 = uVar5 | uVar3;
    if ((uVar6 & 1) == 0) goto LAB_0172f3ec;
    uVar4 = uVar6 & 0xfffffffe;
  }
  uVar5 = uVar5 | param_2[uVar4];
  if ((int)(uVar4 + 1) < (int)uVar6) {
    uVar5 = uVar5 | param_2[uVar4 + 1];
  }
LAB_0172f3ec:
  return ~((int)(uVar5 - 1 & ~uVar5) >> 0x1f);
}

