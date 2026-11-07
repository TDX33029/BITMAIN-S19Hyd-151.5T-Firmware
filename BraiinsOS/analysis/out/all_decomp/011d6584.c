// FUN_011d6584 @ 011d6584 size=464 calls_out=4 calls_in=1
// strings: 

uint FUN_011d6584(undefined4 param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_60;
  int local_5c;
  int *local_30;
  
  uVar1 = 1;
  if ((*param_2 == '\x04') && (uVar9 = *(uint *)(param_2 + 0xc), 1 < uVar9)) {
    iVar3 = *(int *)(param_2 + 8);
    if (uVar9 != 3) {
      if (uVar9 == 2) {
        uVar1 = FUN_011e2b78(iVar3,iVar3 + 0x18);
        return uVar1 ^ 1;
      }
      if (uVar9 < 0x10) {
        uVar7 = 0;
        uVar1 = uVar9;
        iVar6 = iVar3;
        do {
          iVar6 = iVar6 + 0x18;
          uVar1 = uVar1 - 1;
          uVar8 = uVar7 + 1;
          if (uVar8 < uVar9) {
            uVar4 = uVar1;
            iVar5 = iVar6;
            do {
              iVar2 = FUN_011e2b78(iVar3 + uVar7 * 0x18,iVar5);
              if (iVar2 != 0) {
                return 0;
              }
              iVar5 = iVar5 + 0x18;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          uVar7 = uVar8;
        } while (uVar8 != uVar9);
        return 1;
      }
      FUN_0120e26c(&local_60,uVar9);
      local_30 = &local_60;
      iVar6 = uVar9 * 0x18;
      do {
        iVar5 = iVar6;
        iVar6 = iVar5;
        if (iVar5 == 0) break;
        iVar2 = FUN_0122532c(&local_60,iVar3);
        iVar6 = iVar5 + -0x18;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 == 0);
      if (local_5c != 0) {
        iVar6 = local_5c * 5;
      }
      if (local_5c != 0 && iVar6 != -9) {
        thunk_FUN_016d3fb4(local_60 + local_5c * -4 + -4);
        return (uint)(iVar5 == 0);
      }
      return (uint)(iVar5 == 0);
    }
    iVar6 = FUN_011e2b78(iVar3,iVar3 + 0x18);
    uVar1 = 0;
    if (iVar6 == 0) {
      iVar6 = FUN_011e2b78(iVar3,iVar3 + 0x30);
      uVar1 = 0;
      if (iVar6 == 0) {
        uVar1 = FUN_011e2b78(iVar3 + 0x18,iVar3 + 0x30);
        return uVar1 ^ 1;
      }
    }
  }
  return uVar1;
}

