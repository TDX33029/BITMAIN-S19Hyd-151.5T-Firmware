// FUN_0194f160 @ 0194f160 size=252 calls_out=2 calls_in=1
// strings: 

void FUN_0194f160(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_120 [252];
  
  iVar3 = *param_2;
  iVar5 = param_2[2];
  uVar6 = iVar5 + 1;
  uVar1 = *(ushort *)(iVar3 + 0xb8a);
  iVar4 = iVar3 + iVar5 * 0x10;
  if (uVar1 < uVar6) {
    FUN_01bed4e2(iVar4,param_3,0x10);
    FUN_01bed4e2(auStack_120,param_4,0xfc);
  }
  else {
    iVar2 = (uint)uVar1 - iVar5;
    FUN_01bed864(iVar3 + uVar6 * 0x10,iVar4,iVar2 * 0x10);
    FUN_01bed4e2(iVar4,param_3,0x10);
    FUN_01bed4e2(auStack_120,param_4,0xfc);
    FUN_01bed864(iVar3 + 0xb4 + uVar6 * 0xfc,iVar3 + 0xb4 + iVar5 * 0xfc,iVar2 * 0xfc);
  }
  FUN_01bed4e2(iVar3 + iVar5 * 0xfc + 0xb4,auStack_120,0xfc);
  *(ushort *)(iVar3 + 0xb8a) = uVar1 + 1;
  iVar4 = param_2[1];
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar5;
  return;
}

