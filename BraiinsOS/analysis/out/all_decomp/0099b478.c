// FUN_0099b478 @ 0099b478 size=912 calls_out=2 calls_in=0
// strings: Mutex | is_locked | is_locked | has_waitersthere should be an error | has_waitersthere should be an error

undefined4 FUN_0099b478(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar7 = *param_1;
  DataMemoryBarrier(0xb);
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(uVar5,"Mutex",5);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar4)(uVar5,&DAT_00414a79,3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar4)(uVar5,"is_locked",9);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar4)(uVar5,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((uVar7 & 1) == 0) {
      uVar3 = 5;
      puVar2 = &DAT_00414fdc;
    }
    else {
      uVar3 = 4;
      puVar2 = &DAT_00568b2c;
    }
    iVar1 = FUN_00faace8(param_2,puVar2,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = (*pcVar4)(uVar5,&DAT_00414a7e,3);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_34 = &local_44;
    local_30 = &DAT_01880dc4;
    local_35 = 1;
    local_44 = uVar5;
    local_40 = iVar6;
    iVar1 = FUN_00fb1f64(local_34,"is_locked",9);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((uVar7 & 1) == 0) {
      uVar3 = 5;
      puVar2 = &DAT_00414fdc;
    }
    else {
      uVar3 = 4;
      puVar2 = &DAT_00568b2c;
    }
    iVar1 = FUN_00faace8(&local_34,puVar2,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar8 = (uVar7 & 0xff) >> 1;
  uVar7 = param_2[2];
  if ((uVar7 & 0x800000) == 0) {
    iVar1 = (*pcVar4)(uVar5,&DAT_0041950f,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar4)(uVar5,"has_waitersthere should be an error",0xb);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar4)(uVar5,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((uVar8 & 1) == 0) {
      uVar3 = 5;
      puVar2 = &DAT_00414fdc;
    }
    else {
      uVar3 = 4;
      puVar2 = &DAT_00568b2c;
    }
    iVar1 = FUN_00faace8(param_2,puVar2,uVar3);
  }
  else {
    local_3c = &local_35;
    local_35 = 1;
    uVar7 = param_2[2];
    local_28 = param_2[3];
    local_34 = &local_44;
    local_30 = &DAT_01880dc4;
    local_44 = uVar5;
    local_40 = iVar6;
    local_2c = uVar7;
    iVar1 = FUN_00fb1f64(local_34,"has_waitersthere should be an error",0xb);
    if ((iVar1 != 0) || (iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar1 != 0)) {
      return 1;
    }
    if ((uVar8 & 1) == 0) {
      uVar3 = 5;
      puVar2 = &DAT_00414fdc;
    }
    else {
      uVar3 = 4;
      puVar2 = &DAT_00568b2c;
    }
    iVar1 = FUN_00faace8(&local_34,puVar2,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
  }
  if (iVar1 != 0) {
    return 1;
  }
  if ((uVar7 & 0x800000) == 0) {
    uVar5 = (*pcVar4)(uVar5," }",2);
    return uVar5;
  }
  uVar5 = (*pcVar4)(uVar5,"}",1);
  return uVar5;
}

