// FUN_01b1d0a4 @ 01b1d0a4 size=232 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b1d0a4(uint *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar3 = param_1;
  do {
    bVar1 = *param_2;
    puVar4 = puVar3 + 8;
    *puVar3 = bVar1 & 7;
    uVar10 = (*param_2 & 0x3f) >> 3;
    puVar3[1] = uVar10;
    uVar5 = (param_2[1] & 1) << 2 | (uint)(*param_2 >> 6);
    puVar3[2] = uVar5;
    uVar9 = (param_2[1] & 0xf) >> 1;
    puVar3[3] = uVar9;
    uVar8 = (param_2[1] & 0x7f) >> 4;
    puVar3[4] = uVar8;
    uVar6 = (param_2[2] & 3) << 1 | (uint)(param_2[1] >> 7);
    puVar3[5] = uVar6;
    uVar7 = (param_2[2] & 0x1f) >> 2;
    puVar3[6] = uVar7;
    bVar2 = param_2[2];
    puVar3[5] = 2 - uVar6;
    *puVar3 = 2 - (bVar1 & 7);
    puVar3[1] = 2 - uVar10;
    puVar3[2] = 2 - uVar5;
    puVar3[3] = 2 - uVar9;
    puVar3[4] = 2 - uVar8;
    puVar3[6] = 2 - uVar7;
    puVar3[7] = 2 - (bVar2 >> 5);
    puVar3 = puVar4;
    param_2 = param_2 + 3;
  } while (puVar4 != param_1 + 0x100);
  return 0;
}

