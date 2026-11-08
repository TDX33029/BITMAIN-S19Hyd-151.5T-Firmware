// FUN_01702864 @ 01702864 size=296 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01702864(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  puVar6 = param_1;
  do {
    iVar8 = param_2[5];
    uVar2 = 0x1000 - param_2[4];
    iVar3 = param_2[2];
    uVar1 = 0x1000 - param_2[1];
    uVar5 = 0x1000 - param_2[3];
    uVar4 = 0x1000 - param_2[6];
    iVar9 = param_2[7];
    *puVar6 = 0x1000U - *param_2 & 0xff | ((uVar1 * 0x20 | 0x1000U - *param_2 >> 8) & 0xff) << 8 |
              (uVar1 >> 3 & 0xff) << 0x10 | ((0x1000U - iVar3) * 4 | uVar1 >> 0xb) << 0x18;
    puVar7 = (uint *)((int)puVar6 + 0xd);
    *(char *)(puVar6 + 3) = (char)(0x1000U - iVar9 >> 5);
    puVar6[1] = (uVar5 * 0x80 | 0x1000U - iVar3 >> 6) & 0xff | (uVar5 >> 1 & 0xff) << 8 |
                ((uVar2 * 0x10 | uVar5 >> 9) & 0xff) << 0x10 | (uVar2 >> 4) << 0x18;
    param_2 = param_2 + 8;
    puVar6[2] = ((0x1000U - iVar8) * 2 | uVar2 >> 0xc) & 0xff |
                ((uVar4 * 0x40 | 0x1000U - iVar8 >> 7) & 0xff) << 8 | (uVar4 >> 2 & 0xff) << 0x10 |
                ((0x1000U - iVar9) * 8 | uVar4 >> 10) << 0x18;
    puVar6 = puVar7;
  } while (param_1 + 0x68 != puVar7);
  return 0;
}

