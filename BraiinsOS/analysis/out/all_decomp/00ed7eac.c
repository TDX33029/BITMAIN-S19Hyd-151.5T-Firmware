// FUN_00ed7eac @ 00ed7eac size=1076 calls_out=9 calls_in=1
// strings: unknown | unknown | stock | stock

void FUN_00ed7eac(undefined1 *param_1,int param_2)

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
  undefined4 uStack_30;
  int local_2c;
  undefined1 uStack_25;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < uVar2) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 == 0x22) {
          if (uVar2 <= uVar6) goto LAB_00ed7fe8;
          goto LAB_00ed7fc0;
        }
        if (uVar7 != 0x7b) {
          local_34 = 10;
          goto LAB_00ed7f08;
        }
        cVar5 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar5;
        if (cVar5 == '\0') {
          local_34 = 0x18;
          goto LAB_00ed7f08;
        }
        uVar6 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar6;
        if (uVar2 <= uVar6) goto LAB_00ed7f94;
        piVar8 = (int *)(param_2 + 0xc);
        goto LAB_00ed7f6c;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
    } while (uVar2 != uVar6);
  }
  local_34 = 5;
LAB_00ed7f08:
  uVar3 = FUN_008f9984(param_2,&local_34);
  *(undefined4 *)(param_1 + 4) = uVar3;
  *param_1 = 1;
  return;
LAB_00ed7f6c:
  uVar7 = *(byte *)(*piVar8 + uVar6) - 9;
  if (0x19 < uVar7) {
LAB_00ed8268:
    if (*(byte *)(*piVar8 + uVar6) == 0x7d) {
      local_34 = 10;
    }
    else {
      local_34 = 0x11;
    }
    goto LAB_00ed7f98;
  }
  if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) {
    if (uVar7 != 0x19) goto LAB_00ed8268;
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar6 + 1;
    FUN_0157e384(&local_34,piVar8,param_2);
    if (local_34 != 2) {
      if (local_2c == 5) {
        iVar4 = thunk_FUN_016dd50a(uStack_30,"stock",5);
        uVar1 = 1;
LAB_00ed812c:
        if (iVar4 == 0) {
          iVar4 = FUN_01114eb4(param_2);
          if ((iVar4 != 0) || (iVar4 = FUN_005e6f58(param_2), iVar4 != 0)) goto LAB_00ed8154;
          uVar2 = *(uint *)(param_2 + 0x10);
          uVar6 = *(uint *)(param_2 + 0x14);
          cVar5 = *(char *)(param_2 + 0x24);
          param_1[1] = uVar1;
          *(char *)(param_2 + 0x24) = cVar5 + '\x01';
          if (uVar2 <= uVar6) goto LAB_00ed8220;
          goto LAB_00ed81f8;
        }
      }
      else {
        if (local_2c == 7) {
          iVar4 = thunk_FUN_016dd50a(uStack_30,"unknown",7);
          uVar1 = 0;
          goto LAB_00ed812c;
        }
        if (local_2c == 3) {
          iVar4 = thunk_FUN_016dd50a(uStack_30,"bos",3);
          uVar1 = 2;
          goto LAB_00ed812c;
        }
      }
      uStack_30 = FUN_00e9488c(uStack_30,local_2c);
    }
    iVar4 = FUN_00e959bc(uStack_30,param_2);
    goto LAB_00ed8154;
  }
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) {
LAB_00ed7f94:
    local_34 = 3;
LAB_00ed7f98:
    iVar4 = FUN_008f9984(param_2,&local_34);
LAB_00ed8154:
    *(int *)(param_1 + 4) = iVar4;
    *param_1 = 1;
    *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
    return;
  }
  goto LAB_00ed7f6c;
LAB_00ed81f8:
  uVar7 = *(byte *)(*piVar8 + uVar6) - 9;
  if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
    if (*(byte *)(*piVar8 + uVar6) == 0x7d) {
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      *param_1 = 0;
      return;
    }
    local_34 = 10;
    goto LAB_00ed8224;
  }
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) {
LAB_00ed8220:
    local_34 = 3;
LAB_00ed8224:
    uVar3 = FUN_005b8c9c(param_2,&local_34);
    *(undefined4 *)(param_1 + 4) = uVar3;
    *param_1 = 1;
    return;
  }
  goto LAB_00ed81f8;
LAB_00ed7fc0:
  do {
    uVar7 = *(byte *)(*(int *)(param_2 + 0xc) + uVar6) - 9;
    if (0x19 < uVar7) {
LAB_00ed8288:
      uVar3 = FUN_005b8238(param_2,&uStack_25,&DAT_018568b8);
LAB_00ed82cc:
      uStack_30 = FUN_00e959bc(uVar3,param_2);
      goto LAB_00ed8034;
    }
    if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) {
      if (uVar7 != 0x19) goto LAB_00ed8288;
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      FUN_0157e384(&local_34,(int *)(param_2 + 0xc),param_2);
      if (local_34 != 2) {
        if (local_2c == 5) {
          iVar4 = thunk_FUN_016dd50a(uStack_30,"stock",5);
          if (iVar4 == 0) {
            uVar1 = 1;
LAB_00ed81c0:
            param_1[1] = uVar1;
            *param_1 = 0;
            return;
          }
        }
        else if (local_2c == 7) {
          iVar4 = thunk_FUN_016dd50a(uStack_30,"unknown",7);
          if (iVar4 == 0) {
            param_1[1] = 0;
            *param_1 = 0;
            return;
          }
        }
        else if ((local_2c == 3) && (iVar4 = thunk_FUN_016dd50a(uStack_30,"bos",3), iVar4 == 0)) {
          uVar1 = 2;
          goto LAB_00ed81c0;
        }
        uVar3 = FUN_00e9488c(uStack_30,local_2c);
        goto LAB_00ed82cc;
      }
      goto LAB_00ed8034;
    }
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
  } while (uVar2 != uVar6);
LAB_00ed7fe8:
  local_34 = 5;
  uStack_30 = FUN_008f9984(param_2,&local_34);
LAB_00ed8034:
  *(undefined4 *)(param_1 + 4) = uStack_30;
  *param_1 = 1;
  return;
}

