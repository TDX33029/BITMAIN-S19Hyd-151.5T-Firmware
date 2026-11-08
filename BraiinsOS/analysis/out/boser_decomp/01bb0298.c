// FUN_01bb0298 @ 01bb0298 size=324 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01bb0298(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  
  uVar3 = *(uint *)(param_1 + 0xc4);
  iVar8 = *(int *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 200);
  if (5 < uVar3) {
    uVar3 = 6;
  }
  if (uVar3 < 4) {
    uVar3 = 4;
  }
  uVar11 = *(uint *)(param_1 + 0x1c);
  iVar9 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar7 = ~(-1 << (uVar3 & 0xff));
  iVar5 = *(int *)(param_1 + 0x5c);
  do {
    if ((uint)(param_2 - iVar8) <= uVar11) {
      *(int *)(param_1 + 0x1c) = param_2 - iVar8;
      return 0;
    }
    puVar12 = (uint *)(iVar8 + uVar11);
    if (uVar4 == 5) {
      uVar6 = *(uint *)(iVar8 + uVar11);
      uVar10 = puVar12[1];
      uVar13 = 0xbb000000;
LAB_01bb0394:
      uVar10 = uVar13 * uVar10 + uVar6 * -0x30e44324 +
               (int)((ulonglong)uVar13 * (ulonglong)uVar6 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar6 = ((uint)((ulonglong)uVar13 * (ulonglong)uVar6) ^ *(uint *)(param_1 + 0x50)) >>
              (0x38U - iVar2 & 0xff) | uVar10 << (iVar2 - 0x18U & 0xff) |
              uVar10 >> (0x18U - iVar2 & 0xff);
    }
    else {
      if (5 < uVar4) {
        uVar6 = *puVar12;
        uVar10 = puVar12[1];
        uVar13 = 0xbf9b0000;
        goto LAB_01bb0394;
      }
      uVar6 = (*(int *)(iVar8 + uVar11) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
              (0x18U - iVar2 & 0xff);
    }
    iVar1 = (uVar6 >> 8) << (uVar3 & 0xff);
    uVar13 = *(byte *)(iVar9 + iVar1) - 1 & uVar7;
    uVar10 = uVar7;
    if (uVar13 != 0) {
      uVar10 = 0;
    }
    iVar14 = uVar13 + uVar10;
    *(char *)(iVar9 + iVar1) = (char)iVar14;
    *(char *)(iVar9 + ((uVar6 >> 8) << (uVar3 & 0xff)) + iVar14) = (char)uVar6;
    *(uint *)(iVar5 + (iVar1 + iVar14) * 4) = uVar11;
    uVar11 = uVar11 + 1;
  } while( true );
}

