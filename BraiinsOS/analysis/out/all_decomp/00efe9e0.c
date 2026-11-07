// FUN_00efe9e0 @ 00efe9e0 size=412 calls_out=3 calls_in=2
// strings: 

void FUN_00efe9e0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  double in_d0;
  undefined4 extraout_s1;
  byte abStack_4c [6];
  undefined2 local_46 [17];
  
  uVar8 = FUN_016d6168(SUB84(in_d0 * 1000.0,0));
  uVar6 = (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar8)) *
          (int)(longlong)(double)CONCAT44(extraout_s1,uVar8);
  iVar3 = 10;
  if (9999 < uVar6) {
    iVar7 = 0;
    uVar4 = uVar6;
    do {
      iVar3 = iVar7;
      uVar6 = uVar4 / 10000;
      uVar5 = uVar6 * 0xd8f0 + uVar4;
      uVar2 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_46 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)local_46 + iVar3 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar2 * 0xff9c + uVar5 & 0xffff) * 2);
      bVar1 = 99999999 < uVar4;
      iVar7 = iVar3 + -4;
      uVar4 = uVar6;
    } while (bVar1);
    iVar3 = iVar3 + 6;
  }
  if (99 < uVar6) {
    uVar4 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(abStack_4c + iVar3 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar4 * 0xff9c + uVar6 & 0xffff) * 2);
    iVar3 = iVar3 + -2;
    uVar6 = uVar4;
  }
  if (uVar6 < 10) {
    iVar7 = iVar3 + -1;
    abStack_4c[iVar3 + -1] = (byte)uVar6 | 0x30;
  }
  else {
    iVar7 = iVar3 + -2;
    *(undefined2 *)(abStack_4c + iVar3 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
  }
  uVar6 = 10 - iVar7;
  iVar3 = param_1[2];
  if ((uint)(*param_1 - iVar3) < uVar6) {
    FUN_00edff4c(param_1,iVar3,uVar6,1,1);
    iVar3 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar3,abStack_4c + iVar7,uVar6);
  param_1[2] = iVar3 + uVar6;
  return;
}

