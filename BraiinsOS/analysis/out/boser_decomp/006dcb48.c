// FUN_006dcb48 @ 006dcb48 size=632 calls_out=5 calls_in=6
// strings: 

void FUN_006dcb48(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_2c;
  undefined8 local_28;
  
  uVar1 = 8;
  if ((int)*(uint *)(param_3 + 0x10) < 0) {
    uVar1 = *(uint *)(param_3 + 0x10) ^ 0x80000000;
  }
  if (uVar1 == 7) {
    iVar2 = *param_2;
    if (iVar2 != 3) {
      iVar4 = param_2[1];
      iVar5 = param_2[2];
      uVar8 = *(undefined8 *)(param_2 + 1);
      if (iVar2 != 0) {
        if (iVar2 != 1) {
          return;
        }
        iVar2 = FUN_00700b3c(iVar4,iVar5,0x21);
        if (iVar2 != 0) {
          return;
        }
        uVar8 = FUN_006a4c58(iVar4,iVar5);
        if ((int)uVar8 == 0) {
          return;
        }
      }
      uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (*(int *)(param_3 + 8) != 0) {
        iVar4 = *(int *)(param_3 + 4);
        iVar2 = *(int *)(param_3 + 8) * 0x30;
        do {
          uVar9 = FUN_00700b3c((int)uVar8,uVar6,0x21);
          if ((int)uVar9 == 0) {
            uVar9 = FUN_006a4c58((int)uVar8,uVar6);
            if ((int)uVar9 == 0) {
              local_2c = 2;
              local_28 = uVar8;
            }
            else {
              local_2c = 0;
              local_28 = uVar9;
            }
          }
          else {
            local_2c = 1;
            local_28 = uVar9;
          }
          FUN_006dcb48(param_1,&local_2c,iVar4);
          iVar4 = iVar4 + 0x30;
          iVar2 = iVar2 + -0x30;
        } while (iVar2 != 0);
      }
    }
  }
  else if ((uVar1 == 8) && (iVar2 = *param_2, iVar2 != 3)) {
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    uVar8 = *(undefined8 *)(param_2 + 1);
    if ((iVar2 == 2) ||
       (((iVar2 == 1 && (iVar2 = FUN_00700b3c(iVar4,iVar5,0x21), iVar2 == 0)) &&
        (iVar2 = FUN_006a4c58(iVar4,iVar5), iVar2 == 0)))) {
      iVar2 = *(int *)(param_1 + 0x24);
      do {
        do {
          uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
          uVar6 = (undefined4)uVar8;
          uVar8 = FUN_00700b3c(uVar6,uVar7,0x21);
        } while ((int)uVar8 != 0);
        uVar8 = FUN_006a4c58(uVar6,uVar7);
      } while ((int)uVar8 != 0);
      iVar2 = FUN_006c176c(*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44),uVar6,uVar7);
      if ((iVar2 != 0) && (*(undefined1 **)(iVar2 + 0x10) == &DAT_80000005)) {
        iVar5 = *(int *)(param_3 + 0x14);
        for (iVar4 = *(int *)(param_3 + 0x18) << 6; iVar4 != 0; iVar4 = iVar4 + -0x40) {
          iVar3 = FUN_006e0794(iVar2 + 0x20,*(int *)(iVar5 + 0x30) + 8,*(undefined4 *)(iVar5 + 0x34)
                              );
          if (iVar3 != 0) {
            uVar6 = *(undefined4 *)(iVar3 + 0x14);
            uVar7 = *(undefined4 *)(iVar3 + 0x10);
            uVar8 = *(undefined8 *)(iVar3 + 0x10);
            uVar9 = FUN_00700b3c(uVar7,uVar6,0x21);
            if ((int)uVar9 == 0) {
              uVar9 = FUN_006a4c58(uVar7,uVar6);
              if ((int)uVar9 == 0) {
                local_2c = 2;
              }
              else {
                local_2c = 0;
                uVar8 = uVar9;
              }
            }
            else {
              local_2c = 1;
              uVar8 = uVar9;
            }
            local_28 = uVar8;
            FUN_006dcb48(param_1,&local_2c,iVar5);
          }
          iVar5 = iVar5 + 0x40;
        }
      }
    }
  }
  return;
}

