// FUN_0127735c @ 0127735c size=988 calls_out=6 calls_in=1
// strings: 

void FUN_0127735c(uint *param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  uint local_40;
  int iStack_3c;
  uint uStack_38;
  uint local_30;
  int local_2c;
  uint local_28;
  
  cVar2 = *(char *)(param_3 + 0xc);
  bVar1 = *(byte *)(param_2 + 0xc);
  uVar7 = (uint)bVar1;
  if (cVar2 == '\x01') {
    uVar6 = *(uint *)(param_2 + 8);
    uVar3 = 0;
    bVar12 = 0x3ffffffe < uVar6;
    bVar11 = uVar6 == 0x3fffffff;
    uVar7 = uVar6 * 4;
    if (uVar6 < 0x40000000) {
      bVar12 = 0x7ffffffb < uVar7;
      bVar11 = uVar7 == 0x7ffffffc;
    }
    if (bVar12 && !bVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar7);
    }
    uVar10 = *(undefined4 *)(param_2 + 4);
    if (uVar7 == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = thunk_FUN_016d4a50(uVar7);
      uVar3 = uVar6;
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar7);
      }
    }
    *param_1 = uVar3;
    param_1[1] = uVar4;
    FUN_016dd1aa(uVar4,uVar10,uVar7);
    *(byte *)(param_1 + 3) = bVar1;
    param_1[2] = uVar6;
    return;
  }
  if (uVar7 == 0) {
    if (cVar2 != '\0') goto LAB_012773d0;
  }
  else {
    if (uVar7 == 1) {
      uVar6 = *(uint *)(param_3 + 8);
      uVar3 = 0;
      bVar12 = 0x3ffffffe < uVar6;
      bVar11 = uVar6 == 0x3fffffff;
      uVar7 = uVar6 * 4;
      if (uVar6 < 0x40000000) {
        bVar12 = 0x7ffffffb < uVar7;
        bVar11 = uVar7 == 0x7ffffffc;
      }
      if (bVar12 && !bVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar7);
      }
      uVar10 = *(undefined4 *)(param_3 + 4);
      if (uVar7 == 0) {
        uVar4 = 4;
      }
      else {
        uVar4 = thunk_FUN_016d4a50(uVar7);
        uVar3 = uVar6;
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar7);
        }
      }
      *param_1 = uVar3;
      param_1[1] = uVar4;
      FUN_016dd1aa(uVar4,uVar10,uVar7);
      *(char *)(param_1 + 3) = '\x02' - cVar2;
      param_1[2] = uVar6;
      return;
    }
    if (cVar2 == '\0') {
LAB_012773d0:
      uVar3 = *(uint *)(param_3 + 8);
      uVar6 = *(uint *)(param_2 + 8);
      if (uVar6 < uVar3) {
        uVar4 = uVar3 << 2;
        uVar10 = *(undefined4 *)(param_3 + 4);
        local_2c = thunk_FUN_016d4a50(uVar4);
        if (local_2c == 0) goto LAB_012774fc;
        local_30 = uVar3;
        FUN_016dd1aa(local_2c,uVar10,uVar4);
        uVar10 = *(undefined4 *)(param_2 + 4);
        uVar4 = uVar6;
        local_28 = uVar3;
      }
      else {
        uVar10 = *(undefined4 *)(param_2 + 4);
        uVar4 = uVar6 << 2;
        if (uVar6 == 0) {
          local_30 = 0;
          local_2c = 4;
        }
        else {
          local_2c = thunk_FUN_016d4a50(uVar4);
          local_30 = uVar6;
          if (local_2c == 0) goto LAB_012774fc;
        }
        FUN_016dd1aa(local_2c,uVar10,uVar4);
        uVar10 = *(undefined4 *)(param_3 + 4);
        uVar4 = uVar3;
        local_28 = uVar6;
      }
      FUN_012742e0(&local_40,&local_30,uVar10,uVar4);
      goto LAB_01277638;
    }
  }
  uVar6 = *(uint *)(param_3 + 8);
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 != uVar6) {
    cVar2 = (uVar3 >= uVar6 && uVar3 != uVar6) - (uVar3 < uVar6);
  }
  else {
    iVar5 = uVar3 << 2;
    do {
      iVar8 = *(int *)(param_3 + 4) + iVar5;
      if (iVar5 == 0) {
        cVar2 = '\0';
        if (*(int *)(param_3 + 4) != iVar8) {
          cVar2 = -1;
        }
        goto joined_r0x01277514;
      }
      uVar9 = *(uint *)(*(int *)(param_2 + 4) + -4 + iVar5);
      iVar5 = iVar5 + -4;
      uVar4 = *(uint *)(iVar8 + -4);
    } while (uVar9 == uVar4);
    cVar2 = (uVar9 >= uVar4) - (uVar9 < uVar4);
  }
joined_r0x01277514:
  if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
    return;
  }
  if (cVar2 == -1) {
    uVar4 = uVar6 * 4;
    bVar12 = 0x3ffffffe < uVar6;
    bVar11 = uVar6 == 0x3fffffff;
    if (uVar6 < 0x40000000) {
      bVar12 = 0x7ffffffb < uVar4;
      bVar11 = uVar4 == 0x7ffffffc;
    }
    if (!bVar12 || bVar11) {
      uVar10 = *(undefined4 *)(param_3 + 4);
      if (uVar4 == 0) {
        local_30 = 0;
        local_2c = 4;
      }
      else {
        local_2c = thunk_FUN_016d4a50(uVar4);
        local_30 = uVar6;
        if (local_2c == 0) {
LAB_012774fc:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar4);
        }
      }
      FUN_016dd1aa(local_2c,uVar10,uVar4);
      local_28 = uVar6;
      FUN_01273cac(&local_30,*(undefined4 *)(param_2 + 4),uVar3);
      local_40 = local_30;
      iStack_3c = local_2c;
      uStack_38 = local_28;
      FUN_01277908(param_1,2 - uVar7,&local_40);
      return;
    }
  }
  else {
    uVar4 = uVar3 * 4;
    bVar12 = 0x3ffffffe < uVar3;
    bVar11 = uVar3 == 0x3fffffff;
    if (uVar3 < 0x40000000) {
      bVar12 = 0x7ffffffb < uVar4;
      bVar11 = uVar4 == 0x7ffffffc;
    }
    if (!bVar12 || bVar11) {
      uVar10 = *(undefined4 *)(param_2 + 4);
      if (uVar4 == 0) {
        local_30 = 0;
        local_2c = 4;
      }
      else {
        local_2c = thunk_FUN_016d4a50(uVar4);
        local_30 = uVar3;
        if (local_2c == 0) goto LAB_012774fc;
      }
      FUN_016dd1aa(local_2c,uVar10,uVar4);
      local_28 = uVar3;
      FUN_01273cac(&local_30,*(undefined4 *)(param_3 + 4),uVar6);
      local_40 = local_30;
      iStack_3c = local_2c;
      uStack_38 = local_28;
LAB_01277638:
      FUN_01277908(param_1,uVar7,&local_40);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(0,uVar4);
}

