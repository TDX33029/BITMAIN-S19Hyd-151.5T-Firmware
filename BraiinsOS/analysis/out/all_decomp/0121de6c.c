// FUN_0121de6c @ 0121de6c size=1136 calls_out=4 calls_in=1
// strings: Authority | userinfo | host_parsedIpvFutureRegName

byte FUN_0121de6c(int *param_1,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *local_44;
  byte local_40;
  byte local_3f;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int *local_24;
  
  local_40 = (**(code **)(param_2[1] + 0xc))(*param_2,"Authority",9);
  local_3c = 0;
  local_3f = 0;
  local_44 = param_2;
  if (param_1[2] != 0) {
    local_3c = *param_1;
    uVar8 = param_1[2] - 1;
    if (uVar8 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = param_1[1];
      if (uVar8 < local_38) {
        if (*(char *)(local_3c + uVar8) < -0x40) goto LAB_0121e2d8;
        local_38 = uVar8;
      }
      else if (uVar8 != local_38) {
LAB_0121e2d8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(local_3c,local_38,0,uVar8,&DAT_01882274);
      }
    }
  }
  FUN_00fb2258(&local_44,"userinfo",8,&local_3c,FUN_0121e33c);
  puVar1 = local_44;
  iVar3 = *param_1;
  uVar8 = param_1[1];
  uVar6 = param_1[2];
  uVar9 = param_1[3];
  if (uVar9 < uVar6) goto LAB_0121e170;
  if (uVar6 != 0) {
    if (uVar6 < uVar8) {
      if (*(char *)(iVar3 + uVar6) < -0x40) goto LAB_0121e170;
    }
    else if (uVar6 != uVar8) goto LAB_0121e170;
  }
  if (uVar9 != 0) {
    if (uVar9 < uVar8) {
      if (*(char *)(iVar3 + uVar9) < -0x40) goto LAB_0121e170;
    }
    else if (uVar9 != uVar8) goto LAB_0121e170;
  }
  bVar2 = 1;
  if (local_40 == 0) {
    if ((*(byte *)((int)local_44 + 10) & 0x80) == 0) {
      puVar5 = &DAT_0041950f;
      if (local_3f == 0) {
        puVar5 = &DAT_00414a79;
      }
      uVar7 = 3;
      if (local_3f != 0) {
        uVar7 = 2;
      }
      iVar4 = (**(code **)(local_44[1] + 0xc))(*local_44,puVar5,uVar7);
      bVar2 = 1;
      if (iVar4 == 0) {
        iVar4 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00567708,4);
        bVar2 = 1;
        if (iVar4 == 0) {
          iVar4 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
          bVar2 = 1;
          if (iVar4 == 0) {
            bVar2 = FUN_00faa4e8(iVar3 + uVar6,uVar9 - uVar6,*puVar1,puVar1[1]);
          }
        }
      }
    }
    else {
      if (local_3f == 0) {
        iVar4 = (**(code **)(local_44[1] + 0xc))(*local_44,&DAT_00414a7e,3);
        bVar2 = 1;
        if (iVar4 != 0) goto LAB_0121df8c;
      }
      local_24 = &local_34;
      local_2c = *puVar1;
      local_28 = puVar1[1];
      bVar2 = 1;
      local_34 = CONCAT31(local_34._1_3_,1);
      iVar4 = FUN_00fb1f64(&local_2c,&DAT_00567708,4);
      if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_2c,&DAT_00414a7c,2), iVar4 == 0)) {
        iVar3 = FUN_00faa4e8(iVar3 + uVar6,uVar9 - uVar6,&local_2c,&DAT_01880dc4);
        if (iVar3 == 0) {
          bVar2 = FUN_00fb1f64(&local_2c,&DAT_00414a81,2);
        }
        else {
          bVar2 = 1;
        }
      }
    }
  }
LAB_0121df8c:
  uVar8 = (uint)*(byte *)(param_1 + 4);
  local_3f = 1;
  local_40 = bVar2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 4)) {
  case 1:
    uVar8 = 1;
    break;
  case 2:
    uVar8 = 2;
    break;
  case 3:
    iVar3 = *param_1;
    uVar8 = param_1[1];
    uVar6 = param_1[2];
    uVar9 = param_1[3];
    if (uVar9 < uVar6) goto LAB_0121e170;
    if (uVar6 != 0) {
      if (uVar6 < uVar8) {
        if (*(char *)(iVar3 + uVar6) < -0x40) goto LAB_0121e170;
      }
      else if (uVar6 != uVar8) goto LAB_0121e170;
    }
    if (uVar9 != 0) {
      if (uVar9 < uVar8) {
        if (*(char *)(iVar3 + uVar9) < -0x40) goto LAB_0121e170;
      }
      else if (uVar9 != uVar8) {
LAB_0121e170:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac();
      }
    }
    local_28 = iVar3 + uVar6;
    uVar8 = 3;
    local_24 = (int *)(uVar9 - uVar6);
  }
  local_2c = uVar8;
  FUN_00fb2258(&local_44,"host_parsedIpvFutureRegName",0xb,&local_2c,&LAB_013583e0);
  uVar8 = param_1[1];
  local_30 = param_1[3];
  if (local_30 == uVar8) {
    local_34 = 0;
  }
  else {
    uVar6 = local_30 + 1;
    if (local_30 != 0xffffffff) {
      if (uVar6 < uVar8) {
        if (*(char *)(*param_1 + uVar6) < -0x40) goto LAB_0121e1fc;
      }
      else if (uVar8 != uVar6) {
LAB_0121e1fc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac();
      }
    }
    local_34 = *param_1 + uVar6;
    local_30 = uVar8 - uVar6;
  }
  FUN_00fb2258(&local_44,&DAT_00569248,4,&local_34,FUN_0121e33c);
  if (local_3f != 1 || (local_40 & 1) != 0) {
    return (local_3f | local_40) & 1;
  }
  if ((*(byte *)((int)local_44 + 10) & 0x80) == 0) {
    bVar2 = (**(code **)(local_44[1] + 0xc))(*local_44," }",2);
    return bVar2 & 1;
  }
  bVar2 = (**(code **)(local_44[1] + 0xc))(*local_44,"}",1);
  return bVar2 & 1;
}

