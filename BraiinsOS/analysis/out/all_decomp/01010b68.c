// FUN_01010b68 @ 01010b68 size=108 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01010b68(uint *param_1,int param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  uint uVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  
  uVar2 = *param_1;
  uVar1 = param_2 + 1;
  if (uVar1 <= uVar2 * 2) {
    uVar1 = uVar2 << 1;
  }
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_01010bd4(&local_24,uVar2,param_1[1],uVar1,param_3);
  if (local_24 == 0) {
    *param_1 = uVar1;
    param_1[1] = local_20;
    return CONCAT44(extraout_r1,0x80000001);
  }
  return CONCAT44(local_1c,local_20);
}

