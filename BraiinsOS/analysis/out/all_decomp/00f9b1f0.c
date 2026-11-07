// FUN_00f9b1f0 @ 00f9b1f0 size=296 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_00f9b1f0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x28) << 3;
  uVar5 = 0;
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    if ((*(int *)(iVar7 + uVar5 * 8 + 4) == param_3) &&
       (iVar2 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + uVar5 * 8),param_2,param_3), iVar2 == 0))
    break;
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + -8;
  }
  if (*(uint *)(param_1 + 0x34) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,*(uint *)(param_1 + 0x34),&DAT_01880824);
  }
  iVar4 = *(int *)(param_1 + 0x30) + uVar5 * 0x3c;
  if (*(char *)(iVar4 + 0x39) == '\0') {
    return 0;
  }
  if (*param_4 == 0) {
    return 1;
  }
  if (*(int *)(iVar4 + 0x34) == 0) {
    return 0;
  }
  iVar7 = *(int *)(iVar4 + 0x30);
  iVar2 = iVar7 + *(int *)(iVar4 + 0x34) * 0xc;
  do {
    iVar8 = *(int *)(iVar7 + 4);
    piVar1 = (int *)(iVar7 + 8);
    iVar7 = iVar7 + 0xc;
    iVar6 = *piVar1 * 0xc;
    while (iVar6 != 0) {
      iVar3 = FUN_00fa1d8c(iVar4,param_4,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
      iVar6 = iVar6 + -0xc;
      iVar8 = iVar8 + 0xc;
      if (iVar3 != 0) {
        return 1;
      }
    }
  } while (iVar7 != iVar2);
  return 0;
}

