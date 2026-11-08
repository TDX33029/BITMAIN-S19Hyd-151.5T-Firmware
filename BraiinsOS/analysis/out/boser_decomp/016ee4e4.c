// FUN_016ee4e4 @ 016ee4e4 size=252 calls_out=1 calls_in=2
// strings: 

byte * FUN_016ee4e4(byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (byte *)FUN_016ee4e4(param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe,param_4);
    param_2 = (byte *)FUN_016ee4e4(param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (byte *)FUN_016ee4e4(param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
  }
  bVar1 = *param_2;
  bVar2 = *param_1;
  bVar4 = bVar2 < bVar1;
  if ((bVar2 == bVar1) && (bVar4 = false, param_1[1] < param_2[1])) {
    bVar4 = true;
  }
  bVar3 = *param_3;
  bVar5 = bVar2 < bVar3;
  if ((bVar2 == bVar3) && (bVar5 = false, param_1[1] < param_3[1])) {
    bVar5 = true;
  }
  if (bVar4 == bVar5) {
    bVar5 = bVar3 <= bVar1;
    if (bVar1 == bVar3) {
      bVar5 = param_3[1] <= param_2[1];
    }
    param_1 = param_2;
    if (bVar4 != !bVar5) {
      param_1 = param_3;
    }
  }
  return param_1;
}

