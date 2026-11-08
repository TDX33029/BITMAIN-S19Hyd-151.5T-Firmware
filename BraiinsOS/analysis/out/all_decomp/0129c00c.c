// FUN_0129c00c @ 0129c00c size=832 calls_out=10 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_0129c00c(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_60;
  undefined4 local_5c;
  undefined1 *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30;
  uint local_2c;
  
  iVar5 = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar2 = *(uint *)(param_2 + 8);
    iVar5 = 1;
    if (0x7f < uVar2) {
      iVar5 = 2;
      if (0x3fff < uVar2) {
        iVar5 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar5 = 5, uVar2 < 0x10000000)) {
        iVar5 = 4;
      }
    }
    iVar5 = uVar2 + iVar5 + 1;
  }
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    uVar2 = *(uint *)(param_2 + 0x18);
    iVar4 = 1;
    if (0x7f < uVar2) {
      iVar4 = 2;
      if (0x3fff < uVar2) {
        iVar4 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar4 = 5, uVar2 < 0x10000000)) {
        iVar4 = 4;
      }
    }
    iVar5 = uVar2 + iVar4 + iVar5 + 1;
  }
  iVar4 = FUN_01337c54(*(undefined4 *)(param_2 + 0x20));
  uVar2 = iVar4 + iVar5;
  *(uint *)(param_2 + 0x24) = uVar2;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar2);
  }
  if (uVar2 == 0) {
    puVar3 = &DAT_00000001;
    uVar6 = 0;
  }
  else {
    puVar3 = (undefined1 *)thunk_FUN_016d4a50(uVar2);
    uVar6 = uVar2;
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar2);
    }
  }
  local_44 = 0;
  local_60 = 0x80000001;
  local_4c = puVar3;
  local_48 = uVar2;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 8);
    if (uVar2 < 5) {
      local_30 = 10;
      local_2c = local_2c & 0xffffff00;
      FUN_01328914(&local_40,&local_60,&local_30,1);
      if (local_40 != 4) goto LAB_0129c2a8;
    }
    else {
      *puVar3 = 10;
      local_44 = 1;
    }
    FUN_01328ef8(&local_40,&local_60,uVar7);
    if ((local_40 != 4) || (FUN_01328914(&local_40,&local_60,uVar8,uVar7), local_40 != 4))
    goto LAB_0129c2a8;
  }
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    uVar8 = *(undefined4 *)(param_2 + 0x14);
    uVar7 = *(undefined4 *)(param_2 + 0x18);
    if (local_48 - local_44 < 5) {
      local_30 = 0x12;
      local_2c = local_2c & 0xffffff00;
      FUN_01328914(&local_40,&local_60,&local_30,1);
      if (local_40 != 4) goto LAB_0129c2a8;
    }
    else {
      if (local_48 < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_44,local_48,local_48,&DAT_0188fa90);
      }
      local_4c[local_44] = 0x12;
      local_44 = local_44 + 1;
    }
    FUN_01328ef8(&local_40,&local_60,uVar7);
    if ((local_40 != 4) || (FUN_01328914(&local_40,&local_60,uVar8,uVar7), local_40 != 4))
    goto LAB_0129c2a8;
  }
  FUN_01328b10(&local_40,&local_60,*(undefined4 *)(param_2 + 0x20));
  if (local_40 == 4) {
    if (local_60 < 0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_2c = 0;
    local_30 = local_48;
    local_3c = 0;
    local_40 = local_44;
    if (local_48 != local_44) {
      FUN_00faf26c(&local_30,&local_40,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x129c34c);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = uVar6;
    param_1[2] = puVar3;
    param_1[3] = uVar2;
    return;
  }
LAB_0129c2a8:
  *param_1 = 1;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[3] = local_38;
  if (0 < (int)local_60) {
    thunk_FUN_016d3fb4(local_5c);
  }
  if (uVar6 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(puVar3);
  return;
}

