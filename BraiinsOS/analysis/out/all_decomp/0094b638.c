// FUN_0094b638 @ 0094b638 size=1036 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0094b638(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_50;
  undefined1 local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  int local_30;
  undefined1 local_2c;
  undefined1 uStack_25;
  
  uVar7 = *(uint *)(param_2 + 0x14);
  if (uVar7 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar9 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar7);
      uVar8 = uVar9 - 9;
      if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) {
        if (uVar9 != 0x5b) {
          iVar4 = FUN_005b8238(param_2,&uStack_25,&DAT_01867438);
          goto LAB_0094b978;
        }
        cVar3 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar3;
        if (cVar3 == '\0') {
          local_3c = 0x18;
          goto LAB_0094b690;
        }
        *(uint *)(param_2 + 0x14) = uVar7 + 1;
        iVar4 = 2;
        local_4c = 1;
        local_40 = 0;
        local_44 = 2;
        local_48 = 0;
        local_50 = param_2;
        goto LAB_0094b71c;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(param_2 + 0x14) = uVar7;
    } while (*(uint *)(param_2 + 0x10) != uVar7);
  }
  local_3c = 5;
LAB_0094b690:
  iVar4 = FUN_008f9984(param_2,&local_3c);
  goto LAB_0094b980;
LAB_0094b71c:
  iVar2 = local_40;
  FUN_005e5d80(&local_3c,&local_50);
  iVar10 = local_50;
  if ((char)local_3c == '\x01') goto LAB_0094b8f0;
  if (local_3c._1_1_ != '\x01') {
    iVar10 = local_48;
    goto LAB_0094b920;
  }
  uVar7 = *(uint *)(local_50 + 0x14);
  if (*(uint *)(local_50 + 0x10) <= uVar7) {
LAB_0094b8dc:
    local_3c = 5;
    local_38 = FUN_008f9984(local_50,&local_3c);
    goto LAB_0094b8f0;
  }
  while( true ) {
    uVar8 = (uint)*(byte *)(*(int *)(local_50 + 0xc) + uVar7);
    uVar9 = uVar8 - 9;
    if ((0x17 < uVar9) || ((1 << (uVar9 & 0xff) & 0x800013U) == 0)) break;
    uVar7 = uVar7 + 1;
    *(uint *)(local_50 + 0x14) = uVar7;
    if (*(uint *)(local_50 + 0x10) == uVar7) goto LAB_0094b8dc;
  }
  if (uVar8 != 0x5b) {
    uVar7 = FUN_005b8238(local_50,&uStack_25,&DAT_01867398);
LAB_0094b9a0:
    local_38 = FUN_00e959bc(uVar7,iVar10);
    goto LAB_0094b8f0;
  }
  cVar3 = *(char *)(local_50 + 0x24) + -1;
  *(char *)(local_50 + 0x24) = cVar3;
  if (cVar3 == '\0') {
    local_3c = 0x18;
    local_38 = FUN_008f9984(local_50,&local_3c);
    goto LAB_0094b8f0;
  }
  *(uint *)(local_50 + 0x14) = uVar7 + 1;
  local_2c = 1;
  local_30 = local_50;
  FUN_005e5d80(&local_3c,&local_30);
  if ((char)local_3c == '\x01') goto LAB_0094b7cc;
  if (local_3c._1_1_ == '\x01') {
    FUN_008fb168(&local_3c,local_30);
    uVar9 = local_3c;
    if ((short)local_3c == 1) {
LAB_0094b7cc:
      uVar8 = local_38;
      goto LAB_0094b860;
    }
    FUN_005e5d80(&local_3c,&local_30);
    if ((char)local_3c == '\x01') goto LAB_0094b7cc;
    if (local_3c._1_1_ != '\x01') {
      uVar8 = FUN_00f2c2f0(1,&uStack_25,&DAT_01867398);
      goto LAB_0094b860;
    }
    FUN_008fb168(&local_3c,local_30);
    if ((short)local_3c == 1) goto LAB_0094b7cc;
    uVar8 = local_3c >> 0x10;
    uVar9 = uVar9 & 0xffff0000;
    bVar1 = false;
  }
  else {
    uVar8 = FUN_00f2c2f0(0,&uStack_25,&DAT_01867398);
LAB_0094b860:
    uVar9 = 0;
    bVar1 = true;
  }
  *(char *)(iVar10 + 0x24) = *(char *)(iVar10 + 0x24) + '\x01';
  uVar5 = FUN_008fad50(iVar10);
  if (bVar1) {
    uVar7 = uVar8;
    if (uVar5 != 0) {
      FUN_005c3974(uVar5);
      thunk_FUN_016d3fb4(uVar5);
    }
    goto LAB_0094b9a0;
  }
  uVar7 = uVar5;
  if (uVar5 != 0) goto LAB_0094b9a0;
  if (iVar2 == local_48) {
    FUN_00933400(&local_48);
    iVar4 = local_44;
  }
  *(uint *)(iVar4 + iVar2 * 4) = uVar8 << 0x10 | uVar9 >> 0x10;
  local_40 = iVar2 + 1;
  goto LAB_0094b71c;
LAB_0094b8f0:
  iVar4 = (local_38 & 0xffff) + (local_38 & 0xffff0000);
  iVar10 = -0x80000000;
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
LAB_0094b920:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  iVar6 = FUN_008fad50();
  if (iVar10 == -0x80000000) {
    if (iVar6 == 0) {
      iVar6 = iVar4;
      goto LAB_0094b970;
    }
    FUN_005c3974();
    thunk_FUN_016d3fb4(iVar6);
  }
  else {
    if (iVar6 == 0) {
      *param_1 = iVar10;
      param_1[1] = iVar4;
      param_1[2] = iVar2;
      return;
    }
    if (iVar10 != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
LAB_0094b970:
    iVar4 = iVar6;
  }
LAB_0094b978:
  iVar4 = FUN_00e959bc(iVar4,param_2);
LAB_0094b980:
  *param_1 = -0x80000000;
  param_1[1] = iVar4;
  return;
}

