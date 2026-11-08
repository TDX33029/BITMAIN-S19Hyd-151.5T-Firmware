// FUN_013a7cfc @ 013a7cfc size=896 calls_out=2 calls_in=0
// strings: group_info

byte FUN_013a7cfc(int param_1,int *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  int local_5c;
  int *local_58;
  byte local_54;
  byte local_53;
  int local_50;
  int local_4c;
  undefined1 *local_48;
  undefined1 local_41;
  int *local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int **local_2c;
  byte local_28;
  char local_27;
  
  iVar9 = *param_2;
  pcVar8 = *(code **)(param_2[1] + 0xc);
  local_5c = param_1;
  iVar3 = (*pcVar8)(iVar9,"Pre",3);
  bVar2 = 1;
  local_58 = param_2;
  if (iVar3 != 0) goto LAB_013a7d40;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar3 = (*pcVar8)(iVar9,&DAT_00414a79,3);
    bVar2 = 1;
    if (iVar3 != 0) goto LAB_013a7d40;
    iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003ceba6,3);
    bVar2 = 1;
    if (iVar3 != 0) goto LAB_013a7d40;
    iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
    bVar2 = 1;
    if (iVar3 != 0) goto LAB_013a7d40;
    local_50 = param_1 + 4;
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003cec7e,0xb);
    local_3c = (undefined *)(CONCAT31((int3)((uint)local_3c >> 8),uVar1) & 0xffff00ff);
    local_40 = param_2;
    FUN_00fb2258(&local_40,&DAT_003cec89,2,&local_50,FUN_013cc17c);
    bVar2 = local_3c._1_1_ | (byte)local_3c;
    if (local_3c._1_1_ != 1 || ((uint)local_3c & 1) != 0) goto LAB_013a7d40;
    if ((*(byte *)((int)local_40 + 10) & 0x80) == 0) {
      pcVar8 = *(code **)(local_40[1] + 0xc);
      pcVar6 = " }";
      piVar5 = (int *)*local_40;
      goto LAB_013a8064;
    }
    piVar5 = (int *)*local_40;
    uVar7 = 1;
    pcVar8 = *(code **)(local_40[1] + 0xc);
    pcVar6 = "}";
LAB_013a8068:
    bVar2 = (*pcVar8)(piVar5,pcVar6,uVar7);
  }
  else {
    iVar3 = (*pcVar8)(iVar9,&DAT_00414a7e,3);
    bVar2 = 1;
    if (iVar3 != 0) goto LAB_013a7d40;
    local_50 = *param_2;
    local_4c = param_2[1];
    local_38 = param_2[2];
    local_34 = param_2[3];
    local_48 = &local_41;
    local_40 = &local_50;
    local_41 = 1;
    local_3c = &DAT_01880dc4;
    iVar3 = FUN_00fb1f64(local_40,&DAT_003ceba6,3);
    if ((iVar3 != 0) || (iVar3 = FUN_00fb1f64(&local_50,&DAT_00414a7c,2), iVar3 != 0))
    goto LAB_013a7d40;
    local_30 = param_1 + 4;
    local_28 = FUN_00fb1f64(&local_50,&DAT_003cec7e,0xb);
    local_2c = &local_40;
    local_27 = '\0';
    FUN_00fb2258(&local_2c,&DAT_003cec89,2,&local_30,FUN_013cc17c);
    uVar4 = (uint)local_28;
    if (local_27 == '\x01' && uVar4 == 0) {
      if ((*(byte *)((int)local_2c + 10) & 0x80) == 0) {
        piVar5 = *local_2c;
        uVar7 = 2;
        pcVar8 = (code *)local_2c[1][3];
        pcVar6 = " }";
      }
      else {
        piVar5 = *local_2c;
        uVar7 = 1;
        pcVar8 = (code *)local_2c[1][3];
        pcVar6 = "}";
      }
      uVar4 = (*pcVar8)(piVar5,pcVar6,uVar7);
LAB_013a8048:
      if (uVar4 == 0) {
        pcVar8 = *(code **)(local_3c + 0xc);
        pcVar6 = &DAT_00414a81;
        piVar5 = local_40;
LAB_013a8064:
        uVar7 = 2;
        goto LAB_013a8068;
      }
    }
    else if (local_27 == '\0') goto LAB_013a8048;
    bVar2 = 1;
  }
LAB_013a7d40:
  local_54 = bVar2 & 1;
  local_53 = 1;
  FUN_00fb2258(&local_58,"group_info",10,&local_5c,FUN_013bc33c);
  if (local_53 != 1 || (local_54 & 1) != 0) {
    return (local_53 | local_54) & 1;
  }
  if ((*(byte *)((int)local_58 + 10) & 0x80) == 0) {
    bVar2 = (**(code **)(local_58[1] + 0xc))(*local_58," }",2);
    return bVar2 & 1;
  }
  bVar2 = (**(code **)(local_58[1] + 0xc))(*local_58,"}",1);
  return bVar2 & 1;
}

