// FUN_00916498 @ 00916498 size=1024 calls_out=9 calls_in=3
// strings: power_target | power_target | hashrate_target | hashrate_target

void FUN_00916498(undefined1 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  int *piVar8;
  int local_34;
  undefined4 uStack_30;
  int local_2c;
  undefined1 uStack_25;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar1) {
    do {
      uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      if ((0x17 < uVar6 - 9) || ((1 << (uVar6 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar6 == 0x22) {
          if (uVar1 <= uVar5) goto LAB_009165d4;
          goto LAB_009165ac;
        }
        if (uVar6 != 0x7b) {
          local_34 = 10;
          goto LAB_009164f4;
        }
        cVar4 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar4;
        if (cVar4 == '\0') {
          local_34 = 0x18;
          goto LAB_009164f4;
        }
        uVar5 = uVar5 + 1;
        *(uint *)(param_2 + 0x14) = uVar5;
        if (uVar1 <= uVar5) goto LAB_00916580;
        piVar8 = (int *)(param_2 + 0xc);
        goto LAB_00916558;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (uVar1 != uVar5);
  }
  local_34 = 5;
LAB_009164f4:
  uVar2 = FUN_008f9984(param_2,&local_34);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
LAB_00916558:
  uVar6 = *(byte *)(*piVar8 + uVar5) - 9;
  if (0x19 < uVar6) {
LAB_00916808:
    if (*(byte *)(*piVar8 + uVar5) == 0x7d) {
      local_34 = 10;
    }
    else {
      local_34 = 0x11;
    }
    goto LAB_00916584;
  }
  if ((1 << (uVar6 & 0xff) & 0x800013U) == 0) {
    if (uVar6 != 0x19) goto LAB_00916808;
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar5 + 1;
    FUN_0157e384(&local_34,piVar8,param_2);
    if (local_34 != 2) {
      if (local_2c == 0xc) {
        iVar3 = thunk_FUN_016dd50a(uStack_30,"power_target",0xc);
        uVar7 = 0;
LAB_009166ec:
        if (iVar3 == 0) {
          iVar3 = FUN_01114eb4(param_2);
          if (iVar3 != 0) goto LAB_00916704;
          iVar3 = FUN_008fa9ec(param_2);
          cVar4 = *(char *)(param_2 + 0x24);
          if (iVar3 != 0) goto LAB_00916720;
          uVar1 = *(uint *)(param_2 + 0x10);
          uVar5 = *(uint *)(param_2 + 0x14);
          *(char *)(param_2 + 0x24) = cVar4 + '\x01';
          param_1[1] = uVar7;
          if (uVar1 <= uVar5) goto LAB_009167c0;
          goto LAB_00916798;
        }
      }
      else if (local_2c == 0xf) {
        iVar3 = thunk_FUN_016dd50a(uStack_30,"hashrate_target",0xf);
        uVar7 = 1;
        goto LAB_009166ec;
      }
      uStack_30 = FUN_00953d54(uStack_30,local_2c,&DAT_01867bc0,2);
    }
    iVar3 = FUN_00e959bc(uStack_30,param_2);
    goto LAB_00916704;
  }
  uVar5 = uVar5 + 1;
  *(uint *)(param_2 + 0x14) = uVar5;
  if (uVar1 == uVar5) {
LAB_00916580:
    local_34 = 3;
LAB_00916584:
    iVar3 = FUN_008f9984(param_2,&local_34);
LAB_00916704:
    cVar4 = *(char *)(param_2 + 0x24);
LAB_00916720:
    *(int *)(param_1 + 4) = iVar3;
    *param_1 = 1;
    *(char *)(param_2 + 0x24) = cVar4 + '\x01';
    return;
  }
  goto LAB_00916558;
LAB_00916798:
  uVar6 = *(byte *)(*piVar8 + uVar5) - 9;
  if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
    if (*(byte *)(*piVar8 + uVar5) == 0x7d) {
      *(uint *)(param_2 + 0x14) = uVar5 + 1;
      *param_1 = 0;
      return;
    }
    local_34 = 10;
    goto LAB_009167c4;
  }
  uVar5 = uVar5 + 1;
  *(uint *)(param_2 + 0x14) = uVar5;
  if (uVar1 == uVar5) {
LAB_009167c0:
    local_34 = 3;
LAB_009167c4:
    uVar2 = FUN_005b8c9c(param_2,&local_34);
    *(undefined4 *)(param_1 + 4) = uVar2;
    *param_1 = 1;
    return;
  }
  goto LAB_00916798;
  while( true ) {
    if ((1 << (uVar6 & 0xff) & 0x800013U) == 0) {
      if (uVar6 != 0x19) goto LAB_00916828;
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar5 + 1;
      FUN_0157e384(&local_34,(int *)(param_2 + 0xc),param_2);
      if (local_34 != 2) {
        if (local_2c == 0xc) {
          iVar3 = thunk_FUN_016dd50a(uStack_30,"power_target",0xc);
          if (iVar3 == 0) {
            param_1[1] = 0;
            *param_1 = 0;
            return;
          }
        }
        else if ((local_2c == 0xf) &&
                (iVar3 = thunk_FUN_016dd50a(uStack_30,"hashrate_target",0xf), iVar3 == 0)) {
          param_1[1] = 1;
          *param_1 = 0;
          return;
        }
        uVar2 = FUN_00953d54(uStack_30,local_2c,&DAT_01867bc0,2);
        goto LAB_00916884;
      }
      goto LAB_00916620;
    }
    uVar5 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    if (uVar1 == uVar5) break;
LAB_009165ac:
    uVar6 = *(byte *)(*(int *)(param_2 + 0xc) + uVar5) - 9;
    if (0x19 < uVar6) {
LAB_00916828:
      uVar2 = FUN_005b8238(param_2,&uStack_25,&DAT_01867478);
LAB_00916884:
      uStack_30 = FUN_00e959bc(uVar2,param_2);
      goto LAB_00916620;
    }
  }
LAB_009165d4:
  local_34 = 5;
  uStack_30 = FUN_008f9984(param_2,&local_34);
LAB_00916620:
  *(undefined4 *)(param_1 + 4) = uStack_30;
  *param_1 = 1;
  return;
}

