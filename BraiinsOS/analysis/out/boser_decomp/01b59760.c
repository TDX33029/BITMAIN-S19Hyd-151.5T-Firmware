// FUN_01b59760 @ 01b59760 size=396 calls_out=13 calls_in=0
// strings: 

int FUN_01b59760(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[5];
  iVar1 = FUN_01b59650();
  if ((iVar1 == 0) && (puVar4[1] == 0)) {
    iVar1 = FUN_01b2adb8();
    puVar4[1] = iVar1;
    if ((iVar1 != 0) && (iVar1 = FUN_01b2b4cc(iVar1,0x10001), iVar1 != 0)) goto LAB_01b5978c;
LAB_01b59798:
    iVar3 = 0;
    iVar1 = 0;
  }
  else {
LAB_01b5978c:
    iVar1 = FUN_01b58d74();
    if (iVar1 == 0) goto LAB_01b59798;
    iVar3 = 0;
    if (param_1[7] == 0) {
LAB_01b597f8:
      iVar2 = FUN_01b59650();
      if (((iVar2 == 0) && (iVar2 = FUN_01b59538(iVar1,*puVar4,puVar4[1],iVar3), iVar2 == 0)) ||
         ((iVar2 = FUN_01b59650(), iVar2 != 0 &&
          (iVar2 = FUN_01b59578(iVar1,*puVar4,iVar3), iVar2 == 0)))) {
LAB_01b59878:
        iVar2 = 0;
      }
      else {
        if (*(int *)*param_1 == 0x390) {
          iVar2 = param_1[5];
          iVar2 = FUN_01b6e80c(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                               *(undefined4 *)(iVar2 + 0x14),iVar1 + 0x24);
          if (iVar2 == 0) goto LAB_01b59878;
          if (*(int *)*param_1 == 0x390) {
            iVar2 = FUN_01b47c44(param_2,0x390,iVar1);
            goto LAB_01b5987c;
          }
        }
        iVar2 = FUN_01b478a4(param_2,iVar1);
      }
      goto LAB_01b5987c;
    }
    iVar3 = FUN_01b33748();
    if (iVar3 != 0) {
      FUN_01b48c68(iVar3,param_1);
      goto LAB_01b597f8;
    }
  }
  iVar2 = iVar3;
LAB_01b5987c:
  FUN_01b33760(iVar3);
  if (iVar1 != 0 && iVar2 == 0) {
    FUN_01b564e4(iVar1);
  }
  return iVar2;
}

