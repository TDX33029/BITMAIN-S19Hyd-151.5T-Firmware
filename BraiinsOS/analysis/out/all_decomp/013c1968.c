// FUN_013c1968 @ 013c1968 size=1036 calls_out=3 calls_in=1
// strings: Error | UnicodeNotAllowed | pattern | UnicodeNotAllowed | pattern

undefined4 FUN_013c1968(int param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_40;
  int iStack_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int local_30;
  code *local_2c;
  undefined1 *local_28;
  code *local_24;
  
  iVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(iVar5,"Error",5);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(iVar5,&DAT_00414a79,3);
      if ((((((iVar1 == 0) && (iVar1 = (*pcVar4)(iVar5,&DAT_005691b4,4), iVar1 == 0)) &&
            (iVar1 = (*pcVar4)(iVar5,&DAT_00414a7c,2), iVar1 == 0)) &&
           (((iVar1 = (*pcVar4)(iVar5,(&PTR_s_UnicodeNotAllowed_018b2d68)[*(byte *)(param_1 + 0x24)]
                                ,*(undefined4 *)
                                  (&DAT_00421910 + (uint)*(byte *)(param_1 + 0x24) * 4)), iVar1 == 0
             && (iVar1 = (*pcVar4)(iVar5,&DAT_0041950f,2), iVar1 == 0)) &&
            ((iVar1 = (*pcVar4)(iVar5,"pattern",7), iVar1 == 0 &&
             ((iVar1 = (*pcVar4)(iVar5,&DAT_00414a7c,2), iVar1 == 0 &&
              (iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar5,
                                    iVar6), iVar1 == 0)))))))) &&
          (iVar1 = (*pcVar4)(iVar5,&DAT_0041950f,2), iVar1 == 0)) &&
         ((iVar1 = (*pcVar4)(iVar5,&DAT_00568734,4), iVar1 == 0 &&
          (iVar1 = (*pcVar4)(iVar5,&DAT_00414a7c,2), iVar1 == 0)))) {
        local_28 = (undefined1 *)(param_1 + 0x18);
        local_24 = FUN_013f6c08;
        local_2c = FUN_013f6c08;
        local_30 = param_1 + 0xc;
        iVar1 = FUN_00fa948c(iVar5,iVar6,&DAT_00570932,&local_30);
        if (iVar1 == 0) {
          uVar3 = 2;
          pcVar2 = " }";
LAB_013c1d60:
          uVar3 = (*pcVar4)(iVar5,pcVar2,uVar3);
          return uVar3;
        }
      }
    }
    else {
      iVar1 = (*pcVar4)(iVar5,&DAT_00414a7e,3);
      if (iVar1 == 0) {
        local_40._0_1_ = 1;
        local_30 = iVar5;
        local_2c = (code *)iVar6;
        local_28 = (undefined1 *)&local_40;
        iVar1 = FUN_00fb1f64(&local_30,&DAT_005691b4,4);
        if ((((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar1 == 0)) &&
            (iVar1 = FUN_00fb1f64(&local_30,
                                  (&PTR_s_UnicodeNotAllowed_018b2d84)[*(byte *)(param_1 + 0x24)],
                                  *(undefined4 *)
                                   (&DAT_0042192c + (uint)*(byte *)(param_1 + 0x24) * 4)),
            iVar1 == 0)) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2), iVar1 == 0)) {
          local_40 = CONCAT31(local_40._1_3_,1);
          local_30 = iVar5;
          local_2c = (code *)iVar6;
          local_28 = (undefined1 *)&local_40;
          iVar1 = FUN_00fb1f64(&local_30,"pattern",7);
          if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar1 == 0)) {
            iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30
                                 ,&DAT_01880dc4);
            if (iVar1 != 0) {
              return 1;
            }
            iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
            if (iVar1 == 0) {
              local_38 = &local_31;
              local_31 = 1;
              local_40 = iVar5;
              iStack_3c = iVar6;
              iVar1 = FUN_00fb1f64(&local_40,&DAT_00568734,4);
              if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2), iVar1 == 0)) {
                local_28 = (undefined1 *)(param_1 + 0x18);
                local_24 = FUN_013f6c08;
                local_2c = FUN_013f6c08;
                local_30 = param_1 + 0xc;
                iVar1 = FUN_00fa948c(&local_40,&DAT_01880dc4,&DAT_00570932,&local_30);
                if (iVar1 != 0) {
                  return 1;
                }
                iVar1 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
                if (iVar1 == 0) {
                  uVar3 = 1;
                  pcVar2 = "}";
                  goto LAB_013c1d60;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

