// FUN_0136a6ac @ 0136a6ac size=396 calls_out=2 calls_in=5
// strings: 

void FUN_0136a6ac(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_3c;
  
  uVar1 = FUN_0137e188(*param_2,param_2[1],param_2[2],param_2[3],param_3);
  local_3c = 0;
  uVar3 = uVar1;
  do {
    uVar3 = param_2[8] & uVar3;
    uVar4 = *(uint *)(param_2[7] + uVar3);
    uVar2 = uVar4 ^ (uVar1 >> 0x19) * 0x1010101;
    uVar2 = ~uVar2 & 0x80808080 & uVar2 + 0xfefefeff;
    while (uVar2 != 0) {
      uVar6 = uVar3 + ((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                     (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) & param_2[8]
      ;
      uVar5 = *(uint *)(param_2[7] + -4 + uVar6 * -4);
      if ((uint)param_2[6] <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar5,param_2[6],&DAT_01d307c8);
      }
      uVar2 = uVar2 - 1 & uVar2;
      if (param_3 == *(int *)(param_2[5] + uVar5 * 0xc + 4)) {
        param_1[2] = uVar5;
        *param_1 = 0;
        param_1[1] = param_2 + 4;
        param_1[3] = uVar6;
        return;
      }
    }
    if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) {
      param_1[1] = uVar1;
      *param_1 = param_2 + 4;
      param_1[2] = param_3;
      param_1[3] = param_2 + 0xc;
      return;
    }
    local_3c = local_3c + 4;
    uVar3 = local_3c + uVar3;
  } while( true );
}

