// FUN_016cf7d4 @ 016cf7d4 size=700 calls_out=0 calls_in=1
// strings: 

bool FUN_016cf7d4(char *param_1,uint param_2,byte param_3,int param_4)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint unaff_r7;
  int iVar9;
  bool bVar10;
  
  if (0xfd < param_2) {
    return false;
  }
  bVar10 = param_2 == 0;
  if (bVar10) {
    unaff_r7 = (uint)param_3;
  }
  if (bVar10 && unaff_r7 == 2) {
    return bVar10;
  }
  bVar10 = true;
  if (param_2 == 0 || param_4 == 0) {
    uVar4 = 0;
    bVar1 = false;
    iVar9 = 0;
  }
  else {
    uVar4 = 0;
    bVar1 = false;
    iVar9 = 0;
    if (*param_1 == '*') {
      bVar10 = false;
      if (param_2 == 1) {
        return false;
      }
      if (param_1[1] != '.') {
        return false;
      }
      bVar1 = true;
      uVar4 = 2;
      iVar9 = 1;
    }
  }
  if (param_2 <= uVar4) {
    return false;
  }
  uVar5 = (uint)(byte)param_1[uVar4];
  if (uVar5 == 0x2d) {
    return false;
  }
  uVar8 = uVar4 | 1;
  if (uVar5 != 0x5f) {
    if (uVar5 == 0x2e) {
      bVar6 = false;
      if (param_3 != 2 || !bVar10) {
        return false;
      }
      if (uVar8 == param_2) {
        return false;
      }
      iVar9 = iVar9 + 1;
      uVar5 = 0;
      goto LAB_016cf924;
    }
    if (uVar5 - 0x30 < 10) {
      bVar6 = true;
      uVar5 = 1;
      if (uVar8 == param_2) {
        return false;
      }
      goto LAB_016cf924;
    }
    if (0x19 < (uVar5 & 0xdf) - 0x41) {
      return false;
    }
  }
  bVar6 = false;
  uVar5 = 1;
  if (uVar8 == param_2) {
LAB_016cf8fc:
    if (bVar1) {
      if (uVar5 != 0) {
        iVar9 = iVar9 + 1;
      }
      return 2 < iVar9;
    }
    return true;
  }
LAB_016cf924:
  if (uVar8 == param_2) {
    return false;
  }
  bVar7 = 0;
  pbVar2 = (byte *)(param_1 + uVar4);
  iVar3 = (param_2 - uVar4) + -2;
  uVar4 = uVar5;
  do {
    pbVar2 = pbVar2 + 1;
    uVar5 = (uint)*pbVar2;
    if (uVar5 == 0x2d) {
      if (uVar4 == 0) {
        return false;
      }
      uVar5 = uVar4 + 1;
      bVar6 = false;
      if (0x3f < uVar5) {
        return false;
      }
      bVar7 = 1;
      if (iVar3 == 0) {
        return false;
      }
    }
    else if (uVar5 == 0x2e) {
      if ((bool)(bVar7 | uVar4 == 0)) {
        return false;
      }
      iVar9 = iVar9 + 1;
      bVar7 = 0;
      uVar5 = 0;
      if (iVar3 == 0) {
        if (param_3 != 0) {
          return false;
        }
LAB_016cfa80:
        if (bVar6) {
          return false;
        }
        goto LAB_016cf8fc;
      }
    }
    else {
      if (uVar5 != 0x5f) {
        if (uVar5 - 0x30 < 10) {
          uVar5 = uVar4 + 1;
          if (0x3f < uVar5) {
            return false;
          }
          bVar7 = 0;
          bVar6 = (bool)(uVar4 == 0 | bVar6);
          if (iVar3 == 0) {
            if ((param_3 != 0) && (uVar5 == 0)) {
              return false;
            }
            goto LAB_016cfa80;
          }
          goto LAB_016cf94c;
        }
        if (0x19 < (uVar5 & 0xdf) - 0x41) {
          return false;
        }
      }
      uVar5 = uVar4 + 1;
      if (0x3f < uVar5) {
        return false;
      }
      bVar7 = 0;
      if (iVar3 == 0) {
        if ((param_3 != 0) && (uVar5 == 0)) {
          return false;
        }
        goto LAB_016cf8fc;
      }
      bVar6 = false;
    }
LAB_016cf94c:
    bVar10 = iVar3 == 0;
    iVar3 = iVar3 + -1;
    uVar4 = uVar5;
    if (bVar10) {
      return false;
    }
  } while( true );
}

