// FUN_00d5fe04 @ 00d5fe04 size=88 calls_out=0 calls_in=0
// strings: 

bool FUN_00d5fe04(ushort *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar3 = param_1[1];
  uVar2 = *param_1 + param_2;
  uVar4 = uVar2 & 0xffff;
  bVar1 = (param_2 < 0x10000 && uVar4 < uVar3) && *param_1 <= uVar4;
  if (bVar1) {
    uVar3 = (short)uVar2 + 1;
  }
  *param_1 = uVar3;
  return bVar1;
}

