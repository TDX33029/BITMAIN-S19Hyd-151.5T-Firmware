// FUN_0169e7e8 @ 0169e7e8 size=620 calls_out=6 calls_in=8
// strings: invalid match span

void FUN_0169e7e8(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined1 local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  iVar2 = *(int *)(param_2 + 0x278);
  bVar3 = 0;
  if (*(char *)(iVar2 + 0x15a) == '\x01') {
    bVar3 = *(byte *)(iVar2 + 0x15b);
  }
  FUN_016845b8(&local_60,param_2,param_3,param_4);
  if (local_60 == 2) goto LAB_0169e838;
  if ((local_60 & 1) == 0) {
LAB_0169e9d8:
    *param_1 = 0;
    return;
  }
  pcVar4 = (code *)local_5c;
  puVar5 = (uint *)local_58;
  if ((bVar3 & 1) == 0) {
LAB_0169e85c:
    uVar1 = param_4[4];
    if ((uint *)uVar1 == puVar5) {
      *param_1 = 1;
      param_1[1] = puVar5;
LAB_0169e8a4:
      param_1[2] = puVar5;
      param_1[3] = pcVar4;
      return;
    }
    if ((*param_4 != 0) || (*(int *)(iVar2 + 0x128) == *(int *)(iVar2 + 300))) {
      if (uVar1 <= puVar5) {
        param_1[1] = uVar1;
        *param_1 = 1;
        goto LAB_0169e8a4;
      }
LAB_0169e9e8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
    }
    local_58 = param_4[2];
    local_54 = param_4[3];
    bVar7 = (int)puVar5 + 1U <= uVar1;
    bVar6 = uVar1 == (int)puVar5 + 1U;
    if (!bVar7 || bVar6) {
      bVar7 = local_54 <= puVar5;
      bVar6 = puVar5 == (uint *)local_54;
    }
    local_44 = uVar1;
    if (bVar7 && !bVar6) {
      local_2c = &local_38;
      local_34 = &local_44;
      local_28 = FUN_012fd02c;
      local_30 = FUN_0065fd28;
      local_38 = local_54;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
    }
    local_60 = 1;
    bVar3 = 0;
    local_48 = 0;
    if (*(char *)(*(int *)(param_2 + 0x500) + 0x15a) == '\x01') {
      bVar3 = *(byte *)(*(int *)(param_2 + 0x500) + 0x15b);
    }
    local_50 = uVar1;
    local_40 = (uint)puVar5;
    FUN_016834b8(&local_34,param_2 + 0x288,param_3 + 0xc0,&local_60);
    if (local_34 != (uint *)0x2) {
      if (((uint)local_34 & 1) == 0) {
LAB_0169ea3c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004ce38b,0x30,&DAT_01d08174);
      }
      if ((bVar3 & 1) != 0) {
        FUN_01687260(&local_44,&local_60,local_30,local_2c,local_2c,param_2 + 0x288,param_3 + 0xc0);
        if (local_44 == 2) {
          local_5c = local_40;
          goto LAB_0169e838;
        }
        if ((local_44 & 1) == 0) goto LAB_0169ea3c;
        local_2c = (uint *)local_3c;
      }
      if (local_2c <= puVar5) {
        *param_1 = 1;
        param_1[1] = local_2c;
        goto LAB_0169e8a4;
      }
      goto LAB_0169e9e8;
    }
  }
  else {
    FUN_01686d30(&local_34,param_4,local_5c,local_58,local_58,param_2,param_3);
    if (local_34 != (uint *)0x2) {
      if (((uint)local_34 & 1) == 0) goto LAB_0169e9d8;
      pcVar4 = local_30;
      puVar5 = local_2c;
      goto LAB_0169e85c;
    }
  }
  local_5c = (uint)local_30;
LAB_0169e838:
  *param_1 = 2;
  param_1[1] = local_5c;
  return;
}

