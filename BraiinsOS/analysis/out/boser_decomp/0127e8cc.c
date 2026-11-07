// FUN_0127e8cc @ 0127e8cc size=972 calls_out=8 calls_in=1
// strings: 

void FUN_0127e8cc(undefined1 *param_1,int param_2)

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
  char local_3c;
  char local_3b;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < uVar2) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 == 0x22) {
          if (uVar2 <= uVar6) goto LAB_0127e9f4;
          goto LAB_0127e9cc;
        }
        if (uVar7 != 0x7b) {
          local_34 = 10;
          goto LAB_0127e928;
        }
        cVar5 = *(char *)(param_2 + 0x1c) + -1;
        *(char *)(param_2 + 0x1c) = cVar5;
        if (cVar5 == '\0') {
          local_34 = 0x18;
          goto LAB_0127e928;
        }
        uVar6 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar6;
        if (uVar2 <= uVar6) goto LAB_0127e9b0;
        piVar9 = (int *)(param_2 + 0xc);
        goto LAB_0127e988;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
    } while (uVar2 != uVar6);
  }
  local_34 = 5;
LAB_0127e928:
  uVar3 = FUN_012c6b30(param_2,&local_34);
  *(undefined4 *)(param_1 + 4) = uVar3;
  *param_1 = 1;
  return;
  while( true ) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar2 == uVar6) break;
LAB_0127e9cc:
    uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
    uVar8 = uVar7 - 9;
    if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) {
      if (uVar7 == 0x22) {
        *(undefined4 *)(param_2 + 8) = 0;
        *(uint *)(param_2 + 0x14) = uVar6 + 1;
        FUN_01968828(&local_34,(int *)(param_2 + 0xc),param_2);
        if (local_34 == 2) goto LAB_0127eafc;
        FUN_0127e498(&local_3c,local_30,local_2c);
        if (local_3c != '\x01') {
          if (local_3b != '\0') {
            param_1[1] = 1;
            goto LAB_0127ec0c;
          }
          uVar1 = 0;
          param_1[1] = 0;
          goto LAB_0127ec10;
        }
      }
      else {
        local_38 = FUN_012c7788(param_2,&uStack_25,&DAT_01c25820);
      }
      local_30 = FUN_0127dee8(local_38,param_2);
      goto LAB_0127eafc;
    }
  }
LAB_0127e9f4:
  local_34 = 5;
  local_30 = FUN_012c6b30(param_2,&local_34);
LAB_0127eafc:
  *(undefined4 *)(param_1 + 4) = local_30;
  goto LAB_0127eb00;
  while( true ) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar2 == uVar6) break;
LAB_0127e988:
    uVar7 = *(byte *)(*piVar9 + uVar6) - 9;
    if (0x19 < uVar7) {
LAB_0127ec1c:
      if (*(byte *)(*piVar9 + uVar6) == 0x7d) {
        local_34 = 10;
      }
      else {
        local_34 = 0x11;
      }
      goto LAB_0127eab4;
    }
    if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) {
      if (uVar7 != 0x19) goto LAB_0127ec1c;
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      FUN_01968828(&local_34,piVar9,param_2);
      if (local_34 == 2) goto LAB_0127ec8c;
      FUN_0127e498(&local_3c,local_30,local_2c);
      if (local_3c == '\x01') {
        local_30 = local_38;
        goto LAB_0127ec8c;
      }
      iVar4 = FUN_0167459c(param_2);
      if (iVar4 != 0) goto LAB_0127eb64;
      uVar2 = *(uint *)(param_2 + 0x14);
      if (*(uint *)(param_2 + 0x10) <= uVar2) goto LAB_0127eab0;
      goto LAB_0127ea88;
    }
  }
LAB_0127e9b0:
  local_34 = 3;
  goto LAB_0127eab4;
  while( true ) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar2 == uVar6) break;
LAB_0127ebb8:
    uVar7 = *(byte *)(*piVar9 + uVar6) - 9;
    if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(*piVar9 + uVar6) == 0x7d) {
        *(uint *)(param_2 + 0x14) = uVar6 + 1;
LAB_0127ec0c:
        uVar1 = 0;
        goto LAB_0127ec10;
      }
      local_34 = 10;
      goto LAB_0127ebe4;
    }
  }
LAB_0127ebe0:
  local_34 = 3;
LAB_0127ebe4:
  uVar3 = FUN_012c6bfc(param_2,&local_34);
  *(undefined4 *)(param_1 + 4) = uVar3;
LAB_0127eb00:
  uVar1 = 1;
LAB_0127ec10:
  *param_1 = uVar1;
  return;
  while( true ) {
    uVar2 = uVar2 + 1;
    *(uint *)(param_2 + 0x14) = uVar2;
    if (*(uint *)(param_2 + 0x10) == uVar2) break;
LAB_0127ea88:
    uVar6 = *(byte *)(*piVar9 + uVar2) - 9;
    if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(*piVar9 + uVar2) != 0x6e) {
        local_30 = FUN_012c7788(param_2,&uStack_25,&DAT_01cf9cd4);
LAB_0127ec8c:
        iVar4 = FUN_0127dee8(local_30,param_2);
        goto LAB_0127eb64;
      }
      *(uint *)(param_2 + 0x14) = uVar2 + 1;
      iVar4 = FUN_012c6b8c(param_2,"ull",3);
      if (iVar4 != 0) goto LAB_0127eb64;
      uVar2 = *(uint *)(param_2 + 0x10);
      uVar6 = *(uint *)(param_2 + 0x14);
      cVar5 = *(char *)(param_2 + 0x1c);
      *param_1 = 0;
      param_1[1] = local_3b;
      *(char *)(param_2 + 0x1c) = cVar5 + '\x01';
      if (uVar2 <= uVar6) goto LAB_0127ebe0;
      goto LAB_0127ebb8;
    }
  }
LAB_0127eab0:
  local_34 = 5;
LAB_0127eab4:
  iVar4 = FUN_012c6b30(param_2,&local_34);
LAB_0127eb64:
  *(int *)(param_1 + 4) = iVar4;
  *param_1 = 1;
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  return;
}

