// FUN_0090e60c @ 0090e60c size=1092 calls_out=9 calls_in=2
// strings: manual | manual | manual_indefinite | manual_indefinite

void FUN_0090e60c(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int local_34;
  int *piStack_30;
  int local_2c;
  undefined1 uStack_25;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < uVar2) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 == 0x22) {
          if (uVar2 <= uVar6) goto LAB_0090e748;
          goto LAB_0090e720;
        }
        if (uVar7 != 0x7b) {
          local_34 = 10;
          goto LAB_0090e668;
        }
        cVar5 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar5;
        if (cVar5 == '\0') {
          local_34 = 0x18;
          goto LAB_0090e668;
        }
        uVar6 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar6;
        if (uVar2 <= uVar6) goto LAB_0090e6f4;
        piVar8 = (int *)(param_2 + 0xc);
        goto LAB_0090e6cc;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
    } while (uVar2 != uVar6);
  }
  local_34 = 5;
LAB_0090e668:
  uVar3 = FUN_008f9984(param_2,&local_34);
  *(undefined4 *)(param_1 + 4) = uVar3;
  *param_1 = 1;
  return;
LAB_0090e6cc:
  uVar7 = *(byte *)(*piVar8 + uVar6) - 9;
  if (0x19 < uVar7) {
LAB_0090e9c0:
    if (*(byte *)(*piVar8 + uVar6) == 0x7d) {
      local_34 = 10;
    }
    else {
      local_34 = 0x11;
    }
    goto LAB_0090e6f8;
  }
  if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) {
    if (uVar7 != 0x19) goto LAB_0090e9c0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar6 + 1;
    FUN_0157e384(&local_34,piVar8,param_2);
    if (local_34 == 2) {
LAB_0090ea14:
      iVar4 = FUN_00e959bc(piStack_30,param_2);
      goto LAB_0090e8a8;
    }
    if (local_2c == 4) {
      uVar1 = 0;
      if (*piStack_30 != 0x6f747561) goto LAB_0090e9f8;
    }
    else {
      if (local_2c == 6) {
        iVar4 = thunk_FUN_016dd50a(piStack_30,"manual",6);
        uVar1 = 1;
      }
      else {
        if (local_2c != 0x11) goto LAB_0090e9f8;
        iVar4 = thunk_FUN_016dd50a(piStack_30,"manual_indefinite",0x11);
        uVar1 = 2;
      }
      if (iVar4 != 0) {
LAB_0090e9f8:
        piStack_30 = (int *)FUN_00953d54(piStack_30,local_2c,&DAT_018679d0,3);
        goto LAB_0090ea14;
      }
    }
    iVar4 = FUN_01114eb4(param_2);
    if ((iVar4 != 0) || (iVar4 = FUN_008fa9ec(param_2), iVar4 != 0)) goto LAB_0090e8a8;
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar6 = *(uint *)(param_2 + 0x14);
    cVar5 = *(char *)(param_2 + 0x24);
    param_1[1] = uVar1;
    *(char *)(param_2 + 0x24) = cVar5 + '\x01';
    if (uVar2 <= uVar6) goto LAB_0090e978;
    goto LAB_0090e950;
  }
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) {
LAB_0090e6f4:
    local_34 = 3;
LAB_0090e6f8:
    iVar4 = FUN_008f9984(param_2,&local_34);
LAB_0090e8a8:
    *(int *)(param_1 + 4) = iVar4;
    *param_1 = 1;
    *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
    return;
  }
  goto LAB_0090e6cc;
LAB_0090e950:
  uVar7 = *(byte *)(*piVar8 + uVar6) - 9;
  if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
    if (*(byte *)(*piVar8 + uVar6) == 0x7d) {
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      *param_1 = 0;
      return;
    }
    local_34 = 10;
    goto LAB_0090e97c;
  }
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) {
LAB_0090e978:
    local_34 = 3;
LAB_0090e97c:
    uVar3 = FUN_005b8c9c(param_2,&local_34);
    *(undefined4 *)(param_1 + 4) = uVar3;
    *param_1 = 1;
    return;
  }
  goto LAB_0090e950;
LAB_0090e720:
  do {
    uVar7 = *(byte *)(*(int *)(param_2 + 0xc) + uVar6) - 9;
    if (0x19 < uVar7) {
LAB_0090e9e0:
      uVar3 = FUN_005b8238(param_2,&uStack_25,&DAT_01867488);
LAB_0090ea3c:
      piStack_30 = (int *)FUN_00e959bc(uVar3,param_2);
      goto LAB_0090e794;
    }
    if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) {
      if (uVar7 != 0x19) goto LAB_0090e9e0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      FUN_0157e384(&local_34,(int *)(param_2 + 0xc),param_2);
      if (local_34 != 2) {
        if (local_2c == 4) {
          if (*piStack_30 == 0x6f747561) {
            param_1[1] = 0;
            *param_1 = 0;
            return;
          }
        }
        else if (local_2c == 6) {
          iVar4 = thunk_FUN_016dd50a(piStack_30,"manual",6);
          if (iVar4 == 0) {
            uVar1 = 1;
            goto LAB_0090e918;
          }
        }
        else if ((local_2c == 0x11) &&
                (iVar4 = thunk_FUN_016dd50a(piStack_30,"manual_indefinite",0x11), iVar4 == 0)) {
          uVar1 = 2;
LAB_0090e918:
          param_1[1] = uVar1;
          *param_1 = 0;
          return;
        }
        uVar3 = FUN_00953d54(piStack_30,local_2c,&DAT_018679d0,3);
        goto LAB_0090ea3c;
      }
      goto LAB_0090e794;
    }
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
  } while (uVar2 != uVar6);
LAB_0090e748:
  local_34 = 5;
  piStack_30 = (int *)FUN_008f9984(param_2,&local_34);
LAB_0090e794:
  *(int **)(param_1 + 4) = piStack_30;
  *param_1 = 1;
  return;
}

