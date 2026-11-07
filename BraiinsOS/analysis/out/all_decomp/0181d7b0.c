// FUN_0181d7b0 @ 0181d7b0 size=424 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_0181d7b0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x16bc);
  uVar7 = (uint)*(ushort *)(param_1 + 0x16b8) | (param_4 & 0xffff) << (uVar2 & 0xff);
  uVar6 = (undefined2)uVar7;
  if ((int)uVar2 < 0xe) {
    iVar3 = uVar2 + 3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
    *(undefined2 *)(param_1 + 0x16b8) = uVar6;
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)uVar7;
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    iVar3 = *(int *)(param_1 + 0x16bc) + -0xd;
    uVar6 = (undefined2)((int)(param_4 & 0xffff) >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
  }
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x16b8) = uVar6;
  if (iVar3 < 9) {
    if (0 < iVar3) {
      *(int *)(param_1 + 0x14) = iVar4 + 1;
      *(char *)(iVar5 + iVar4) = (char)uVar6;
      iVar4 = *(int *)(param_1 + 0x14);
      iVar5 = *(int *)(param_1 + 8);
    }
  }
  else {
    *(int *)(param_1 + 0x14) = iVar4 + 1;
    *(char *)(iVar5 + iVar4) = (char)uVar6;
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    iVar4 = *(int *)(param_1 + 0x14);
    iVar5 = *(int *)(param_1 + 8);
  }
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  *(byte *)(iVar5 + iVar4) = (byte)param_3;
  bVar1 = (byte)((uint)param_3 >> 8);
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar3) = bVar1;
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar3) = ~(byte)param_3;
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  *(byte *)(*(int *)(param_1 + 8) + iVar3) = ~bVar1;
  if (param_3 != 0) {
    FUN_0181e3d4(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14),param_2);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
  return 0;
}

