// FUN_013287bc @ 013287bc size=332 calls_out=3 calls_in=151
// strings: given slice is too small to serialize the message | assertion failed: vec_len + self.position <= vec.capacity()

void FUN_013287bc(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *param_2 + 0x80000001U & *param_2 >> 0x1f;
  if (uVar1 == 0) {
    (**(code **)(param_2[4] + 0x1c))(&local_20,param_2[3],param_2[5],param_2[7]);
    if ((char)local_20 == '\x04') {
      param_2[7] = 0;
      *param_1 = 4;
      return;
    }
    *param_1 = 0;
    param_1[1] = local_20;
    param_1[2] = local_1c;
    return;
  }
  if (uVar1 != 1) {
    FUN_015e79d4(param_1 + 1,0x28,"given slice is too small to serialize the message",0x31);
    *param_1 = 0;
    return;
  }
  puVar3 = (uint *)param_2[1];
  uVar1 = *puVar3;
  uVar2 = param_2[7] + puVar3[2];
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: vec_len + self.position <= vec.capacity()",0x3b,&DAT_0188fa40);
  }
  puVar3[2] = uVar2;
  if (uVar1 == uVar2) {
    FUN_0132f8cc(puVar3,uVar2,1,1,1);
    uVar1 = *puVar3;
    uVar2 = puVar3[2];
  }
  uVar4 = puVar3[1];
  param_2[6] = uVar1 - uVar2;
  param_2[5] = uVar4 + uVar2;
  param_2[7] = 0;
  *param_1 = 4;
  return;
}

