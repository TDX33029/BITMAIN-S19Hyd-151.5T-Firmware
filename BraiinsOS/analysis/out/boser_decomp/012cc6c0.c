// FUN_012cc6c0 @ 012cc6c0 size=852 calls_out=8 calls_in=1
// strings: 

void FUN_012cc6c0(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char local_38;
  char local_37;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < uVar2) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 == 0x22) {
          if (uVar2 <= uVar6) goto LAB_012cc7f8;
          goto LAB_012cc7d0;
        }
        if (uVar7 != 0x7b) {
          local_30 = 10;
          goto LAB_012cc71c;
        }
        cVar5 = *(char *)(param_2 + 0x1c) + -1;
        *(char *)(param_2 + 0x1c) = cVar5;
        if (cVar5 == '\0') {
          local_30 = 0x18;
          goto LAB_012cc71c;
        }
        uVar6 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar6;
        if (uVar2 <= uVar6) goto LAB_012cc7a4;
        piVar9 = (int *)(param_2 + 0xc);
        goto LAB_012cc77c;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
    } while (uVar2 != uVar6);
  }
  local_30 = 5;
LAB_012cc71c:
  uVar3 = FUN_012c6b30(param_2,&local_30);
  *(undefined4 *)(param_1 + 4) = uVar3;
  *param_1 = 1;
  return;
  while( true ) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar2 == uVar6) break;
LAB_012cc7d0:
    uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
    uVar8 = uVar7 - 9;
    if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) {
      if (uVar7 == 0x22) {
        *(undefined4 *)(param_2 + 8) = 0;
        *(uint *)(param_2 + 0x14) = uVar6 + 1;
        FUN_01968828(&local_30,(int *)(param_2 + 0xc),param_2);
        if (local_30 == 2) goto LAB_012cc8d8;
        FUN_012cca18(&local_38,local_2c,local_28);
        if (local_38 != '\x01') {
          if (local_37 != '\0') {
            param_1[1] = 1;
            goto LAB_012cc9a0;
          }
          uVar1 = 0;
          param_1[1] = 0;
          goto LAB_012cc9a4;
        }
      }
      else {
        local_34 = FUN_012c7788(param_2,&uStack_21,&DAT_01ce2c3c);
      }
      local_2c = FUN_0127dee8(local_34,param_2);
      goto LAB_012cc8d8;
    }
  }
LAB_012cc7f8:
  local_30 = 5;
  local_2c = FUN_012c6b30(param_2,&local_30);
LAB_012cc8d8:
  *(undefined4 *)(param_1 + 4) = local_2c;
  goto LAB_012cc8dc;
LAB_012cc77c:
  uVar7 = *(byte *)(*piVar9 + uVar6) - 9;
  if (0x19 < uVar7) {
LAB_012cc9b0:
    if (*(byte *)(*piVar9 + uVar6) == 0x7d) {
      local_30 = 10;
    }
    else {
      local_30 = 0x11;
    }
    goto LAB_012cc7a8;
  }
  if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) {
    if (uVar7 != 0x19) goto LAB_012cc9b0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar6 + 1;
    FUN_01968828(&local_30,piVar9,param_2);
    if (local_30 != 2) {
      FUN_012cca18(&local_38,local_2c,local_28);
      if (local_38 != '\x01') {
        iVar4 = FUN_0167459c(param_2);
        if ((iVar4 != 0) || (iVar4 = FUN_012c7c10(param_2), iVar4 != 0)) goto LAB_012cc888;
        uVar2 = *(uint *)(param_2 + 0x10);
        uVar6 = *(uint *)(param_2 + 0x14);
        cVar5 = *(char *)(param_2 + 0x1c);
        *param_1 = 0;
        param_1[1] = local_37;
        *(char *)(param_2 + 0x1c) = cVar5 + '\x01';
        if (uVar2 <= uVar6) goto LAB_012cc974;
        goto LAB_012cc94c;
      }
      local_2c = local_34;
    }
    iVar4 = FUN_0127dee8(local_2c,param_2);
    goto LAB_012cc888;
  }
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) {
LAB_012cc7a4:
    local_30 = 3;
LAB_012cc7a8:
    iVar4 = FUN_012c6b30(param_2,&local_30);
LAB_012cc888:
    *(int *)(param_1 + 4) = iVar4;
    *param_1 = 1;
    *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
    return;
  }
  goto LAB_012cc77c;
  while( true ) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar2 == uVar6) break;
LAB_012cc94c:
    uVar7 = *(byte *)(*piVar9 + uVar6) - 9;
    if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(*piVar9 + uVar6) == 0x7d) {
        *(uint *)(param_2 + 0x14) = uVar6 + 1;
LAB_012cc9a0:
        uVar1 = 0;
        goto LAB_012cc9a4;
      }
      local_30 = 10;
      goto LAB_012cc978;
    }
  }
LAB_012cc974:
  local_30 = 3;
LAB_012cc978:
  uVar3 = FUN_012c6bfc(param_2,&local_30);
  *(undefined4 *)(param_1 + 4) = uVar3;
LAB_012cc8dc:
  uVar1 = 1;
LAB_012cc9a4:
  *param_1 = uVar1;
  return;
}

