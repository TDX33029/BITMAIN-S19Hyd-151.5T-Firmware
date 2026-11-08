// FUN_00a038ec @ 00a038ec size=2952 calls_out=4 calls_in=0
// strings: level | module_path | fields | target | fields | module_path

byte FUN_00a038ec(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int *piVar10;
  code *pcVar11;
  int iVar12;
  int *piVar13;
  int *local_58;
  byte local_54;
  byte local_53;
  int *local_50;
  code *local_4c;
  int **local_48;
  undefined1 *local_44;
  int *local_40;
  code *local_3c;
  int local_38;
  int local_34;
  int *local_30;
  code *local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar12 = *param_2;
  piVar13 = (int *)*param_1;
  pcVar11 = *(code **)(param_2[1] + 0xc);
  iVar5 = (*pcVar11)(iVar12,&DAT_0056a5e8,8);
  local_53 = 0;
  local_54 = (byte)iVar5;
  local_58 = param_2;
  if (iVar5 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar5 = (*pcVar11)(iVar12,&DAT_00414a7e,3);
      if (iVar5 == 0) {
        local_50 = (int *)*param_2;
        local_4c = (code *)param_2[1];
        local_48 = &local_30;
        local_30 = (int *)CONCAT31(local_30._1_3_,1);
        iVar5 = FUN_00fb1f64(&local_50,&DAT_00568d68,4);
        if (((iVar5 == 0) && (iVar5 = FUN_00fb1f64(&local_50,&DAT_00414a7c,2), iVar5 == 0)) &&
           (iVar5 = FUN_00faa4e8(piVar13[3],piVar13[4],&local_50,&DAT_01880dc4), iVar5 == 0)) {
          iVar5 = FUN_00fb1f64(&local_50,&DAT_00414a81,2);
          goto joined_r0x00a03e3c;
        }
      }
      goto LAB_00a03934;
    }
    iVar5 = (*pcVar11)(iVar12,&DAT_00414a79,3);
    if (((iVar5 != 0) ||
        (iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568d68,4), iVar5 != 0)) ||
       (iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar5 != 0))
    goto LAB_00a03934;
    iVar5 = FUN_00faa4e8(piVar13[3],piVar13[4],*param_2,param_2[1]);
joined_r0x00a03e3c:
    cVar2 = '\x01';
    if (iVar5 == 0) {
      cVar2 = '\x01';
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
        cVar2 = '\x01';
        if (((iVar5 == 0) &&
            (iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,"target",6), iVar5 == 0)) &&
           (iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar5 == 0)) {
          cVar2 = FUN_00faa4e8(piVar13[5],piVar13[6],*param_2,param_2[1]);
        }
      }
      else {
        local_50 = (int *)*param_2;
        local_4c = (code *)param_2[1];
        local_48 = &local_30;
        local_30._1_3_ = (undefined3)((uint)local_30 >> 8);
        local_30 = (int *)CONCAT31(local_30._1_3_,1);
        iVar5 = FUN_00fb1f64(&local_50,"target",6);
        if ((iVar5 == 0) && (iVar5 = FUN_00fb1f64(&local_50,&DAT_00414a7c,2), iVar5 == 0)) {
          iVar5 = FUN_00faa4e8(piVar13[5],piVar13[6],&local_50,&DAT_01880dc4);
          if (iVar5 != 0) goto LAB_00a03934;
          cVar2 = FUN_00fb1f64(&local_50,&DAT_00414a81,2);
        }
      }
    }
  }
  else {
LAB_00a03934:
    cVar2 = '\x01';
  }
  cVar3 = '\x01';
  local_53 = '\x01';
  local_54 = cVar2;
  FUN_00fb2258(&local_58,"level",5,piVar13 + 2,FUN_0169b5b8);
  piVar1 = local_58;
  iVar5 = piVar13[0xb];
  if (iVar5 != 0) {
    if (local_54 == '\0') {
      iVar12 = piVar13[0xc];
      if ((*(byte *)((int)local_58 + 10) & 0x80) == 0) {
        puVar8 = &DAT_0041950f;
        if (local_53 == '\0') {
          puVar8 = &DAT_00414a79;
        }
        uVar9 = 3;
        if (local_53 != '\0') {
          uVar9 = 2;
        }
        iVar6 = (**(code **)(local_58[1] + 0xc))(*local_58,puVar8,uVar9);
        if (((iVar6 == 0) &&
            (iVar6 = (**(code **)(piVar1[1] + 0xc))(*piVar1,"module_path",0xb), iVar6 == 0)) &&
           (iVar6 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2), iVar6 == 0)) {
          cVar3 = FUN_00faa4e8(iVar5,iVar12,*piVar1,piVar1[1]);
        }
      }
      else if ((local_53 != '\0') ||
              (iVar6 = (**(code **)(local_58[1] + 0xc))(*local_58,&DAT_00414a7e,3), iVar6 == 0)) {
        local_48 = &local_30;
        local_50 = (int *)*piVar1;
        local_4c = (code *)piVar1[1];
        cVar3 = '\x01';
        local_30 = (int *)CONCAT31(local_30._1_3_,1);
        iVar6 = FUN_00fb1f64(&local_50,"module_path",0xb);
        if ((iVar6 == 0) && (iVar6 = FUN_00fb1f64(&local_50,&DAT_00414a7c,2), iVar6 == 0)) {
          iVar5 = FUN_00faa4e8(iVar5,iVar12,&local_50,&DAT_01880dc4);
          if (iVar5 == 0) {
            cVar3 = FUN_00fb1f64(&local_50,&DAT_00414a81,2);
          }
          else {
            cVar3 = '\x01';
          }
        }
      }
    }
    local_53 = '\x01';
    local_54 = cVar3;
  }
  piVar1 = local_58;
  iVar5 = piVar13[0xd];
  piVar10 = (int *)piVar13[1];
  if (iVar5 == 0) {
    if (*piVar13 != 0) {
      local_50 = piVar10;
      FUN_00fb2258(&local_58,&DAT_005684a4,4,&local_50,FUN_007883b8);
    }
  }
  else {
    local_34 = piVar13[0xe];
    local_38 = iVar5;
    if (*piVar13 == 0) {
      cVar2 = '\x01';
      local_30 = &local_38;
      local_2c = (code *)&DAT_0157d360;
      if (local_54 == '\0') {
        if ((*(byte *)((int)local_58 + 10) & 0x80) == 0) {
          puVar8 = &DAT_0041950f;
          if (local_53 == '\0') {
            puVar8 = &DAT_00414a79;
          }
          uVar9 = 3;
          if (local_53 != '\0') {
            uVar9 = 2;
          }
          iVar5 = (**(code **)(local_58[1] + 0xc))(*local_58,puVar8,uVar9);
          cVar2 = '\x01';
          if (iVar5 == 0) {
            iVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00568d08,4);
            cVar2 = '\x01';
            if (iVar5 == 0) {
              iVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2);
              cVar2 = '\x01';
              if (iVar5 == 0) {
                cVar2 = FUN_00fa948c(*piVar1,piVar1[1],&DAT_00590e71,&local_30);
                goto LAB_00a0446c;
              }
            }
          }
        }
        else {
          if (local_53 == '\0') {
            iVar5 = (**(code **)(local_58[1] + 0xc))(*local_58,&DAT_00414a7e,3);
            cVar2 = '\x01';
            if (iVar5 != 0) goto LAB_00a03c2c;
          }
          local_48 = &local_40;
          local_50 = (int *)*piVar1;
          local_4c = (code *)piVar1[1];
          cVar2 = '\x01';
          local_40 = (int *)CONCAT31(local_40._1_3_,1);
          iVar5 = FUN_00fb1f64(&local_50,&DAT_00568d08,4);
          if ((iVar5 == 0) && (iVar5 = FUN_00fb1f64(&local_50,&DAT_00414a7c,2), iVar5 == 0)) {
            iVar5 = FUN_00fa948c(&local_50,&DAT_01880dc4,&DAT_00590e71,&local_30);
            if (iVar5 != 0) goto LAB_00a04308;
            ppiVar7 = &local_50;
LAB_00a04464:
            cVar2 = FUN_00fb1f64(ppiVar7,&DAT_00414a81,2);
LAB_00a0446c:
          }
        }
      }
    }
    else {
      local_48 = &local_40;
      cVar2 = '\x01';
      local_50 = &local_38;
      local_44 = &LAB_00fac484;
      local_4c = (code *)&DAT_0157d360;
      if (local_54 == '\0') {
        local_40 = piVar10;
        if ((*(byte *)((int)local_58 + 10) & 0x80) == 0) {
          puVar8 = &DAT_0041950f;
          if (local_53 == '\0') {
            puVar8 = &DAT_00414a79;
          }
          uVar9 = 3;
          if (local_53 != '\0') {
            uVar9 = 2;
          }
          iVar5 = (**(code **)(local_58[1] + 0xc))(*local_58,puVar8,uVar9);
          cVar2 = '\x01';
          if (iVar5 == 0) {
            iVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_0056a088,8);
            cVar2 = '\x01';
            if (iVar5 == 0) {
              iVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2);
              cVar2 = '\x01';
              if (iVar5 == 0) {
                cVar2 = FUN_00fa948c(*piVar1,piVar1[1],&DAT_005988a1,&local_50);
                goto LAB_00a0446c;
              }
            }
          }
        }
        else {
          if (local_53 == '\0') {
            iVar5 = (**(code **)(local_58[1] + 0xc))(*local_58,&DAT_00414a7e,3);
            cVar2 = '\x01';
            if (iVar5 != 0) goto LAB_00a03c2c;
          }
          local_28 = &local_21;
          local_30 = (int *)*piVar1;
          local_2c = (code *)piVar1[1];
          cVar2 = '\x01';
          local_21 = 1;
          iVar5 = FUN_00fb1f64(&local_30,&DAT_0056a088,8);
          if (iVar5 == 0) {
            iVar5 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
            if (iVar5 == 0) {
              iVar5 = FUN_00fa948c(&local_30,&DAT_01880dc4,&DAT_005988a1,&local_50);
              if (iVar5 == 0) {
                ppiVar7 = &local_30;
                goto LAB_00a04464;
              }
LAB_00a04308:
              cVar2 = '\x01';
            }
          }
        }
      }
    }
LAB_00a03c2c:
    local_53 = '\x01';
    local_54 = cVar2;
  }
  piVar1 = local_58;
  local_40 = piVar13 + 7;
  local_3c = FUN_01699d64;
  if (local_54 == '\0') {
    if ((*(byte *)((int)local_58 + 10) & 0x80) != 0) {
      if ((local_53 != '\0') ||
         (iVar5 = (**(code **)(local_58[1] + 0xc))(*local_58,&DAT_00414a7e,3), iVar5 == 0)) {
        local_48 = &local_30;
        local_50 = (int *)*piVar1;
        local_4c = (code *)piVar1[1];
        local_30 = (int *)CONCAT31(local_30._1_3_,1);
        iVar5 = FUN_00fb1f64(&local_50,"fields",6);
        if ((iVar5 == 0) &&
           ((iVar5 = FUN_00fb1f64(&local_50,&DAT_00414a7c,2), iVar5 == 0 &&
            (iVar5 = FUN_00fa948c(&local_50,&DAT_01880dc4,&DAT_00590e71,&local_40), iVar5 == 0)))) {
          iVar5 = FUN_00fb1f64(&local_50,&DAT_00414a81,2);
          goto LAB_00a03f78;
        }
      }
      goto LAB_00a03c54;
    }
    puVar8 = &DAT_0041950f;
    if (local_53 == '\0') {
      puVar8 = &DAT_00414a79;
    }
    uVar9 = 3;
    if (local_53 != '\0') {
      uVar9 = 2;
    }
    iVar5 = (**(code **)(local_58[1] + 0xc))(*local_58,puVar8,uVar9);
    if (((iVar5 != 0) || (iVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1,"fields",6), iVar5 != 0))
       || (iVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2), iVar5 != 0))
    goto LAB_00a03c54;
    iVar5 = FUN_00fa948c(*piVar1,piVar1[1],&DAT_00590e71,&local_40);
LAB_00a03f78:
    piVar1 = local_58;
    local_38 = piVar13[9];
    local_34 = piVar13[10];
    bVar4 = 1;
    if (iVar5 != 0) goto LAB_00a03c64;
    if ((*(byte *)((int)local_58 + 10) & 0x80) == 0) {
      iVar5 = (**(code **)(local_58[1] + 0xc))(*local_58,&DAT_0041950f,2);
      bVar4 = 1;
      if (((iVar5 == 0) &&
          (iVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_0056a160,8), iVar5 == 0)) &&
         (iVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2), iVar5 == 0)) {
        local_50 = &local_38;
        local_4c = FUN_0169b238;
        bVar4 = FUN_00fa948c(*piVar1,piVar1[1],&DAT_00582e3a,&local_50);
      }
      goto LAB_00a03c64;
    }
    local_50 = (int *)*local_58;
    local_4c = (code *)local_58[1];
    local_48 = (int **)&local_21;
    local_21 = 1;
    iVar5 = FUN_00fb1f64(&local_50,&DAT_0056a160,8);
    if ((iVar5 != 0) || (iVar5 = FUN_00fb1f64(&local_50,&DAT_00414a7c,2), iVar5 != 0))
    goto LAB_00a03c64;
    local_30 = &local_38;
    local_2c = FUN_0169b238;
    iVar5 = FUN_00fa948c(&local_50,&DAT_01880dc4,&DAT_00582e3a,&local_30);
    if (iVar5 == 0) {
      bVar4 = FUN_00fb1f64(&local_50,&DAT_00414a81,2);
      goto LAB_00a03c64;
    }
  }
  else {
LAB_00a03c54:
    local_38 = piVar13[9];
    local_34 = piVar13[10];
  }
  bVar4 = 1;
LAB_00a03c64:
  local_53 = 1;
  local_54 = bVar4;
  FUN_00fb2258(&local_58,&DAT_005691b4,4,piVar13 + 0xf,FUN_0169b028);
  if (local_53 != 1 || (local_54 & 1) != 0) {
    return (local_53 | local_54) & 1;
  }
  if ((*(byte *)((int)local_58 + 10) & 0x80) == 0) {
    bVar4 = (**(code **)(local_58[1] + 0xc))(*local_58," }",2);
    return bVar4 & 1;
  }
  bVar4 = (**(code **)(local_58[1] + 0xc))(*local_58,"}",1);
  return bVar4 & 1;
}

