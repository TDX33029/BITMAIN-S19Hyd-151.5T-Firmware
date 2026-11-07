// FUN_014c1804 @ 014c1804 size=428 calls_out=1 calls_in=2
// strings: 

int * FUN_014c1804(int *param_1,int *param_2,int *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (int *)FUN_014c1804(param_1,param_1 + param_4 * 4,param_1 + param_4 * 7,param_4);
    param_2 = (int *)FUN_014c1804(param_2,param_2 + param_4 * 4,param_2 + param_4 * 7,param_4);
    param_3 = (int *)FUN_014c1804(param_3,param_3 + param_4 * 4,param_3 + param_4 * 7,param_4);
  }
  bVar1 = *(byte *)(*param_2 + 0x2b);
  bVar2 = *(byte *)(*param_1 + 0x2b);
  uVar8 = (uint)*(uint3 *)(*param_2 + 0x29);
  uVar6 = (uint)*(uint3 *)(*param_1 + 0x29);
  uVar9 = uVar8 & 0xff;
  uVar4 = uVar6 & 0xff;
  bVar10 = uVar4 < uVar9;
  if ((uVar4 == uVar9) &&
     (uVar5 = (uVar8 & 0xffff) >> 8, uVar7 = (uVar6 & 0xffff) >> 8, bVar10 = uVar7 < uVar5,
     uVar7 == uVar5)) {
    if (bVar2 == 0) {
      bVar10 = false;
      if (bVar1 != 0) {
        bVar10 = true;
      }
    }
    else {
      bVar10 = bVar2 < bVar1;
    }
  }
  bVar3 = *(byte *)(*param_3 + 0x2b);
  uVar7 = (uint)*(uint3 *)(*param_3 + 0x29);
  uVar5 = uVar7 & 0xff;
  bVar11 = uVar4 < uVar5;
  if ((uVar4 == uVar5) &&
     (uVar4 = (uVar7 & 0xffff) >> 8, uVar6 = (uVar6 & 0xffff) >> 8, bVar11 = uVar6 < uVar4,
     uVar6 == uVar4)) {
    if (bVar2 == 0) {
      bVar11 = false;
      if (bVar3 != 0) {
        bVar11 = true;
      }
    }
    else {
      bVar11 = bVar2 < bVar3;
    }
  }
  if (bVar10 == bVar11) {
    bVar11 = uVar9 < uVar5;
    if ((uVar9 == uVar5) &&
       (uVar4 = (uVar7 & 0xffff) >> 8, uVar6 = (uVar8 & 0xffff) >> 8, bVar11 = uVar6 < uVar4,
       uVar6 == uVar4)) {
      if (bVar1 == 0) {
        bVar11 = bVar3 != 0;
      }
      else {
        bVar11 = bVar1 < bVar3;
      }
    }
    param_1 = param_2;
    if (bVar10 != bVar11) {
      param_1 = param_3;
    }
  }
  return param_1;
}

