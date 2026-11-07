// FUN_0167ced8 @ 0167ced8 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_0167ced8(uint *param_1,byte *param_2,int param_3,uint param_4,uint param_5)

{
  uint unaff_r5;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = 0;
  if (param_5 < param_4) {
    bVar2 = (byte *)(uint)*param_2 != (byte *)(uint)*(byte *)(param_3 + param_5);
    if (bVar2) {
      param_2 = (byte *)(uint)param_2[1];
    }
    bVar3 = param_2 == (byte *)(uint)*(byte *)(param_3 + param_5);
    if (!bVar2 || bVar3) {
      unaff_r5 = param_5 + 1;
    }
    uVar1 = (uint)(!bVar2 || bVar3);
    if (!bVar2 || bVar3) {
      param_1[1] = param_5;
      param_1[2] = unaff_r5;
    }
  }
  *param_1 = uVar1;
  return;
}

