// FUN_005f9534 @ 005f9534 size=620 calls_out=2 calls_in=0
// strings: SearcherVithkuqi | SearcherVithkuqi

undefined4 FUN_005f9534(int param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,&DAT_0033d609,6);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 == 0) {
        local_38 = (undefined4 *)(param_1 + 0x2c);
        iVar1 = FUN_00fb34b0(param_2,"SearcherVithkuqi",8,&DAT_0056a850,8,param_1 + 0x18,
                             FUN_005ffe94,&DAT_003ceb56,9,param_1,FUN_005fe134,&DAT_003ceb5f,0xb,
                             param_1 + 0x1c,FUN_005fdfac,&DAT_003ceb6a,0xb,&local_38,FUN_00d47d08);
        if (iVar1 == 0) {
          uVar3 = *param_2;
          pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_005f977c:
          uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
          return uVar3;
        }
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 == 0) {
        local_40 = &local_39;
        local_30 = param_2[2];
        local_2c = param_2[3];
        local_28 = param_1 + 0x2c;
        local_39 = 1;
        local_34 = &DAT_01880dc4;
        local_38 = &local_48;
        local_48 = uVar3;
        local_44 = iVar4;
        iVar1 = FUN_00fb34b0(&local_38,"SearcherVithkuqi",8,&DAT_0056a850,8,param_1 + 0x18,
                             FUN_005ffe94,&DAT_003ceb56,9,param_1,FUN_005fe134,&DAT_003ceb5f,0xb,
                             param_1 + 0x1c,FUN_005fdfac,&DAT_003ceb6a,0xb,&local_28,FUN_00d47d08);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_005f977c;
      }
    }
  }
  return 1;
}

