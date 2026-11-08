// FUN_0157531c @ 0157531c size=328 calls_out=0 calls_in=5
// strings: 

undefined4 FUN_0157531c(int *param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar5 = (byte *)param_1[1];
  iVar3 = param_1[2];
  pbVar2 = (byte *)param_2[1];
  iVar1 = param_2[2];
  if (*param_1 == -0x80000000) {
    if (*param_2 == -0x80000000) {
      if (iVar3 == iVar1) {
        do {
          if (iVar3 == 0) {
            return 1;
          }
          uVar6 = (uint)*pbVar2;
          iVar3 = iVar3 + -1;
          uVar4 = (uint)*pbVar5;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 | 0x20;
          }
          pbVar2 = pbVar2 + 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar4 == uVar6);
      }
    }
    else if (iVar3 == iVar1) {
      do {
        if (iVar3 == 0) {
          return 1;
        }
        uVar6 = (uint)*pbVar2;
        iVar3 = iVar3 + -1;
        uVar4 = (uint)*pbVar5;
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        pbVar2 = pbVar2 + 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar4 == uVar6);
    }
  }
  else if (*param_2 == -0x80000000) {
    if (iVar3 != iVar1) {
      return 0;
    }
    do {
      if (iVar3 == 0) {
        return 1;
      }
      uVar6 = (uint)*pbVar2;
      iVar3 = iVar3 + -1;
      uVar4 = (uint)*pbVar5;
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      pbVar2 = pbVar2 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 == uVar6);
  }
  else if (iVar3 == iVar1) {
    do {
      if (iVar3 == 0) {
        return 1;
      }
      uVar6 = (uint)*pbVar2;
      iVar3 = iVar3 + -1;
      uVar4 = (uint)*pbVar5;
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      pbVar2 = pbVar2 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 == uVar6);
  }
  return 0;
}

