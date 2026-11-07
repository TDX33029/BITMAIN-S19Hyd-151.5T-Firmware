// FUN_01302c38 @ 01302c38 size=456 calls_out=1 calls_in=68
// strings: 

undefined4 *
FUN_01302c38(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            code *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
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
      puVar4 = (undefined4 *)&DAT_00533bc1;
      if (cVar1 == '\0') {
        puVar4 = &DAT_005312da;
      }
      uVar6 = 3;
      if (cVar1 != '\0') {
        uVar6 = 2;
      }
      iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,puVar4,uVar6);
      uVar2 = 1;
      if (((iVar3 == 0) &&
          (iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,param_2,param_3), iVar3 == 0)) &&
         (iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,0x5312dd,2), iVar3 == 0)) {
        uVar2 = (*param_5)(param_4,puVar5);
      }
    }
    else {
      if (cVar1 == '\0') {
        iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_005312df,3);
        uVar2 = 1;
        if (iVar3 != 0) goto LAB_01302c5c;
      }
      uStack_44 = *puVar5;
      uStack_40 = puVar5[1];
      local_2c = puVar5[2];
      local_28 = puVar5[3];
      local_3c = &local_35;
      local_34 = &uStack_44;
      uVar2 = 1;
      local_35 = 1;
      local_30 = &DAT_01ce45f8;
      iVar3 = FUN_01302620(local_34,param_2,param_3);
      if (((iVar3 == 0) && (iVar3 = FUN_01302620(&uStack_44,0x5312dd,2), iVar3 == 0)) &&
         (iVar3 = (*param_5)(param_4,&local_34), iVar3 == 0)) {
        uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
      }
    }
  }
LAB_01302c5c:
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return param_1;
}

