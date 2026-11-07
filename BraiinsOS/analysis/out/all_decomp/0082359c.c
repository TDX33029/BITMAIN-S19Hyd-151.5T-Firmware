// FUN_0082359c @ 0082359c size=644 calls_out=7 calls_in=1
// strings: 

undefined8 FUN_0082359c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined8 *puVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  uint uVar7;
  undefined1 local_58;
  undefined1 local_57;
  byte local_56;
  undefined4 local_4c;
  undefined1 auStack_48 [12];
  undefined8 local_3c;
  undefined4 *puStack_34;
  undefined4 local_30;
  ushort *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined4 **local_20;
  undefined1 *local_1c;
  
  FUN_00873008(&local_30,param_1,param_2,param_3);
  puVar3 = local_28;
  puVar2 = local_2c;
  puVar1 = local_30;
  if (local_30 == (undefined8 *)&DAT_80000000) {
    return CONCAT44(local_2c,1);
  }
  uVar4 = local_20._0_1_;
  uVar7 = (uint)local_20 & 0xff;
  FUN_008224dc(&local_30);
  puVar6 = local_2c;
  if ((char)local_30 != '\x01') {
    if (uVar7 == local_30._1_1_) {
      if ((param_3 & 0xff) == 0) {
        local_4c = 2;
        if (puVar3 != (undefined4 *)&SUB_00000002) {
          local_3c = FUN_00821790();
          puStack_34 = puVar3;
          local_20 = &puStack_34;
          local_28 = &local_4c;
          local_30 = &local_3c;
          local_1c = &LAB_00fac484;
          local_24 = &LAB_00fac484;
          local_2c = (ushort *)&DAT_0157d360;
          FUN_00600d2c(auStack_48,&DAT_00588618,&local_30);
          puVar6 = (ushort *)FUN_00808de4(auStack_48);
          goto LAB_0082380c;
        }
LAB_008236ec:
        local_4c = 2;
        puVar6 = (ushort *)(uint)*puVar2;
        uVar5 = 0;
      }
      else {
        if ((param_3 & 0xff) == 1) {
          local_4c = 4;
          if (puVar3 == (undefined4 *)&DAT_00000004) {
            puVar6 = *(ushort **)puVar2;
            uVar5 = 0;
            local_3c = CONCAT44(local_3c._4_4_,(undefined4)local_3c);
            goto joined_r0x00823660;
          }
          local_3c = FUN_00821790();
          puStack_34 = puVar3;
          local_20 = &puStack_34;
          local_28 = &local_4c;
          local_30 = &local_3c;
          local_1c = &LAB_00fac484;
          local_24 = &LAB_00fac484;
          local_2c = (ushort *)&DAT_0157d360;
          FUN_00600d2c(auStack_48,&DAT_00588618,&local_30);
          puVar6 = (ushort *)FUN_00808de4(auStack_48);
        }
        else {
          local_4c = 2;
          if (puVar3 == (undefined4 *)&SUB_00000002) goto LAB_008236ec;
          local_3c = FUN_00821790();
          puStack_34 = puVar3;
          local_20 = &puStack_34;
          local_28 = &local_4c;
          local_30 = &local_3c;
          local_1c = &LAB_00fac484;
          local_24 = &LAB_00fac484;
          local_2c = (ushort *)&DAT_0157d360;
          FUN_00600d2c(auStack_48,&DAT_00588618,&local_30);
          puVar6 = (ushort *)FUN_00808de4(auStack_48);
        }
LAB_0082380c:
        uVar5 = 1;
      }
joined_r0x00823660:
      if (puVar1 != (undefined8 *)0x0) {
        thunk_FUN_016d3fb4(puVar2);
        return CONCAT44(puVar6,uVar5);
      }
      goto LAB_00823614;
    }
    local_56 = local_30._1_1_;
    local_57 = uVar4;
    local_58 = 4;
    puVar6 = (ushort *)FUN_0080b0cc(&local_58);
  }
  uVar5 = 1;
  if (puVar1 != (undefined8 *)0x0) {
    thunk_FUN_016d3fb4(puVar2);
    uVar5 = 1;
  }
LAB_00823614:
  return CONCAT44(puVar6,uVar5);
}

