// FUN_013ccc48 @ 013ccc48 size=1020 calls_out=3 calls_in=2
// strings: 

byte FUN_013ccc48(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int *local_50;
  undefined4 *local_4c;
  byte local_48;
  byte local_47;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar5 = (int *)*param_1;
  uVar6 = *param_2;
  local_50 = piVar5 + 2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar4)(uVar6,&DAT_003ceb9d,9);
  bVar1 = 1;
  local_4c = param_2;
  if (iVar2 != 0) goto LAB_013ccc90;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar4)(uVar6,&DAT_00414a79,3);
    bVar1 = 1;
    if (iVar2 != 0) goto LAB_013ccc90;
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003ceba6,3);
    bVar1 = 1;
    if (iVar2 != 0) goto LAB_013ccc90;
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
    bVar1 = 1;
    if (iVar2 != 0) goto LAB_013ccc90;
    iVar2 = (**(code **)(piVar5[1] + 0xc))
                      (*piVar5 + (*(int *)(piVar5[1] + 8) - 1U & 0xfffffff8) + 8,param_2);
  }
  else {
    iVar2 = (*pcVar4)(uVar6,&DAT_00414a7e,3);
    bVar1 = 1;
    if (iVar2 != 0) goto LAB_013ccc90;
    local_44 = *param_2;
    local_40 = param_2[1];
    local_3c = &local_35;
    local_34 = &local_44;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_35 = 1;
    local_30 = &DAT_01880dc4;
    iVar2 = FUN_00fb1f64(local_34,&DAT_003ceba6,3);
    if (((iVar2 != 0) || (iVar2 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar2 != 0)) ||
       (iVar2 = (**(code **)(piVar5[1] + 0xc))
                          (*piVar5 + (*(int *)(piVar5[1] + 8) - 1U & 0xfffffff8) + 8,&local_34),
       iVar2 != 0)) goto LAB_013ccc90;
    iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    local_47 = 1;
    local_48 = (byte)iVar2;
  }
  bVar1 = 1;
  if (iVar2 == 0) {
    bVar1 = 1;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003ceba9,7);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            if ((char)piVar5[3] == '\0') {
              uVar6 = 5;
              puVar3 = &DAT_00414fdc;
            }
            else {
              uVar6 = 4;
              puVar3 = &DAT_00568b2c;
            }
            bVar1 = FUN_00faace8(param_2,puVar3,uVar6);
          }
        }
      }
    }
    else {
      local_2c = param_2[2];
      local_28 = param_2[3];
      local_44 = *param_2;
      local_40 = param_2[1];
      local_3c = &local_35;
      local_34 = &local_44;
      local_35 = 1;
      local_30 = &DAT_01880dc4;
      iVar2 = FUN_00fb1f64(local_34,&DAT_003ceba9,7);
      if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar2 == 0)) {
        if ((char)piVar5[3] == '\x01') {
          uVar6 = 4;
          puVar3 = &DAT_00568b2c;
        }
        else {
          uVar6 = 5;
          puVar3 = &DAT_00414fdc;
        }
        iVar2 = FUN_00faace8(&local_34,puVar3,uVar6);
        if (iVar2 == 0) {
          bVar1 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
        }
        else {
          bVar1 = 1;
        }
      }
    }
  }
LAB_013ccc90:
  local_47 = 1;
  local_48 = bVar1;
  FUN_00fb2258(&local_4c,&DAT_003cebb0,0xe,&local_50,FUN_00d47d08);
  if (local_47 != 1 || (local_48 & 1) != 0) {
    return (local_47 | local_48) & 1;
  }
  if ((*(byte *)((int)local_4c + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_4c[1] + 0xc))(*local_4c," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_4c[1] + 0xc))(*local_4c,"}",1);
  return bVar1 & 1;
}

