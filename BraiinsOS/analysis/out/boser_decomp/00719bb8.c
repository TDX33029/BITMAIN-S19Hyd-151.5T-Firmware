// FUN_00719bb8 @ 00719bb8 size=188 calls_out=0 calls_in=15
// strings: 

void FUN_00719bb8(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar7 = param_2[1];
  uVar11 = 0;
  uVar3 = 0;
  uVar10 = 0;
  uVar8 = 0;
  pbVar9 = (byte *)*param_2;
  do {
    iVar7 = iVar7 + -1;
    if (iVar7 == -1) {
      *(byte **)(param_1 + 4) = pbVar9;
      *(undefined4 *)(param_1 + 0xc) = 0;
      uVar2 = 0x13;
      *(byte **)(param_1 + 8) = pbVar9;
      param_1[1] = (char)uVar11;
LAB_00719c6c:
      *param_1 = uVar2;
      return;
    }
    bVar1 = *pbVar9;
    uVar11 = (uint)bVar1;
    *param_2 = pbVar9 + 1;
    param_2[1] = iVar7;
    if ((uVar3 == 0x3f) && (1 < uVar11)) {
      uVar2 = 6;
      goto LAB_00719c6c;
    }
    uVar6 = uVar3 & 0x3f;
    uVar4 = uVar11 & 0x7f;
    uVar12 = uVar6 - 0x20;
    uVar5 = uVar4 << uVar6;
    uVar3 = uVar3 + 7;
    if (-1 < (int)uVar12) {
      uVar5 = 0;
    }
    uVar10 = uVar5 | uVar10;
    uVar5 = uVar4 >> (0x20 - uVar6 & 0xff);
    if (-1 < (int)uVar12) {
      uVar5 = uVar4 << (uVar12 & 0xff);
    }
    uVar8 = uVar5 | uVar8;
    pbVar9 = pbVar9 + 1;
    if (-1 < (char)bVar1) {
      *(uint *)(param_1 + 8) = uVar10;
      *param_1 = 0x4f;
      *(uint *)(param_1 + 0xc) = uVar8;
      return;
    }
  } while( true );
}

