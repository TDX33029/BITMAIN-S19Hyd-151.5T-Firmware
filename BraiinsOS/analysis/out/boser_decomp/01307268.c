// FUN_01307268 @ 01307268 size=300 calls_out=1 calls_in=13
// strings: 

undefined8 FUN_01307268(uint param_1,int param_2,uint param_3)

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
      FUN_012faff4(uVar2,param_3,param_3,&DAT_01ce4a20);
    }
    uVar1 = uVar4;
  }
  pbVar3 = (byte *)(param_3 + param_2);
  iVar5 = param_3 - uVar2;
  param_1 = param_1 & 0xff;
  do {
    pbVar3 = pbVar3 + -1;
    if (iVar5 == 0) {
      iVar5 = uVar2 - 4;
      goto LAB_013072f0;
    }
    iVar5 = iVar5 + -1;
  } while (*pbVar3 != param_1);
  uVar2 = iVar5 + uVar2;
  goto LAB_01307358;
  while (puVar7 = (uint *)(param_2 + iVar5), iVar5 = iVar5 + -8,
        uVar4 = *puVar7 ^ param_1 * 0x1010101, uVar6 = puVar7[-1] ^ param_1 * 0x1010101,
        ((0x1010100 - uVar6 | uVar6) & 0x80808080 & (0x1010100 - uVar4 | uVar4)) == 0x80808080) {
LAB_013072f0:
    uVar2 = iVar5 + 4;
    if (uVar2 <= uVar1) break;
  }
  if (param_3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,param_3,&DAT_01ce4a10);
  }
  do {
    if (uVar2 == 0) {
      return 0;
    }
    pbVar3 = (byte *)(param_2 + -1 + uVar2);
    uVar2 = uVar2 - 1;
  } while (*pbVar3 != param_1);
LAB_01307358:
  return CONCAT44(uVar2,1);
}

