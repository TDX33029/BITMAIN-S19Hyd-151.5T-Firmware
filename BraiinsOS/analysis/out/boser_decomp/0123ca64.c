// FUN_0123ca64 @ 0123ca64 size=900 calls_out=9 calls_in=1
// strings: 

void FUN_0123ca64(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char local_38;
  undefined1 local_37;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar2) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      uVar6 = uVar7 - 9;
      if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 != 0x6e) goto LAB_0123cad0;
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
        iVar3 = FUN_01964c70(param_2,"ull",3);
        if (iVar3 == 0) {
          param_1[1] = 6;
          goto LAB_0123cd00;
        }
        *(int *)(param_1 + 4) = iVar3;
        goto LAB_0123ccc4;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (uVar2 != uVar5);
  }
  else {
LAB_0123cad0:
    if (uVar5 < uVar2) {
      do {
        uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
        if ((0x17 < uVar6 - 9) || ((1 << (uVar6 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar6 != 0x22) {
            if (uVar6 != 0x7b) {
              local_30 = 10;
              goto LAB_0123cbc4;
            }
            cVar4 = *(char *)(param_2 + 0x24) + -1;
            *(char *)(param_2 + 0x24) = cVar4;
            if (cVar4 == '\0') {
              local_30 = 0x18;
              goto LAB_0123cbc4;
            }
            uVar5 = uVar5 + 1;
            *(uint *)(param_2 + 0x14) = uVar5;
            if (uVar2 <= uVar5) goto LAB_0123cb70;
            goto LAB_0123cb48;
          }
          if (uVar5 < uVar2) {
            goto LAB_0123cb98;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        *(uint *)(param_2 + 0x14) = uVar5;
      } while (uVar2 != uVar5);
    }
  }
  goto LAB_0123cbc0;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    if (uVar2 == uVar5) break;
LAB_0123cb48:
    uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
    if ((0x17 < uVar6 - 9) || ((1 << (uVar6 - 9 & 0xff) & 0x800013U) == 0)) {
      if (uVar6 != 0x22) {
        if (uVar6 == 0x7d) {
          local_30 = 10;
        }
        else {
          local_30 = 0x11;
        }
        goto LAB_0123cb74;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar5 + 1;
      FUN_019686b4(&local_30,(int *)(param_2 + 0xc),param_2);
      if (local_30 != 2) {
        FUN_0124cf30(&local_38,local_2c,local_28);
        if (local_38 != '\x01') {
          local_2c = FUN_01965c98(param_2);
          if ((local_2c != 0) || (local_2c = FUN_012254b8(param_2), local_2c != 0))
          goto LAB_0123ccb0;
          uVar2 = *(uint *)(param_2 + 0x14);
          *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
          if (*(uint *)(param_2 + 0x10) <= uVar2) goto LAB_0123cd58;
          goto LAB_0123cd30;
        }
        local_2c = local_34;
      }
      local_2c = FUN_01966f00(local_2c,param_2);
      goto LAB_0123ccb0;
    }
  }
LAB_0123cb70:
  local_30 = 3;
LAB_0123cb74:
  local_2c = FUN_01964674(param_2,&local_30);
LAB_0123ccb0:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  goto LAB_0123ccc0;
  while( true ) {
    uVar2 = uVar2 + 1;
    *(uint *)(param_2 + 0x14) = uVar2;
    if (*(uint *)(param_2 + 0x10) == uVar2) break;
LAB_0123cd30:
    uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
    uVar5 = uVar6 - 9;
    if ((0x17 < uVar5) || ((1 << (uVar5 & 0xff) & 0x800013U) == 0)) {
      if (uVar6 != 0x7d) {
        local_30 = 10;
        goto LAB_0123cd5c;
      }
      *(uint *)(param_2 + 0x14) = uVar2 + 1;
      goto LAB_0123cc30;
    }
  }
LAB_0123cd58:
  local_30 = 3;
LAB_0123cd5c:
  local_2c = FUN_01965294(param_2,&local_30);
  goto LAB_0123ccc0;
LAB_0123cc30:
  param_1[1] = local_37;
LAB_0123cd00:
  uVar1 = 0;
  goto LAB_0123cd04;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    if (uVar2 == uVar5) break;
LAB_0123cb98:
    uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
    uVar6 = uVar7 - 9;
    if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
      if (uVar7 == 0x22) {
        *(undefined4 *)(param_2 + 8) = 0;
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
        FUN_019686b4(&local_30,param_2 + 0xc,param_2);
        if (local_30 == 2) goto LAB_0123ccc0;
        FUN_0124cf30(&local_38,local_2c,local_28);
        if (local_38 != '\x01') goto LAB_0123cc30;
      }
      else {
        local_34 = FUN_019659c8(param_2,&uStack_21,&DAT_01c24a5c);
      }
      local_2c = FUN_01966f00(local_34,param_2);
      goto LAB_0123ccc0;
    }
  }
LAB_0123cbc0:
  local_30 = 5;
LAB_0123cbc4:
  local_2c = FUN_01964674(param_2,&local_30);
LAB_0123ccc0:
  *(int *)(param_1 + 4) = local_2c;
LAB_0123ccc4:
  uVar1 = 1;
LAB_0123cd04:
  *param_1 = uVar1;
  return;
}

