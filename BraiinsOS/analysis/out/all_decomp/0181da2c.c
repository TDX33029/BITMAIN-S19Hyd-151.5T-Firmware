// FUN_0181da2c @ 0181da2c size=396 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0181da2c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 0x16bc);
  uVar1 = (uint)*(ushort *)(param_1 + 0x16b8) | 2 << (uVar2 & 0xff);
  if ((int)uVar2 < 0xe) {
    iVar3 = uVar2 + 3;
  }
  else {
    *(short *)(param_1 + 0x16b8) = (short)uVar1;
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)uVar1;
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    iVar3 = *(int *)(param_1 + 0x16bc) + -0xd;
    uVar1 = 2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
  }
  *(int *)(param_1 + 0x16bc) = iVar3;
  iVar4 = iVar3;
  if (iVar3 < 10) {
    iVar4 = iVar3 + 7;
  }
  *(short *)(param_1 + 0x16b8) = (short)uVar1;
  if (9 < iVar3) {
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)uVar1;
    uVar1 = 0;
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    iVar4 = *(int *)(param_1 + 0x16bc) + -9;
  }
  *(int *)(param_1 + 0x16bc) = iVar4;
  if (iVar4 == 0x10) {
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)uVar1;
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    *(undefined4 *)(param_1 + 0x16bc) = 0;
    return 0;
  }
  if (iVar4 < 8) {
    return CONCAT44(uVar1,param_1);
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)uVar1;
  *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -8;
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) >> 8;
  return 0;
}

