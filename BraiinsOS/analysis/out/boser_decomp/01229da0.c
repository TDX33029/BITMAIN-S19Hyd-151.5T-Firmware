// FUN_01229da0 @ 01229da0 size=868 calls_out=8 calls_in=2
// strings: 

void FUN_01229da0(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < uVar3) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 == 0x22) {
          if (uVar3 <= uVar6) goto LAB_01229ecc;
          goto LAB_01229ea4;
        }
        if (uVar7 != 0x7b) {
          local_28 = 10;
          goto LAB_01229df8;
        }
        cVar1 = *(char *)(param_2 + 0x24);
        *(char *)(param_2 + 0x24) = cVar1 + -1;
        if (cVar1 == '\x01') {
          local_28 = 0x18;
          goto LAB_01229df8;
        }
        uVar6 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar6;
        if (uVar3 <= uVar6) goto LAB_01229e7c;
        goto LAB_01229e54;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
    } while (uVar3 != uVar6);
  }
  local_28 = 5;
LAB_01229df8:
  uVar4 = FUN_01964674(param_2,&local_28);
  *(undefined4 *)(param_1 + 4) = uVar4;
  *param_1 = 1;
  return;
  while( true ) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar3 == uVar6) break;
LAB_01229ea4:
    uVar8 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
    uVar7 = uVar8 - 9;
    if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
      if (uVar8 == 0x22) {
        *(undefined4 *)(param_2 + 8) = 0;
        *(uint *)(param_2 + 0x14) = uVar6 + 1;
        FUN_019686b4(&local_28,param_2 + 0xc,param_2);
        if (local_28 == 2) goto LAB_01229f20;
        FUN_012328b4(&local_30,local_24,local_20);
        if (local_30 != '\x01') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(local_2f) {
          case 0:
            uVar2 = 0;
            param_1[1] = 0;
            goto LAB_0122a0a4;
          case 1:
            uVar2 = 1;
            break;
          case 2:
            uVar2 = 2;
            break;
          case 3:
            uVar2 = 3;
          }
          param_1[1] = uVar2;
          goto LAB_0122a0a0;
        }
      }
      else {
        local_2c = FUN_019659c8(param_2,&uStack_19,&DAT_01c24a0c);
      }
      local_24 = FUN_01966f00(local_2c,param_2);
      goto LAB_01229f20;
    }
  }
LAB_01229ecc:
  local_28 = 5;
  local_24 = FUN_01964674(param_2,&local_28);
LAB_01229f20:
  *(undefined4 *)(param_1 + 4) = local_24;
  goto LAB_01229f24;
LAB_01229e54:
  uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
  if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
    if (uVar7 != 0x22) {
      if (uVar7 == 0x7d) {
        local_28 = 10;
      }
      else {
        local_28 = 0x11;
      }
      goto LAB_01229e80;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar6 + 1;
    FUN_019686b4(&local_28,(int *)(param_2 + 0xc),param_2);
    if (local_28 != 2) {
      FUN_012328b4(&local_30,local_24,local_20);
      if (local_30 != '\x01') {
        iVar5 = FUN_01965c98(param_2);
        if ((iVar5 != 0) || (iVar5 = FUN_012254b8(param_2), iVar5 != 0)) goto LAB_01229fa4;
        uVar3 = *(uint *)(param_2 + 0x10);
        uVar6 = *(uint *)(param_2 + 0x14);
        cVar1 = *(char *)(param_2 + 0x24);
        *param_1 = 0;
        param_1[1] = local_2f;
        *(char *)(param_2 + 0x24) = cVar1 + '\x01';
        if (uVar3 <= uVar6) goto LAB_0122a058;
        goto LAB_0122a030;
      }
      local_24 = local_2c;
    }
    iVar5 = FUN_01966f00(local_24,param_2);
    goto LAB_01229fa4;
  }
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar3 == uVar6) {
LAB_01229e7c:
    local_28 = 3;
LAB_01229e80:
    iVar5 = FUN_01964674(param_2,&local_28);
LAB_01229fa4:
    *(int *)(param_1 + 4) = iVar5;
    *param_1 = 1;
    *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
    return;
  }
  goto LAB_01229e54;
  while( true ) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar3 == uVar6) break;
LAB_0122a030:
    uVar8 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
    uVar7 = uVar8 - 9;
    if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
      if (uVar8 == 0x7d) {
        *(uint *)(param_2 + 0x14) = uVar6 + 1;
LAB_0122a0a0:
        uVar2 = 0;
        goto LAB_0122a0a4;
      }
      local_28 = 10;
      goto LAB_0122a05c;
    }
  }
LAB_0122a058:
  local_28 = 3;
LAB_0122a05c:
  uVar4 = FUN_01965294(param_2,&local_28);
  *(undefined4 *)(param_1 + 4) = uVar4;
LAB_01229f24:
  uVar2 = 1;
LAB_0122a0a4:
  *param_1 = uVar2;
  return;
}

