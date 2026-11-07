// FUN_00ccf4d0 @ 00ccf4d0 size=652 calls_out=10 calls_in=1
// strings: 

void FUN_00ccf4d0(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined8 uVar12;
  uint local_50;
  uint local_4c;
  uint local_48;
  char local_40 [28];
  
  if (*param_2 != '\x04') {
    uVar9 = FUN_00f36124(param_2,local_40,&DAT_01873d88);
    *param_1 = 0x80000000;
    param_1[1] = uVar9;
    FUN_00c01f94(param_2);
    return;
  }
  iVar8 = *(int *)(param_2 + 4);
  iVar11 = 0;
  pcVar1 = *(char **)(param_2 + 8);
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar9 = uVar6;
  if (0x3ffff < uVar6) {
    uVar9 = 0x40000;
  }
  pcVar2 = pcVar1 + uVar6 * 0x18;
  if (uVar6 == 0) {
    uVar3 = 4;
    uVar9 = 0;
  }
  else {
    uVar3 = thunk_FUN_016d4a50(uVar9 << 2);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar9 << 2);
    }
  }
  local_48 = 0;
  pcVar4 = pcVar1;
  local_50 = uVar9;
  local_4c = uVar3;
  for (; uVar9 = local_48, uVar6 * 0x18 != iVar11; iVar11 = iVar11 + 0x18) {
    if (*pcVar4 == '\x06') {
      pcVar4 = pcVar1 + iVar11 + 0x18;
      goto LAB_00ccf67c;
    }
    local_40[0] = *pcVar4;
    FUN_016dd1aa((uint)local_40 | 1,pcVar4 + 1,0x17);
    uVar12 = FUN_00c64c8c(local_40);
    uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
    uVar5 = (int)uVar12 + 1;
    pcVar10 = pcVar1 + iVar11 + 0x18;
    if (uVar5 == 2) {
      *param_1 = 0x80000000;
      param_1[1] = uVar7;
      if (local_50 != 0) {
        thunk_FUN_016d3fb4(local_4c);
      }
      goto LAB_00ccf6b0;
    }
    if ((uVar5 & 1) == 0) {
      pcVar4 = pcVar10;
      goto LAB_00ccf67c;
    }
    if (uVar9 == local_50) {
      FUN_00fbbfac(&local_50);
      uVar3 = local_4c;
    }
    *(uint *)(uVar3 + uVar9 * 4) = uVar7;
    local_48 = uVar9 + 1;
    pcVar4 = pcVar4 + 0x18;
  }
  pcVar4 = pcVar2;
LAB_00ccf67c:
  uVar9 = local_50;
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  if (local_50 != 0x80000000) {
    pcVar10 = pcVar2;
    if (pcVar2 == pcVar4) goto LAB_00ccf6b0;
    uVar3 = param_1[1];
    uVar6 = FUN_00f2c2f0(uVar6,&DAT_0188738c,&DAT_018ab990);
    *param_1 = 0x80000000;
    param_1[1] = uVar6;
    if (uVar9 != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
  }
  pcVar10 = pcVar4;
LAB_00ccf6b0:
  FUN_00ce0380(pcVar10,((uint)((int)pcVar2 - (int)pcVar10) >> 3) * -0x55555555);
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(pcVar1);
  }
  return;
}

