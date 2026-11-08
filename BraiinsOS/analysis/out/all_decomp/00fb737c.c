// FUN_00fb737c @ 00fb737c size=308 calls_out=1 calls_in=12
// strings: 

undefined8 FUN_00fb737c(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar4 = (param_2 + 3U & 0xfffffffc) - param_2;
  uVar2 = param_3;
  uVar1 = param_3;
  if (uVar4 <= param_3) {
    uVar1 = param_3 - uVar4 & 7;
    uVar2 = param_3 - uVar1;
    if (param_3 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar2,param_3,param_3,&DAT_018811ec);
    }
    uVar1 = uVar4;
  }
  pbVar3 = (byte *)(param_3 + param_2);
  iVar5 = param_3 - uVar2;
  param_1 = param_1 & 0xff;
  while (pbVar3 = pbVar3 + -1, iVar5 != 0) {
    iVar5 = iVar5 + -1;
    if (*pbVar3 == param_1) {
      return CONCAT44(iVar5 + uVar2,1);
    }
  }
  iVar5 = uVar2 - 4;
  do {
    uVar2 = iVar5 + 4;
    if (uVar2 <= uVar1) break;
    puVar7 = (uint *)(param_2 + iVar5);
    iVar5 = iVar5 + -8;
    uVar4 = *puVar7 ^ param_1 * 0x1010101;
    uVar6 = puVar7[-1] ^ param_1 * 0x1010101;
  } while (((0x1010100 - uVar6 | uVar6) & 0x80808080 & (0x1010100 - uVar4 | uVar4)) == 0x80808080);
  if (param_3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,param_3,&DAT_018811dc);
  }
  do {
    if (uVar2 == 0) {
      return 0;
    }
    pbVar3 = (byte *)(param_2 + -1 + uVar2);
    uVar2 = uVar2 - 1;
  } while (*pbVar3 != param_1);
  return CONCAT44(uVar2,1);
}

