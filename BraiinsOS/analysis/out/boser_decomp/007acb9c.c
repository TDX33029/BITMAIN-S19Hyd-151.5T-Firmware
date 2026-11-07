// FUN_007acb9c @ 007acb9c size=248 calls_out=0 calls_in=2
// strings: 

void FUN_007acb9c(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x2c);
  uVar4 = (uVar1 & 0x1ff) >> 5;
  if (((((uVar1 & 0x1f) != 0) && (0xfffffff3 < uVar4 - 0xd)) &&
      (uVar2 = *(ushort *)(param_1 + 0x2e), uVar2 >> 0xb < 0x18)) &&
     (((uVar2 & 0x780) != 0x780 && ((ushort)((uVar2 & 0x1f) * 2) < 0x3d)))) {
    uVar5 = 0x1e;
    if ((1 << uVar4 & 0x15aaU) != 0) goto LAB_007acc20;
    if (((1 << uVar4 & 0xa50U) == 0) && (uVar5 = 0x1c, (uVar1 & 0x600) == 0)) {
      iVar3 = (int)(short)((uVar1 >> 9) + 0x7bc);
      uVar4 = iVar3 * 0x5c29 & 0xffff;
      if ((uVar4 >> 4 | iVar3 * 0x5c29000 & 0xffffU) < 0xa4) {
        uVar5 = 0x1d;
      }
      if (0x28 < (uVar4 >> 2 | iVar3 * 0x170a4000 & 0xffffU) >> 4) {
        uVar5 = 0x1d;
      }
    }
    if ((uVar1 & 0x1f) <= uVar5) goto LAB_007acc20;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x21;
LAB_007acc20:
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar4 = *(uint *)(param_1 + 0x14) | 0x8000;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 1;
    uVar4 = 0x81a4;
  }
  *(uint *)(param_1 + 0x14) = uVar4;
  return;
}

