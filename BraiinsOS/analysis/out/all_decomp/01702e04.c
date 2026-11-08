// FUN_01702e04 @ 01702e04 size=140 calls_out=0 calls_in=4
// strings: 

undefined8 FUN_01702e04(int param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = param_1 + 4;
  do {
    bVar1 = *param_2;
    *(uint *)(param_1 + iVar5 * 8) = (uint)bVar1;
    uVar2 = CONCAT11(param_2[1],bVar1);
    *(uint *)(param_1 + iVar5 * 8) = (uint)uVar2;
    uVar4 = CONCAT12(param_2[2],uVar2) & 0xfffff;
    *(uint *)(param_1 + iVar5 * 8) = uVar4;
    bVar1 = param_2[2];
    *(uint *)(iVar6 + iVar5 * 8) = (uint)(bVar1 >> 4);
    uVar3 = (uint)(bVar1 >> 4) | (uint)param_2[3] << 4;
    *(uint *)(iVar6 + iVar5 * 8) = uVar3;
    bVar1 = param_2[4];
    *(uint *)(param_1 + iVar5 * 8) = 0x80000 - uVar4;
    *(uint *)(iVar6 + iVar5 * 8) = 0x80000 - (uVar3 | (uint)bVar1 << 0xc);
    iVar5 = iVar5 + 1;
    param_2 = param_2 + 5;
  } while (iVar5 != 0x80);
  return 0;
}

