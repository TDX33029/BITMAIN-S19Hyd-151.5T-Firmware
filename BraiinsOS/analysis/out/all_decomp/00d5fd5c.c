// FUN_00d5fd5c @ 00d5fd5c size=96 calls_out=0 calls_in=0
// strings: 

bool FUN_00d5fd5c(ushort *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = param_1[1] - param_2;
  bVar1 = (param_2 < 0x10000 && (param_2 & 0xffff) <= (uint)param_1[1]) &&
          (uint)*param_1 < (uVar2 & 0xffff);
  uVar3 = *param_1;
  if (bVar1) {
    uVar3 = (short)uVar2 - 1;
  }
  param_1[1] = uVar3;
  return bVar1;
}

