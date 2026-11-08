// FUN_01383550 @ 01383550 size=60 calls_out=0 calls_in=4
// strings: 

uint FUN_01383550(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar2 = 4;
  bVar3 = ((param_2 ^ param_3) & 1) != 0;
  if (bVar3) {
    iVar2 = 0xb4;
  }
  puVar1 = (uint *)((int)param_1 + iVar2);
  if (bVar3) {
    param_1 = param_1 + 0x2c;
  }
  return *param_1 | (uint)(param_3 < *puVar1);
}

