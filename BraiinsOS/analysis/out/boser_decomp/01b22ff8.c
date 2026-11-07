// FUN_01b22ff8 @ 01b22ff8 size=140 calls_out=0 calls_in=2
// strings: 

uint FUN_01b22ff8(int param_1,uint param_2,ushort *param_3,uint param_4)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  
  puVar2 = param_3;
  while ((param_2 < 0x100 && ((uint)((3 - (int)param_3) + (int)puVar2) <= param_4))) {
    puVar3 = (ushort *)((int)puVar2 + 3);
    uVar4 = (ushort)(*(byte *)((int)puVar2 + 1) >> 4) | (ushort)(byte)puVar2[1] << 4;
    if ((*puVar2 & 0xfff) < 0xd01) {
      iVar1 = param_2 * 2;
      param_2 = param_2 + 1;
      *(ushort *)(param_1 + iVar1) = *puVar2 & 0xfff;
    }
    puVar2 = puVar3;
    if (uVar4 < 0xd01 && param_2 != 0x100) {
      iVar1 = param_2 * 2;
      param_2 = param_2 + 1;
      *(ushort *)(param_1 + iVar1) = uVar4;
    }
  }
  return param_2;
}

