// FUN_01aac97c @ 01aac97c size=684 calls_out=0 calls_in=1
// strings: 

int FUN_01aac97c(byte *param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 4;
  if (param_2 == 0) {
    return 4;
  }
  if (param_2 == 1) {
    bVar2 = *param_1;
    if (bVar2 == 0x2b || bVar2 == 0x2d) {
      return 6;
    }
  }
  else {
    bVar2 = *param_1;
  }
  uVar3 = param_2;
  pbVar4 = param_1;
  if (bVar2 == 0x2b) {
    pbVar4 = param_1 + 1;
    uVar3 = param_2 - 1;
  }
  if (uVar3 < 9) {
    if (uVar3 == 0) {
      return 5;
    }
    uVar8 = 0;
    do {
      bVar2 = *pbVar4;
      if (9 < bVar2 - 0x30) goto LAB_01aaca50;
      pbVar4 = pbVar4 + 1;
      uVar3 = uVar3 - 1;
      uVar8 = (bVar2 - 0x30) + uVar8 * 10;
    } while (uVar3 != 0);
LAB_01aac9fc:
    if (uVar8 < 6) {
      return 5 - uVar8;
    }
  }
  else {
    uVar8 = 0;
    while( true ) {
      if (uVar3 == 0) goto LAB_01aac9fc;
      uVar5 = (uint)((ulonglong)uVar8 * 10);
      if ((int)((ulonglong)uVar8 * 10 >> 0x20) != 0) break;
      uVar6 = *pbVar4 - 0x30;
      uVar8 = uVar6 + uVar5;
      if ((9 < uVar6) || (uVar3 = uVar3 - 1, pbVar4 = pbVar4 + 1, CARRY4(uVar6,uVar5))) break;
    }
  }
LAB_01aaca50:
  if (param_2 != 0) {
    if (param_2 == 5) {
      iVar7 = 0;
      do {
        if (iVar7 == 5) {
          return 4;
        }
        uVar8 = (uint)param_1[iVar7];
        uVar3 = (uint)(byte)(&DAT_0053268a)[iVar7];
        iVar7 = iVar7 + 1;
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
      } while (uVar8 == uVar3);
    }
    if (param_2 == 4) {
      iVar7 = 0;
      do {
        if (iVar7 == 4) {
          return 3;
        }
        uVar8 = (uint)param_1[iVar7];
        uVar3 = (uint)(byte)(&DAT_0056eac4)[iVar7];
        iVar7 = iVar7 + 1;
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
      } while (uVar8 == uVar3);
      iVar7 = 0;
      do {
        if (iVar7 == 4) {
          return 2;
        }
        uVar8 = (uint)param_1[iVar7];
        uVar3 = (uint)(byte)(&DAT_0056e1d8)[iVar7];
        iVar7 = iVar7 + 1;
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
      } while (uVar8 == uVar3);
    }
    if (param_2 == 5) {
      iVar7 = 0;
      do {
        if (iVar7 == 5) {
          return 1;
        }
        uVar8 = (uint)param_1[iVar7];
        uVar3 = (uint)(byte)(&DAT_005314ac)[iVar7];
        iVar7 = iVar7 + 1;
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
      } while (uVar8 == uVar3);
      iVar7 = 0;
      do {
        if (iVar7 == 5) {
          return 0;
        }
        uVar8 = (uint)param_1[iVar7];
        uVar3 = (uint)(byte)(&DAT_005314a7)[iVar7];
        iVar7 = iVar7 + 1;
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
      } while (uVar8 == uVar3);
    }
    iVar7 = 6;
    if (param_2 == 3) {
      iVar1 = 0;
      do {
        if (iVar1 == 3) {
          return 5;
        }
        uVar3 = (uint)param_1[iVar1];
        uVar8 = (uint)(byte)(&DAT_005314a4)[iVar1];
        iVar1 = iVar1 + 1;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
      } while (uVar3 == uVar8);
    }
  }
  return iVar7;
}

