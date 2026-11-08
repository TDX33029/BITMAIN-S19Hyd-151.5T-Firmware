// FUN_0100f3fc @ 0100f3fc size=1096 calls_out=6 calls_in=0
// strings: Error | internal_code | getrandom: this target is not supported | description | unknown_code | description

byte FUN_0100f3fc(uint *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  uint *local_b4;
  byte local_b0;
  byte local_af;
  uint local_ac;
  uint local_a8 [2];
  uint *local_a0;
  uint local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  local_b0 = (**(code **)(param_2[1] + 0xc))(*param_2,"Error",5);
  uVar5 = *param_1;
  local_af = 0;
  local_b4 = param_2;
  if ((int)uVar5 < 0) {
    local_a8[0] = uVar5;
    if ((0xe < (uVar5 & 0x7fffffff)) || ((0x79ffU >> (uVar5 & 0xff) & 1) == 0)) {
      FUN_00fb2258(&local_b4,"unknown_code",0xc,local_a8,FUN_007883b8);
      goto LAB_0100f7c8;
    }
    FUN_00fb2258(&local_b4,"internal_code",0xd,local_a8,FUN_007883b8);
    puVar3 = local_b4;
    bVar1 = 1;
    if (local_b0 == 0) {
      puVar9 = *(undefined1 **)(&DAT_0041f35c + uVar5 * 4);
      puVar8 = (&PTR_s_getrandom__this_target_is_not_su_018b1244)[uVar5];
      if ((*(byte *)((int)local_b4 + 10) & 0x80) == 0) {
LAB_0100f668:
        puVar3 = local_b4;
        puVar4 = &DAT_0041950f;
        if (local_af == 0) {
          puVar4 = &DAT_00414a79;
        }
        uVar6 = 3;
        if (local_af != 0) {
          uVar6 = 2;
        }
        iVar2 = (**(code **)(local_b4[1] + 0xc))(*local_b4,puVar4,uVar6);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(puVar3[1] + 0xc))(*puVar3,"description",0xb);
          bVar1 = 1;
          if (iVar2 == 0) {
            iVar2 = (**(code **)(puVar3[1] + 0xc))(*puVar3,&DAT_00414a7c,2);
            bVar1 = 1;
            if (iVar2 == 0) {
              bVar1 = FUN_00faa4e8(puVar8,puVar9,*puVar3,puVar3[1]);
            }
          }
        }
      }
      else {
        if (local_af == 0) {
          iVar2 = (**(code **)(local_b4[1] + 0xc))(*local_b4,&DAT_00414a7e,3);
          bVar1 = 1;
          if (iVar2 != 0) goto LAB_0100f7c0;
        }
        bVar1 = 1;
        local_a0 = &local_28;
        local_a8[0] = *puVar3;
        local_a8[1] = puVar3[1];
        local_28 = CONCAT31(local_28._1_3_,1);
        iVar2 = FUN_00fb1f64(local_a8,"description",0xb);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(local_a8,&DAT_00414a7c,2), iVar2 == 0)) {
          iVar2 = FUN_00faa4e8(puVar8,puVar9,local_a8,&DAT_01880dc4);
          if (iVar2 != 0) goto LAB_0100f7a0;
          puVar3 = local_a8;
LAB_0100f7b4:
          bVar1 = FUN_00fb1f64(puVar3,&DAT_00414a81,2);
        }
      }
    }
  }
  else {
    local_ac = uVar5;
    FUN_00fb2258(&local_b4,&DAT_00569c78,8,&local_ac,FUN_005f0f1c);
    iVar7 = 0;
    FUN_016dd606(local_a8,0,0x80);
    iVar2 = FUN_016dd866(local_ac,local_a8,0x80);
    if (iVar2 != 0) goto LAB_0100f7c8;
    do {
      if (*(char *)((int)local_a8 + iVar7) == '\0') goto LAB_0100f61c;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x80);
    iVar7 = 0x80;
LAB_0100f61c:
    FUN_00fab1e0(&local_28,local_a8,iVar7);
    puVar9 = local_20;
    puVar8 = local_24;
    puVar3 = local_b4;
    if (local_28 != 0) goto LAB_0100f7c8;
    bVar1 = 1;
    if (local_b0 == 0) {
      if ((*(byte *)((int)local_b4 + 10) & 0x80) == 0) goto LAB_0100f668;
      if (local_af == 0) {
        iVar2 = (**(code **)(local_b4[1] + 0xc))(*local_b4,&DAT_00414a7e,3);
        bVar1 = 1;
        if (iVar2 != 0) goto LAB_0100f7c0;
      }
      bVar1 = 1;
      local_20 = &local_19;
      local_28 = *puVar3;
      local_24 = (undefined *)puVar3[1];
      local_19 = 1;
      iVar2 = FUN_00fb1f64(&local_28,"description",0xb);
      if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_28,&DAT_00414a7c,2), iVar2 == 0)) {
        iVar2 = FUN_00faa4e8(puVar8,puVar9,&local_28,&DAT_01880dc4);
        if (iVar2 == 0) {
          puVar3 = &local_28;
          goto LAB_0100f7b4;
        }
LAB_0100f7a0:
        bVar1 = 1;
      }
    }
  }
LAB_0100f7c0:
  local_af = 1;
  local_b0 = bVar1;
LAB_0100f7c8:
  if (local_af != 1 || (local_b0 & 1) != 0) {
    return (local_af | local_b0) & 1;
  }
  if ((*(byte *)((int)local_b4 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_b4[1] + 0xc))(*local_b4," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_b4[1] + 0xc))(*local_b4,"}",1);
  return bVar1 & 1;
}

