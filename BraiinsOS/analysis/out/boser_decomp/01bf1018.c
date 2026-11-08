// FUN_01bf1018 @ 01bf1018 size=38 calls_out=1 calls_in=2
// strings: 

int FUN_01bf1018(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_01bf1250((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f),
                       (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f));
  uVar1 = (int)(param_1 ^ param_2) >> 0x1f;
  return (uVar2 ^ uVar1) - uVar1;
}

