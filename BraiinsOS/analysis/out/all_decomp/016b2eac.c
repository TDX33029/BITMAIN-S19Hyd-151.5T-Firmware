// FUN_016b2eac @ 016b2eac size=572 calls_out=4 calls_in=3
// strings: 

undefined4 FUN_016b2eac(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined1 auStack_34 [8];
  int local_2c;
  uint local_28;
  uint local_24;
  
  if ((char)param_1[0xd] == '\0') {
    return 1;
  }
  if ((char)param_1[0xd] == '\x01') {
    uVar2 = param_1[10];
    uVar3 = param_1[0xb];
    iVar4 = param_1[5];
    uVar5 = param_1[6];
    if (uVar3 < uVar2) goto LAB_016b2f28;
    if (uVar2 != 0) {
      if (uVar2 < uVar5) {
        if (*(char *)(iVar4 + uVar2) < -0x40) goto LAB_016b2f28;
      }
      else if (uVar2 != uVar5) goto LAB_016b2f28;
    }
    if (uVar3 != 0) {
      if (uVar3 < uVar5) {
        if (*(char *)(iVar4 + uVar3) < -0x40) {
LAB_016b2f28:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar4,uVar5,uVar2,uVar3,&DAT_018aedb8);
        }
      }
      else if (uVar3 != uVar5) goto LAB_016b2f28;
    }
    if (uVar3 == uVar2) {
      return 1;
    }
  }
  uVar2 = param_1[8];
  piVar7 = (int *)param_1[5];
  uVar3 = param_1[6];
  if (uVar2 != 0) {
    if (uVar2 < uVar3) {
      if (*(char *)((int)piVar7 + uVar2) < -0x40) {
LAB_016b2f74:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(piVar7,uVar3,0,uVar2,&DAT_018af070);
      }
    }
    else if (uVar2 != uVar3) goto LAB_016b2f74;
    if ((uVar2 == 4) && (*piVar7 == 0x656c6966)) {
      return 1;
    }
  }
  uVar5 = param_1[9];
  if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,uVar3,&DAT_018aed68);
  }
  if (*(char *)((int)piVar7 + uVar5) != ':') {
    return 0;
  }
  uVar6 = param_1[10] - 1;
  if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar6,uVar3,&DAT_018aed68);
  }
  if (uVar2 + 3 == uVar5) {
    uVar6 = param_1[10];
  }
  FUN_016bd110(auStack_34,param_1 + 4,uVar5,uVar6,&DAT_018aed78);
  if ((local_28 <= local_24) && (uVar2 = *(uint *)(local_2c + 8), local_24 <= uVar2)) {
    *(uint *)(local_2c + 8) = local_28;
    if (local_24 == local_28) {
      if (uVar2 == local_24) goto LAB_016b306c;
    }
    else {
      if (uVar2 == local_24) goto LAB_016b306c;
      FUN_016dd52c(*(int *)(local_2c + 4) + local_28,*(int *)(local_2c + 4) + local_24,
                   uVar2 - local_24);
    }
    *(uint *)(local_2c + 8) = (uVar2 - local_24) + local_28;
  }
LAB_016b306c:
  iVar1 = uVar6 - uVar5;
  iVar4 = 0;
  if (*param_1 != 0) {
    iVar4 = param_1[1];
  }
  param_1[10] = param_1[10] - iVar1;
  param_1[0xb] = param_1[0xb] - iVar1;
  param_1[0xc] = param_1[0xc] - iVar1;
  if (*param_1 != 0) {
    param_1[1] = iVar4 - iVar1;
  }
  if (param_1[2] == 1) {
    param_1[3] = param_1[3] - iVar1;
  }
  return 0;
}

