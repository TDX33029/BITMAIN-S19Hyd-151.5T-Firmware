// FUN_01b1cd00 @ 01b1cd00 size=244 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1cd00(undefined1 *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 0xd;
    iVar8 = *param_2;
    iVar7 = param_2[2];
    uVar5 = 0x1000 - param_2[1];
    iVar6 = param_2[5];
    uVar10 = 0x1000 - param_2[3];
    iVar3 = param_2[6];
    iVar4 = param_2[7];
    uVar9 = 0x1000 - param_2[4];
    *puVar1 = (char)(0x1000 - iVar8);
    puVar1[1] = (char)uVar5 * ' ' | (byte)((uint)(0x1000 - iVar8) >> 8);
    puVar1[2] = (char)(uVar5 >> 3);
    puVar1[3] = (char)(0x1000U - iVar7) * '\x04' | (byte)(uVar5 >> 0xb);
    uVar5 = 0x1000 - iVar3;
    puVar1[4] = (char)uVar10 * -0x80 | (byte)(0x1000U - iVar7 >> 6);
    puVar1[5] = (char)(uVar10 >> 1);
    puVar1[6] = (char)uVar9 * '\x10' | (byte)(uVar10 >> 9);
    puVar1[7] = (char)(uVar9 >> 4);
    puVar1[8] = (char)(0x1000U - iVar6) * '\x02' | (byte)(uVar9 >> 0xc);
    puVar1[9] = (char)uVar5 * '@' | (byte)(0x1000U - iVar6 >> 7);
    puVar1[10] = (char)(uVar5 >> 2);
    puVar1[0xc] = (char)(0x1000U - iVar4 >> 5);
    puVar1[0xb] = (char)(0x1000U - iVar4) * '\b' | (byte)(uVar5 >> 10);
    puVar1 = puVar2;
    param_2 = param_2 + 8;
  } while (param_1 + 0x1a0 != puVar2);
  return 0;
}

