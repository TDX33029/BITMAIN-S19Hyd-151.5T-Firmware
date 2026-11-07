// FUN_009d4e0c @ 009d4e0c size=1252 calls_out=3 calls_in=0
// strings: Descriptor

undefined4 FUN_009d4e0c(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  int *local_54;
  char local_50;
  char local_4f;
  int local_4c;
  int local_48;
  undefined1 *local_44;
  undefined1 local_3d;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int **local_28;
  byte local_24;
  char local_23;
  
  iVar11 = *param_2;
  pcVar10 = *(code **)(param_2[1] + 0xc);
  iVar4 = (*pcVar10)(iVar11,"Descriptor",10);
  cVar2 = '\x01';
  local_54 = param_2;
  if (iVar4 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar4 = (*pcVar10)(iVar11,&DAT_00414a79,3);
      cVar2 = '\x01';
      if (iVar4 == 0) {
        iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568d68,4);
        cVar2 = '\x01';
        if (iVar4 == 0) {
          iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          cVar2 = '\x01';
          if (iVar4 == 0) {
            cVar2 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                                 *param_2,param_2[1]);
          }
        }
      }
    }
    else {
      iVar4 = (*pcVar10)(iVar11,&DAT_00414a7e,3);
      cVar2 = '\x01';
      if (iVar4 == 0) {
        local_3c = (int *)*param_2;
        local_38 = (undefined *)param_2[1];
        local_34 = &local_4c;
        local_4c = CONCAT31(local_4c._1_3_,1);
        iVar4 = FUN_00fb1f64(&local_3c,&DAT_00568d68,4);
        if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_3c,&DAT_00414a7c,2), iVar4 == 0)) {
          iVar4 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                               &local_3c,&DAT_01880dc4);
          if (iVar4 == 0) {
            cVar2 = FUN_00fb1f64(&local_3c,&DAT_00414a81,2);
          }
          else {
            cVar2 = '\x01';
          }
        }
      }
    }
  }
  local_4f = '\x01';
  local_50 = cVar2;
  FUN_00fb2258(&local_54,&DAT_0034aef6,9,param_1 + 0x54,FUN_007883b8);
  piVar1 = local_54;
  if (local_50 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_54 + 10) & 0x80) == 0) {
    puVar7 = &DAT_0041950f;
    if (local_4f == '\0') {
      puVar7 = &DAT_00414a79;
    }
    uVar9 = 3;
    if (local_4f != '\0') {
      uVar9 = 2;
    }
    iVar4 = (**(code **)(local_54[1] + 0xc))(*local_54,puVar7,uVar9);
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_0034aeff,0xe);
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2);
    if (iVar4 != 0) {
      return 1;
    }
    local_4c = param_1 + 0x38;
    uVar3 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_0034af0d,0xd);
    local_38 = (undefined *)(CONCAT31((int3)((uint)local_38 >> 8),uVar3) & 0xffff00ff);
    local_3c = piVar1;
    FUN_00fb2258(&local_3c,&DAT_00568bbc,4,&local_4c,FUN_00d47d08);
    uVar5 = (uint)local_38 & 0xff;
    if (local_38._1_1_ == '\x01' && uVar5 == 0) {
      if ((*(byte *)((int)local_3c + 10) & 0x80) == 0) {
        iVar4 = (**(code **)(local_3c[1] + 0xc))(*local_3c," }",2);
        if (iVar4 != 0) {
          return 1;
        }
        goto LAB_009d527c;
      }
      uVar5 = (**(code **)(local_3c[1] + 0xc))(*local_3c,"}",1);
    }
    else if (local_38._1_1_ != '\0') {
      return 1;
    }
  }
  else {
    if ((local_4f == '\0') &&
       (iVar4 = (**(code **)(local_54[1] + 0xc))(*local_54,&DAT_00414a7e,3), iVar4 != 0)) {
      return 1;
    }
    local_34 = (int *)piVar1[2];
    local_30 = piVar1[3];
    local_44 = &local_3d;
    local_4c = *piVar1;
    local_48 = piVar1[1];
    local_3c = &local_4c;
    local_38 = &DAT_01880dc4;
    local_3d = 1;
    iVar4 = FUN_00fb1f64(local_3c,&DAT_0034aeff,0xe);
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = FUN_00fb1f64(&local_4c,&DAT_00414a7c,2);
    if (iVar4 != 0) {
      return 1;
    }
    local_2c = param_1 + 0x38;
    local_24 = FUN_00fb1f64(&local_4c,&DAT_0034af0d,0xd);
    local_28 = &local_3c;
    local_23 = '\0';
    FUN_00fb2258(&local_28,&DAT_00568bbc,4,&local_2c,FUN_00d47d08);
    uVar5 = (uint)local_24;
    if (local_23 == '\x01' && uVar5 == 0) {
      if ((*(byte *)((int)local_28 + 10) & 0x80) == 0) {
        piVar6 = *local_28;
        uVar9 = 2;
        pcVar10 = (code *)local_28[1][3];
        pcVar8 = " }";
      }
      else {
        piVar6 = *local_28;
        uVar9 = 1;
        pcVar10 = (code *)local_28[1][3];
        pcVar8 = "}";
      }
      uVar5 = (*pcVar10)(piVar6,pcVar8,uVar9);
    }
    else if (local_23 != '\0') {
      return 1;
    }
    if (uVar5 != 0) {
      return 1;
    }
    uVar5 = (**(code **)(local_38 + 0xc))(local_3c,&DAT_00414a81,2);
  }
  if (uVar5 != 0) {
    return 1;
  }
LAB_009d527c:
  if ((*(byte *)((int)piVar1 + 10) & 0x80) == 0) {
    iVar4 = *piVar1;
    uVar9 = 2;
    pcVar10 = *(code **)(piVar1[1] + 0xc);
    pcVar8 = " }";
  }
  else {
    iVar4 = *piVar1;
    uVar9 = 1;
    pcVar10 = *(code **)(piVar1[1] + 0xc);
    pcVar8 = "}";
  }
  uVar9 = (*pcVar10)(iVar4,pcVar8,uVar9);
  return uVar9;
}

