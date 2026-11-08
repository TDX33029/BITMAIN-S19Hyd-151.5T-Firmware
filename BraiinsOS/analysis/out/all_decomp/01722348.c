// FUN_01722348 @ 01722348 size=700 calls_out=12 calls_in=2
// strings: 

undefined4 FUN_01722348(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = param_1 + 0x34;
  FUN_01781e60(iVar7);
  bVar1 = *(byte *)(param_1 + 0x88);
  FUN_01781ec0(iVar7);
  if ((bVar1 & 1) != 0) {
    return 1;
  }
  FUN_01781e90(iVar7);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 == 0) {
      iVar4 = FUN_01720560(*(undefined4 *)(param_1 + 4),param_2);
      *(int *)(param_1 + 0x54) = iVar4;
      if (iVar4 != 0) goto LAB_017223d0;
    }
    else {
LAB_017223d0:
      if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0x60) != 0)) {
LAB_017223e8:
        if (((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x10) != 0)) &&
           (*(int *)(param_1 + 0x14) != 0)) {
          iVar4 = *(int *)(param_1 + 0x58);
          if (iVar4 == 0) {
            iVar4 = FUN_01720928(*(int *)(param_1 + 0x10),param_2);
            *(int *)(param_1 + 0x58) = iVar4;
            if (iVar4 == 0) goto LAB_017224e8;
          }
          iVar5 = *(int *)(param_1 + 0x5c);
          if (iVar5 == 0) {
            iVar5 = FUN_01720928(*(undefined4 *)(param_1 + 0x14),param_2);
            *(int *)(param_1 + 0x5c) = iVar5;
            if (iVar5 == 0) goto LAB_017224e8;
          }
          iVar2 = *(int *)(param_1 + 0x18);
          if ((iVar2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
            if (*(int *)(param_1 + 0x20) == 0) {
              iVar3 = FUN_017141d0();
              if ((iVar3 == 0) ||
                 (iVar2 = FUN_0172228c(iVar3,*(undefined4 *)(param_1 + 0x14),
                                       *(undefined4 *)(param_1 + 0x10),param_2,
                                       *(undefined4 *)(param_1 + 0x58)), iVar2 == 0)) {
                FUN_017046e0(iVar3);
                goto LAB_017224e8;
              }
              iVar2 = *(int *)(param_1 + 0x18);
              *(int *)(param_1 + 0x20) = iVar3;
            }
            if (*(int *)(param_1 + 100) == 0) {
              uVar6 = *(undefined4 *)(iVar4 + 0x18);
              iVar4 = FUN_0171485c(iVar2);
              if ((iVar4 == 0) || (iVar2 = FUN_01714d30(iVar4,uVar6), iVar2 == 0))
              goto LAB_01722518;
              *(int *)(param_1 + 100) = iVar4;
            }
            if (*(int *)(param_1 + 0x68) == 0) {
              uVar6 = *(undefined4 *)(iVar5 + 0x18);
              iVar4 = FUN_0171485c(*(undefined4 *)(param_1 + 0x1c));
              if ((iVar4 == 0) || (iVar5 = FUN_01714d30(iVar4,uVar6), iVar5 == 0))
              goto LAB_01722518;
              *(int *)(param_1 + 0x68) = iVar4;
            }
            if (*(int *)(param_1 + 0x6c) == 0) {
              iVar4 = FUN_017141d0();
              if ((iVar4 == 0) ||
                 (iVar5 = FUN_0171decc(iVar4,*(undefined4 *)(param_1 + 0x20),
                                       *(undefined4 *)(param_1 + 0x58),param_2), iVar5 == 0))
              goto LAB_01722518;
              *(int *)(param_1 + 0x6c) = iVar4;
            }
          }
        }
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
        goto LAB_017224a0;
      }
      uVar6 = *(undefined4 *)(iVar4 + 0x18);
      iVar4 = FUN_0171485c();
      if ((iVar4 != 0) && (iVar5 = FUN_01714d30(iVar4,uVar6), iVar5 != 0)) {
        *(int *)(param_1 + 0x60) = iVar4;
        goto LAB_017223e8;
      }
LAB_01722518:
      FUN_017046e0(iVar4);
    }
LAB_017224e8:
    uVar6 = 0;
  }
  else {
LAB_017224a0:
    uVar6 = 1;
  }
  FUN_01781ef0(iVar7);
  return uVar6;
}

