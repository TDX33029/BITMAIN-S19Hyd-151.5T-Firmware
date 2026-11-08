// FUN_01b50e24 @ 01b50e24 size=624 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c

int FUN_01b50e24(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  
  iVar1 = FUN_01afd684(param_2);
  if (iVar1 != *(int *)(*param_1 + 0x1c)) {
LAB_01b50e60:
    FUN_01b053d4(6,0,0x89,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0xbe);
    return 0;
  }
  iVar1 = FUN_01afd684(param_3);
  if (iVar1 != *(int *)(*param_1 + 0x14)) goto LAB_01b50e60;
  iVar1 = FUN_01b6ad8c(*(undefined4 *)(*param_1 + 0x10));
  iVar2 = FUN_01b6ad8c(*(undefined4 *)(*param_1 + 0x14));
  bVar7 = iVar2 == 0 || iVar1 == 0;
  if (iVar2 != 0 && iVar1 != 0) {
    pcVar8 = *(code **)(*(int *)(*param_1 + 0x24) + 4);
    uVar3 = FUN_01afd674(param_2);
    iVar9 = (*pcVar8)(iVar1,iVar2,uVar3);
    if (iVar9 == 0) {
      FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0xd4);
      iVar4 = 0;
      iVar9 = 0;
      iVar6 = 0;
      iVar5 = 0;
      goto LAB_01b50f5c;
    }
    iVar9 = FUN_01b6ad8c(*(undefined4 *)(*param_1 + 0x10));
    if (iVar9 == 0) goto LAB_01b50ef0;
    pcVar8 = *(code **)(*(int *)(*param_1 + 0x24) + 0x18);
    uVar3 = FUN_01afd674(param_3);
    iVar4 = (*pcVar8)(iVar9,uVar3);
    if (iVar4 == 0) {
      uVar3 = 0xe0;
      bVar7 = false;
    }
    else {
      iVar4 = FUN_01b6b750(iVar1,iVar9,*(undefined4 *)(*param_1 + 0x10));
      if (iVar4 == 0) {
        uVar3 = FUN_01afd674(param_3);
        iVar5 = FUN_01b6bc20(uVar3,*(undefined4 *)(*param_1 + 0x14));
        uVar3 = FUN_01afd674(param_2);
        iVar6 = FUN_01b6bc20(uVar3,*(undefined4 *)(*param_1 + 0x1c));
        iVar4 = 0;
        if (iVar6 != 0 && iVar5 != 0) {
          FUN_01b6b1c4(param_1[1]);
          FUN_01b6b1c4(param_1[2]);
          FUN_01b6b1c4(param_1[3]);
          param_1[1] = iVar9;
          param_1[2] = iVar5;
          param_1[3] = iVar6;
          iVar4 = 1;
          iVar9 = 0;
          iVar6 = 0;
          iVar5 = 0;
        }
        goto LAB_01b50f5c;
      }
      uVar3 = 0xe7;
    }
    FUN_01b053d4(6,bVar7,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",uVar3);
  }
  else {
LAB_01b50ef0:
    iVar9 = 0;
  }
  iVar5 = 0;
  iVar4 = 0;
  iVar6 = iVar4;
LAB_01b50f5c:
  FUN_01b6b1c4(iVar1);
  FUN_01b6b1c4(iVar2);
  FUN_01b6b1c4(iVar9);
  FUN_01b6b1c4(iVar5);
  FUN_01b6b1c4(iVar6);
  return iVar4;
}

