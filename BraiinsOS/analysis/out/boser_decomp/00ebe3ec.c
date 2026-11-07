// FUN_00ebe3ec @ 00ebe3ec size=692 calls_out=4 calls_in=1
// strings: fixedshareratio | value

int FUN_00ebe3ec(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint local_30;
  int *local_2c;
  
  iVar6 = *param_1;
  pcVar4 = "{";
  uVar2 = 1;
  do {
    uVar3 = *(uint *)(iVar6 + 4);
    uVar5 = uVar3 ^ 0x7fffffff;
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    FUN_01284394(iVar6,pcVar4,uVar5);
    if (uVar3 == 0x7fffffff) goto LAB_00ebe654;
    pcVar4 = pcVar4 + uVar5;
    uVar2 = uVar2 - uVar5;
  } while (uVar2 != 0);
  FUN_0096b2b0(&local_30,iVar6,"fixedshareratio",0xf);
  if ((char)local_30 == '\x04') {
    uVar2 = 1;
    pcVar4 = ":";
    do {
      uVar3 = *(uint *)(iVar6 + 4);
      uVar5 = uVar3 ^ 0x7fffffff;
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
      }
      FUN_01284394(iVar6,pcVar4,uVar5);
      if (uVar3 == 0x7fffffff) goto LAB_00ebe654;
      pcVar4 = pcVar4 + uVar5;
      uVar2 = uVar2 - uVar5;
    } while (uVar2 != 0);
    uVar2 = 1;
    pcVar4 = "{";
    do {
      uVar3 = *(uint *)(iVar6 + 4);
      uVar5 = uVar3 ^ 0x7fffffff;
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
      }
      FUN_01284394(iVar6,pcVar4,uVar5);
      if (uVar3 == 0x7fffffff) {
        iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
        return iVar6;
      }
      pcVar4 = pcVar4 + uVar5;
      uVar2 = uVar2 - uVar5;
    } while (uVar2 != 0);
    local_30 = 0x100;
    local_2c = param_1;
    iVar6 = FUN_00ebeb78(&local_30,"value",5);
    if (iVar6 == 0) {
      if (((local_30 & 0xff00) != 0) && ((local_30 & 1) == 0)) {
        uVar2 = 1;
        pcVar4 = "}";
        iVar6 = *local_2c;
        do {
          uVar3 = *(uint *)(iVar6 + 4);
          uVar5 = uVar3 ^ 0x7fffffff;
          if (uVar2 < uVar5) {
            uVar5 = uVar2;
          }
          FUN_01284394(iVar6,pcVar4,uVar5);
          if (uVar3 == 0x7fffffff) goto LAB_00ebe654;
          pcVar4 = pcVar4 + uVar5;
          uVar2 = uVar2 - uVar5;
        } while (uVar2 != 0);
      }
      uVar2 = 1;
      iVar6 = *param_1;
      pcVar4 = "}";
      do {
        uVar3 = *(uint *)(iVar6 + 4);
        uVar5 = uVar3 ^ 0x7fffffff;
        if (uVar2 < uVar5) {
          uVar5 = uVar2;
        }
        FUN_01284394(iVar6,pcVar4,uVar5);
        if (uVar3 == 0x7fffffff) {
          uVar2 = 2;
          piVar1 = &DAT_01d2e7b8;
          goto LAB_00ebe668;
        }
        pcVar4 = pcVar4 + uVar5;
        uVar2 = uVar2 - uVar5;
      } while (uVar2 != 0);
      iVar6 = 0;
    }
    return iVar6;
  }
  uVar2 = local_30;
  piVar1 = local_2c;
LAB_00ebe668:
  iVar6 = FUN_01966f50(uVar2,piVar1);
  return iVar6;
LAB_00ebe654:
  uVar2 = 2;
  piVar1 = &DAT_01d2e7b8;
  goto LAB_00ebe668;
}

