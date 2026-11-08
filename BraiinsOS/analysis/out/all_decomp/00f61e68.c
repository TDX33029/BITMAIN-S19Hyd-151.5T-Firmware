// FUN_00f61e68 @ 00f61e68 size=80 calls_out=0 calls_in=1
// strings: 

uint FUN_00f61e68(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r7;
  bool bVar3;
  
  uVar1 = *param_1;
  bVar3 = (uVar1 & 1) != 0;
  uVar2 = param_1[2];
  if (bVar3) {
    uVar1 = 1;
    uVar2 = uVar2 ^ param_3;
    unaff_r7 = param_1[3] ^ param_4;
  }
  if (!bVar3 || uVar2 == 0 && unaff_r7 == 0) {
    *param_1 = 1;
    param_1[1] = 0;
    uVar1 = 8;
    param_1[2] = param_3;
    param_1[3] = param_4;
  }
  return uVar1;
}

