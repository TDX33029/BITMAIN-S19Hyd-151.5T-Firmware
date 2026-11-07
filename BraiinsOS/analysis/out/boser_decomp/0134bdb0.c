// FUN_0134bdb0 @ 0134bdb0 size=220 calls_out=2 calls_in=1
// strings: 

void FUN_0134bdb0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_90 [108];
  
  iVar3 = *param_2;
  iVar4 = param_2[2];
  uVar6 = iVar4 + 1;
  uVar1 = *(ushort *)(iVar3 + 0x4d6);
  puVar5 = (undefined4 *)(iVar3 + iVar4 * 8);
  if (uVar1 < uVar6) {
    *puVar5 = param_3;
    puVar5[1] = param_4;
    FUN_01bed4e2(auStack_90,param_5,0x68);
  }
  else {
    iVar2 = (uint)uVar1 - iVar4;
    FUN_01bed864(iVar3 + uVar6 * 8,puVar5,iVar2 * 8);
    *puVar5 = param_3;
    puVar5[1] = param_4;
    FUN_01bed4e2(auStack_90,param_5,0x68);
    FUN_01bed864(uVar6 * 0x68 + iVar3 + 0x58,iVar4 * 0x68 + iVar3 + 0x58,iVar2 * 0x68);
  }
  FUN_01bed4e2(iVar4 * 0x68 + iVar3 + 0x58,auStack_90,0x68);
  *(ushort *)(iVar3 + 0x4d6) = uVar1 + 1;
  iVar2 = param_2[1];
  *param_1 = iVar3;
  param_1[1] = iVar2;
  param_1[2] = iVar4;
  return;
}

