// FUN_0169e238 @ 0169e238 size=640 calls_out=8 calls_in=8
// strings: invalid match span

void FUN_0169e238(undefined4 *param_1,int param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined1 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  code *local_2c;
  uint *local_28;
  code *local_24;
  
  cVar1 = *(char *)(param_2 + 0x2b4);
  cVar2 = *(char *)(param_2 + 0x2b5);
  FUN_0167efb0(&local_5c);
  if (local_5c == (uint *)0x2) {
LAB_0169e26c:
    *param_1 = 2;
    param_1[1] = local_58;
    return;
  }
  puVar6 = (uint *)local_54;
  pcVar7 = (code *)local_58;
  if ((((uint)local_5c & 1) != 0) && (cVar1 != '\0' && cVar2 != '\0')) {
    FUN_01686b80(&local_30,param_3,local_58,local_54,local_54,param_2);
    if (local_30 == (uint *)0x2) {
      local_58 = (uint)local_2c;
      goto LAB_0169e26c;
    }
    local_5c = local_30;
    puVar6 = local_28;
    pcVar7 = local_2c;
  }
  if (((uint)local_5c & 1) == 0) {
    *param_1 = 0;
    return;
  }
  local_4c = param_3[4];
  if ((uint *)local_4c == puVar6) {
    *param_1 = 1;
    param_1[1] = puVar6;
  }
  else {
    uVar5 = *param_3;
    bVar8 = uVar5 == 0;
    if (bVar8) {
      uVar5 = (uint)*(byte *)(param_2 + 0x2b6);
    }
    if (bVar8 && (uVar5 & 1) == 0) {
      local_54 = param_3[2];
      local_50 = param_3[3];
      bVar9 = (int)puVar6 + 1U <= local_4c;
      bVar8 = local_4c == (int)puVar6 + 1U;
      if (!bVar9 || bVar8) {
        bVar9 = local_50 <= puVar6;
        bVar8 = puVar6 == (uint *)local_50;
      }
      local_40 = local_4c;
      if (bVar9 && !bVar8) {
        local_28 = &local_34;
        local_30 = &local_40;
        local_24 = FUN_012fd02c;
        local_2c = FUN_0065fd28;
        local_34 = local_50;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005a4e9e,&local_30,&DAT_01d08154);
      }
      local_5c = (uint *)0x1;
      local_44 = 0;
      bVar3 = *(byte *)(param_2 + 0x56c);
      bVar4 = *(byte *)(param_2 + 0x56d);
      local_3c = (uint)puVar6;
      FUN_0168111c(&local_30,param_2 + 0x2b8,&local_5c);
      if (local_30 == (uint *)0x2) {
LAB_0169e3a8:
        *param_1 = 2;
        param_1[1] = local_2c;
        return;
      }
      if (((uint)local_30 & 1) == 0) {
LAB_0169e47c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004ce38b,0x30,&DAT_01d07cbc);
      }
      if ((bVar3 & bVar4 & 1) != 0) {
        FUN_016873fc(&local_40,&local_5c,local_2c,local_28,local_28,param_2 + 0x2b8);
        local_2c = (code *)local_3c;
        if (local_40 == 2) goto LAB_0169e3a8;
        if ((local_40 & 1) == 0) goto LAB_0169e47c;
        local_28 = (uint *)local_38;
      }
      if (pcVar7 == local_2c) {
        if (local_28 <= puVar6) {
          *param_1 = 1;
          param_1[1] = local_28;
          goto LAB_0169e2e8;
        }
      }
      else {
        FUN_016cbee4(&local_40,&local_30);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_004ce3ed,0x30,&DAT_01d07cdc);
    }
    if (puVar6 < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
    }
    param_1[1] = local_4c;
    *param_1 = 1;
  }
LAB_0169e2e8:
  param_1[2] = puVar6;
  param_1[3] = pcVar7;
  return;
}

