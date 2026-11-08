// FUN_016205c0 @ 016205c0 size=508 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_016205c0(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  iVar3 = *param_1;
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar2 = (*pcVar4)(uVar5,&DAT_00411985,0xc);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar5,"(",1);
      if (iVar2 == 0) {
        bVar1 = (*pcVar4)(uVar5,&DAT_00418df9,1);
        local_34._0_2_ = (ushort)bVar1;
        local_38 = param_2;
        FUN_007b9178(&local_38,iVar3,iVar3 + 0x20);
        if (((char)local_34 != '\x01') &&
           (iVar2 = (**(code **)(local_38[1] + 0xc))(*local_38,&DAT_00418ec5,1), iVar2 == 0)) {
          uVar5 = *param_2;
          pcVar4 = *(code **)(param_2[1] + 0xc);
LAB_01620798:
          uVar5 = (*pcVar4)(uVar5,&DAT_00418e07,1);
          return uVar5;
        }
      }
    }
    else {
      iVar2 = (*pcVar4)(uVar5,"(\n",2);
      if (iVar2 == 0) {
        local_40 = &local_39;
        local_39 = 1;
        local_30 = param_2[2];
        local_2c = param_2[3];
        local_34 = &DAT_01880dc4;
        local_48 = uVar5;
        local_44 = iVar6;
        local_38 = &local_48;
        local_24 = FUN_00fb1f64(&local_48,&DAT_00418df9,1);
        local_28 = &local_38;
        local_23 = 0;
        FUN_007b9178(&local_28,iVar3,iVar3 + 0x20);
        if ((local_24 == '\x01') ||
           (iVar2 = (*(code *)local_28[1][3])(*local_28,&DAT_00418ec5,1), iVar2 != 0)) {
          return 1;
        }
        iVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
        if (iVar2 == 0) goto LAB_01620798;
      }
    }
  }
  return 1;
}

