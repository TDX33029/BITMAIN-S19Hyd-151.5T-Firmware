// FUN_0169a0e8 @ 0169a0e8 size=480 calls_out=3 calls_in=0
// strings: 

void FUN_0169a0e8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 *local_2c;
  undefined1 local_25;
  
  uVar3 = param_2[4];
  if ((uint)param_2[1] <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,param_2[1],&DAT_018ae7cc);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    puVar9 = (undefined4 *)*param_1;
    puVar5 = (undefined4 *)(*param_2 + uVar3 * 8);
    uVar8 = *puVar5;
    cVar1 = *(char *)((int)param_1 + 5);
    uVar10 = puVar5[1];
    if ((*(byte *)((int)puVar9 + 10) & 0x80) == 0) {
      puVar6 = &DAT_0041950f;
      if (cVar1 == '\0') {
        puVar6 = &DAT_00414a79;
      }
      uVar7 = 3;
      if (cVar1 != '\0') {
        uVar7 = 2;
      }
      iVar4 = (**(code **)(puVar9[1] + 0xc))(*puVar9,puVar6,uVar7);
      if (((iVar4 == 0) &&
          (iVar4 = (**(code **)(puVar9[1] + 0xc))(*puVar9,uVar8,uVar10), iVar4 == 0)) &&
         (iVar4 = (**(code **)(puVar9[1] + 0xc))(*puVar9,&DAT_00414a7c,2), iVar4 == 0)) {
        uVar2 = FUN_00faa4e8(param_3,param_4,*puVar9,puVar9[1]);
LAB_0169a2a4:
        *(undefined1 *)((int)param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 1) = uVar2;
        return;
      }
    }
    else if ((cVar1 != '\0') ||
            (iVar4 = (**(code **)(puVar9[1] + 0xc))(*puVar9,&DAT_00414a7e,3), iVar4 == 0)) {
      local_2c = &local_25;
      uStack_34 = *puVar9;
      uStack_30 = puVar9[1];
      local_25 = 1;
      iVar4 = FUN_00fb1f64(&uStack_34,uVar8,uVar10);
      if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&uStack_34,&DAT_00414a7c,2), iVar4 == 0)) {
        iVar4 = FUN_00faa4e8(param_3,param_4,&uStack_34,&DAT_01880dc4);
        if (iVar4 != 0) {
          *(undefined1 *)((int)param_1 + 5) = 1;
          *(undefined1 *)(param_1 + 1) = 1;
          return;
        }
        uVar2 = FUN_00fb1f64(&uStack_34,&DAT_00414a81,2);
        goto LAB_0169a2a4;
      }
    }
  }
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

