// FUN_01b36d74 @ 01b36d74 size=548 calls_out=11 calls_in=2
// strings: 

undefined4 FUN_01b36d74(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1 + 0x34;
  FUN_01b706b4(iVar7);
  bVar1 = *(byte *)(param_1 + 0x88);
  FUN_01b70714(iVar7);
  if ((bVar1 & 1) != 0) {
    return 1;
  }
  FUN_01b706e4(iVar7);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 == 0) {
      iVar2 = FUN_01b35574(*(undefined4 *)(param_1 + 4),param_2);
      *(int *)(param_1 + 0x54) = iVar2;
      if (iVar2 != 0) goto LAB_01b36e20;
    }
    else {
LAB_01b36e20:
      if ((*(int *)(param_1 + 0xc) == 0) ||
         (iVar2 = FUN_01b2b7ac(param_1 + 0x60,*(int *)(param_1 + 0xc),*(undefined4 *)(iVar2 + 0x18))
         , iVar2 != 0)) {
        if ((*(int *)(param_1 + 8) != 0) &&
           ((*(int *)(param_1 + 0x10) != 0 && (*(int *)(param_1 + 0x14) != 0)))) {
          iVar2 = *(int *)(param_1 + 0x58);
          if (iVar2 == 0) {
            iVar2 = FUN_01b358dc(*(int *)(param_1 + 0x10),param_2);
            *(int *)(param_1 + 0x58) = iVar2;
            if (iVar2 == 0) goto LAB_01b36df4;
          }
          iVar6 = *(int *)(param_1 + 0x5c);
          if (iVar6 == 0) {
            iVar6 = FUN_01b358dc(*(undefined4 *)(param_1 + 0x14),param_2);
            *(int *)(param_1 + 0x5c) = iVar6;
            if (iVar6 == 0) goto LAB_01b36df4;
          }
          if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
            if (*(int *)(param_1 + 0x20) == 0) {
              iVar3 = FUN_01b2adb8();
              if ((iVar3 != 0) &&
                 (iVar4 = FUN_01b36cb8(iVar3,*(undefined4 *)(param_1 + 0x14),
                                       *(undefined4 *)(param_1 + 0x10),param_2,
                                       *(undefined4 *)(param_1 + 0x58)), iVar4 != 0)) {
                *(int *)(param_1 + 0x20) = iVar3;
                goto LAB_01b36f28;
              }
LAB_01b36efc:
              FUN_01b1f904(iVar3);
              goto LAB_01b36df4;
            }
LAB_01b36f28:
            iVar2 = FUN_01b2b7ac(param_1 + 100,*(undefined4 *)(param_1 + 0x18),
                                 *(undefined4 *)(iVar2 + 0x18));
            if ((iVar2 == 0) ||
               (iVar2 = FUN_01b2b7ac(param_1 + 0x68,*(undefined4 *)(param_1 + 0x1c),
                                     *(undefined4 *)(iVar6 + 0x18)), iVar2 == 0)) goto LAB_01b36df4;
            if (*(int *)(param_1 + 0x6c) == 0) {
              iVar3 = FUN_01b2adb8();
              if ((iVar3 == 0) ||
                 (iVar2 = FUN_01b331cc(iVar3,*(undefined4 *)(param_1 + 0x20),
                                       *(undefined4 *)(param_1 + 0x58),param_2), iVar2 == 0))
              goto LAB_01b36efc;
              *(int *)(param_1 + 0x6c) = iVar3;
            }
          }
        }
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
        goto LAB_01b36e44;
      }
    }
LAB_01b36df4:
    uVar5 = 0;
  }
  else {
LAB_01b36e44:
    uVar5 = 1;
  }
  FUN_01b70744(iVar7);
  return uVar5;
}

