// FUN_019a2e10 @ 019a2e10 size=108 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_019a2e10(uint *param_1,int param_2)

{
  undefined4 extraout_r1;
  uint uVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = *param_1;
  uVar2 = param_2 + 1;
  if (uVar2 <= uVar1 * 2) {
    uVar2 = uVar1 << 1;
  }
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  FUN_019a2e7c(&local_24,uVar1,param_1[1],uVar2);
  if (local_24 == 0) {
    *param_1 = uVar2;
    param_1[1] = local_20;
    return CONCAT44(extraout_r1,0x80000001);
  }
  return CONCAT44(local_1c,local_20);
}

