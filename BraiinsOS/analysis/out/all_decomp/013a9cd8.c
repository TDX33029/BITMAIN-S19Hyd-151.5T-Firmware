// FUN_013a9cd8 @ 013a9cd8 size=896 calls_out=2 calls_in=0
// strings: group_info

byte FUN_013a9cd8(int param_1,int *param_2)

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
  int local_58;
  int *local_54;
  byte local_50;
  byte local_4f;
  int local_4c;
  int local_48;
  undefined1 *local_44;
  undefined1 local_3d;
  int *local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int **local_28;
  byte local_24;
  char local_23;
  
  local_58 = param_1 + 0x48;
  iVar9 = *param_2;
  pcVar8 = *(code **)(param_2[1] + 0xc);
  iVar3 = (*pcVar8)(iVar9,"Pre",3);
  bVar2 = 1;
  local_54 = param_2;
  if (iVar3 != 0) goto LAB_013a9d20;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar3 = (*pcVar8)(iVar9,&DAT_00414a79,3);
    bVar2 = 1;
    if (iVar3 != 0) goto LAB_013a9d20;
    iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003ceba6,3);
    bVar2 = 1;
    if (iVar3 != 0) goto LAB_013a9d20;
    iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
    bVar2 = 1;
    if (iVar3 != 0) goto LAB_013a9d20;
    local_4c = param_1;
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003cebcf,6);
    local_38 = (undefined *)(CONCAT31((int3)((uint)local_38 >> 8),uVar1) & 0xffff00ff);
    local_3c = param_2;
    FUN_00fb2258(&local_3c,&DAT_003cebd5,6,&local_4c,FUN_0137e544);
    bVar2 = local_38._1_1_ | (byte)local_38;
    if (local_38._1_1_ != 1 || ((uint)local_38 & 1) != 0) goto LAB_013a9d20;
    if ((*(byte *)((int)local_3c + 10) & 0x80) == 0) {
      pcVar8 = *(code **)(local_3c[1] + 0xc);
      pcVar6 = " }";
      piVar5 = (int *)*local_3c;
      goto LAB_013aa040;
    }
    piVar5 = (int *)*local_3c;
    uVar7 = 1;
    pcVar8 = *(code **)(local_3c[1] + 0xc);
    pcVar6 = "}";
LAB_013aa044:
    bVar2 = (*pcVar8)(piVar5,pcVar6,uVar7);
  }
  else {
    iVar3 = (*pcVar8)(iVar9,&DAT_00414a7e,3);
    bVar2 = 1;
    if (iVar3 != 0) goto LAB_013a9d20;
    local_4c = *param_2;
    local_48 = param_2[1];
    local_34 = param_2[2];
    local_30 = param_2[3];
    local_44 = &local_3d;
    local_3c = &local_4c;
    local_3d = 1;
    local_38 = &DAT_01880dc4;
    iVar3 = FUN_00fb1f64(local_3c,&DAT_003ceba6,3);
    if ((iVar3 != 0) || (iVar3 = FUN_00fb1f64(&local_4c,&DAT_00414a7c,2), iVar3 != 0))
    goto LAB_013a9d20;
    local_2c = param_1;
    local_24 = FUN_00fb1f64(&local_4c,&DAT_003cebcf,6);
    local_28 = &local_3c;
    local_23 = '\0';
    FUN_00fb2258(&local_28,&DAT_003cebd5,6,&local_2c,FUN_0137e544);
    uVar4 = (uint)local_24;
    if (local_23 == '\x01' && uVar4 == 0) {
      if ((*(byte *)((int)local_28 + 10) & 0x80) == 0) {
        piVar5 = *local_28;
        uVar7 = 2;
        pcVar8 = (code *)local_28[1][3];
        pcVar6 = " }";
      }
      else {
        piVar5 = *local_28;
        uVar7 = 1;
        pcVar8 = (code *)local_28[1][3];
        pcVar6 = "}";
      }
      uVar4 = (*pcVar8)(piVar5,pcVar6,uVar7);
LAB_013aa024:
      if (uVar4 == 0) {
        pcVar8 = *(code **)(local_38 + 0xc);
        pcVar6 = &DAT_00414a81;
        piVar5 = local_3c;
LAB_013aa040:
        uVar7 = 2;
        goto LAB_013aa044;
      }
    }
    else if (local_23 == '\0') goto LAB_013aa024;
    bVar2 = 1;
  }
LAB_013a9d20:
  local_50 = bVar2 & 1;
  local_4f = 1;
  FUN_00fb2258(&local_54,"group_info",10,&local_58,FUN_013bc33c);
  if (local_4f != 1 || (local_50 & 1) != 0) {
    return (local_4f | local_50) & 1;
  }
  if ((*(byte *)((int)local_54 + 10) & 0x80) == 0) {
    bVar2 = (**(code **)(local_54[1] + 0xc))(*local_54," }",2);
    return bVar2 & 1;
  }
  bVar2 = (**(code **)(local_54[1] + 0xc))(*local_54,"}",1);
  return bVar2 & 1;
}

