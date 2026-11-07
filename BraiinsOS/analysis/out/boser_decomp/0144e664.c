// FUN_0144e664 @ 0144e664 size=564 calls_out=3 calls_in=1
// strings: 

void FUN_0144e664(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint *puVar11;
  byte *pbVar12;
  uint *puVar13;
  int iVar14;
  uint local_68 [4];
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar13 = (uint *)(param_1 + 0x3f8);
  uVar8 = *puVar13;
  pbVar9 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  puVar7 = (uint *)param_2[2];
  uVar4 = uVar8;
  if (0xfd < uVar8) {
    uVar4 = param_1;
  }
  uVar1 = (int)pbVar12 - (int)pbVar9;
  uVar5 = 0xfd;
  if (0xfd < uVar8) {
    uVar4 = *(uint *)(uVar4 + 4);
    uVar5 = uVar8;
  }
  if (uVar5 - uVar4 < uVar1) {
    uVar2 = 0;
    if (!CARRY4(uVar4,uVar1)) {
      uVar5 = 0xffffffff >> LZCOUNT((uVar4 + uVar1) - 1);
      if (uVar4 + uVar1 < 2) {
        uVar5 = 0;
      }
      if (uVar5 != 0xffffffff) {
        uVar2 = FUN_0144e8f8(param_1,uVar5 + 1);
        uVar8 = *(uint *)(param_1 + 0x3f8);
      }
    }
  }
  else {
    uVar2 = 0x80000001;
  }
  FUN_01ab1588(uVar2);
  if (uVar8 < 0xfe) {
    uVar5 = 0xfd;
    iVar14 = param_1 + 4;
    puVar11 = puVar13;
    uVar4 = uVar8;
  }
  else {
    iVar14 = *(int *)(param_1 + 8);
    puVar11 = (uint *)(param_1 + 4);
    uVar4 = *(uint *)(param_1 + 4);
    uVar5 = uVar8;
  }
  pbVar10 = pbVar9;
  if (uVar4 < uVar5) {
    do {
      if (pbVar10 == pbVar12) {
        *puVar11 = uVar4;
        return;
      }
      pbVar9 = pbVar10 + 1;
      uVar8 = (uint)*pbVar10;
      local_48[1] = puVar7[1];
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_48[3] = puVar7[3];
      local_48[2] = puVar7[2];
      local_48[0] = *puVar7;
      if ((local_48[(uVar8 & 0x7f) >> 5] >> (uVar8 & 0x1f) & 1) == 0) {
        uVar1 = uVar8;
      }
      else {
        uVar1 = 0xfffd;
        if (uVar8 - 0x41 < 0x1a) {
          uVar1 = uVar8 | 0x20;
        }
      }
      *(uint *)(iVar14 + uVar4 * 4) = uVar1;
      uVar4 = uVar4 + 1;
      pbVar10 = pbVar9;
    } while (uVar5 != uVar4);
    uVar4 = uVar5;
  }
  *puVar11 = uVar4;
  if (pbVar9 != pbVar12) {
    puVar11 = (uint *)(param_1 + 4);
    do {
      pbVar10 = pbVar9 + 1;
      uVar4 = (uint)*pbVar9;
      local_68[0] = *puVar7;
      local_68[1] = puVar7[1];
      local_68[2] = puVar7[2];
      local_68[3] = puVar7[3];
      uStack_58 = 0;
      local_4c = 0;
      local_50 = 0;
      local_54 = 0;
      if ((local_68[(uVar4 & 0x7f) >> 5] >> (uVar4 & 0x1f) & 1) == 0) {
        uVar8 = uVar4;
      }
      else {
        uVar8 = 0xfffd;
        if (uVar4 - 0x41 < 0x1a) {
          uVar8 = uVar4 | 0x20;
        }
      }
      uVar4 = *puVar13;
      if (uVar4 < 0xfe) {
        uVar1 = 0xfd;
        uVar5 = uVar4;
        puVar3 = puVar11;
        puVar6 = puVar13;
      }
      else {
        uVar5 = *(uint *)(param_1 + 4);
        puVar3 = *(uint **)(param_1 + 8);
        puVar6 = puVar11;
        uVar1 = uVar4;
      }
      if (uVar5 == uVar1) {
        FUN_0144e898(param_1);
        uVar5 = *(uint *)(param_1 + 4);
        puVar3 = *(uint **)(param_1 + 8);
        puVar6 = puVar11;
      }
      puVar3[uVar5] = uVar8;
      *puVar6 = *puVar6 + 1;
      pbVar9 = pbVar10;
    } while (pbVar10 != pbVar12);
  }
  return;
}

