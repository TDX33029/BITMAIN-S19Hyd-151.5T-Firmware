// FUN_009454a0 @ 009454a0 size=1044 calls_out=8 calls_in=1
// strings: 

void FUN_009454a0(undefined1 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  char local_38;
  undefined1 local_37;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar1) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      uVar6 = uVar7 - 9;
      if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 == 0x6e) {
          uVar7 = uVar5 + 1;
          *(uint *)(param_2 + 0x14) = uVar7;
          uVar6 = uVar1;
          if (uVar1 < uVar7) {
            uVar6 = uVar7;
          }
          if (uVar7 < uVar1) {
            iVar2 = *(int *)(param_2 + 0xc);
            cVar4 = *(char *)(iVar2 + uVar7);
            uVar1 = uVar5 + 2;
            *(uint *)(param_2 + 0x14) = uVar1;
            if (cVar4 == 'u') {
              if (uVar1 == uVar6) goto LAB_009457fc;
              cVar4 = *(char *)(iVar2 + uVar1);
              uVar1 = uVar5 + 3;
              *(uint *)(param_2 + 0x14) = uVar1;
              if (cVar4 == 'l') {
                if (uVar1 == uVar6) goto LAB_009457fc;
                cVar4 = *(char *)(iVar2 + uVar1);
                *(uint *)(param_2 + 0x14) = uVar5 + 4;
                if (cVar4 == 'l') {
                  param_1[1] = 8;
                  *param_1 = 0;
                  return;
                }
              }
            }
            local_30 = 9;
          }
          else {
LAB_009457fc:
            local_30 = 5;
          }
          uVar3 = FUN_005b8c9c(param_2,&local_30);
          *(undefined4 *)(param_1 + 4) = uVar3;
          *param_1 = 1;
          return;
        }
        goto LAB_0094550c;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (uVar1 != uVar5);
  }
  else {
LAB_0094550c:
    if (uVar5 < uVar1) {
      do {
        uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
        if ((0x17 < uVar6 - 9) || ((1 << (uVar6 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar6 != 0x22) {
            if (uVar6 != 0x7b) {
              local_30 = 10;
              goto LAB_00945608;
            }
            cVar4 = *(char *)(param_2 + 0x24) + -1;
            *(char *)(param_2 + 0x24) = cVar4;
            if (cVar4 == '\0') {
              local_30 = 0x18;
              goto LAB_00945608;
            }
            uVar5 = uVar5 + 1;
            *(uint *)(param_2 + 0x14) = uVar5;
            if (uVar1 <= uVar5) goto LAB_009455b0;
            piVar8 = (int *)(param_2 + 0xc);
            goto LAB_00945588;
          }
          if (uVar5 < uVar1) {
            goto LAB_009455dc;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        *(uint *)(param_2 + 0x14) = uVar5;
      } while (uVar1 != uVar5);
    }
  }
  goto LAB_00945604;
LAB_00945588:
  uVar6 = *(byte *)(*piVar8 + uVar5) - 9;
  if (0x19 < uVar6) {
LAB_00945850:
    if (*(byte *)(*piVar8 + uVar5) == 0x7d) {
      local_30 = 10;
    }
    else {
      local_30 = 0x11;
    }
    goto LAB_009455b4;
  }
  if ((1 << (uVar6 & 0xff) & 0x800013U) == 0) {
    if (uVar6 != 0x19) goto LAB_00945850;
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar5 + 1;
    FUN_0157e384(&local_30,piVar8,param_2);
    if (local_30 != 2) {
      FUN_0093eb6c(&local_38,local_2c,local_28);
      if (local_38 != '\x01') {
        iVar2 = FUN_01114eb4(param_2);
        if ((iVar2 != 0) || (iVar2 = FUN_008fa9ec(param_2), iVar2 != 0)) goto LAB_00945694;
        uVar1 = *(uint *)(param_2 + 0x14);
        *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
        if (*(uint *)(param_2 + 0x10) <= uVar1) goto LAB_009457e4;
        goto LAB_009457bc;
      }
      local_2c = local_34;
    }
    iVar2 = FUN_00e959bc(local_2c,param_2);
    goto LAB_00945694;
  }
  uVar5 = uVar5 + 1;
  *(uint *)(param_2 + 0x14) = uVar5;
  if (uVar1 == uVar5) {
LAB_009455b0:
    local_30 = 3;
LAB_009455b4:
    iVar2 = FUN_008f9984(param_2,&local_30);
LAB_00945694:
    cVar4 = *(char *)(param_2 + 0x24);
    *(int *)(param_1 + 4) = iVar2;
    *(char *)(param_2 + 0x24) = cVar4 + '\x01';
    *param_1 = 1;
    return;
  }
  goto LAB_00945588;
  while( true ) {
    uVar1 = uVar1 + 1;
    *(uint *)(param_2 + 0x14) = uVar1;
    if (*(uint *)(param_2 + 0x10) == uVar1) break;
LAB_009457bc:
    uVar5 = *(byte *)(*piVar8 + uVar1) - 9;
    if ((0x17 < uVar5) || ((1 << (uVar5 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(*piVar8 + uVar1) != 0x7d) {
        local_30 = 10;
        goto LAB_009457e8;
      }
      *(uint *)(param_2 + 0x14) = uVar1 + 1;
      goto LAB_00945834;
    }
  }
LAB_009457e4:
  local_30 = 3;
LAB_009457e8:
  local_2c = FUN_005b8c9c(param_2,&local_30);
  goto LAB_009456ec;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    if (uVar1 == uVar5) break;
LAB_009455dc:
    uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
    uVar7 = uVar6 - 9;
    if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
      if (uVar6 == 0x22) {
        *(undefined4 *)(param_2 + 8) = 0;
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
        FUN_0157e384(&local_30,(int *)(param_2 + 0xc),param_2);
        if (local_30 == 2) goto LAB_009456ec;
        FUN_0093eb6c(&local_38,local_2c,local_28);
        if (local_38 != '\x01') {
LAB_00945834:
          param_1[1] = local_37;
          *param_1 = 0;
          return;
        }
      }
      else {
        local_34 = FUN_005b8238(param_2,&uStack_21,&DAT_01867448);
      }
      local_2c = FUN_00e959bc(local_34,param_2);
      goto LAB_009456ec;
    }
  }
LAB_00945604:
  local_30 = 5;
LAB_00945608:
  local_2c = FUN_008f9984(param_2,&local_30);
LAB_009456ec:
  *(undefined4 *)(param_1 + 4) = local_2c;
  *param_1 = 1;
  return;
}

