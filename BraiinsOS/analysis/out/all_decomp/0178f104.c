// FUN_0178f104 @ 0178f104 size=64 calls_out=0 calls_in=1
// strings: 

uint FUN_0178f104(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x20U - param_2 & 0x1f;
  return param_1 >> uVar1 | param_1 << 0x20 - uVar1;
}

