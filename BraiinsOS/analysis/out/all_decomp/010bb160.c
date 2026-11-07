// FUN_010bb160 @ 010bb160 size=876 calls_out=4 calls_in=0
// strings: 

byte FUN_010bb160(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 *local_44;
  byte local_40;
  byte local_3f;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  undefined1 local_21;
  
  uVar9 = *param_2;
  pcVar8 = *(code **)(param_2[1] + 0xc);
  puVar6 = *(undefined4 **)*param_1;
  iVar2 = (*pcVar8)(uVar9,&DAT_0041114c,6);
  iVar7 = 1;
  local_44 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar8)(uVar9,&DAT_00414a79,3);
      iVar7 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568d68,4);
        iVar7 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          iVar7 = 1;
          if (iVar2 == 0) {
            iVar7 = FUN_00faa4e8(*puVar6,puVar6[1],*param_2,param_2[1]);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar8)(uVar9,&DAT_00414a7e,3);
      iVar7 = 1;
      if (iVar2 == 0) {
        local_30 = *param_2;
        local_2c = param_2[1];
        local_28 = &local_3c;
        local_3c = CONCAT31(local_3c._1_3_,1);
        iVar2 = FUN_00fb1f64(&local_30,&DAT_00568d68,4);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar2 == 0)) {
          iVar2 = FUN_00faa4e8(*puVar6,puVar6[1],&local_30,&DAT_01880dc4);
          if (iVar2 == 0) {
            iVar7 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
          }
          else {
            iVar7 = 1;
          }
        }
      }
    }
  }
  local_3f = 1;
  local_40 = (byte)iVar7;
  FUN_00fab1e0(&local_3c,puVar6[2],puVar6[3]);
  if (local_3c == 1) {
    FUN_00fb2258(&local_44,&DAT_00414725,5,puVar6 + 2,FUN_010a70dc);
    bVar4 = local_3f ^ 1;
    bVar1 = local_40;
  }
  else {
    if (iVar7 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414725,5);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      bVar1 = FUN_00faa4e8(local_38,local_34,*param_2,param_2[1]);
    }
    else {
      local_30 = *param_2;
      local_2c = param_2[1];
      local_28 = (int *)&local_21;
      local_21 = 1;
      iVar2 = FUN_00fb1f64(&local_30,&DAT_00414725,5);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00faa4e8(local_38,local_34,&local_30,&DAT_01880dc4);
      if (iVar2 != 0) {
        return 1;
      }
      bVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    }
    bVar4 = 0;
  }
  if ((bVar4 & 1) != 0 || (bVar1 & 1) != 0) {
    return (bVar4 ^ 1 | bVar1) & 1;
  }
  if ((*(byte *)((int)local_44 + 10) & 0x80) == 0) {
    uVar9 = *local_44;
    uVar5 = 2;
    pcVar8 = *(code **)(local_44[1] + 0xc);
    pcVar3 = " }";
  }
  else {
    uVar9 = *local_44;
    uVar5 = 1;
    pcVar8 = *(code **)(local_44[1] + 0xc);
    pcVar3 = "}";
  }
  bVar1 = (*pcVar8)(uVar9,pcVar3,uVar5);
  return bVar1 & 1;
}

