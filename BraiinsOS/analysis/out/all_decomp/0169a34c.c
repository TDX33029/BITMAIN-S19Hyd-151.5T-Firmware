// FUN_0169a34c @ 0169a34c size=568 calls_out=3 calls_in=0
// strings: 

void FUN_0169a34c(undefined4 *param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uStack_44;
  undefined4 uStack_40;
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
  if (*(char *)(param_1 + 1) == '\0') {
    puVar10 = (undefined4 *)*param_1;
    puVar5 = (undefined4 *)(*param_2 + uVar3 * 8);
    uVar9 = *puVar5;
    cVar1 = *(char *)((int)param_1 + 5);
    uVar11 = puVar5[1];
    if ((*(byte *)((int)puVar10 + 10) & 0x80) == 0) {
      puVar6 = &DAT_0041950f;
      if (cVar1 == '\0') {
        puVar6 = &DAT_00414a79;
      }
      uVar8 = 3;
      if (cVar1 != '\0') {
        uVar8 = 2;
      }
      iVar4 = (**(code **)(puVar10[1] + 0xc))(*puVar10,puVar6,uVar8);
      if (((iVar4 == 0) &&
          (iVar4 = (**(code **)(puVar10[1] + 0xc))(*puVar10,uVar9,uVar11), iVar4 == 0)) &&
         (iVar4 = (**(code **)(puVar10[1] + 0xc))(*puVar10,&DAT_00414a7c,2), iVar4 == 0)) {
        if (param_3 == 0) {
          uVar9 = 5;
          puVar7 = &DAT_00414fdc;
        }
        else {
          uVar9 = 4;
          puVar7 = &DAT_00568b2c;
        }
        uVar2 = FUN_00faace8(puVar10,puVar7,uVar9);
LAB_0169a560:
        *(undefined1 *)((int)param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 1) = uVar2;
        return;
      }
    }
    else if ((cVar1 != '\0') ||
            (iVar4 = (**(code **)(puVar10[1] + 0xc))(*puVar10,&DAT_00414a7e,3), iVar4 == 0)) {
      uStack_44 = *puVar10;
      uStack_40 = puVar10[1];
      local_2c = puVar10[2];
      local_28 = puVar10[3];
      local_3c = &local_35;
      local_34 = &uStack_44;
      local_30 = &DAT_01880dc4;
      local_35 = 1;
      iVar4 = FUN_00fb1f64(local_34,uVar9,uVar11);
      if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&uStack_44,&DAT_00414a7c,2), iVar4 == 0)) {
        if (param_3 == 0) {
          iVar4 = FUN_00faace8(&local_34,&DAT_00414fdc,5);
        }
        else {
          iVar4 = FUN_00faace8(&local_34,&DAT_00568b2c,4);
        }
        if (iVar4 != 0) {
          *(undefined1 *)((int)param_1 + 5) = 1;
          *(undefined1 *)(param_1 + 1) = 1;
          return;
        }
        uVar2 = FUN_00fb1f64(&uStack_44,&DAT_00414a81,2);
        goto LAB_0169a560;
      }
    }
  }
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

