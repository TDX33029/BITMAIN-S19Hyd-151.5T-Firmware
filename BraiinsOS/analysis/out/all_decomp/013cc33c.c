// FUN_013cc33c @ 013cc33c size=664 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_013cc33c(char *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar7 = *param_2;
  iVar8 = param_2[1];
  pcVar9 = *(code **)(iVar8 + 0xc);
  iVar1 = (*pcVar9)(uVar7,&DAT_00418df9,1);
  uVar3 = param_2[3];
  uVar10 = 1;
  uVar6 = param_2[2];
  if (iVar1 == 0) {
    if ((uVar6 & 0x800000) == 0) {
      if (*param_1 == '\0') {
        uVar5 = 5;
        puVar4 = &DAT_00414fdc;
      }
      else {
        uVar5 = 4;
        puVar4 = &DAT_00568b2c;
      }
      uVar10 = FUN_00faace8(param_2,puVar4,uVar5);
    }
    else {
      iVar1 = (*pcVar9)(uVar7,&DAT_0041950e,1);
      if (iVar1 == 0) {
        local_35 = 1;
        local_3c = &local_35;
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        if (*param_1 == '\0') {
          local_44 = uVar7;
          local_40 = iVar8;
          local_2c = uVar6;
          local_28 = uVar3;
          iVar1 = FUN_00faace8(&local_34,&DAT_00414fdc,5);
        }
        else {
          local_44 = uVar7;
          local_40 = iVar8;
          local_2c = uVar6;
          local_28 = uVar3;
          iVar1 = FUN_00faace8(&local_34,&DAT_00568b2c,4);
        }
        if (iVar1 == 0) {
          uVar10 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
        }
        else {
          uVar10 = 1;
        }
      }
    }
  }
  iVar1 = 1;
  do {
    if ((uVar10 & 1) == 0) {
      if ((uVar6 & 0x800000) == 0) {
        iVar2 = (*pcVar9)(uVar7,&DAT_0041950f,2);
        uVar10 = 1;
        if (iVar2 == 0) {
          if (param_1[iVar1] == '\0') {
            uVar5 = 5;
            puVar4 = &DAT_00414fdc;
          }
          else {
            uVar5 = 4;
            puVar4 = &DAT_00568b2c;
          }
          uVar10 = FUN_00faace8(param_2,puVar4,uVar5);
        }
      }
      else {
        local_35 = 1;
        local_3c = &local_35;
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        if (param_1[iVar1] == '\x01') {
          local_44 = uVar7;
          local_40 = iVar8;
          local_2c = uVar6;
          local_28 = uVar3;
          iVar2 = FUN_00faace8(&local_34,&DAT_00568b2c,4);
        }
        else {
          local_44 = uVar7;
          local_40 = iVar8;
          local_2c = uVar6;
          local_28 = uVar3;
          iVar2 = FUN_00faace8(&local_34,&DAT_00414fdc,5);
        }
        if (iVar2 != 0) goto LAB_013cc474;
        uVar10 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
      }
    }
    else {
LAB_013cc474:
      uVar10 = 1;
    }
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x100) {
      uVar3 = 1;
      if (uVar10 == 0) {
        uVar3 = (*pcVar9)(uVar7,&DAT_00418ec5,1);
      }
      return uVar3;
    }
  } while( true );
}

