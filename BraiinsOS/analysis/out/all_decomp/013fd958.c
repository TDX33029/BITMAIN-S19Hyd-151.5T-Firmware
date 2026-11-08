// FUN_013fd958 @ 013fd958 size=240 calls_out=1 calls_in=2
// strings: 

byte * FUN_013fd958(byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    uVar6 = param_4 & 0xfffffff8;
    iVar5 = uVar1 * 8 - (param_4 >> 3);
    param_1 = (byte *)FUN_013fd958(param_1,param_1 + uVar6,param_1 + iVar5 * 2,uVar1);
    param_2 = (byte *)FUN_013fd958(param_2,param_2 + uVar6,param_2 + iVar5 * 2,uVar1);
    param_3 = (byte *)FUN_013fd958(param_3,param_3 + uVar6,param_3 + iVar5 * 2,uVar1);
  }
  bVar2 = *param_2;
  bVar3 = *param_1;
  bVar4 = *param_3;
  bVar7 = bVar2 <= bVar3;
  if (bVar3 == bVar2) {
    bVar7 = param_2[1] <= param_1[1];
  }
  bVar8 = bVar4 <= bVar3;
  if (bVar3 == bVar4) {
    bVar8 = param_3[1] <= param_1[1];
  }
  if (!bVar7 == !bVar8) {
    bVar8 = bVar4 <= bVar2;
    if (bVar2 == bVar4) {
      bVar8 = param_3[1] <= param_2[1];
    }
    param_1 = param_2;
    if (!bVar7 != !bVar8) {
      param_1 = param_3;
    }
  }
  return param_1;
}

