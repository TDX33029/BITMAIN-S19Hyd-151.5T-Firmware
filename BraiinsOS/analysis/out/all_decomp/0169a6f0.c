// FUN_0169a6f0 @ 0169a6f0 size=508 calls_out=2 calls_in=0
// strings: 

void FUN_0169a6f0(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar3 = param_2[4];
  if ((uint)param_2[1] <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,param_2[1],&DAT_018ae7cc);
  }
  uVar2 = 1;
  if (*(char *)(param_1 + 1) == '\0') {
    puVar8 = (undefined4 *)*param_1;
    puVar5 = (undefined4 *)(*param_2 + uVar3 * 8);
    uVar10 = *puVar5;
    cVar1 = *(char *)((int)param_1 + 5);
    uVar9 = puVar5[1];
    if ((*(byte *)((int)puVar8 + 10) & 0x80) != 0) {
      if (cVar1 == '\0') {
        iVar4 = (**(code **)(puVar8[1] + 0xc))(*puVar8,&DAT_00414a7e,3);
        uVar2 = 1;
        if (iVar4 != 0) goto LAB_0169a7dc;
      }
      uVar2 = 1;
      local_44 = *puVar8;
      local_40 = puVar8[1];
      local_2c = puVar8[2];
      local_28 = puVar8[3];
      local_3c = &local_35;
      local_34 = &local_44;
      local_30 = &DAT_01880dc4;
      local_35 = 1;
      iVar4 = FUN_00fb1f64(local_34,uVar10,uVar9);
      if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar4 == 0)) {
        iVar4 = (**(code **)(param_4 + 0x10))(param_3,&local_34);
        if (iVar4 == 0) {
          uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
        }
        else {
          uVar2 = 1;
        }
      }
      *(undefined1 *)((int)param_1 + 5) = 1;
      *(undefined1 *)(param_1 + 1) = uVar2;
      return;
    }
    puVar6 = &DAT_0041950f;
    if (cVar1 == '\0') {
      puVar6 = &DAT_00414a79;
    }
    uVar7 = 3;
    if (cVar1 != '\0') {
      uVar7 = 2;
    }
    iVar4 = (**(code **)(puVar8[1] + 0xc))(*puVar8,puVar6,uVar7);
    uVar2 = 1;
    if (iVar4 == 0) {
      iVar4 = (**(code **)(puVar8[1] + 0xc))(*puVar8,uVar10,uVar9);
      uVar2 = 1;
      if (iVar4 == 0) {
        iVar4 = (**(code **)(puVar8[1] + 0xc))(*puVar8,&DAT_00414a7c,2);
        uVar2 = 1;
        if (iVar4 == 0) {
          uVar2 = (**(code **)(param_4 + 0x10))(param_3,puVar8);
        }
      }
    }
  }
LAB_0169a7dc:
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}

