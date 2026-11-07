// FUN_0105eebc @ 0105eebc size=464 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0105eebc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar6 = *param_2;
  iVar8 = param_2[1];
  iVar4 = *param_1;
  pcVar5 = *(code **)(iVar8 + 0xc);
  iVar1 = (*pcVar5)(uVar6,&DAT_00567ac0,4);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(uVar6,&DAT_00414a79,3);
      if (((iVar1 == 0) && (iVar1 = (*pcVar5)(uVar6,&DAT_0056a9c0,8), iVar1 == 0)) &&
         ((iVar1 = (*pcVar5)(uVar6,&DAT_00414a7c,2), iVar1 == 0 &&
          (iVar1 = FUN_01090d94(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),param_2),
          iVar1 == 0)))) {
        uVar7 = param_2[2];
LAB_0105f044:
        if ((uVar7 & 0x800000) == 0) {
          uVar6 = *param_2;
          uVar3 = 2;
          pcVar5 = *(code **)(param_2[1] + 0xc);
          pcVar2 = " }";
        }
        else {
          uVar6 = *param_2;
          uVar3 = 1;
          pcVar5 = *(code **)(param_2[1] + 0xc);
          pcVar2 = "}";
        }
        uVar6 = (*pcVar5)(uVar6,pcVar2,uVar3);
        return uVar6;
      }
    }
    else {
      iVar1 = (*pcVar5)(uVar6,&DAT_00414a7e,3);
      if (iVar1 == 0) {
        local_3c = &local_35;
        uVar7 = param_2[2];
        local_28 = param_2[3];
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        local_35 = 1;
        local_44 = uVar6;
        local_40 = iVar8;
        local_2c = uVar7;
        iVar1 = FUN_00fb1f64(local_34,&DAT_0056a9c0,8);
        if ((((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar1 == 0)) &&
            (iVar1 = FUN_01090d94(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),&local_34),
            iVar1 == 0)) &&
           (iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_0105f044;
      }
    }
  }
  return 1;
}

