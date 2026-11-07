// FUN_01448fcc @ 01448fcc size=116 calls_out=1 calls_in=2
// strings: assertion failed: index < lenPunycode overflows should not be possible due to PUNYCODE_ENCODE_MAX_INPUT_LENGTH

undefined4 * FUN_01448fcc(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar6 = (uint *)(param_1 + 0x48);
  uVar4 = *puVar6;
  if (uVar4 < 0x12) {
    param_1 = param_1 + 4;
  }
  else {
    puVar6 = (uint *)(param_1 + 4);
    uVar4 = *puVar6;
    param_1 = *(int *)(param_1 + 8);
  }
  if (uVar4 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: index < lenPunycode overflows should not be possible due to PUNYCODE_ENCODE_MAX_INPUT_LENGTH"
                 ,0x1d,&DAT_01cf90d4);
  }
  *puVar6 = uVar4 - 1;
  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  iVar2 = uVar4 + ~param_2;
  puVar12 = puVar1 + 1;
  iVar8 = iVar2 * 4;
  if (puVar1 != puVar12) {
    if ((undefined1 *)((int)puVar12 + (iVar2 * -4 - (int)puVar1)) <= (undefined1 *)(iVar2 * -8)) {
      puVar12 = (undefined4 *)FUN_01bed4e2();
      return puVar12;
    }
    uVar4 = ((uint)puVar1 ^ (uint)puVar12) & 3;
    if (puVar1 < puVar12) {
      puVar5 = puVar1;
      puVar10 = puVar1;
      if (uVar4 == 0) {
        for (; uVar4 = (int)(puVar1 + iVar2) - (int)puVar5, ((uint)puVar5 & 3) != 0;
            puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          if (puVar5 == puVar1 + iVar2) {
            return puVar1;
          }
          *(undefined1 *)puVar5 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        uVar9 = uVar4 & 0xfffffffc;
        puVar11 = puVar12 + -1;
        puVar10 = (undefined4 *)((int)puVar5 + uVar9);
        for (; puVar5 != puVar10; puVar5 = puVar5 + 1) {
          puVar11 = puVar11 + 1;
          *puVar5 = *puVar11;
        }
        iVar8 = uVar4 - uVar9;
        puVar12 = (undefined4 *)((int)puVar12 + uVar9);
      }
      puVar7 = (undefined1 *)((int)puVar10 + -1);
      puVar5 = (undefined4 *)((int)puVar12 + iVar8);
      for (; puVar5 != puVar12; puVar12 = (undefined4 *)((int)puVar12 + 1)) {
        puVar7 = puVar7 + 1;
        *puVar7 = *(undefined1 *)puVar12;
      }
    }
    else {
      if (uVar4 == 0) {
        puVar5 = puVar1 + iVar2;
        puVar7 = (undefined1 *)(iVar8 + -1 + (int)puVar12);
        while (puVar3 = puVar7 + (1 - (int)puVar12), ((uint)puVar5 & 3) != 0) {
          if (puVar7 == (undefined1 *)((int)puVar1 + 3)) {
            return puVar1;
          }
          puVar5 = (undefined4 *)((int)puVar5 + -1);
          *(undefined1 *)puVar5 = *puVar7;
          puVar7 = puVar7 + -1;
        }
        puVar5 = (undefined4 *)((int)puVar12 + (int)puVar3);
        puVar10 = (undefined4 *)((int)puVar1 + (int)puVar3);
        puVar11 = (undefined4 *)((int)puVar5 - ((uint)puVar3 & 0xfffffffc));
        while (puVar5 != puVar11) {
          puVar5 = puVar5 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = *puVar5;
        }
        iVar8 = (int)puVar3 - ((uint)puVar3 & 0xfffffffc);
      }
      puVar5 = (undefined4 *)((int)puVar12 + iVar8);
      puVar7 = (undefined1 *)((int)puVar1 + iVar8);
      while (puVar12 != puVar5) {
        puVar5 = (undefined4 *)((int)puVar5 + -1);
        puVar7 = puVar7 + -1;
        *puVar7 = *(undefined1 *)puVar5;
      }
    }
  }
  return puVar1;
}

