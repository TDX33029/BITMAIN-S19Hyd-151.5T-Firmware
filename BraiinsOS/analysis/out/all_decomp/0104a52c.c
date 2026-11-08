// FUN_0104a52c @ 0104a52c size=2328 calls_out=9 calls_in=0
// strings: query

byte FUN_0104a52c(int param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int extraout_r2;
  undefined4 uVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  int *local_60;
  byte local_5c;
  byte local_5b;
  undefined8 local_58;
  int *local_50;
  undefined *puStack_4c;
  int *piStack_48;
  int iStack_44;
  undefined1 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined8 *local_28;
  
  iVar12 = *param_2;
  pcVar13 = *(code **)(param_2[1] + 0xc);
  iVar6 = (*pcVar13)(iVar12,"Url",3);
  uVar14 = *(uint *)(param_1 + 0x20);
  iVar16 = *(int *)(param_1 + 0x14);
  uVar17 = *(uint *)(param_1 + 0x18);
  local_60 = param_2;
  if (uVar14 != 0) {
    if (uVar14 < uVar17) {
      if (*(char *)(iVar16 + uVar14) < -0x40) goto LAB_0104a584;
    }
    else if (uVar14 != uVar17) {
LAB_0104a584:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar16,uVar17,0,uVar14,&DAT_018af070);
    }
  }
  iVar15 = 1;
  if (iVar6 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar6 = (*pcVar13)(iVar12,&DAT_00414a79,3);
      iVar15 = 1;
      if (iVar6 == 0) {
        iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040c6b9,6);
        iVar15 = 1;
        if (iVar6 == 0) {
          iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          iVar15 = 1;
          if (iVar6 == 0) {
            iVar15 = FUN_00faa4e8(iVar16,uVar14,*param_2,param_2[1]);
          }
        }
      }
    }
    else {
      iVar6 = (*pcVar13)(iVar12,&DAT_00414a7e,3);
      iVar15 = 1;
      if (iVar6 == 0) {
        local_50 = (int *)*param_2;
        puStack_4c = (undefined *)param_2[1];
        piStack_48 = &local_30;
        local_30 = CONCAT31(local_30._1_3_,1);
        iVar6 = FUN_00fb1f64(&local_50,&DAT_0040c6b9,6);
        if ((iVar6 == 0) && (iVar6 = FUN_00fb1f64(&local_50,&DAT_00414a7c,2), iVar6 == 0)) {
          iVar6 = FUN_00faa4e8(iVar16,uVar14,&local_50,&DAT_01880dc4);
          if (iVar6 == 0) {
            iVar15 = FUN_00fb1f64(&local_50,&DAT_00414a81,2);
          }
          else {
            iVar15 = 1;
          }
        }
      }
    }
  }
  uVar9 = uVar14 + 1;
  local_5b = 1;
  local_5c = (byte)iVar15;
  if (uVar14 != 0xffffffff) {
    if (uVar9 < uVar17) {
      if (*(char *)(iVar16 + uVar9) < -0x40) goto LAB_0104a5e0;
    }
    else if (uVar9 != uVar17) {
LAB_0104a5e0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar16,uVar17,uVar9,uVar17,&DAT_018af080);
    }
  }
  bVar1 = true;
  if ((uVar17 != uVar9) && (bVar1 = false, *(char *)(iVar16 + uVar9) != '/')) {
    bVar1 = true;
  }
  if (iVar15 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      local_30 = *param_2;
      local_2c = param_2[1];
      piStack_48 = (int *)param_2[2];
      iStack_44 = param_2[3];
      local_50 = &local_30;
      local_38._0_4_ = CONCAT31(local_38._1_3_,1);
      local_28 = &local_38;
      puStack_4c = &DAT_01880dc4;
      iVar6 = FUN_00fb1f64(local_50,&DAT_00565730,0x10);
      if ((iVar6 == 0) && (iVar6 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar6 == 0)) {
        if (bVar1) {
          uVar10 = 4;
          puVar7 = &DAT_00568b2c;
        }
        else {
          uVar10 = 5;
          puVar7 = &DAT_00414fdc;
        }
        iVar6 = FUN_00faace8(&local_50,puVar7,uVar10);
        if (iVar6 == 0) {
          iVar6 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
          goto LAB_0104ad20;
        }
      }
      goto LAB_0104a6bc;
    }
    iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
    if (((iVar6 != 0) ||
        (iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00565730,0x10), iVar6 != 0)) ||
       (iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar6 != 0))
    goto LAB_0104a6bc;
    if (bVar1) {
      uVar10 = 4;
      puVar7 = &DAT_00568b2c;
    }
    else {
      uVar10 = 5;
      puVar7 = &DAT_00414fdc;
    }
    iVar6 = FUN_00faace8(param_2,puVar7,uVar10);
LAB_0104ad20:
    uVar18 = FUN_016b39e8(param_1);
    uVar10 = (undefined4)((ulonglong)uVar18 >> 0x20);
    cVar5 = '\x01';
    if (iVar6 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
        cVar5 = '\x01';
        if (((iVar6 == 0) &&
            (iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056a800,8), iVar6 == 0)) &&
           (iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar6 == 0)) {
          cVar5 = FUN_00faa4e8((int)uVar18,uVar10,*param_2,param_2[1]);
        }
        goto LAB_0104a6c8;
      }
      local_50 = (int *)*param_2;
      puStack_4c = (undefined *)param_2[1];
      piStack_48 = &local_30;
      local_30 = CONCAT31(local_30._1_3_,1);
      iVar6 = FUN_00fb1f64(&local_50,&DAT_0056a800,8);
      if ((iVar6 != 0) || (iVar6 = FUN_00fb1f64(&local_50,&DAT_00414a7c,2), iVar6 != 0))
      goto LAB_0104a6c8;
      iVar6 = FUN_00faa4e8((int)uVar18,uVar10,&local_50,&DAT_01880dc4);
      if (iVar6 == 0) {
        cVar5 = FUN_00fb1f64(&local_50,&DAT_00414a81,2);
        goto LAB_0104a6c8;
      }
      goto LAB_0104a6c4;
    }
  }
  else {
LAB_0104a6bc:
    FUN_016b39e8(param_1);
LAB_0104a6c4:
    cVar5 = '\x01';
  }
LAB_0104a6c8:
  local_5b = '\x01';
  local_5c = cVar5;
  local_58 = FUN_016b3890(param_1);
  FUN_00fb2258(&local_60,&DAT_0056aa78,8,&local_58,FUN_0108bdd0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x34)) {
  case 0:
    uVar3 = 3;
    break;
  case 1:
    uVar17 = *(uint *)(param_1 + 0x28);
    uVar9 = *(uint *)(param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x14);
    uVar14 = *(uint *)(param_1 + 0x18);
    if (uVar9 < uVar17) goto LAB_0104a97c;
    if (uVar17 != 0) {
      if (uVar17 < uVar14) {
        if (*(char *)(iVar6 + uVar17) < -0x40) goto LAB_0104a97c;
      }
      else if (uVar17 != uVar14) goto LAB_0104a97c;
    }
    if (uVar9 != 0) {
      if (uVar9 < uVar14) {
        if (*(char *)(iVar6 + uVar9) < -0x40) goto LAB_0104a97c;
      }
      else if (uVar9 != uVar14) {
LAB_0104a97c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac();
      }
    }
    puStack_4c = (undefined *)(iVar6 + uVar17);
    uVar3 = 0;
    piStack_48 = (int *)(uVar9 - uVar17);
    break;
  case 2:
    uVar10 = *(undefined4 *)(param_1 + 0x35);
    local_50._0_1_ = 1;
    goto LAB_0104a88c;
  case 3:
    uVar10 = *(undefined4 *)(param_1 + 0x35);
    local_50._0_1_ = 2;
    uStack_40 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x41) >> 0x18);
    iStack_44._0_1_ = (undefined1)((uint)*(undefined4 *)(param_1 + 0x3d) >> 0x18);
    iStack_44 = CONCAT31((int3)*(undefined4 *)(param_1 + 0x41),(undefined1)iStack_44);
    puStack_4c = (undefined *)(*(int *)(param_1 + 0x39) << 8);
    piStack_48._0_1_ = (undefined1)((uint)*(int *)(param_1 + 0x39) >> 0x18);
    piStack_48 = (int *)CONCAT31((int3)*(undefined4 *)(param_1 + 0x3d),piStack_48._0_1_);
LAB_0104a88c:
    local_50._1_3_ = (undefined3)uVar10;
    puStack_4c._0_1_ = (undefined1)((uint)uVar10 >> 0x18);
    goto LAB_0104a9a8;
  }
  local_50 = (int *)CONCAT31(local_50._1_3_,uVar3);
LAB_0104a9a8:
  uVar10 = FUN_00fb2258(&local_60,&DAT_00567708,4,&local_50,FUN_0108bc58);
  local_3c = *(undefined4 *)(param_1 + 0x1c);
  FUN_00fb2258(uVar10,&DAT_00569248,4,&local_3c,FUN_0078b370);
  uVar18 = FUN_016b3674(param_1);
  piVar2 = local_60;
  uVar10 = (undefined4)((ulonglong)uVar18 >> 0x20);
  bVar4 = 1;
  if (local_5c == '\0') {
    if ((*(byte *)((int)local_60 + 10) & 0x80) == 0) {
      puVar8 = &DAT_0041950f;
      if (local_5b == '\0') {
        puVar8 = &DAT_00414a79;
      }
      uVar11 = 3;
      if (local_5b != '\0') {
        uVar11 = 2;
      }
      iVar6 = (**(code **)(local_60[1] + 0xc))(*local_60,puVar8,uVar11);
      bVar4 = 1;
      if (iVar6 == 0) {
        iVar6 = (**(code **)(piVar2[1] + 0xc))(*piVar2,&DAT_00568e60,4);
        bVar4 = 1;
        if (iVar6 == 0) {
          iVar6 = (**(code **)(piVar2[1] + 0xc))(*piVar2,&DAT_00414a7c,2);
          bVar4 = 1;
          if (iVar6 == 0) {
            bVar4 = FUN_00faa4e8((int)uVar18,uVar10,*piVar2,piVar2[1]);
          }
        }
      }
    }
    else {
      if (local_5b == '\0') {
        iVar6 = (**(code **)(local_60[1] + 0xc))(*local_60,&DAT_00414a7e,3);
        bVar4 = 1;
        if (iVar6 != 0) goto LAB_0104aa14;
      }
      local_28 = &local_38;
      local_30 = *piVar2;
      local_2c = piVar2[1];
      bVar4 = 1;
      local_38._0_4_ = CONCAT31(local_38._1_3_,1);
      iVar6 = FUN_00fb1f64(&local_30,&DAT_00568e60,4);
      if (iVar6 == 0) {
        iVar6 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
        if (iVar6 == 0) {
          iVar6 = FUN_00faa4e8((int)uVar18,uVar10,&local_30,&DAT_01880dc4);
          if (iVar6 == 0) {
            bVar4 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
          }
          else {
            bVar4 = 1;
          }
        }
      }
    }
  }
LAB_0104aa14:
  local_5b = 1;
  local_5c = bVar4;
  local_38 = FUN_016b3788(param_1);
  FUN_00fb2258(&local_60,"query",5,&local_38,FUN_0108bdd0);
  if (*(int *)(param_1 + 8) == 1) {
    uVar14 = *(uint *)(param_1 + 0x18);
    uVar17 = *(int *)(param_1 + 0xc) + 1;
    if (*(int *)(param_1 + 0xc) != -1) {
      if (uVar17 < uVar14) {
        if (*(char *)(*(int *)(param_1 + 0x14) + uVar17) < -0x40) goto LAB_0104aa80;
      }
      else if (uVar14 != uVar17) {
LAB_0104aa80:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac();
      }
    }
    local_30 = *(int *)(param_1 + 0x14) + uVar17;
    local_2c = uVar14 - uVar17;
  }
  else {
    local_30 = 0;
    local_2c = extraout_r2;
  }
  FUN_00fb2258(&local_60,&DAT_0056a380,8,&local_30,FUN_0108bdd0);
  if (local_5b != 1 || (local_5c & 1) != 0) {
    return (local_5b | local_5c) & 1;
  }
  if ((*(byte *)((int)local_60 + 10) & 0x80) == 0) {
    bVar4 = (**(code **)(local_60[1] + 0xc))(*local_60," }",2);
    return bVar4 & 1;
  }
  bVar4 = (**(code **)(local_60[1] + 0xc))(*local_60,"}",1);
  return bVar4 & 1;
}

