// FUN_00677d34 @ 00677d34 size=892 calls_out=8 calls_in=5
// strings: internal error: entered unreachable code | internal error: entered unreachable code

int FUN_00677d34(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r9;
  int iVar8;
  char local_38;
  char local_37;
  byte local_36;
  int local_34;
  undefined4 local_30 [3];
  
  iVar8 = 0;
  iVar6 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 8) = 0;
LAB_00677d58:
  do {
    FUN_00677900(&local_38,param_1);
    if (local_38 == '\x01') {
      return local_34;
    }
    if (local_37 != '\x01') {
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      local_30[0] = 5;
      goto LAB_0067800c;
    }
    uVar7 = (uint)local_36;
    if (uVar7 < 0x66) {
      if (uVar7 == 0x22) {
        FUN_0157653c(iVar6);
        iVar2 = FUN_0069e378(iVar6);
      }
      else {
        if (uVar7 != 0x2d) {
          if (uVar7 == 0x5b) goto LAB_00677df4;
          goto LAB_00677dd0;
        }
        FUN_0157653c(iVar6);
LAB_00677e6c:
        iVar2 = FUN_006780cc(param_1);
      }
LAB_00677e74:
      if (iVar2 != 0) {
        return iVar2;
      }
      bVar1 = true;
      uVar7 = unaff_r9;
      if (iVar8 == 0) {
        if (*(int *)(param_1 + 8) == 0) {
          return 0;
        }
        iVar8 = *(int *)(param_1 + 8) + -1;
        *(int *)(param_1 + 8) = iVar8;
        uVar7 = (uint)*(byte *)(*(int *)(param_1 + 4) + iVar8);
      }
    }
    else {
      if (uVar7 < 0x74) {
        if (uVar7 != 0x66) {
          if (uVar7 != 0x6e) goto LAB_00677dd0;
          FUN_0157653c(iVar6);
          pcVar3 = "ull";
          goto LAB_00677e58;
        }
        FUN_0157653c(iVar6);
        uVar4 = 4;
        pcVar3 = &DAT_0056efac;
LAB_00677e5c:
        iVar2 = FUN_00677b98(param_1,pcVar3,uVar4);
        goto LAB_00677e74;
      }
      if (uVar7 == 0x74) {
        FUN_0157653c(iVar6);
        pcVar3 = "rue";
LAB_00677e58:
        uVar4 = 3;
        goto LAB_00677e5c;
      }
      if (uVar7 != 0x7b) {
LAB_00677dd0:
        if (9 < (uVar7 - 0x30 & 0xff)) {
          uVar4 = *(undefined4 *)(param_1 + 0x1c);
          uVar5 = *(undefined4 *)(param_1 + 0x20);
          local_30[0] = 10;
          goto LAB_0067800c;
        }
        goto LAB_00677e6c;
      }
LAB_00677df4:
      FUN_0196bd38(param_1,iVar8,unaff_r9);
      FUN_0157653c(iVar6);
      bVar1 = false;
    }
LAB_00677ea4:
    FUN_00677900(&local_38,param_1);
    if (local_38 == '\x01') {
      return local_34;
    }
    if (local_37 != '\x01') {
      local_30[0] = 2;
      if ((uVar7 & 0xff) != 0x5b) {
        if ((uVar7 & 0xff) != 0x7b) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d271dc);
        }
        local_30[0] = 3;
      }
      goto LAB_00678008;
    }
    if (local_36 == 0x5d) {
      if ((uVar7 & 0xff) != 0x5b) goto LAB_00677f3c;
LAB_00677ef8:
      FUN_0157653c(iVar6);
      if (*(int *)(param_1 + 8) == 0) {
        return 0;
      }
      iVar8 = *(int *)(param_1 + 8) + -1;
      *(int *)(param_1 + 8) = iVar8;
      bVar1 = true;
      uVar7 = (uint)*(byte *)(*(int *)(param_1 + 4) + iVar8);
      goto LAB_00677ea4;
    }
    if (local_36 == 0x7d) {
      if ((uVar7 & 0xff) != 0x7b) goto LAB_00677f3c;
      goto LAB_00677ef8;
    }
    if (local_36 == 0x2c) {
      if (bVar1) {
        FUN_0157653c(iVar6);
      }
      goto LAB_00677f44;
    }
LAB_00677f3c:
    if (bVar1) {
      local_30[0] = 7;
      if ((uVar7 & 0xff) != 0x5b) {
        if ((uVar7 & 0xff) != 0x7b) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d271ec);
        }
        local_30[0] = 8;
      }
LAB_00678008:
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      goto LAB_0067800c;
    }
LAB_00677f44:
    iVar8 = 1;
    unaff_r9 = uVar7;
  } while ((uVar7 & 0xff) != 0x7b);
  FUN_00677900(&local_38,param_1);
  if (local_38 == '\x01') {
    return local_34;
  }
  if (local_37 == '\x01') {
    if (local_36 != 0x22) {
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      local_30[0] = 0x11;
      goto LAB_0067800c;
    }
    FUN_0157653c(iVar6);
    iVar2 = FUN_0069e378(iVar6);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_00677900(&local_38,param_1);
    if (local_38 == '\x01') {
      return local_34;
    }
    if (local_37 == '\x01') {
      if (local_36 != 0x3a) {
        uVar4 = *(undefined4 *)(param_1 + 0x1c);
        uVar5 = *(undefined4 *)(param_1 + 0x20);
        local_30[0] = 6;
        goto LAB_0067800c;
      }
      FUN_0157653c(iVar6);
      goto LAB_00677d58;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  local_30[0] = 3;
LAB_0067800c:
  iVar6 = FUN_01966fbc(local_30,uVar4,uVar5);
  return iVar6;
}

