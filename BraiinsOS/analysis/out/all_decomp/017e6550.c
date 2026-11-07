// FUN_017e6550 @ 017e6550 size=556 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_017e6550(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = *(int *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 0x1c);
  uVar10 = param_2 - iVar12;
  if (uVar4 < uVar10) {
    uVar3 = *(uint *)(param_1 + 0xc4);
    iVar9 = *(int *)(param_1 + 0x28);
    if (5 < uVar3) {
      uVar3 = 6;
    }
    iVar11 = *(int *)(param_1 + 0x24);
    if (uVar3 < 4) {
      uVar3 = 4;
    }
    iVar5 = *(int *)(param_1 + 0x5c);
    uVar8 = ~(-1 << (uVar3 & 0xff));
    if (*(uint *)(param_1 + 200) == 5) {
      do {
        lVar2 = (ulonglong)*(uint *)(iVar12 + uVar4) * 0xbb000000;
        uVar7 = *(int *)(iVar12 + uVar4 + 4) * -0x45000000 + *(uint *)(iVar12 + uVar4) * -0x30e44324
                + (int)((ulonglong)lVar2 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar6 = ((uint)lVar2 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar11 & 0xff) |
                uVar7 << (iVar11 - 0x18U & 0xff) | uVar7 >> (0x18U - iVar11 & 0xff);
        iVar1 = (uVar6 >> 8) << (uVar3 & 0xff);
        uVar7 = *(byte *)(iVar9 + iVar1) - 1 & uVar8;
        if (uVar7 == 0) {
          uVar7 = uVar8;
        }
        *(char *)(iVar9 + iVar1) = (char)uVar7;
        *(char *)(iVar9 + iVar1 + uVar7) = (char)uVar6;
        *(uint *)(iVar5 + (iVar1 + uVar7) * 4) = uVar4;
        uVar4 = uVar4 + 1;
      } while (uVar10 != uVar4);
    }
    else if (*(uint *)(param_1 + 200) < 6) {
      do {
        uVar7 = (*(int *)(iVar12 + uVar4) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (0x18U - iVar11 & 0xff);
        iVar1 = (uVar7 >> 8) << (uVar3 & 0xff);
        uVar6 = *(byte *)(iVar9 + iVar1) - 1 & uVar8;
        if (uVar6 == 0) {
          uVar6 = uVar8;
        }
        *(char *)(iVar9 + iVar1) = (char)uVar6;
        *(char *)(iVar9 + iVar1 + uVar6) = (char)uVar7;
        *(uint *)(iVar5 + (iVar1 + uVar6) * 4) = uVar4;
        uVar4 = uVar4 + 1;
      } while (uVar10 != uVar4);
    }
    else {
      do {
        lVar2 = (ulonglong)*(uint *)(iVar12 + uVar4) * 0xbf9b0000;
        uVar7 = *(int *)(iVar12 + uVar4 + 4) * -0x40650000 + *(uint *)(iVar12 + uVar4) * -0x30e44324
                + (int)((ulonglong)lVar2 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar6 = ((uint)lVar2 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar11 & 0xff) |
                uVar7 << (iVar11 - 0x18U & 0xff) | uVar7 >> (0x18U - iVar11 & 0xff);
        iVar1 = (uVar6 >> 8) << (uVar3 & 0xff);
        uVar7 = *(byte *)(iVar9 + iVar1) - 1 & uVar8;
        if (uVar7 == 0) {
          uVar7 = uVar8;
        }
        *(char *)(iVar9 + iVar1) = (char)uVar7;
        *(char *)(iVar9 + iVar1 + uVar7) = (char)uVar6;
        *(uint *)(iVar5 + (iVar1 + uVar7) * 4) = uVar4;
        uVar4 = uVar4 + 1;
      } while (uVar10 != uVar4);
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar10;
  return 0;
}

