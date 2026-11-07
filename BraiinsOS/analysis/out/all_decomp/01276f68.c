// FUN_01276f68 @ 01276f68 size=976 calls_out=6 calls_in=1
// strings: 

void FUN_01276f68(uint *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  uint local_40;
  int iStack_3c;
  uint uStack_38;
  uint local_30;
  int local_2c;
  uint local_28;
  
  cVar1 = *(char *)(param_3 + 0xc);
  cVar2 = *(char *)(param_2 + 0xc);
  if (cVar1 == '\x01') {
    uVar7 = *(uint *)(param_2 + 8);
    uVar4 = 0;
    bVar12 = 0x3ffffffe < uVar7;
    bVar11 = uVar7 == 0x3fffffff;
    uVar8 = uVar7 * 4;
    if (uVar7 < 0x40000000) {
      bVar12 = 0x7ffffffb < uVar8;
      bVar11 = uVar8 == 0x7ffffffc;
    }
    if (bVar12 && !bVar11) goto LAB_01276f9c;
    uVar10 = *(undefined4 *)(param_2 + 4);
    if (uVar8 == 0) {
      uVar5 = 4;
LAB_0127716c:
      *param_1 = uVar4;
      param_1[1] = uVar5;
      FUN_016dd1aa(uVar5,uVar10,uVar8);
      *(char *)(param_1 + 3) = cVar2;
      param_1[2] = uVar7;
      return;
    }
    uVar5 = thunk_FUN_016d4a50(uVar8);
    uVar4 = uVar7;
    if (uVar5 != 0) goto LAB_0127716c;
    goto LAB_012770d4;
  }
  if (cVar2 == '\0') {
    if (cVar1 != '\0') {
LAB_01276fdc:
      uVar4 = *(uint *)(param_3 + 8);
      uVar7 = *(uint *)(param_2 + 8);
      if (uVar7 != uVar4) {
        cVar3 = (uVar7 >= uVar4 && uVar7 != uVar4) - (uVar7 < uVar4);
      }
      else {
        iVar6 = uVar7 << 2;
        do {
          iVar9 = *(int *)(param_3 + 4) + iVar6;
          if (iVar6 == 0) {
            cVar3 = '\0';
            if (*(int *)(param_3 + 4) != iVar9) {
              cVar3 = -1;
            }
            goto joined_r0x012770ec;
          }
          uVar8 = *(uint *)(*(int *)(param_2 + 4) + -4 + iVar6);
          iVar6 = iVar6 + -4;
          uVar5 = *(uint *)(iVar9 + -4);
        } while (uVar8 == uVar5);
        cVar3 = (uVar8 >= uVar5) - (uVar8 < uVar5);
      }
joined_r0x012770ec:
      if (cVar3 == '\0') {
        *param_1 = 0;
        param_1[1] = 4;
        param_1[2] = 0;
        param_1[3] = 1;
        return;
      }
      if (cVar3 == -1) {
        uVar8 = uVar4 * 4;
        bVar12 = 0x3ffffffe < uVar4;
        bVar11 = uVar4 == 0x3fffffff;
        if (uVar4 < 0x40000000) {
          bVar12 = 0x7ffffffb < uVar8;
          bVar11 = uVar8 == 0x7ffffffc;
        }
        if (!bVar12 || bVar11) {
          uVar10 = *(undefined4 *)(param_3 + 4);
          if (uVar8 == 0) {
            local_30 = 0;
            local_2c = 4;
          }
          else {
            local_2c = thunk_FUN_016d4a50(uVar8);
            local_30 = uVar4;
            if (local_2c == 0) {
LAB_012771f0:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,uVar8);
            }
          }
          FUN_016dd1aa(local_2c,uVar10,uVar8);
          local_28 = uVar4;
          FUN_01273cac(&local_30,*(undefined4 *)(param_2 + 4),uVar7);
          local_40 = local_30;
          iStack_3c = local_2c;
          uStack_38 = local_28;
          FUN_01277908(param_1,cVar1,&local_40);
          return;
        }
LAB_01276fcc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar8);
      }
      uVar8 = uVar7 * 4;
      bVar12 = 0x3ffffffe < uVar7;
      bVar11 = uVar7 == 0x3fffffff;
      if (uVar7 < 0x40000000) {
        bVar12 = 0x7ffffffb < uVar8;
        bVar11 = uVar8 == 0x7ffffffc;
      }
      if (bVar12 && !bVar11) {
LAB_01276f9c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar8);
      }
      uVar10 = *(undefined4 *)(param_2 + 4);
      if (uVar8 == 0) {
        local_30 = 0;
        local_2c = 4;
      }
      else {
        local_2c = thunk_FUN_016d4a50(uVar8);
        local_30 = uVar7;
        if (local_2c == 0) {
LAB_012770d4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar8);
        }
      }
      FUN_016dd1aa(local_2c,uVar10,uVar8);
      local_28 = uVar7;
      FUN_01273cac(&local_30,*(undefined4 *)(param_3 + 4),uVar4);
      local_40 = local_30;
      iStack_3c = local_2c;
      uStack_38 = local_28;
      goto LAB_01277264;
    }
  }
  else {
    if (cVar2 == '\x01') {
      uVar7 = *(uint *)(param_3 + 8);
      uVar4 = 0;
      bVar12 = 0x3ffffffe < uVar7;
      bVar11 = uVar7 == 0x3fffffff;
      uVar8 = uVar7 * 4;
      if (uVar7 < 0x40000000) {
        bVar12 = 0x7ffffffb < uVar8;
        bVar11 = uVar8 == 0x7ffffffc;
      }
      if (!bVar12 || bVar11) {
        uVar10 = *(undefined4 *)(param_3 + 4);
        if (uVar8 == 0) {
          uVar5 = 4;
LAB_01277280:
          *param_1 = uVar4;
          param_1[1] = uVar5;
          FUN_016dd1aa(uVar5,uVar10,uVar8);
          *(char *)(param_1 + 3) = cVar1;
          param_1[2] = uVar7;
          return;
        }
        uVar5 = thunk_FUN_016d4a50(uVar8);
        uVar4 = uVar7;
        if (uVar5 != 0) goto LAB_01277280;
        goto LAB_012771f0;
      }
      goto LAB_01276fcc;
    }
    if (cVar1 == '\0') goto LAB_01276fdc;
  }
  uVar8 = *(uint *)(param_3 + 8);
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 < uVar8) {
    iVar6 = uVar8 << 2;
    uVar10 = *(undefined4 *)(param_3 + 4);
    local_2c = thunk_FUN_016d4a50(iVar6);
    if (local_2c == 0) {
LAB_0127715c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar6);
    }
    local_30 = uVar8;
    FUN_016dd1aa(local_2c,uVar10,iVar6);
    uVar10 = *(undefined4 *)(param_2 + 4);
    uVar7 = uVar4;
    local_28 = uVar8;
  }
  else {
    uVar10 = *(undefined4 *)(param_2 + 4);
    iVar6 = uVar4 << 2;
    if (uVar4 == 0) {
      local_30 = 0;
      local_2c = 4;
    }
    else {
      local_2c = thunk_FUN_016d4a50(iVar6);
      local_30 = uVar4;
      if (local_2c == 0) goto LAB_0127715c;
    }
    FUN_016dd1aa(local_2c,uVar10,iVar6);
    uVar10 = *(undefined4 *)(param_3 + 4);
    uVar7 = uVar8;
    local_28 = uVar4;
  }
  FUN_012742e0(&local_40,&local_30,uVar10,uVar7);
LAB_01277264:
  FUN_01277908(param_1,cVar2,&local_40);
  return;
}

