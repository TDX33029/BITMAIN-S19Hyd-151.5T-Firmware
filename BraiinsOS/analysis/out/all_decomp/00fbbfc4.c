// FUN_00fbbfc4 @ 00fbbfc4 size=104 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_00fbbfc4(uint *param_1,int param_2)

{
  undefined4 extraout_r1;
  uint uVar1;
  uint uVar2;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  
  uVar1 = *param_1;
  uVar2 = param_2 + 1;
  if (uVar2 <= uVar1 * 2) {
    uVar2 = uVar1 << 1;
  }
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  FUN_010d30b4(&local_1c,uVar1,param_1[1],uVar2);
  if (local_1c == 0) {
    *param_1 = uVar2;
    param_1[1] = local_18;
    return CONCAT44(extraout_r1,0x80000001);
  }
  return CONCAT44(local_14,local_18);
}

