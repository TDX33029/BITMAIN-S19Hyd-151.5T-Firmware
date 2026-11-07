// FUN_011dcc98 @ 011dcc98 size=1732 calls_out=4 calls_in=1
// strings: authority | query

byte FUN_011dcc98(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  int *local_54;
  byte local_50;
  byte local_4f;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int *local_28;
  
  iVar10 = *param_2;
  pcVar11 = *(code **)(param_2[1] + 0xc);
  iVar4 = (*pcVar11)(iVar10,"Uri",3);
  uVar13 = *(uint *)(param_1 + 0x14);
  uVar12 = *(uint *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 4);
  local_54 = param_2;
  if (uVar13 != 0) {
    if (uVar13 < uVar12) {
      if (*(char *)(iVar5 + uVar13) < -0x40) goto LAB_011dccfc;
    }
    else if (uVar13 != uVar12) {
LAB_011dccfc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar5,uVar12,0,uVar13,&DAT_018821a4);
    }
  }
  bVar3 = 1;
  if (iVar4 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar4 = (*pcVar11)(iVar10,&DAT_00414a79,3);
      bVar3 = 1;
      if (iVar4 == 0) {
        iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040c6b9,6);
        bVar3 = 1;
        if (iVar4 == 0) {
          iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar3 = 1;
          if (iVar4 == 0) {
            bVar3 = FUN_00faa4e8(iVar5,uVar13,*param_2,param_2[1]);
          }
        }
      }
    }
    else {
      iVar4 = (*pcVar11)(iVar10,&DAT_00414a7e,3);
      bVar3 = 1;
      if (iVar4 == 0) {
        local_4c = *param_2;
        local_48 = param_2[1];
        local_44 = &local_30;
        local_30 = CONCAT31(local_30._1_3_,1);
        iVar4 = FUN_00fb1f64(&local_4c,&DAT_0040c6b9,6);
        if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_4c,&DAT_00414a7c,2), iVar4 == 0)) {
          iVar4 = FUN_00faa4e8(iVar5,uVar13,&local_4c,&DAT_01880dc4);
          if (iVar4 == 0) {
            bVar3 = FUN_00fb1f64(&local_4c,&DAT_00414a81,2);
          }
          else {
            bVar3 = 1;
          }
        }
      }
    }
  }
  cVar1 = *(char *)(param_1 + 0x24);
  local_4f = '\x01';
  local_50 = bVar3;
  if (cVar1 == '\x04') {
LAB_011dceec:
    local_3c = CONCAT31(local_3c._1_3_,4);
  }
  else {
    uVar9 = *(uint *)(param_1 + 0xc);
    uVar7 = uVar13 + 3;
    if (uVar13 == 0) {
      uVar7 = 2;
    }
    if (uVar9 < uVar7) goto LAB_011dd2f0;
    if (uVar7 != 0) {
      if (uVar7 < uVar12) {
        if (*(char *)(iVar5 + uVar7) < -0x40) goto LAB_011dd2f0;
      }
      else if (uVar7 != uVar12) goto LAB_011dd2f0;
    }
    if (uVar9 != 0) {
      if (uVar9 < uVar12) {
        if (*(char *)(iVar5 + uVar9) < -0x40) goto LAB_011dd2f0;
      }
      else if (uVar9 != uVar12) {
LAB_011dd2f0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar5,uVar12,uVar7,uVar9,&DAT_018821a4);
      }
    }
    if (cVar1 == '\x04') goto LAB_011dceec;
    local_40 = *(int *)(param_1 + 0x20) - uVar7;
    local_44 = (int *)(*(int *)(param_1 + 0x1c) - uVar7);
    local_48 = uVar9 - uVar7;
    local_4c = iVar5 + uVar7;
    local_3c = CONCAT31(*(undefined3 *)(param_1 + 0x25),cVar1);
  }
  FUN_00fb2258(&local_54,"authority",9,&local_4c,FUN_011dd3d4);
  piVar2 = local_54;
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar13 = *(uint *)(param_1 + 0x10);
  if (uVar13 < uVar7) goto LAB_011dcf9c;
  if (uVar7 != 0) {
    if (uVar7 < uVar12) {
      if (*(char *)(iVar5 + uVar7) < -0x40) goto LAB_011dcf9c;
    }
    else if (uVar7 != uVar12) goto LAB_011dcf9c;
  }
  if (uVar13 != 0) {
    if (uVar13 < uVar12) {
      if (*(char *)(iVar5 + uVar13) < -0x40) goto LAB_011dcf9c;
    }
    else if (uVar13 != uVar12) {
LAB_011dcf9c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar5,uVar12,uVar7,uVar13,&DAT_018821a4);
    }
  }
  local_34 = (uint)local_50;
  bVar3 = 1;
  if (local_34 == 0) {
    if ((*(byte *)((int)local_54 + 10) & 0x80) == 0) {
      puVar6 = &DAT_0041950f;
      if (local_4f == '\0') {
        puVar6 = &DAT_00414a79;
      }
      uVar8 = 3;
      if (local_4f != '\0') {
        uVar8 = 2;
      }
      local_34 = (**(code **)(local_54[1] + 0xc))(*local_54,puVar6,uVar8);
      bVar3 = 1;
      if (local_34 == 0) {
        local_34 = (**(code **)(piVar2[1] + 0xc))(*piVar2,&DAT_00568e60,4);
        bVar3 = 1;
        if (local_34 == 0) {
          local_34 = (**(code **)(piVar2[1] + 0xc))(*piVar2,&DAT_00414a7c,2);
          bVar3 = 1;
          if (local_34 == 0) {
            local_34 = FUN_00faa4e8(iVar5 + uVar7,uVar13 - uVar7,*piVar2,piVar2[1]);
            goto LAB_011dd31c;
          }
        }
      }
    }
    else {
      if (local_4f == '\0') {
        local_34 = (**(code **)(local_54[1] + 0xc))(*local_54,&DAT_00414a7e,3);
        bVar3 = 1;
        if (local_34 != 0) goto LAB_011dcfd4;
      }
      local_28 = &local_38;
      local_30 = *piVar2;
      local_2c = piVar2[1];
      bVar3 = 1;
      local_38 = CONCAT31(local_38._1_3_,1);
      local_34 = FUN_00fb1f64(&local_30,&DAT_00568e60,4);
      if ((local_34 == 0) && (local_34 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), local_34 == 0)) {
        local_34 = FUN_00faa4e8(iVar5 + uVar7,uVar13 - uVar7,&local_30,&DAT_01880dc4);
        if (local_34 == 0) {
          local_34 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
LAB_011dd31c:
          bVar3 = (byte)local_34;
        }
        else {
          bVar3 = 1;
        }
      }
    }
  }
LAB_011dcfd4:
  uVar7 = *(uint *)(param_1 + 0x18);
  local_4f = 1;
  iVar4 = 0;
  local_50 = bVar3;
  if (uVar7 == 0) {
    local_38 = 0;
  }
  else {
    uVar13 = uVar13 + 1;
    if (uVar7 < uVar13) goto LAB_011dd1b4;
    if (uVar13 != 0) {
      if (uVar13 < uVar12) {
        if (*(char *)(iVar5 + uVar13) < -0x40) goto LAB_011dd1b4;
      }
      else if (uVar13 != uVar12) goto LAB_011dd1b4;
    }
    if (uVar7 < uVar12) {
      if (*(char *)(iVar5 + uVar7) < -0x40) goto LAB_011dd1b4;
    }
    else if (uVar7 != uVar12) {
LAB_011dd1b4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar5,uVar12,uVar13,uVar7,&DAT_018821a4);
    }
    local_34 = uVar7 - uVar13;
    local_38 = iVar5 + uVar13;
    uVar13 = uVar7;
  }
  iVar10 = FUN_00fb2258(&local_54,"query",5,&local_38,FUN_0121e33c);
  if (uVar13 != uVar12) {
    uVar13 = uVar13 + 1;
    if ((uVar12 < uVar13) ||
       ((uVar13 != 0 && uVar13 < uVar12 && (*(char *)(iVar5 + uVar13) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar5,uVar12,uVar13,uVar12,&DAT_018821a4);
    }
    iVar10 = uVar12 - uVar13;
    iVar4 = iVar5 + uVar13;
  }
  local_30 = iVar4;
  local_2c = iVar10;
  FUN_00fb2258(&local_54,&DAT_0056a380,8,&local_30,FUN_0121e33c);
  if (local_4f != 1 || (local_50 & 1) != 0) {
    return (local_4f | local_50) & 1;
  }
  if ((*(byte *)((int)local_54 + 10) & 0x80) == 0) {
    bVar3 = (**(code **)(local_54[1] + 0xc))(*local_54," }",2);
    return bVar3 & 1;
  }
  bVar3 = (**(code **)(local_54[1] + 0xc))(*local_54,"}",1);
  return bVar3 & 1;
}

