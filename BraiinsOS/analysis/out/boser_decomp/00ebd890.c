// FUN_00ebd890 @ 00ebd890 size=652 calls_out=4 calls_in=0
// strings: assertion failed: !self.only_contains_attribute_certs | a UUID string | assertion failed: !self.only_contains_attribute_certs | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00ebdb04) */

int FUN_00ebd890(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar7 = *param_1;
  uVar4 = 1;
  puVar2 = &DAT_0053340d;
  do {
    uVar5 = *(uint *)(iVar7 + 4);
    uVar6 = uVar5 ^ 0x7fffffff;
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
    FUN_01284394(iVar7,puVar2,uVar6);
    if (uVar5 == 0x7fffffff) goto LAB_00ebdae4;
    puVar2 = puVar2 + uVar6;
    uVar4 = uVar4 - uVar6;
  } while (uVar4 != 0);
  bVar9 = param_3 != 0;
  iVar8 = 0x100;
  if (!bVar9) {
    uVar4 = 1;
    pcVar3 = "]";
    do {
      uVar5 = *(uint *)(iVar7 + 4);
      uVar6 = uVar5 ^ 0x7fffffff;
      if (uVar4 < uVar6) {
        uVar6 = uVar4;
      }
      FUN_01284394(iVar7,pcVar3,uVar6);
      if (uVar5 == 0x7fffffff) goto LAB_00ebdae4;
      pcVar3 = pcVar3 + uVar6;
      uVar4 = uVar4 - uVar6;
    } while (uVar4 != 0);
    iVar8 = 0;
  }
  iVar7 = param_2;
  while (iVar7 != param_2 + param_3 * 0x38) {
    if (!bVar9) {
      uVar4 = 1;
      iVar8 = *param_1;
      pcVar3 = ",";
      do {
        uVar5 = *(uint *)(iVar8 + 4);
        uVar6 = uVar5 ^ 0x7fffffff;
        if (uVar4 < uVar6) {
          uVar6 = uVar4;
        }
        FUN_01284394(iVar8,pcVar3,uVar6);
        if (uVar5 == 0x7fffffff) goto LAB_00ebdae4;
        pcVar3 = pcVar3 + uVar6;
        uVar4 = uVar4 - uVar6;
      } while (uVar4 != 0);
    }
    iVar8 = 0x200;
    iVar1 = FUN_00ebdb58(iVar7,param_1);
    bVar9 = false;
    iVar7 = iVar7 + 0x38;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (iVar8 == 0) {
    return 0;
  }
  uVar4 = 1;
  pcVar3 = "]";
  iVar7 = *param_1;
  while( true ) {
    uVar5 = *(uint *)(iVar7 + 4);
    uVar6 = uVar5 ^ 0x7fffffff;
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
    FUN_01284394(iVar7,pcVar3,uVar6);
    if (uVar5 == 0x7fffffff) break;
    pcVar3 = pcVar3 + uVar6;
    uVar4 = uVar4 - uVar6;
    if (uVar4 == 0) {
      return 0;
    }
  }
LAB_00ebdae4:
  iVar7 = FUN_01966f50(2,&DAT_01d2e7b8);
  return iVar7;
}

