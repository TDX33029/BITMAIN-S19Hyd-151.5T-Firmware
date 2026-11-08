// FUN_0159aa18 @ 0159aa18 size=772 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_0159aa18(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar6 = *param_3;
  if (param_2 <= uVar6) {
    return 0;
  }
  uVar1 = uVar6;
  do {
    iVar2 = 1;
    uVar3 = (uint)*(byte *)(param_1 + uVar1);
    if (uVar3 != 0x5f) {
      uVar4 = uVar3 - 0x30;
      bVar7 = 9 < uVar4;
      if (bVar7) {
        uVar4 = (uVar3 & 0xdf) - 0x41;
      }
      if (bVar7 && 0x19 < uVar4) {
        if (uVar3 != 0x25) break;
        if (param_2 <= uVar1 + 2) {
          return 0;
        }
        uVar3 = (uint)((byte *)(param_1 + uVar1))[1];
        if ((9 < uVar3 - 0x30) && (5 < (uVar3 & 0xdf) - 0x41)) {
          return 0;
        }
        uVar3 = (uint)*(byte *)(param_1 + uVar1 + 2);
        iVar2 = 3;
        if ((9 < uVar3 - 0x30) && (5 < (uVar3 & 0xdf) - 0x41)) {
          return 0;
        }
      }
    }
    uVar1 = iVar2 + uVar1;
    *param_3 = uVar1;
  } while (uVar1 < param_2);
LAB_0159ac70:
  if (uVar1 <= uVar6) {
    return 0;
  }
  do {
    if (param_2 <= uVar1) {
LAB_0159ac7c:
      if (param_2 <= uVar1) {
        return 1;
      }
      if (*(char *)(param_1 + uVar1) == '*') {
        *param_3 = uVar1 + 1;
        return 1;
      }
      if (*(char *)(param_1 + uVar1) != ':') {
        return 1;
      }
      uVar6 = uVar1 + 1;
      *param_3 = uVar6;
      if (param_2 <= uVar6) {
        return 0;
      }
      if (*(byte *)(param_1 + uVar6) - 0x3a < 0xfffffff7) {
        return 0;
      }
      uVar3 = uVar1 + 2;
      *param_3 = uVar3;
      if (uVar3 < param_2) {
        uVar4 = 0;
        do {
          uVar5 = *(byte *)(param_1 + uVar3 + uVar4) - 0x30;
          bVar8 = 8 < uVar5;
          bVar7 = uVar5 == 9;
          if (uVar5 < 10) {
            uVar6 = uVar4 + 1;
            bVar8 = 2 < uVar6;
            bVar7 = uVar6 == 3;
          }
        } while ((!bVar8 || bVar7) &&
                (*param_3 = uVar1 + 3 + uVar4, uVar4 = uVar6, (param_2 - uVar1) - 2 != uVar6));
      }
      return 1;
    }
    uVar6 = (uint)*(byte *)(param_1 + uVar1);
    if (uVar6 == 0x2e) break;
    if (((uVar6 != 0x25 && uVar6 != 0x5f) && (9 < uVar6 - 0x30)) && (0x19 < (uVar6 & 0xdf) - 0x41))
    goto LAB_0159ac7c;
    uVar6 = uVar1;
    do {
      iVar2 = 1;
      uVar3 = (uint)*(byte *)(param_1 + uVar6);
      if (uVar3 != 0x5f) {
        uVar4 = uVar3 - 0x30;
        bVar7 = 9 < uVar4;
        if (bVar7) {
          uVar4 = (uVar3 & 0xdf) - 0x41;
        }
        if (bVar7 && 0x19 < uVar4) {
          if (uVar3 != 0x25) break;
          if (param_2 <= uVar6 + 2) {
            return 0;
          }
          uVar3 = (uint)((byte *)(param_1 + uVar6))[1];
          if ((9 < uVar3 - 0x30) && (5 < (uVar3 & 0xdf) - 0x41)) {
            return 0;
          }
          uVar3 = (uint)*(byte *)(param_1 + uVar6 + 2);
          iVar2 = 3;
          if ((9 < uVar3 - 0x30) && (5 < (uVar3 & 0xdf) - 0x41)) {
            return 0;
          }
        }
      }
      uVar6 = iVar2 + uVar6;
      *param_3 = uVar6;
    } while (uVar6 < param_2);
    bVar7 = uVar6 <= uVar1;
    uVar1 = uVar6;
    if (bVar7) {
      return 0;
    }
  } while( true );
  uVar6 = uVar1 + 1;
  *param_3 = uVar6;
  if (param_2 <= uVar6) {
    return 0;
  }
  uVar1 = uVar6;
  do {
    iVar2 = 1;
    uVar3 = (uint)*(byte *)(param_1 + uVar1);
    if (uVar3 != 0x5f) {
      uVar4 = uVar3 - 0x30;
      bVar7 = 9 < uVar4;
      if (bVar7) {
        uVar4 = (uVar3 & 0xdf) - 0x41;
      }
      if (bVar7 && 0x19 < uVar4) {
        if (uVar3 != 0x25) break;
        if (param_2 <= uVar1 + 2) {
          return 0;
        }
        uVar3 = (uint)((byte *)(param_1 + uVar1))[1];
        if ((9 < uVar3 - 0x30) && (5 < (uVar3 & 0xdf) - 0x41)) {
          return 0;
        }
        uVar3 = (uint)*(byte *)(param_1 + uVar1 + 2);
        iVar2 = 3;
        if ((9 < uVar3 - 0x30) && (5 < (uVar3 & 0xdf) - 0x41)) {
          return 0;
        }
      }
    }
    uVar1 = iVar2 + uVar1;
    *param_3 = uVar1;
  } while (uVar1 < param_2);
  goto LAB_0159ac70;
}

