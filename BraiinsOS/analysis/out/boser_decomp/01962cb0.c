// FUN_01962cb0 @ 01962cb0 size=128 calls_out=1 calls_in=8
// strings: 

undefined8 FUN_01962cb0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int local_14;
  uint local_10;
  uint local_c;
  
  uVar1 = 0x15;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  switch(uVar1 - 0xc) {
  case 0:
    local_10 = param_1[2];
    local_c = param_1[3];
    break;
  case 1:
    local_10 = param_1[1];
    local_c = param_1[2];
    break;
  case 2:
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    goto LAB_01962d04;
  case 3:
    uVar1 = param_1[1];
    uVar2 = param_1[2];
LAB_01962d04:
    FUN_012fbd94(&local_14,uVar1,uVar2);
    if (local_14 != 0) {
      local_10 = 0;
    }
    break;
  default:
    local_10 = 0;
    local_c = uVar1 - 0xc;
  }
  return CONCAT44(local_c,local_10);
}

