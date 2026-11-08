// FUN_00f08d70 @ 00f08d70 size=988 calls_out=3 calls_in=0
// strings: Parse | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes | sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes

undefined4 FUN_00f08d70(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  int **ppiVar5;
  undefined *puVar6;
  undefined4 **ppuVar7;
  int iVar8;
  undefined4 **local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int **local_34;
  undefined *local_30;
  int **local_2c;
  int local_28;
  
  if (*param_1 == -0x80000000) {
    ppiVar5 = (int **)*param_2;
    puVar6 = (undefined *)param_2[1];
    pcVar4 = *(code **)(puVar6 + 0xc);
    iVar1 = (*pcVar4)(ppiVar5,"Parse",5);
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar4)(ppiVar5,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (*pcVar4)(ppiVar5,&DAT_0035b76c,0xf);
      }
      else {
        iVar1 = (*pcVar4)(ppiVar5,"(\n",2);
        if (iVar1 != 0) {
          return 1;
        }
        local_2c = (int **)&local_44;
        local_44 = (undefined4 **)CONCAT31(local_44._1_3_,1);
        local_34 = ppiVar5;
        local_30 = puVar6;
        iVar1 = FUN_00fb1f64(&local_34,&DAT_0035b76c,0xf);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a81,2);
      }
      if (iVar1 == 0) {
        uVar2 = (*pcVar4)(ppiVar5,&DAT_00418e07,1);
        return uVar2;
      }
    }
  }
  else {
    ppuVar7 = (undefined4 **)*param_2;
    iVar8 = param_2[1];
    pcVar4 = *(code **)(iVar8 + 0xc);
    iVar1 = (*pcVar4)(ppuVar7,"Io",2);
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar4)(ppuVar7,&DAT_00414a79,3);
        if (((iVar1 == 0) && (iVar1 = (*pcVar4)(ppuVar7,&DAT_00568e60,4), iVar1 == 0)) &&
           ((iVar1 = (*pcVar4)(ppuVar7,&DAT_00414a7c,2), iVar1 == 0 &&
            ((((iVar1 = FUN_00fb8bb0(param_1[1],param_1[2],ppuVar7,iVar8), iVar1 == 0 &&
               (iVar1 = (*pcVar4)(ppuVar7,&DAT_0041950f,2), iVar1 == 0)) &&
              (iVar1 = (*pcVar4)(ppuVar7,
                                 "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
                                 ,6), iVar1 == 0)) &&
             ((iVar1 = (*pcVar4)(ppuVar7,&DAT_00414a7c,2), iVar1 == 0 &&
              (iVar1 = FUN_015ed828(param_1 + 3,param_2), iVar1 == 0)))))))) {
          ppiVar5 = (int **)param_2[2];
LAB_00f09104:
          if (((uint)ppiVar5 & 0x800000) == 0) {
            iVar1 = *param_2;
            uVar2 = 2;
            pcVar4 = *(code **)(param_2[1] + 0xc);
            pcVar3 = " }";
          }
          else {
            iVar1 = *param_2;
            uVar2 = 1;
            pcVar4 = *(code **)(param_2[1] + 0xc);
            pcVar3 = "}";
          }
          uVar2 = (*pcVar4)(iVar1,pcVar3,uVar2);
          return uVar2;
        }
      }
      else {
        iVar1 = (*pcVar4)(ppuVar7,&DAT_00414a7e,3);
        if (iVar1 == 0) {
          local_44 = (undefined4 **)CONCAT31(local_44._1_3_,1);
          local_34 = ppuVar7;
          local_30 = (undefined *)iVar8;
          local_2c = (int **)&local_44;
          iVar1 = FUN_00fb1f64(&local_34,&DAT_00568e60,4);
          if ((((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a7c,2), iVar1 == 0)) &&
              (iVar1 = FUN_00fb8bb0(param_1[1],param_1[2],&local_34,&DAT_01880dc4), iVar1 == 0)) &&
             (iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a81,2), iVar1 == 0)) {
            local_3c = &local_35;
            local_28 = param_2[3];
            ppiVar5 = (int **)param_2[2];
            local_30 = &DAT_01880dc4;
            local_35 = 1;
            local_44 = ppuVar7;
            local_40 = iVar8;
            local_34 = (int **)&local_44;
            local_2c = ppiVar5;
            iVar1 = FUN_00fb1f64(&local_44,
                                 "sourceboard-controlUnsupported serial speed/dev/uart_transBUG: UartTrans lock failedFailed to configure magic baudrateFailed to configure baudrateFailed to read terminal attributesFailed to write terminal attributes"
                                 ,6);
            if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar1 == 0)) {
              iVar1 = FUN_015ed828(param_1 + 3,&local_34);
              if (iVar1 != 0) {
                return 1;
              }
              iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
              if (iVar1 == 0) goto LAB_00f09104;
            }
          }
        }
      }
    }
  }
  return 1;
}

