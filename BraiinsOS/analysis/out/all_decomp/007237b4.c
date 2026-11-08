// FUN_007237b4 @ 007237b4 size=508 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_007237b4(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 **local_28;
  char local_24;
  undefined1 local_23;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar3)(uVar4,&DAT_00411985,0xc);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,"(",1);
      if (iVar2 == 0) {
        bVar1 = (*pcVar3)(uVar4,&DAT_00418df9,1);
        local_34._0_2_ = (ushort)bVar1;
        local_38 = param_2;
        FUN_007b9178(&local_38,param_1,param_1 + 0x20);
        if (((char)local_34 != '\x01') &&
           (iVar2 = (**(code **)(local_38[1] + 0xc))(*local_38,&DAT_00418ec5,1), iVar2 == 0)) {
          uVar4 = *param_2;
          pcVar3 = *(code **)(param_2[1] + 0xc);
LAB_0072398c:
          uVar4 = (*pcVar3)(uVar4,&DAT_00418e07,1);
          return uVar4;
        }
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,"(\n",2);
      if (iVar2 == 0) {
        local_40 = &local_39;
        local_39 = 1;
        local_30 = param_2[2];
        local_2c = param_2[3];
        local_34 = &DAT_01880dc4;
        local_48 = uVar4;
        local_44 = iVar5;
        local_38 = &local_48;
        local_24 = FUN_00fb1f64(&local_48,&DAT_00418df9,1);
        local_28 = &local_38;
        local_23 = 0;
        FUN_007b9178(&local_28,param_1,param_1 + 0x20);
        if ((local_24 == '\x01') ||
           (iVar2 = (*(code *)local_28[1][3])(*local_28,&DAT_00418ec5,1), iVar2 != 0)) {
          return 1;
        }
        iVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
        if (iVar2 == 0) goto LAB_0072398c;
      }
    }
  }
  return 1;
}

