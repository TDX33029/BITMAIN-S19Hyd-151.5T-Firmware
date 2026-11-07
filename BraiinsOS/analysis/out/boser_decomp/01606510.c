// FUN_01606510 @ 01606510 size=232 calls_out=0 calls_in=1
// strings: 

void FUN_01606510(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  
  puVar11 = (uint *)(param_2 + 0x10000);
  uVar7 = *puVar11;
  uVar6 = param_4 - 1;
  uVar2 = *(ushort *)(param_2 + 0x10004);
  *(char *)(param_2 + (uVar7 & 0xffff)) = (char)(param_3 - 3U);
  iVar9 = *(int *)(param_2 + 0x10008);
  iVar10 = *(int *)(param_2 + 0x1000c);
  *(char *)(param_2 + (uVar7 + 1 & 0xffff)) = (char)uVar6;
  *(char *)(param_2 + (uVar7 + 2 & 0xffff)) = (char)(uVar6 >> 8);
  bVar1 = *(byte *)(param_2 + (uint)uVar2);
  *(int *)(param_2 + 0x10008) = iVar9 + param_3;
  *(byte *)(param_2 + (uint)uVar2) = bVar1 >> 1 | 0x80;
  iVar10 = iVar10 + -1;
  *puVar11 = uVar7 + 3;
  *(int *)(param_2 + 0x1000c) = iVar10;
  if (iVar10 == 0) {
    *(undefined4 *)(param_2 + 0x1000c) = 8;
    *puVar11 = uVar7 + 4;
    *(uint *)(param_2 + 0x10004) = uVar7 + 3;
  }
  pbVar8 = (byte *)("" + (uVar6 >> 8 & 0x7f));
  if (uVar6 < 0x200) {
    pbVar8 = &DAT_004ba70e + param_4;
  }
  psVar4 = (short *)(param_1 + ((byte)(&DAT_004ba90f)[param_3 - 3U & 0xff] & 0x1f) * 2 + 0x200);
  psVar5 = (short *)(param_1 + (uint)*pbVar8 * 2 + 0x240);
  sVar3 = *psVar5;
  *psVar4 = *psVar4 + 1;
  *psVar5 = sVar3 + 1;
  return;
}

