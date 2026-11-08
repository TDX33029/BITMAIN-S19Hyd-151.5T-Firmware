// FUN_00d447e4 @ 00d447e4 size=588 calls_out=2 calls_in=0
// strings: Enuma;

undefined4 FUN_00d447e4(char *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
    uVar3 = *param_2;
    iVar5 = param_2[1];
    pcVar2 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_0056aa20,8);
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar2)(uVar3,"(",1);
        if ((iVar1 == 0) && (iVar1 = FUN_01402444(param_1 + 1,param_2), iVar1 == 0)) {
          uVar3 = *param_2;
          pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_00d4497c:
          uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
          return uVar3;
        }
      }
      else {
        iVar1 = (*pcVar2)(uVar3,"(\n",2);
        if (iVar1 == 0) {
          local_38 = &local_31;
          local_2c = &DAT_01880dc4;
          local_28 = (undefined1 *)param_2[2];
          local_24 = param_2[3];
          local_31 = 1;
          local_40 = uVar3;
          local_3c = iVar5;
          local_30 = (undefined1 *)&local_40;
          iVar1 = FUN_01402444(param_1 + 1,&local_30);
          if ((iVar1 == 0) &&
             (iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2), iVar1 == 0))
          goto LAB_00d4497c;
        }
      }
    }
  }
  else {
    puVar4 = (undefined1 *)*param_2;
    puVar6 = (undefined *)param_2[1];
    pcVar2 = *(code **)(puVar6 + 0xc);
    iVar1 = (*pcVar2)(puVar4,"Enuma,",4);
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar2)(puVar4,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (*pcVar2)(puVar4,&DAT_0056a9e8,8);
      }
      else {
        iVar1 = (*pcVar2)(puVar4,"(\n",2);
        if (iVar1 != 0) {
          return 1;
        }
        local_40 = CONCAT31(local_40._1_3_,1);
        local_30 = puVar4;
        local_2c = puVar6;
        local_28 = (undefined1 *)&local_40;
        iVar1 = FUN_00fb1f64(&local_30,&DAT_0056a9e8,8);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
      }
      if (iVar1 == 0) {
        uVar3 = (*pcVar2)(puVar4,&DAT_00418e07,1);
        return uVar3;
      }
    }
  }
  return 1;
}

