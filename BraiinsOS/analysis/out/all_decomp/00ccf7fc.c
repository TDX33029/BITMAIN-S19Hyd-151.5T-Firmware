// FUN_00ccf7fc @ 00ccf7fc size=616 calls_out=10 calls_in=1
// strings: 

void FUN_00ccf7fc(uint *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint local_50;
  uint local_4c;
  uint local_48;
  char local_40 [28];
  
  if (*param_2 != '\x04') {
    uVar9 = FUN_00f36124(param_2,local_40,&DAT_01873dc8);
    *param_1 = 0x80000000;
    param_1[1] = uVar9;
    FUN_00c01f94(param_2);
    return;
  }
  iVar8 = *(int *)(param_2 + 4);
  iVar10 = 0;
  pcVar2 = *(char **)(param_2 + 8);
  uVar7 = *(uint *)(param_2 + 0xc);
  uVar9 = uVar7;
  if (0x3ffff < uVar7) {
    uVar9 = 0x40000;
  }
  pcVar3 = pcVar2 + uVar7 * 0x18;
  if (uVar7 == 0) {
    uVar4 = 4;
    uVar9 = 0;
  }
  else {
    uVar4 = thunk_FUN_016d4a50(uVar9 << 2);
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar9 << 2);
    }
  }
  local_48 = 0;
  pcVar5 = pcVar2;
  local_50 = uVar9;
  local_4c = uVar4;
  for (; uVar1 = local_48, uVar9 = local_50, uVar7 * 0x18 != iVar10; iVar10 = iVar10 + 0x18) {
    if (*pcVar5 == '\x06') {
      pcVar5 = pcVar2 + iVar10 + 0x18;
      goto LAB_00ccf94c;
    }
    local_40[0] = *pcVar5;
    FUN_016dd1aa((uint)local_40 | 1,pcVar5 + 1,0x17);
    uVar11 = FUN_00c64b70(local_40);
    uVar9 = (uint)(uVar11 >> 0x20);
    if ((uVar11 & 1) != 0) {
      *param_1 = 0x80000000;
      param_1[1] = uVar9;
      if (local_50 != 0) {
        thunk_FUN_016d3fb4(local_4c);
      }
      pcVar6 = pcVar2 + iVar10 + 0x18;
      goto LAB_00ccf9f8;
    }
    if (uVar1 == local_50) {
      FUN_009b6bc0(&local_50);
      uVar4 = local_4c;
    }
    *(uint *)(uVar4 + uVar1 * 4) = uVar9;
    local_48 = uVar1 + 1;
    pcVar5 = pcVar5 + 0x18;
  }
  pcVar5 = pcVar3;
LAB_00ccf94c:
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  if (local_50 != 0x80000000) {
    pcVar6 = pcVar3;
    if (pcVar3 == pcVar5) goto LAB_00ccf9f8;
    uVar4 = param_1[1];
    uVar7 = FUN_00f2c2f0(uVar7,&DAT_0188738c,&DAT_018ab990);
    *param_1 = 0x80000000;
    param_1[1] = uVar7;
    if (uVar9 != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
  }
  pcVar6 = pcVar5;
LAB_00ccf9f8:
  FUN_00ce0380(pcVar6,((uint)((int)pcVar3 - (int)pcVar6) >> 3) * -0x55555555);
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(pcVar2);
  }
  return;
}

