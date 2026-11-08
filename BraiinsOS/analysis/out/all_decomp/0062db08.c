// FUN_0062db08 @ 0062db08 size=708 calls_out=6 calls_in=2
// strings: /usr/lib/debug | /usr/lib/debug/.build-id/

void FUN_0062db08(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_3 < 2) {
LAB_0062db84:
    *param_1 = 0x80000000;
    return;
  }
  if (DAT_018db764 == '\0') {
    iVar4 = FUN_015c7df0("/usr/lib/debug",0xe);
    DAT_018db764 = '\x02';
    if (iVar4 != 0) {
      DAT_018db764 = '\x01';
    }
  }
  if (DAT_018db764 != '\x01') goto LAB_0062db84;
  local_30 = param_3 * 2 + 0x20;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_30);
  }
  if (local_30 == 0) {
    local_2c = 1;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(local_30);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_30);
    }
    local_28 = 0;
    if (0x18 < local_30) goto LAB_0062dc04;
  }
  local_28 = 0;
  FUN_0061d240(&local_30,0,0x19,1,1);
LAB_0062dc04:
  uVar1 = local_28;
  uVar7 = local_2c;
  uVar5 = local_30;
  FUN_016dd1aa(local_2c + local_28,"/usr/lib/debug/.build-id/",0x19);
  bVar2 = *param_2;
  uVar8 = uVar1 + 0x19;
  bVar6 = (bVar2 >> 4) + 0x57;
  if (bVar2 < 0xa0) {
    bVar6 = bVar2 >> 4 | 0x30;
  }
  if (uVar8 == uVar5) {
    local_28 = uVar8;
    FUN_006029c0(&local_30);
    uVar7 = local_2c;
  }
  bVar2 = bVar2 & 0xf;
  *(byte *)(uVar7 + uVar8) = bVar6;
  bVar6 = bVar2 + 0x57;
  uVar5 = uVar1 + 0x1a;
  if (bVar2 < 10) {
    bVar6 = bVar2 | 0x30;
  }
  if (uVar5 == local_30) {
    local_28 = uVar5;
    FUN_006029c0(&local_30);
  }
  *(byte *)(local_2c + uVar5) = bVar6;
  uVar5 = uVar1 + 0x1b;
  if (uVar5 == local_30) {
    local_28 = uVar5;
    FUN_006029c0(&local_30);
  }
  iVar4 = param_3 - 1;
  *(undefined1 *)(local_2c + uVar5) = 0x2f;
  local_28 = uVar1 + 0x1c;
  do {
    iVar3 = uVar1;
    param_2 = param_2 + 1;
    bVar2 = *param_2;
    bVar6 = (bVar2 >> 4) + 0x57;
    if (bVar2 < 0xa0) {
      bVar6 = bVar2 >> 4 | 0x30;
    }
    if (iVar3 + 0x1cU == local_30) {
      FUN_006029c0(&local_30);
    }
    local_28 = iVar3 + 0x1d;
    *(byte *)(local_2c + iVar3 + 0x1c) = bVar6;
    bVar2 = bVar2 & 0xf;
    bVar6 = bVar2 + 0x57;
    if (bVar2 < 10) {
      bVar6 = bVar2 | 0x30;
    }
    if (local_28 == local_30) {
      FUN_006029c0(&local_30);
    }
    iVar4 = iVar4 + -1;
    *(byte *)(local_2c + iVar3 + 0x1d) = bVar6;
    uVar1 = iVar3 + 2;
    local_28 = iVar3 + 0x1e;
  } while (iVar4 != 0);
  local_28 = iVar3 + 0x1e;
  if (local_30 - local_28 < 6) {
    iVar4 = local_28;
    local_28 = iVar3 + 0x1e;
    FUN_0061d240(&local_30,iVar4,6,1,1);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28 + 6;
  *(undefined4 *)(local_2c + local_28) = 0x6265642e;
  *(undefined2 *)((undefined4 *)(local_2c + local_28) + 1) = 0x6775;
  return;
}

