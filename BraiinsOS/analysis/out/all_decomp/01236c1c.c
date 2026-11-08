// FUN_01236c1c @ 01236c1c size=688 calls_out=3 calls_in=0
// strings: CompileError | ParseError

undefined4 FUN_01236c1c(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined *puVar9;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 local_29;
  uint *local_28;
  undefined *local_24;
  uint *local_20;
  uint local_1c;
  
  puVar5 = (uint *)*param_1;
  iVar1 = *puVar5 - 0xf;
  if (*puVar5 < 0xf) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    local_28 = puVar5;
    uVar3 = FUN_00fb2978(param_2,"ParseError",10,puVar5 + 4,FUN_007883b8,&local_28,&LAB_01236f10);
    return uVar3;
  }
  if (iVar1 == 1) {
    uVar6 = *param_2;
    uVar8 = param_2[1];
    pcVar4 = *(code **)(uVar8 + 0xc);
    iVar1 = (*pcVar4)(uVar6,"CompileError",0xc);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(uVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_011df348(puVar5 + 1,param_2);
    }
    else {
      iVar1 = (*pcVar4)(uVar6,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_30 = &local_29;
      local_24 = &DAT_01880dc4;
      local_28 = &local_38;
      local_20 = (uint *)param_2[2];
      local_1c = param_2[3];
      local_29 = 1;
      local_38 = uVar6;
      local_34 = uVar8;
      iVar1 = FUN_011df348(puVar5 + 1,&local_28);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2);
    }
  }
  else {
    puVar7 = (uint *)*param_2;
    puVar9 = (undefined *)param_2[1];
    pcVar4 = *(code **)(puVar9 + 0xc);
    iVar1 = (*pcVar4)(puVar7,&DAT_003b5108,0xc);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(puVar7,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = 0xd;
      puVar9 = &DAT_003b5207;
      if ((char)puVar5[1] != '\0') {
        uVar3 = 0x16;
        puVar9 = &DAT_003b5214;
      }
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,puVar9,uVar3);
    }
    else {
      iVar1 = (*pcVar4)(puVar7,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_20 = &local_38;
      puVar2 = &DAT_003b5207;
      uVar3 = 0xd;
      if ((char)puVar5[1] != '\0') {
        uVar3 = 0x16;
        puVar2 = &DAT_003b5214;
      }
      local_38 = CONCAT31(local_38._1_3_,1);
      local_28 = puVar7;
      local_24 = puVar9;
      iVar1 = FUN_00fb1f64(&local_28,puVar2,uVar3);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00fb1f64(&local_28,&DAT_00414a81,2);
    }
  }
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
  }
  return uVar3;
}

