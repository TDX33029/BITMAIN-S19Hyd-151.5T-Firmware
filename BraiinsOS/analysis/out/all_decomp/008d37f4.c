// FUN_008d37f4 @ 008d37f4 size=704 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_008d37f4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 local_4c;
  int local_48;
  undefined1 *local_44;
  undefined1 local_3d;
  undefined4 *local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 **local_2c;
  char local_28;
  undefined1 local_27;
  
  uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004144eb,1);
  puVar12 = (uint *)*param_1;
  iVar11 = param_1[3];
  puVar14 = puVar12 + 1;
  uVar8 = ~*puVar12 & 0x80808080;
  bVar3 = false;
LAB_008d385c:
  do {
    bVar2 = bVar3;
    uVar9 = uVar8;
    if (iVar11 == 0) {
      uVar7 = 1;
      if ((uVar5 & 1) == 0) {
        uVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
      }
      return uVar7;
    }
    puVar13 = puVar14;
    if (uVar9 == 0) {
      do {
        puVar14 = puVar13 + 1;
        uVar8 = *puVar13;
        puVar12 = puVar12 + -0xc;
        puVar13 = puVar14;
      } while ((uVar8 & 0x80808080) == 0x80808080);
      uVar9 = uVar8 & 0x80808080 ^ 0x80808080;
    }
    iVar11 = iVar11 + -1;
    uVar8 = uVar9 - 1 & uVar9;
    uVar1 = uVar5 & 1;
    uVar5 = 1;
    bVar3 = true;
  } while (uVar1 != 0);
  uVar5 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                  uVar9 >> 0x18);
  iVar6 = (uVar5 >> 3) * -2 - (uVar5 >> 3);
  uVar7 = *param_2;
  iVar10 = param_2[1];
  if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
    if (!bVar2) goto code_r0x008d3984;
    goto LAB_008d39ac;
  }
  if (bVar2) {
    iVar10 = (**(code **)(iVar10 + 0xc))(uVar7,&DAT_0041950f,2);
    uVar5 = 1;
    bVar3 = true;
    if (iVar10 != 0) goto LAB_008d385c;
    uVar7 = *param_2;
    iVar10 = param_2[1];
  }
  uVar5 = puVar12[iVar6 + -1];
  uVar9 = puVar12[iVar6 + -2];
  bVar4 = (**(code **)(iVar10 + 0xc))(uVar7,&DAT_00418df9,1);
  local_38._0_2_ = (ushort)bVar4;
  local_3c = param_2;
  FUN_008cf9ec(&local_3c,uVar9,uVar9 + uVar5);
  uVar5 = 1;
  bVar3 = true;
  if ((char)local_38 == '\0') {
    uVar5 = (**(code **)(local_3c[1] + 0xc))(*local_3c,&DAT_00418ec5,1);
  }
  goto LAB_008d385c;
code_r0x008d3984:
  iVar10 = (**(code **)(iVar10 + 0xc))(uVar7,&DAT_0041950e,1);
  uVar5 = 1;
  if (iVar10 == 0) {
    uVar7 = *param_2;
    iVar10 = param_2[1];
LAB_008d39ac:
    local_3d = 1;
    local_34 = param_2[2];
    local_30 = param_2[3];
    local_44 = &local_3d;
    local_38 = &DAT_01880dc4;
    local_3c = &local_4c;
    uVar5 = puVar12[iVar6 + -2];
    uVar9 = puVar12[iVar6 + -1];
    local_4c = uVar7;
    local_48 = iVar10;
    local_28 = FUN_00fb1f64(local_3c,&DAT_00418df9,1);
    local_2c = &local_3c;
    local_27 = 0;
    FUN_008cf9ec(&local_2c,uVar5,uVar5 + uVar9);
    if ((local_28 == '\x01') ||
       (iVar6 = (*(code *)local_2c[1][3])(*local_2c,&DAT_00418ec5,1), iVar6 != 0)) {
      uVar5 = 1;
      bVar3 = true;
    }
    else {
      uVar5 = (**(code **)(local_38 + 0xc))(local_3c,&DAT_00414a81,2);
      bVar3 = true;
    }
  }
  goto LAB_008d385c;
}

