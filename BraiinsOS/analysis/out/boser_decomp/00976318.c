// FUN_00976318 @ 00976318 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_00976318(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = *param_2;
  iVar4 = param_2[2];
  iVar6 = iVar5 + 0x94c;
  uVar1 = *(ushort *)(iVar5 + 0x97a);
  uVar7 = iVar4 + 1;
  puVar2 = (undefined4 *)(iVar6 + iVar4 * 4);
  if (uVar1 < uVar7) {
    *puVar2 = param_3;
  }
  else {
    iVar3 = (uint)uVar1 - iVar4;
    FUN_01bed864(iVar6 + uVar7 * 4,puVar2,iVar3 * 4);
    *(undefined4 *)(iVar6 + iVar4 * 4) = param_3;
    FUN_01bed864(uVar7 * 0xd8 + iVar5,iVar4 * 0xd8 + iVar5,iVar3 * 0xd8);
  }
  FUN_01bed4e2(iVar4 * 0xd8 + iVar5,param_4,0xd8);
  *(ushort *)(iVar5 + 0x97a) = uVar1 + 1;
  iVar6 = param_2[1];
  *param_1 = iVar5;
  param_1[1] = iVar6;
  param_1[2] = iVar4;
  return;
}

