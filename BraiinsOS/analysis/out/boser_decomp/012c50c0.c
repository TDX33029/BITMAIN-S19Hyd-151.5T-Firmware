// FUN_012c50c0 @ 012c50c0 size=904 calls_out=9 calls_in=6
// strings: internal error: entered unreachable code | internal error: entered unreachable code

int FUN_012c50c0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint unaff_r9;
  int iVar8;
  char local_38;
  char local_37;
  byte local_36;
  int local_34;
  undefined4 local_30 [3];
  
  iVar2 = FUN_012c4d2c();
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar8 = 0;
  iVar2 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 8) = 0;
LAB_012c50f0:
  do {
    FUN_012c3960(&local_38,param_1);
    if (local_38 == '\x01') {
      return local_34;
    }
    if (local_37 != '\x01') {
      uVar5 = *(undefined4 *)(param_1 + 0x30);
      uVar6 = *(undefined4 *)(param_1 + 0x34);
      local_30[0] = 5;
      goto LAB_012c53a4;
    }
    uVar7 = (uint)local_36;
    if (uVar7 < 0x66) {
      if (uVar7 == 0x22) {
        FUN_012c6160(iVar2);
        iVar3 = FUN_012c625c(iVar2);
      }
      else {
        if (uVar7 != 0x2d) {
          if (uVar7 == 0x5b) goto LAB_012c518c;
          goto LAB_012c5168;
        }
        FUN_012c6160(iVar2);
LAB_012c5204:
        iVar3 = FUN_012c3bfc(param_1);
      }
LAB_012c520c:
      if (iVar3 != 0) {
        return iVar3;
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
          if (uVar7 != 0x6e) goto LAB_012c5168;
          FUN_012c6160(iVar2);
          pcVar4 = "ull";
          goto LAB_012c51f0;
        }
        FUN_012c6160(iVar2);
        uVar5 = 4;
        pcVar4 = &DAT_0056efac;
LAB_012c51f4:
        iVar3 = FUN_012c3a60(param_1,pcVar4,uVar5);
        goto LAB_012c520c;
      }
      if (uVar7 == 0x74) {
        FUN_012c6160(iVar2);
        pcVar4 = "rue";
LAB_012c51f0:
        uVar5 = 3;
        goto LAB_012c51f4;
      }
      if (uVar7 != 0x7b) {
LAB_012c5168:
        if (9 < (uVar7 - 0x30 & 0xff)) {
          uVar5 = *(undefined4 *)(param_1 + 0x30);
          uVar6 = *(undefined4 *)(param_1 + 0x34);
          local_30[0] = 10;
          goto LAB_012c53a4;
        }
        goto LAB_012c5204;
      }
LAB_012c518c:
      FUN_0196bd38(param_1,iVar8,unaff_r9);
      FUN_012c6160(iVar2);
      bVar1 = false;
    }
LAB_012c523c:
    FUN_012c3960(&local_38,param_1);
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
      goto LAB_012c53a0;
    }
    if (local_36 == 0x5d) {
      if ((uVar7 & 0xff) != 0x5b) goto LAB_012c52d4;
LAB_012c5290:
      FUN_012c6160(iVar2);
      if (*(int *)(param_1 + 8) == 0) {
        return 0;
      }
      iVar8 = *(int *)(param_1 + 8) + -1;
      *(int *)(param_1 + 8) = iVar8;
      bVar1 = true;
      uVar7 = (uint)*(byte *)(*(int *)(param_1 + 4) + iVar8);
      goto LAB_012c523c;
    }
    if (local_36 == 0x7d) {
      if ((uVar7 & 0xff) != 0x7b) goto LAB_012c52d4;
      goto LAB_012c5290;
    }
    if (local_36 == 0x2c) {
      if (bVar1) {
        FUN_012c6160(iVar2);
      }
      goto LAB_012c52dc;
    }
LAB_012c52d4:
    if (bVar1) {
      local_30[0] = 7;
      if ((uVar7 & 0xff) != 0x5b) {
        if ((uVar7 & 0xff) != 0x7b) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d271ec);
        }
        local_30[0] = 8;
      }
LAB_012c53a0:
      uVar5 = *(undefined4 *)(param_1 + 0x30);
      uVar6 = *(undefined4 *)(param_1 + 0x34);
      goto LAB_012c53a4;
    }
LAB_012c52dc:
    iVar8 = 1;
    unaff_r9 = uVar7;
  } while ((uVar7 & 0xff) != 0x7b);
  FUN_012c3960(&local_38,param_1);
  if (local_38 == '\x01') {
    return local_34;
  }
  if (local_37 == '\x01') {
    if (local_36 != 0x22) {
      uVar5 = *(undefined4 *)(param_1 + 0x30);
      uVar6 = *(undefined4 *)(param_1 + 0x34);
      local_30[0] = 0x11;
      goto LAB_012c53a4;
    }
    FUN_012c6160(iVar2);
    iVar3 = FUN_012c625c(iVar2);
    if (iVar3 != 0) {
      return iVar3;
    }
    FUN_012c3960(&local_38,param_1);
    if (local_38 == '\x01') {
      return local_34;
    }
    if (local_37 == '\x01') {
      if (local_36 != 0x3a) {
        uVar5 = *(undefined4 *)(param_1 + 0x30);
        uVar6 = *(undefined4 *)(param_1 + 0x34);
        local_30[0] = 6;
        goto LAB_012c53a4;
      }
      FUN_012c6160(iVar2);
      goto LAB_012c50f0;
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  local_30[0] = 3;
LAB_012c53a4:
  iVar2 = FUN_01966fbc(local_30,uVar5,uVar6);
  return iVar2;
}

