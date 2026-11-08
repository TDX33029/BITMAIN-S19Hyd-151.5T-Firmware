// FUN_00a7547c @ 00a7547c size=940 calls_out=6 calls_in=2
// strings: BUG: invalid parameter for pool id | BUG: invalid number of pool id parameters

void FUN_00a7547c(undefined4 *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40 [3];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined4 local_14;
  
  if (param_2 == (char *)0x0) {
LAB_00a757e4:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("BUG: invalid parameter for pool id",0x45,&DAT_01c0eea0);
  }
  uVar11 = FUN_014a8df0(param_2);
  if ((int)uVar11 != 0) {
    param_1[2] = (int)((ulonglong)uVar11 >> 0x20);
    *param_1 = 0;
    return;
  }
  if (*param_2 != '\x03') goto LAB_00a757e4;
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  iVar1 = FUN_014afb6c(uVar6,uVar8);
  if (iVar1 == 0) goto LAB_00a757e4;
  local_14 = 3;
  local_18 = 1;
  local_24 = 1;
  local_20 = 0;
  local_30 = 0;
  local_40[1] = 0x2c;
  local_28 = 0x2c;
  local_40[2] = uVar6;
  uStack_34 = uVar8;
  local_2c = uVar8;
  local_1c = uVar8;
  FUN_00b225c4(&local_4c,local_40 + 1);
  local_40[0] = local_44;
  if (local_44 != 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,local_40,&DAT_0056d73c,"BUG: invalid number of pool id parameters",0x53,
                 &DAT_01c0ee90);
  }
  uVar2 = *(uint *)(local_48 + 0xc);
  if (uVar2 != 0) {
    pbVar5 = *(byte **)(local_48 + 8);
    if (uVar2 == 1) {
      bVar3 = *pbVar5;
      if (bVar3 == 0x2b || bVar3 == 0x2d) goto LAB_00a7569c;
    }
    else {
      bVar3 = *pbVar5;
    }
    if (bVar3 == 0x2d) {
      iVar1 = uVar2 - 1;
      pbVar5 = pbVar5 + 1;
      if (uVar2 < 9) {
        if (iVar1 == 0) goto LAB_00a75630;
        iVar4 = 0;
        do {
          bVar3 = *pbVar5;
          if (9 < bVar3 - 0x30) goto LAB_00a7569c;
          pbVar5 = pbVar5 + 1;
          iVar1 = iVar1 + -1;
          iVar4 = iVar4 * 10 - (bVar3 - 0x30);
        } while (iVar1 != 0);
      }
      else {
        iVar4 = 0;
        do {
          iVar9 = (int)((longlong)iVar4 * 10);
          if ((((int)((ulonglong)((longlong)iVar4 * 10) >> 0x20) != iVar9 >> 0x1f) ||
              (uVar2 = *pbVar5 - 0x30, 9 < uVar2)) || (iVar4 = iVar9 - uVar2, SBORROW4(iVar9,uVar2))
             ) goto LAB_00a7569c;
          iVar1 = iVar1 + -1;
          pbVar5 = pbVar5 + 1;
        } while (iVar1 != 0);
      }
    }
    else {
      if (bVar3 == 0x2b) {
        uVar2 = uVar2 - 1;
        pbVar5 = pbVar5 + 1;
      }
      if (uVar2 < 8) {
        if (uVar2 == 0) {
LAB_00a75630:
          iVar4 = 0;
        }
        else {
          iVar4 = 0;
          do {
            bVar3 = *pbVar5;
            if (9 < bVar3 - 0x30) goto LAB_00a7569c;
            pbVar5 = pbVar5 + 1;
            uVar2 = uVar2 - 1;
            iVar4 = (bVar3 - 0x30) + iVar4 * 10;
          } while (uVar2 != 0);
        }
      }
      else {
        iVar4 = 0;
        do {
          iVar1 = (int)((longlong)iVar4 * 10);
          if ((((int)((ulonglong)((longlong)iVar4 * 10) >> 0x20) != iVar1 >> 0x1f) ||
              (uVar7 = *pbVar5 - 0x30, 9 < uVar7)) || (iVar4 = iVar1 + uVar7, SCARRY4(iVar1,uVar7)))
          goto LAB_00a7569c;
          uVar2 = uVar2 - 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar2 != 0);
      }
    }
    uVar2 = *(uint *)(local_48 + 0x14);
    if (uVar2 != 0) {
      pbVar5 = *(byte **)(local_48 + 0x10);
      if (uVar2 == 1) {
        bVar3 = *pbVar5;
        if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_00a7569c;
      }
      else {
        bVar3 = *pbVar5;
      }
      if (bVar3 == 0x2d) {
        iVar1 = uVar2 - 1;
        pbVar5 = pbVar5 + 1;
        if (uVar2 < 9) {
          if (iVar1 == 0) goto LAB_00a75790;
          iVar9 = 0;
          do {
            bVar3 = *pbVar5;
            if (9 < bVar3 - 0x30) goto LAB_00a7569c;
            pbVar5 = pbVar5 + 1;
            iVar1 = iVar1 + -1;
            iVar9 = iVar9 * 10 - (bVar3 - 0x30);
          } while (iVar1 != 0);
        }
        else {
          iVar9 = 0;
          do {
            iVar10 = (int)((longlong)iVar9 * 10);
            if ((((int)((ulonglong)((longlong)iVar9 * 10) >> 0x20) != iVar10 >> 0x1f) ||
                (uVar2 = *pbVar5 - 0x30, 9 < uVar2)) ||
               (iVar9 = iVar10 - uVar2, SBORROW4(iVar10,uVar2))) goto LAB_00a7569c;
            iVar1 = iVar1 + -1;
            pbVar5 = pbVar5 + 1;
          } while (iVar1 != 0);
        }
      }
      else {
        if (bVar3 == 0x2b) {
          uVar2 = uVar2 - 1;
          pbVar5 = pbVar5 + 1;
        }
        if (uVar2 < 8) {
          if (uVar2 == 0) {
LAB_00a75790:
            iVar9 = 0;
          }
          else {
            iVar9 = 0;
            do {
              bVar3 = *pbVar5;
              if (9 < bVar3 - 0x30) goto LAB_00a7569c;
              pbVar5 = pbVar5 + 1;
              uVar2 = uVar2 - 1;
              iVar9 = (bVar3 - 0x30) + iVar9 * 10;
            } while (uVar2 != 0);
          }
        }
        else {
          iVar9 = 0;
          do {
            iVar1 = (int)((longlong)iVar9 * 10);
            if ((((int)((ulonglong)((longlong)iVar9 * 10) >> 0x20) != iVar1 >> 0x1f) ||
                (uVar7 = *pbVar5 - 0x30, 9 < uVar7)) ||
               (iVar9 = iVar1 + uVar7, SCARRY4(iVar1,uVar7))) goto LAB_00a7569c;
            uVar2 = uVar2 - 1;
            pbVar5 = pbVar5 + 1;
          } while (uVar2 != 0);
        }
      }
      *param_1 = 1;
      param_1[1] = iVar4;
      param_1[2] = iVar9;
      goto LAB_00a756a8;
    }
  }
LAB_00a7569c:
  *param_1 = 2;
LAB_00a756a8:
  FUN_0134aee0(local_4c,local_48,4,8);
  return;
}

