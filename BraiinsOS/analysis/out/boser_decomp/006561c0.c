// FUN_006561c0 @ 006561c0 size=276 calls_out=0 calls_in=1
// strings: 

void FUN_006561c0(int param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_38 [5];
  
  local_38[0] = 1;
  local_38[3] = 0;
  local_38[2] = 0;
  uVar5 = param_2 & 0x1f;
  local_38[1] = 0;
  uVar12 = uVar5 ^ 0x1f;
  iVar3 = -((param_2 & 0x60) >> 3);
  uVar11 = *(uint *)((int)local_38 + iVar3);
  uVar8 = *(uint *)((int)local_38 + iVar3 + 4);
  uVar7 = *(uint *)((int)local_38 + iVar3 + 8);
  uVar9 = uVar8 << uVar5 | (uVar11 >> 1) >> uVar12;
  uVar4 = *(int *)((int)local_38 + iVar3 + 0xc) << uVar5 | (uVar7 >> 1) >> uVar12;
  iVar3 = param_1 + ((param_2 & 0x80) >> 3);
  uVar7 = uVar7 << uVar5 | (uVar8 >> 1) >> uVar12;
  uVar8 = *(uint *)(iVar3 + 0x100);
  uVar12 = *(uint *)(iVar3 + 0x104);
  uVar10 = *(uint *)(iVar3 + 0x108);
  if (((uVar8 & uVar11 << uVar5) == 0 && (uVar10 & uVar7) == 0) &&
      ((uVar12 & uVar9) == 0 && (*(uint *)(iVar3 + 0x10c) & uVar4) == 0)) {
    bVar1 = (&DAT_004d0188)[param_2 & 0xff];
    sVar2 = *(short *)(param_1 + 0x124);
    iVar6 = *(int *)(param_1 + 0x120);
    *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) | uVar4;
    *(int *)(param_1 + 0x120) = iVar6 + 1;
    *(uint *)(iVar3 + 0x100) = uVar8 | uVar11 << uVar5;
    *(uint *)(iVar3 + 0x104) = uVar12 | uVar9;
    *(uint *)(iVar3 + 0x108) = uVar10 | uVar7;
    *(short *)(param_1 + 0x124) = sVar2 + (ushort)bVar1;
  }
  return;
}

