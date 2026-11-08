// FUN_0100fa18 @ 0100fa18 size=640 calls_out=8 calls_in=12
// strings: /dev/urandom

int FUN_0100fa18(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint local_20;
  undefined4 local_1c;
  
  uVar2 = DAT_018d9114;
  uVar5 = DAT_018d9118;
  if (DAT_018d9114 == 0xffffffff) {
    uVar1 = FUN_016d6968(0x180,1,0,0);
    uVar2 = 1;
    uVar5 = DAT_018d9118;
    if (0x7fffffff < uVar1) {
      piVar3 = (int *)FUN_016d2bc8();
      iVar4 = *piVar3;
      uVar5 = DAT_018d9118;
      if (0 < iVar4) {
        uVar2 = (uint)(iVar4 != 0x26 && iVar4 != 1);
      }
    }
  }
  DAT_018d9114 = uVar2;
  DAT_018d9118 = uVar5;
  if (DAT_018d9114 == 0) {
    if (uVar5 == 0xffffffff) {
      FUN_016dedc0(&DAT_018db7c4);
      if (DAT_018d9118 == 0xffffffff) {
        do {
          uVar5 = FUN_016d2e2a("/d",0x80000);
          if (uVar5 < 0x80000000) {
            local_1c = 1;
            local_20 = uVar5;
            goto LAB_0100fbe4;
          }
          piVar3 = (int *)FUN_016d2bc8();
          iVar4 = *piVar3;
          if (iVar4 < 1) {
            iVar4 = -0x7fffffff;
          }
        } while (iVar4 == 4);
        goto LAB_0100fc70;
      }
LAB_0100fabc:
      uVar5 = DAT_018d9118;
      FUN_016df192(&DAT_018db7c4);
    }
    do {
      uVar2 = FUN_016e0250(uVar5,param_1,param_2);
      if ((int)uVar2 < 1) {
        if (uVar2 != 0xffffffff) {
          return -0x7ffffffe;
        }
        piVar3 = (int *)FUN_016d2bc8();
        iVar4 = *piVar3;
        if (iVar4 < 1) {
          iVar4 = -0x7fffffff;
        }
        if (iVar4 != 4) {
          return iVar4;
        }
      }
      else {
        if (param_2 < uVar2) {
          return -0x7ffffffe;
        }
        param_1 = param_1 + uVar2;
        param_2 = param_2 - uVar2;
      }
    } while (param_2 != 0);
  }
  else {
    do {
      uVar5 = FUN_016d6968(0x180,param_1,param_2,0);
      if ((int)uVar5 < 1) {
        if (uVar5 != 0xffffffff) {
          return -0x7ffffffe;
        }
        piVar3 = (int *)FUN_016d2bc8();
        iVar4 = *piVar3;
        if (iVar4 < 1) {
          iVar4 = -0x7fffffff;
        }
        if (iVar4 != 4) {
          return iVar4;
        }
      }
      else {
        if (param_2 < uVar5) {
          return -0x7ffffffe;
        }
        param_1 = param_1 + uVar5;
        param_2 = param_2 - uVar5;
      }
    } while (param_2 != 0);
  }
  return 0;
  while (iVar4 == 4 || iVar4 == 0xb) {
LAB_0100fbe4:
    uVar2 = FUN_016da3b6(&local_20,1,0xffffffff);
    if (uVar2 < 0x80000000) {
      FUN_016dffb2(uVar5);
      goto LAB_0100fc2c;
    }
    piVar3 = (int *)FUN_016d2bc8();
    iVar4 = *piVar3;
    if (iVar4 < 1) {
      iVar4 = -0x7fffffff;
      break;
    }
  }
  FUN_016dffb2(uVar5);
  goto LAB_0100fc70;
  while( true ) {
    piVar3 = (int *)FUN_016d2bc8();
    iVar4 = *piVar3;
    if (iVar4 < 1) {
      iVar4 = -0x7fffffff;
    }
    if (iVar4 != 4) break;
LAB_0100fc2c:
    uVar5 = FUN_016d2e2a("/dev/urandom",0x80000);
    if (uVar5 < 0x80000000) {
      DAT_018d9118 = uVar5;
      goto LAB_0100fabc;
    }
  }
LAB_0100fc70:
  FUN_016df192(&DAT_018db7c4);
  return iVar4;
}

