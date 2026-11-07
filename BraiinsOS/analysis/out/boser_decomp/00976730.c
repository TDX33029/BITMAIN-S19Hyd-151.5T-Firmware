// FUN_00976730 @ 00976730 size=248 calls_out=2 calls_in=1
// strings: 

void FUN_00976730(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)(param_1 + 0x97a);
  uVar8 = (uint)uVar1;
  uVar7 = param_2 + 1;
  iVar6 = param_1 + 0x94c;
  puVar3 = (undefined4 *)(iVar6 + param_2 * 4);
  if (uVar8 < uVar7) {
    *puVar3 = param_3;
  }
  else {
    FUN_01bed864(iVar6 + uVar7 * 4,puVar3,(uVar8 - param_2) * 4);
    *(undefined4 *)(iVar6 + param_2 * 4) = param_3;
    FUN_01bed864(uVar7 * 0xd8 + param_1,param_2 * 0xd8 + param_1,(uVar8 - param_2) * 0xd8);
  }
  FUN_01bed4e2(param_2 * 0xd8 + param_1,param_4,0xd8);
  iVar6 = param_1 + 0x980;
  if (param_2 + 2U < uVar8 + 2) {
    FUN_01bed864(iVar6 + (param_2 + 2U) * 4,iVar6 + uVar7 * 4,(uVar8 - param_2) * 4);
  }
  *(undefined4 *)(iVar6 + uVar7 * 4) = param_5;
  *(ushort *)(param_1 + 0x97a) = uVar1 + 1;
  if (uVar7 < uVar8 + 2) {
    iVar6 = param_2 + 0x261;
    iVar4 = (uVar8 - param_2) + 1;
    do {
      iVar5 = *(int *)(param_1 + iVar6 * 4);
      sVar2 = (short)iVar6;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
      *(short *)(iVar5 + 0x978) = sVar2 + -0x260;
      *(int *)(iVar5 + 0x948) = param_1;
    } while (iVar4 != 0);
  }
  return;
}

