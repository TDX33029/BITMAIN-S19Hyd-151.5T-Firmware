// FUN_00f1ece4 @ 00f1ece4 size=696 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00f1ece4(int param_1,undefined4 *param_2)

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
  iVar1 = (*pcVar4)(uVar5,&DAT_0035b77b,0xb);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(uVar5,&DAT_00414a79,3);
      if (((iVar1 == 0) && (iVar1 = (*pcVar4)(uVar5,&DAT_005691b4,4), iVar1 == 0)) &&
         ((iVar1 = (*pcVar4)(uVar5,&DAT_00414a7c,2), iVar1 == 0 &&
          ((((iVar1 = (*pcVar4)(uVar5,(&PTR_DAT_0187e510)[*(byte *)(param_1 + 0xc)],
                                *(undefined4 *)(&DAT_0035ba28 + (uint)*(byte *)(param_1 + 0xc) * 4))
             , iVar1 == 0 && (iVar1 = (*pcVar4)(uVar5,&DAT_0041950f,2), iVar1 == 0)) &&
            (iVar1 = (*pcVar4)(uVar5,&DAT_0035b786,6), iVar1 == 0)) &&
           ((iVar1 = (*pcVar4)(uVar5,&DAT_00414a7c,2), iVar1 == 0 &&
            (iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),uVar5,
                                  iVar6), iVar1 == 0)))))))) {
        uVar3 = 2;
        pcVar2 = " }";
LAB_00f1ef88:
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
        iVar1 = FUN_00fb1f64(&local_30,&DAT_005691b4,4);
        if ((((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar1 == 0)) &&
            (iVar1 = FUN_00fb1f64(&local_30,(&PTR_DAT_0187e510)[*(byte *)(param_1 + 0xc)],
                                  *(undefined4 *)
                                   (&DAT_0035ba28 + (uint)*(byte *)(param_1 + 0xc) * 4)), iVar1 == 0
            )) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2), iVar1 == 0)) {
          local_21 = 1;
          local_30 = uVar5;
          iStack_2c = iVar6;
          local_28 = &local_21;
          iVar1 = FUN_00fb1f64(&local_30,&DAT_0035b786,6);
          if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar1 == 0)) {
            iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30
                                 ,&DAT_01880dc4);
            if (iVar1 != 0) {
              return 1;
            }
            iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
            if (iVar1 == 0) {
              uVar3 = 1;
              pcVar2 = "}";
              goto LAB_00f1ef88;
            }
          }
        }
      }
    }
  }
  return 1;
}

