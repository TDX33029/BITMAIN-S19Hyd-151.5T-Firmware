// FUN_016d3250 @ 016d3250 size=164 calls_out=4 calls_in=0
// strings: 

void FUN_016d3250(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7)

{
  uint extraout_r1;
  uint extraout_r3;
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  if (param_4 < param_2) {
    puVar2 = (uint *)(param_1 + param_4 * 0xc);
    uVar1 = puVar2[2];
    if (param_3 <= uVar1) {
      if (uVar1 == *puVar2) {
        FUN_015f5ab8(puVar2);
      }
      puVar3 = (undefined4 *)(puVar2[1] + param_3 * 8);
      if (param_3 < uVar1) {
        FUN_01bed864(puVar3 + 2,puVar3,(uVar1 - param_3) * 8);
      }
      puVar2[2] = uVar1 + 1;
      *puVar3 = param_7;
      puVar3[1] = param_5 & 0xff | (param_6 & 0xff) << 8;
      return;
    }
    FUN_00666488(param_3,uVar1,&DAT_01d09a18);
    param_2 = extraout_r1;
    param_4 = extraout_r3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(param_4,param_2,&DAT_01d09a98);
}

