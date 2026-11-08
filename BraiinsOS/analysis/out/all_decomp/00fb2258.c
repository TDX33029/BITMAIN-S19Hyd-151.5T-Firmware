// FUN_00fb2258 @ 00fb2258 size=456 calls_out=1 calls_in=280
// strings: 

undefined4 *
FUN_00fb2258(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            code *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar2 = 1;
  if (*(char *)(param_1 + 1) == '\0') {
    puVar5 = (undefined4 *)*param_1;
    cVar1 = *(char *)((int)param_1 + 5);
    if ((*(byte *)((int)puVar5 + 10) & 0x80) == 0) {
      puVar4 = &DAT_0041950f;
      if (cVar1 == '\0') {
        puVar4 = &DAT_00414a79;
      }
      uVar6 = 3;
      if (cVar1 != '\0') {
        uVar6 = 2;
      }
      iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,puVar4,uVar6);
      uVar2 = 1;
      if (((iVar3 == 0) &&
          (iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,param_2,param_3), iVar3 == 0)) &&
         (iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_00414a7c,2), iVar3 == 0)) {
        uVar2 = (*param_5)(param_4,puVar5);
      }
    }
    else {
      if (cVar1 == '\0') {
        iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_00414a7e,3);
        uVar2 = 1;
        if (iVar3 != 0) goto LAB_00fb227c;
      }
      uStack_44 = *puVar5;
      uStack_40 = puVar5[1];
      local_2c = puVar5[2];
      local_28 = puVar5[3];
      local_3c = &local_35;
      local_34 = &uStack_44;
      uVar2 = 1;
      local_35 = 1;
      local_30 = &DAT_01880dc4;
      iVar3 = FUN_00fb1f64(local_34,param_2,param_3);
      if (((iVar3 == 0) && (iVar3 = FUN_00fb1f64(&uStack_44,&DAT_00414a7c,2), iVar3 == 0)) &&
         (iVar3 = (*param_5)(param_4,&local_34), iVar3 == 0)) {
        uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      }
    }
  }
LAB_00fb227c:
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return param_1;
}

