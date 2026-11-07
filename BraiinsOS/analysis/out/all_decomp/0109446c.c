// FUN_0109446c @ 0109446c size=660 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_0109446c(int param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(uVar5,&DAT_0056a0a8,8);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(uVar5,&DAT_00414a79,3);
      if (((iVar1 == 0) && (iVar1 = (*pcVar4)(uVar5,&DAT_004145fc,3), iVar1 == 0)) &&
         ((iVar1 = (*pcVar4)(uVar5,&DAT_00414a7c,2), iVar1 == 0 &&
          ((((iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),uVar5,
                                   iVar6), iVar1 == 0 &&
             (iVar1 = (*pcVar4)(uVar5,&DAT_0041950f,2), iVar1 == 0)) &&
            (iVar1 = (*pcVar4)(uVar5,&DAT_00414725,5), iVar1 == 0)) &&
           ((iVar1 = (*pcVar4)(uVar5,&DAT_00414a7c,2), iVar1 == 0 &&
            (iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                                  uVar5,iVar6), iVar1 == 0)))))))) {
        uVar3 = 2;
        pcVar2 = " }";
LAB_010946ec:
        uVar5 = (*pcVar4)(uVar5,pcVar2,uVar3);
        return uVar5;
      }
    }
    else {
      iVar1 = (*pcVar4)(uVar5,&DAT_00414a7e,3);
      if (iVar1 == 0) {
        local_21 = 1;
        local_30 = uVar5;
        iStack_2c = iVar6;
        local_28 = &local_21;
        iVar1 = FUN_00fb1f64(&local_30,&DAT_004145fc,3);
        if ((((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar1 == 0)) &&
            (iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                                  &local_30,&DAT_01880dc4), iVar1 == 0)) &&
           (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2), iVar1 == 0)) {
          local_21 = 1;
          local_30 = uVar5;
          iStack_2c = iVar6;
          local_28 = &local_21;
          iVar1 = FUN_00fb1f64(&local_30,&DAT_00414725,5);
          if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar1 == 0)) {
            iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                                 &local_30,&DAT_01880dc4);
            if (iVar1 != 0) {
              return 1;
            }
            iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
            if (iVar1 == 0) {
              uVar3 = 1;
              pcVar2 = "}";
              goto LAB_010946ec;
            }
          }
        }
      }
    }
  }
  return 1;
}

