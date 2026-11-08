// FUN_00fb36b8 @ 00fb36b8 size=956 calls_out=2 calls_in=64
// strings: 

undefined4
FUN_00fb36b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int param_5,undefined4 *param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar1 = param_5;
  if (param_5 != param_7) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&param_5,&param_7,0);
  }
  iVar3 = (**(code **)(param_1[1] + 0xc))(*param_1);
  uVar9 = 1;
  if (iVar3 == 0) {
    uVar8 = *param_4;
    uVar7 = param_4[1];
    if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
      iVar3 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_00414a79,3);
      if (((iVar3 == 0) &&
          (iVar3 = (**(code **)(param_1[1] + 0xc))(*param_1,uVar8,uVar7), iVar3 == 0)) &&
         (iVar3 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_00414a7c,2), iVar3 == 0)) {
        uVar9 = (**(code **)(param_6[1] + 0xc))(*param_6,param_1);
      }
    }
    else {
      iVar3 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_00414a7e,3);
      if (iVar3 == 0) {
        local_44 = *param_1;
        uStack_40 = param_1[1];
        local_2c = param_1[2];
        uStack_28 = param_1[3];
        puStack_3c = &local_35;
        local_35 = 1;
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        iVar3 = FUN_00fb1f64(local_34,uVar8,uVar7);
        if (((iVar3 == 0) && (iVar3 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar3 == 0)) &&
           (iVar3 = (**(code **)(param_6[1] + 0xc))(*param_6,&local_34), iVar3 == 0)) {
          uVar9 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
        }
      }
    }
  }
  iVar3 = 0;
  do {
    puVar2 = param_6;
    if ((uVar9 & 1) == 0) {
      uVar7 = *(undefined4 *)((int)param_4 + iVar3 + 8);
      uVar8 = *(undefined4 *)((int)param_4 + iVar3 + 0xc);
      if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
        iVar4 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_0041950f,2);
        if ((iVar4 == 0) &&
           (iVar4 = (**(code **)(param_1[1] + 0xc))(*param_1,uVar7,uVar8), iVar4 == 0)) {
          iVar4 = (**(code **)(param_1[1] + 0xc))(*param_1,&DAT_00414a7c,2);
          uVar9 = 1;
          if (iVar4 == 0) {
            uVar9 = (**(code **)(*(int *)((int)puVar2 + iVar3 + 0xc) + 0xc))
                              (*(undefined4 *)((int)puVar2 + iVar3 + 8),param_1);
          }
        }
        else {
          uVar9 = 1;
        }
      }
      else {
        local_35 = 1;
        local_2c = param_1[2];
        uStack_28 = param_1[3];
        local_44 = *param_1;
        uStack_40 = param_1[1];
        puStack_3c = &local_35;
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        iVar4 = FUN_00fb1f64(local_34,uVar7,uVar8);
        if (((iVar4 != 0) || (iVar4 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar4 != 0)) ||
           (iVar4 = (**(code **)(*(int *)((int)puVar2 + iVar3 + 0xc) + 0xc))
                              (*(undefined4 *)((int)puVar2 + iVar3 + 8),&local_34), iVar4 != 0))
        goto LAB_00fb3724;
        uVar9 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      }
    }
    else {
LAB_00fb3724:
      uVar9 = 1;
    }
    iVar3 = iVar3 + 8;
    if (iVar1 * 8 + -8 == iVar3) {
      uVar7 = 1;
      if (uVar9 == 0) {
        if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
          uVar8 = 2;
          uVar7 = *param_1;
          pcVar6 = *(code **)(param_1[1] + 0xc);
          pcVar5 = " }";
        }
        else {
          uVar8 = 1;
          uVar7 = *param_1;
          pcVar6 = *(code **)(param_1[1] + 0xc);
          pcVar5 = "}";
        }
        uVar7 = (*pcVar6)(uVar7,pcVar5,uVar8);
      }
      return uVar7;
    }
  } while( true );
}

