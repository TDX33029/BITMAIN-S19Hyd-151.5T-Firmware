// FUN_00604c44 @ 00604c44 size=612 calls_out=19 calls_in=2
// strings: 

void FUN_00604c44(undefined8 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  switch(param_4) {
  case 0x2c9:
    iVar1 = FUN_0172c108();
    break;
  case 0x2ca:
    iVar1 = FUN_0172c238();
    break;
  case 0x2cb:
    iVar1 = FUN_0172c1a0();
    break;
  case 0x2cc:
    iVar1 = FUN_0172c1ec();
    break;
  default:
    if (param_4 != 0x19f) goto LAB_00604de8;
    iVar1 = FUN_0172c154();
  }
  if (iVar1 == 0) {
LAB_00604de8:
    *(undefined **)param_1 = &DAT_0040f9ee;
    *(undefined4 *)((int)param_1 + 4) = 0xb;
    return;
  }
  iVar2 = FUN_01733c9c(iVar1);
  if (iVar2 == 0) {
    *(undefined **)param_1 = &DAT_0040c738;
    *(undefined4 *)((int)param_1 + 4) = 0xf;
    return;
  }
  iVar3 = FUN_0174d02c(iVar1,iVar2,param_2,param_3,0);
  if (iVar3 != 1) {
    puVar6 = &DAT_0040b12b;
LAB_00604e14:
    *(undefined **)param_1 = puVar6;
    *(undefined4 *)((int)param_1 + 4) = 0xf;
    FUN_0172c788(iVar2);
    return;
  }
  uVar4 = FUN_0172c684(iVar1);
  iVar3 = FUN_0172cc2c();
  if (iVar3 == 0) {
    puVar6 = &DAT_0040c738;
    goto LAB_00604e14;
  }
  iVar1 = FUN_01737020(iVar3,iVar1);
  if (iVar1 == 1) {
    iVar1 = FUN_01737170(iVar3,iVar2);
    if (iVar1 == 1) {
      iVar1 = FUN_01739ea4();
      if (iVar1 != 0) {
        iVar5 = FUN_0173aa7c(iVar1,iVar3);
        if (iVar5 == 1) {
          iVar3 = FUN_0173acc0(iVar1);
          if (iVar3 == 0) {
            uVar7 = 0xf0040c738;
          }
          else {
            uVar7 = FUN_00604fc8(iVar3,uVar4);
            if ((int)uVar7 == 0) {
              iVar3 = FUN_017374c4(iVar3);
              if (iVar3 == 1) {
                *(undefined4 *)param_1 = 0;
                *(int *)((int)param_1 + 4) = iVar1;
                FUN_0172c788(iVar2);
                return;
              }
              uVar7 = 0x160040b115;
            }
          }
          *param_1 = uVar7;
          FUN_01739ee4(iVar1);
          FUN_0172c788(iVar2);
          return;
        }
        *(undefined **)param_1 = &DAT_0040c738;
        *(undefined4 *)((int)param_1 + 4) = 0xf;
        FUN_01739ee4(iVar1);
        goto LAB_00604e4c;
      }
      goto LAB_00604e2c;
    }
    uVar4 = 0x16;
    puVar6 = &DAT_0040b115;
  }
  else {
LAB_00604e2c:
    uVar4 = 0xf;
    puVar6 = &DAT_0040c738;
  }
  *(undefined **)param_1 = puVar6;
  *(undefined4 *)((int)param_1 + 4) = uVar4;
LAB_00604e4c:
  FUN_0172c984(iVar3);
  FUN_0172c788(iVar2);
  return;
}

