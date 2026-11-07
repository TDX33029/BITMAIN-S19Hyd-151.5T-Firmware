// FUN_01554664 @ 01554664 size=316 calls_out=3 calls_in=1
// strings: 

uint FUN_01554664(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_60;
  int local_5c;
  undefined1 auStack_58 [52];
  
  if (*param_2 != '\x04') {
    return 1;
  }
  uVar3 = *(uint *)(param_2 + 0xc);
  if (uVar3 < 2) {
    return 1;
  }
  iVar4 = *(int *)(param_2 + 8);
  if (uVar3 == 3) {
    iVar7 = iVar4 + 0x18;
    iVar2 = FUN_01578ae8(iVar4,iVar7);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = iVar4 + 0x30;
    iVar4 = FUN_01578ae8(iVar4,iVar2);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    if (uVar3 != 2) {
      if (uVar3 < 0x10) {
        uVar8 = 0;
        iVar7 = iVar4;
        uVar5 = uVar3;
        do {
          uVar5 = uVar5 - 1;
          iVar7 = iVar7 + 0x18;
          uVar9 = uVar8 + 1;
          if (uVar9 < uVar3) {
            iVar2 = iVar7;
            uVar6 = uVar5;
            do {
              iVar1 = FUN_01578ae8(iVar4 + uVar8 * 0x18,iVar2);
              if (iVar1 != 0) {
                return 0;
              }
              iVar2 = iVar2 + 0x18;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          uVar8 = uVar9;
        } while (uVar9 != uVar3);
        return 1;
      }
      FUN_0153c128(auStack_58,uVar3);
      local_5c = iVar4 + uVar3 * 0x18;
      local_60 = iVar4;
      uVar3 = FUN_015979b4(&local_60,auStack_58);
      goto LAB_01554788;
    }
    iVar2 = iVar4 + 0x18;
    iVar7 = iVar4;
  }
  uVar3 = FUN_01578ae8(iVar7,iVar2);
LAB_01554788:
  return uVar3 ^ 1;
}

