// FUN_009f5da0 @ 009f5da0 size=716 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_009f5da0(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 local_54;
  undefined4 local_50 [4];
  undefined2 local_40 [14];
  
  iVar4 = param_1[2];
  if (*param_1 == iVar4) {
    FUN_009f4d18(param_1,iVar4,1,1,1);
    iVar4 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar4) = 0x7b;
  param_1[2] = iVar4 + 1;
  FUN_009e7120(local_50,param_1,param_2,param_3);
  if ((char)local_50[0] != '\x04') {
    uVar3 = FUN_0157c4a0(local_50[0],local_50[1]);
    return uVar3;
  }
  iVar4 = param_1[2];
  if (*param_1 == iVar4) {
    FUN_009f4d18(param_1,iVar4,1,1,1);
    iVar4 = param_1[2];
  }
  iVar8 = iVar4 + 1;
  *(undefined1 *)(param_1[1] + iVar4) = 0x3a;
  param_1[2] = iVar8;
  if (param_4 < 10000) {
    uVar5 = 0;
    iVar4 = 0x14;
    uVar7 = param_4;
    if (99 < param_4) goto LAB_009f5f20;
LAB_009f5ee4:
    if (uVar5 == 0 && (9 < uVar7) <= uVar5) {
LAB_009f5f64:
      iVar4 = iVar4 + -1;
      *(byte *)((int)local_50 + iVar4) = (byte)uVar7 | 0x30;
      goto LAB_009f5f70;
    }
  }
  else {
    iVar2 = 0;
    uVar7 = 0;
    uVar9 = param_4;
    local_54 = param_1;
    do {
      iVar4 = iVar2;
      uVar11 = FUN_01846088(uVar9,uVar7,10000,0);
      uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
      param_4 = (uint)uVar11;
      uVar6 = uVar9 + param_4 * -10000;
      uVar1 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_40 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
      *(undefined2 *)((int)local_40 + iVar4 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar6 + uVar1 * -100 & 0xffff) * 2);
      bVar10 = uVar9 < 100000000;
      uVar1 = -uVar7;
      iVar2 = iVar4 + -4;
      uVar7 = uVar5;
      uVar9 = param_4;
    } while (bVar10 <= uVar1);
    iVar4 = iVar4 + 0x10;
    param_1 = local_54;
    uVar7 = param_4;
    if (-uVar5 < (uint)(param_4 < 100)) goto LAB_009f5ee4;
LAB_009f5f20:
    iVar4 = iVar4 + -2;
    uVar7 = (uint)((short)((param_4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_50 + iVar4) =
         *(undefined2 *)(&DAT_0040f4ca + (param_4 + uVar7 * -100 & 0xffff) * 2);
    if (uVar7 < 10) goto LAB_009f5f64;
  }
  iVar4 = iVar4 + -2;
  *(undefined2 *)((int)local_50 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar7 * 2);
LAB_009f5f70:
  uVar7 = 0x14 - iVar4;
  if ((uint)(*param_1 - iVar8) < uVar7) {
    FUN_009f4d18(param_1,iVar8,uVar7,1,1);
    iVar8 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar8,(int)local_50 + iVar4,uVar7);
  iVar8 = iVar8 + uVar7;
  param_1[2] = iVar8;
  if (*param_1 == iVar8) {
    FUN_009f4d18(param_1,iVar8,1,1,1);
    iVar8 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar8) = 0x7d;
  param_1[2] = iVar8 + 1;
  return 0;
}

