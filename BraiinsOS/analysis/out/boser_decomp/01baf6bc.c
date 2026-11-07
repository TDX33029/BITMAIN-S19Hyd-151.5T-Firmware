// FUN_01baf6bc @ 01baf6bc size=296 calls_out=0 calls_in=9
// strings: 

undefined8 FUN_01baf6bc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  
  iVar7 = *(int *)(param_1 + 100);
  iVar2 = *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 0xbc);
  iVar3 = *(int *)(param_1 + 0xc0);
  iVar9 = *(int *)(param_1 + 4);
  uVar1 = *(uint *)(param_1 + 0x1c);
  do {
    if ((uint)(param_2 - iVar9) <= uVar1) {
      *(int *)(param_1 + 0x1c) = param_2 - iVar9;
      return 0;
    }
    puVar5 = (uint *)(iVar9 + uVar1);
    if (param_3 == 5) {
      uVar4 = *(uint *)(iVar9 + uVar1);
      uVar11 = 0xbb000000;
      uVar6 = puVar5[1];
LAB_01baf7b4:
      uVar6 = uVar11 * uVar6 + uVar4 * -0x30e44324 +
              (int)((ulonglong)uVar11 * (ulonglong)uVar4 >> 0x20);
      uVar4 = (uint)((ulonglong)uVar11 * (ulonglong)uVar4) >> (0x40U - iVar3 & 0xff) |
              uVar6 << (iVar3 - 0x20U & 0xff) | uVar6 >> (0x20U - iVar3 & 0xff);
    }
    else {
      if (param_3 == 6) {
        uVar4 = *puVar5;
        uVar6 = puVar5[1];
        uVar11 = 0xbf9b0000;
        goto LAB_01baf7b4;
      }
      uVar4 = (uint)(*(int *)(iVar9 + uVar1) * -0x61c8864f) >> (0x20U - iVar3 & 0xff);
    }
    uVar10 = *(undefined4 *)(iVar2 + uVar4 * 4);
    uVar6 = (1 << (iVar8 - 1U & 0xff)) - 1U & uVar1;
    *(uint *)(iVar2 + uVar4 * 4) = uVar1;
    *(undefined4 *)(iVar7 + uVar6 * 8) = uVar10;
    uVar1 = uVar1 + 1;
    *(undefined4 *)(iVar7 + uVar6 * 8 + 4) = 1;
  } while( true );
}

