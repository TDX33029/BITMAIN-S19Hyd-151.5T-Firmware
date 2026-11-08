// FUN_009764ac @ 009764ac size=200 calls_out=2 calls_in=1
// strings: 

void FUN_009764ac(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar3 = *param_2;
  iVar4 = param_2[2];
  uVar6 = iVar4 + 1;
  uVar1 = *(ushort *)(iVar3 + 0x376);
  puVar5 = (undefined4 *)(iVar3 + iVar4 * 8);
  if (uVar1 < uVar6) {
    *puVar5 = param_3;
    puVar5[1] = param_4;
  }
  else {
    iVar2 = (uint)uVar1 - iVar4;
    FUN_01bed864(iVar3 + uVar6 * 8,puVar5,iVar2 * 8);
    *(undefined4 *)(iVar3 + iVar4 * 8) = param_3;
    puVar5[1] = param_4;
    FUN_01bed864(iVar3 + 0x58 + uVar6 * 0x48,iVar3 + 0x58 + iVar4 * 0x48,iVar2 * 0x48);
  }
  FUN_01bed4e2(iVar3 + iVar4 * 0x48 + 0x58,param_5,0x48);
  *(ushort *)(iVar3 + 0x376) = uVar1 + 1;
  iVar2 = param_2[1];
  *param_1 = iVar3;
  param_1[1] = iVar2;
  param_1[2] = iVar4;
  return;
}

