// FUN_006fa6b8 @ 006fa6b8 size=172 calls_out=1 calls_in=2
// strings: 

byte * FUN_006fa6b8(byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    iVar3 = param_4 * 7;
    param_1 = (byte *)FUN_006fa6b8(param_1,param_1 + param_4 * 4,param_1 + iVar3,param_4);
    param_2 = (byte *)FUN_006fa6b8(param_2,param_2 + param_4 * 4,param_2 + iVar3,param_4);
    param_3 = (byte *)FUN_006fa6b8(param_3,param_3 + param_4 * 4,param_3 + iVar3,param_4);
  }
  bVar1 = *param_2;
  bVar2 = *param_1;
  if (bVar2 < bVar1 != bVar1 < *param_3) {
    param_2 = param_3;
  }
  if (bVar2 < bVar1 != bVar2 < *param_3) {
    param_2 = param_1;
  }
  return param_2;
}

