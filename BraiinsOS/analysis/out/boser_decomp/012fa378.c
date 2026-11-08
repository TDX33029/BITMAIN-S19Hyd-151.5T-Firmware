// FUN_012fa378 @ 012fa378 size=712 calls_out=1 calls_in=43
// strings: 

undefined4
FUN_012fa378(undefined4 *param_1,int param_2,char *param_3,int param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    uVar2 = param_1[2];
    uVar10 = param_6 + 1;
    puVar9 = (undefined1 *)0x2d;
  }
  else {
    uVar2 = param_1[2];
    puVar9 = (undefined1 *)0x2b;
    if ((uVar2 & 0x200000) == 0) {
      puVar9 = &DAT_00110000;
    }
    uVar10 = param_6 + ((uVar2 & 0x200000) >> 0x15);
  }
  if ((uVar2 & 0x800000) == 0) {
    param_3 = (char *)0x0;
  }
  else {
    if (param_4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      pcVar3 = param_3;
      iVar6 = param_4;
      do {
        if (-0x41 < *pcVar3) {
          iVar1 = iVar1 + 1;
        }
        iVar6 = iVar6 + -1;
        pcVar3 = pcVar3 + 1;
      } while (iVar6 != 0);
    }
    uVar10 = iVar1 + uVar10;
  }
  uVar7 = (uint)*(ushort *)(param_1 + 3);
  if (uVar7 <= uVar10) {
    uVar4 = *param_1;
    iVar6 = param_1[1];
    iVar1 = FUN_012fa804(uVar4,iVar6,puVar9,param_3,param_4);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x012fa4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(iVar6 + 0xc))(uVar4,param_5,param_6);
      return uVar4;
    }
    return 1;
  }
  if ((uVar2 & 0x1000000) == 0) {
    uVar7 = uVar7 - uVar10;
    uVar10 = 0;
    switch((uVar2 & 0x7fffffff) >> 0x1d) {
    case 0:
      break;
    default:
      uVar10 = uVar7;
      break;
    case 2:
      uVar10 = (uVar7 & 0xffff) >> 1;
    }
    uVar4 = *param_1;
    iVar1 = param_1[1];
    uVar8 = 0;
    do {
      if ((uVar10 & 0xffff) <= (uVar8 & 0xffff)) {
        iVar6 = FUN_012fa804(uVar4,iVar1,puVar9,param_3,param_4);
        if (iVar6 != 0) {
          return 1;
        }
        iVar6 = (**(code **)(iVar1 + 0xc))(uVar4,param_5,param_6);
        if (iVar6 != 0) {
          return 1;
        }
        uVar8 = 0;
        do {
          if ((uVar7 - uVar10 & 0xffff) <= (uVar8 & 0xffff)) {
            return 0;
          }
          iVar6 = (**(code **)(iVar1 + 0x10))(uVar4,uVar2 & 0x1fffff);
          uVar8 = uVar8 + 1;
        } while (iVar6 == 0);
        return 1;
      }
      iVar6 = (**(code **)(iVar1 + 0x10))(uVar4,uVar2 & 0x1fffff);
      uVar8 = uVar8 + 1;
    } while (iVar6 == 0);
  }
  else {
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    uVar4 = *param_1;
    iVar6 = param_1[1];
    param_1[2] = uVar2 & 0x9fe00000 | 0x20000030;
    iVar1 = FUN_012fa804(uVar4,iVar6,puVar9,param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
    uVar8 = 0;
    do {
      if ((uVar7 - uVar10 & 0xffff) <= (uVar8 & 0xffff)) {
        iVar1 = (**(code **)(iVar6 + 0xc))(uVar4,param_5,param_6);
        if (iVar1 == 0) {
          param_1[2] = uVar2;
          param_1[3] = uVar5;
          return 0;
        }
        return 1;
      }
      iVar1 = (**(code **)(iVar6 + 0x10))(uVar4,0x30);
      uVar8 = uVar8 + 1;
    } while (iVar1 == 0);
  }
  return 1;
}

