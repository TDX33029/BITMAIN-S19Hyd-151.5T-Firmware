// FUN_0178f144 @ 0178f144 size=356 calls_out=1 calls_in=1
// strings: 

int FUN_0178f144(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0178f104(param_1[1] * 5,7);
  uVar2 = param_1[1];
  param_1[2] = *param_1 ^ param_1[2];
  param_1[3] = param_1[1] ^ param_1[3];
  param_1[1] = param_1[2] ^ param_1[1];
  *param_1 = *param_1 ^ param_1[3];
  param_1[2] = uVar2 << 9 ^ param_1[2];
  uVar2 = FUN_0178f104(param_1[3],0xb);
  param_1[3] = uVar2;
  return iVar1 * 9;
}

