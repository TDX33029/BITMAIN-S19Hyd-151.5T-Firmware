// FUN_009459f4 @ 009459f4 size=1484 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_009459f4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 local_3d;
  undefined4 uStack_3c;
  int iStack_38;
  uint ***local_34;
  uint *local_30;
  uint **local_2c;
  code *local_28;
  
  uVar9 = *param_2;
  iVar10 = param_2[1];
  puVar5 = (uint *)*param_1;
  pcVar8 = *(code **)(iVar10 + 0xc);
  iVar1 = (*pcVar8)(uVar9,&DAT_004146a8,5);
  iVar7 = 1;
  if (*puVar5 == 0x80000003) {
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar8)(uVar9,&DAT_00414a79,3);
        if (((iVar1 == 0) && (iVar1 = (*pcVar8)(uVar9,&DAT_004146b4,6), iVar1 == 0)) &&
           (iVar1 = (*pcVar8)(uVar9,&DAT_00414a7c,2), iVar1 == 0)) {
          iVar7 = FUN_00faa4e8(&DAT_004146ad,7,uVar9,iVar10);
        }
      }
      else {
        iVar1 = (*pcVar8)(uVar9,&DAT_00414a7e,3);
        if (iVar1 == 0) {
          local_34 = &local_2c;
          iVar7 = 1;
          local_2c = (uint **)CONCAT31(local_2c._1_3_,1);
          uStack_3c = uVar9;
          iStack_38 = iVar10;
          iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_004146b4,6);
          if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_00414a7c,2), iVar1 == 0)) {
            iVar1 = FUN_00faa4e8(&DAT_004146ad,7,&uStack_3c,&DAT_01880dc4);
            if (iVar1 == 0) goto LAB_00945cdc;
LAB_00945fb8:
            iVar7 = 1;
          }
        }
      }
    }
  }
  else if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar8)(uVar9,&DAT_00414a79,3);
      if (((iVar1 == 0) && (iVar1 = (*pcVar8)(uVar9,&DAT_004146b4,6), iVar1 == 0)) &&
         (iVar1 = (*pcVar8)(uVar9,&DAT_00414a7c,2), iVar1 == 0)) {
        iVar7 = FUN_009268a0(puVar5,uVar9,iVar10);
      }
    }
    else {
      iVar1 = (*pcVar8)(uVar9,&DAT_00414a7e,3);
      if (iVar1 == 0) {
        local_34 = (uint ***)&local_3d;
        iVar7 = 1;
        local_3d = 1;
        uStack_3c = uVar9;
        iStack_38 = iVar10;
        iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_004146b4,6);
        if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_00414a7c,2), iVar1 == 0)) {
          uVar2 = 1;
          if ((int)*puVar5 < 0) {
            uVar2 = *puVar5 ^ 0x80000000;
          }
          if (uVar2 == 0) {
            iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_00414711,5);
          }
          else {
            if (uVar2 == 1) {
              local_28 = (code *)&LAB_0157d350;
              local_30 = puVar5;
            }
            else {
              local_30 = puVar5 + 1;
              local_28 = FUN_00932f04;
            }
            local_2c = &local_30;
            iVar1 = FUN_00fa948c(&uStack_3c,&DAT_01880dc4,&DAT_00590e71,&local_2c);
          }
          if (iVar1 != 0) goto LAB_00945fb8;
LAB_00945cdc:
          iVar7 = FUN_00fb1f64(&uStack_3c,&DAT_00414a81,2);
        }
      }
    }
  }
  puVar6 = puVar5 + 3;
  if (*puVar6 == 0x80000003) {
    if (iVar7 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar8)(uVar9,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar8)(uVar9,&DAT_004146ba,6);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar8)(uVar9,&DAT_00414a7c,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00faa4e8(&DAT_004146ad,7,uVar9,iVar10);
      goto LAB_00945f14;
    }
    local_34 = &local_2c;
    local_2c = (uint **)CONCAT31(local_2c._1_3_,1);
    uStack_3c = uVar9;
    iStack_38 = iVar10;
    iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_004146ba,6);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00faa4e8(&DAT_004146ad,7,&uStack_3c,&DAT_01880dc4);
  }
  else {
    if (iVar7 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar8)(uVar9,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar8)(uVar9,&DAT_004146ba,6);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar8)(uVar9,&DAT_00414a7c,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_009268a0(puVar6,uVar9,iVar10);
      goto LAB_00945f14;
    }
    local_34 = (uint ***)&local_3d;
    local_3d = 1;
    uStack_3c = uVar9;
    iStack_38 = iVar10;
    iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_004146ba,6);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 1;
    if ((int)*puVar6 < 0) {
      uVar2 = *puVar6 ^ 0x80000000;
    }
    if (uVar2 == 0) {
      iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_00414711,5);
    }
    else {
      if (uVar2 == 1) {
        local_28 = (code *)&LAB_0157d350;
        local_30 = puVar6;
      }
      else {
        local_30 = puVar5 + 4;
        local_28 = FUN_00932f04;
      }
      local_2c = &local_30;
      iVar1 = FUN_00fa948c(&uStack_3c,&DAT_01880dc4,&DAT_00590e71,&local_2c);
    }
  }
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00fb1f64(&uStack_3c,&DAT_00414a81,2);
LAB_00945f14:
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    uVar4 = 2;
    pcVar3 = " }";
  }
  else {
    uVar4 = 1;
    pcVar3 = "}";
  }
  uVar9 = (*pcVar8)(uVar9,pcVar3,uVar4);
  return uVar9;
}

