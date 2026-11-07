// FUN_010dffcc @ 010dffcc size=672 calls_out=3 calls_in=0
// strings: align | align

undefined4 FUN_010dffcc(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  code *pcVar10;
  int *piVar11;
  int *local_48;
  char local_44;
  char local_43;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int local_30;
  int local_2c;
  int *local_28;
  undefined1 *local_24;
  int *local_20;
  code *local_1c;
  
  piVar11 = (int *)*param_1;
  local_44 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040c541,6);
  local_43 = '\0';
  local_48 = param_2;
  FUN_00fb2258(&local_48,&DAT_005673b4,4,piVar11 + 1,FUN_007883b8);
  piVar5 = local_48;
  if (local_44 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
    puVar7 = &DAT_0041950f;
    if (local_43 == '\0') {
      puVar7 = &DAT_00414a79;
    }
    uVar9 = 3;
    if (local_43 != '\0') {
      uVar9 = 2;
    }
    iVar6 = (**(code **)(local_48[1] + 0xc))(*local_48,puVar7,uVar9);
    if (iVar6 != 0) {
      return 1;
    }
    iVar6 = (**(code **)(piVar5[1] + 0xc))(*piVar5,"align",5);
    if (iVar6 != 0) {
      return 1;
    }
    iVar6 = (**(code **)(piVar5[1] + 0xc))(*piVar5,&DAT_00414a7c,2);
    if (iVar6 != 0) {
      return 1;
    }
    local_2c = *piVar11;
    bVar2 = (byte)local_2c;
    bVar3 = (byte)((uint)local_2c >> 8);
    bVar4 = (byte)((uint)local_2c >> 0x10);
    bVar1 = (byte)((uint)local_2c >> 0x18);
    local_40 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                        << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                     bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                               bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                             bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8
                       | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    local_20 = &local_40;
    local_28 = &local_2c;
    local_1c = FUN_00fb9db0;
    local_24 = &LAB_00fb9e98;
    iVar6 = FUN_00fa948c(*piVar5,piVar5[1],&DAT_0058b156,&local_28);
  }
  else {
    if ((local_43 == '\0') &&
       (iVar6 = (**(code **)(local_48[1] + 0xc))(*local_48,&DAT_00414a7e,3), iVar6 != 0)) {
      return 1;
    }
    local_38 = &local_31;
    local_40 = *piVar5;
    local_3c = piVar5[1];
    local_31 = 1;
    iVar6 = FUN_00fb1f64(&local_40,"align",5);
    if (iVar6 != 0) {
      return 1;
    }
    iVar6 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2);
    if (iVar6 != 0) {
      return 1;
    }
    local_30 = *piVar11;
    bVar2 = (byte)local_30;
    bVar3 = (byte)((uint)local_30 >> 8);
    bVar4 = (byte)((uint)local_30 >> 0x10);
    bVar1 = (byte)((uint)local_30 >> 0x18);
    local_2c = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                        << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                     bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                               bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                             bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8
                       | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    local_20 = &local_2c;
    local_28 = &local_30;
    local_24 = &LAB_00fb9e98;
    local_1c = FUN_00fb9db0;
    iVar6 = FUN_00fa948c(&local_40,&DAT_01880dc4,&DAT_0058b156,&local_28);
    if (iVar6 != 0) {
      return 1;
    }
    iVar6 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
  }
  if (iVar6 != 0) {
    return 1;
  }
  if ((*(byte *)((int)piVar5 + 10) & 0x80) == 0) {
    iVar6 = *piVar5;
    uVar9 = 2;
    pcVar10 = *(code **)(piVar5[1] + 0xc);
    pcVar8 = " }";
  }
  else {
    iVar6 = *piVar5;
    uVar9 = 1;
    pcVar10 = *(code **)(piVar5[1] + 0xc);
    pcVar8 = "}";
  }
  uVar9 = (*pcVar10)(iVar6,pcVar8,uVar9);
  return uVar9;
}

