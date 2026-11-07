// FUN_00c52ba8 @ 00c52ba8 size=412 calls_out=3 calls_in=2
// strings: 

void FUN_00c52ba8(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  double in_d0;
  undefined4 extraout_s1;
  byte abStack_4c [6];
  undefined2 local_46 [17];
  
  uVar7 = FUN_016d6168(SUB84(in_d0 * 1000.0,0));
  uVar5 = (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar7)) *
          (int)(longlong)(double)CONCAT44(extraout_s1,uVar7);
  iVar3 = 10;
  if (9999 < uVar5) {
    iVar6 = 0;
    uVar4 = uVar5;
    do {
      iVar3 = iVar6;
      uVar5 = uVar4 / 10000;
      uVar2 = (uint)((short)(uVar4 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_46 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)local_46 + iVar3 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar4 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar4;
      iVar6 = iVar3 + -4;
      uVar4 = uVar5;
    } while (bVar1);
    iVar3 = iVar3 + 6;
  }
  if (99 < uVar5) {
    uVar4 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(abStack_4c + iVar3 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar5 + uVar4 * -100 & 0xffff) * 2);
    iVar3 = iVar3 + -2;
    uVar5 = uVar4;
  }
  if (uVar5 < 10) {
    iVar6 = iVar3 + -1;
    abStack_4c[iVar3 + -1] = (byte)uVar5 | 0x30;
  }
  else {
    iVar6 = iVar3 + -2;
    *(undefined2 *)(abStack_4c + iVar3 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
  }
  uVar5 = 10 - iVar6;
  iVar3 = param_1[2];
  if ((uint)(*param_1 - iVar3) < uVar5) {
    FUN_00d653ec(param_1,iVar3,uVar5,1,1);
    iVar3 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar3,abStack_4c + iVar6,uVar5);
  param_1[2] = iVar3 + uVar5;
  return;
}

