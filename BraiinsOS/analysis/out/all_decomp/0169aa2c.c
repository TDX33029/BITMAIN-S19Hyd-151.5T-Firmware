// FUN_0169aa2c @ 0169aa2c size=572 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0169aa2c(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  uint local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  
  uVar6 = *param_2;
  iVar8 = param_2[1];
  pcVar5 = *(code **)(iVar8 + 0xc);
  iVar1 = (*pcVar5)(uVar6,&DAT_00414a83,0xb);
  if (iVar1 != 0) {
    return 1;
  }
  uVar4 = *param_1;
  puVar9 = param_2 + 2;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar5)(uVar6,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    uVar7 = *puVar9;
    uVar6 = param_2[3];
    uVar2 = uVar7;
    if ((uVar7 & 0x800000) != 0) {
      if ((uVar7 & 0x8000000) == 0) {
        *(undefined2 *)(param_2 + 3) = 10;
        uVar2 = uVar7 | 0x9000000;
      }
      else {
        uVar2 = uVar7 | 0x1000000;
      }
    }
    *puVar9 = uVar2 | 0x800000;
    iVar1 = 7;
    do {
      iVar8 = iVar1;
      uVar2 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_28[iVar8 + -0x10] = (&DAT_00563e90)[uVar2];
      iVar1 = iVar8 + -1;
    } while (uVar4 != 0);
    iVar1 = FUN_00fa9698(param_2,1,"0x",2,auStack_28 + iVar8 + -0x10,9 - (iVar8 + 1));
    *puVar9 = uVar7;
    param_2[3] = uVar6;
  }
  else {
    iVar1 = (*pcVar5)(uVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_40 = &local_39;
    local_39 = 1;
    local_30 = *puVar9;
    local_2c = param_2[3];
    local_34 = &DAT_01880dc4;
    local_38 = &local_48;
    if ((local_30 & 0x800000) != 0) {
      if ((local_30 & 0x8000000) == 0) {
        local_30 = local_30 | 0x9000000;
        uVar2 = (uint)local_2c >> 0x10;
        local_2c = CONCAT22((short)uVar2,10);
      }
      else {
        local_30 = local_30 | 0x1000000;
      }
    }
    local_30 = local_30 | 0x800000;
    iVar1 = 7;
    do {
      iVar3 = iVar1;
      uVar2 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_28[iVar3] = (&DAT_00563e90)[uVar2];
      iVar1 = iVar3 + -1;
    } while (uVar4 != 0);
    local_48 = uVar6;
    local_44 = iVar8;
    iVar1 = FUN_00fa9698(&local_38,1,"0x",2,auStack_28 + iVar3,9 - (iVar3 + 1));
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar6;
  }
  return 1;
}

