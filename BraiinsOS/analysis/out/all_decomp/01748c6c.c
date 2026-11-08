// FUN_01748c6c @ 01748c6c size=688 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c

undefined4 FUN_01748c6c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int local_2c;
  
  iVar1 = FUN_016e1e1c(param_2);
  if (iVar1 != *(int *)(*param_1 + 0x1c)) {
LAB_01748cc0:
    FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0xbe);
    return 0;
  }
  iVar1 = FUN_016e1e1c(param_3);
  if (iVar1 != *(int *)(*param_1 + 0x14)) goto LAB_01748cc0;
  iVar1 = FUN_0177a6c0(*(undefined4 *)(*param_1 + 0x10));
  iVar2 = FUN_0177a6c0(*(undefined4 *)(*param_1 + 0x14));
  if (iVar2 != 0 && iVar1 != 0) {
    pcVar6 = *(code **)(*(int *)(*param_1 + 0x24) + 4);
    uVar3 = FUN_016e1e04(param_2);
    iVar4 = (*pcVar6)(iVar1,iVar2,uVar3);
    if (iVar4 == 0) {
      FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0xd4);
      iVar4 = 0;
      uVar3 = 0;
      iVar5 = 0;
      local_2c = 0;
      goto LAB_01748e50;
    }
    local_2c = FUN_0177a6c0(*(undefined4 *)(*param_1 + 0x10));
    if (local_2c != 0) {
      pcVar6 = *(code **)(*(int *)(*param_1 + 0x24) + 0x18);
      uVar3 = FUN_016e1e04(param_3);
      iVar4 = (*pcVar6)(local_2c,uVar3);
      if (iVar4 == 0) {
        FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0xe0);
      }
      else {
        iVar4 = FUN_0177b0d8(iVar1,local_2c,*(undefined4 *)(*param_1 + 0x10));
        if (iVar4 == 0) {
          uVar3 = FUN_016e1e04(param_3);
          iVar5 = FUN_0177b624(uVar3,*(undefined4 *)(*param_1 + 0x14));
          uVar3 = FUN_016e1e04(param_2);
          iVar4 = FUN_0177b624(uVar3,*(undefined4 *)(*param_1 + 0x1c));
          uVar3 = 0;
          if (iVar4 != 0 && iVar5 != 0) {
            FUN_0177aafc(param_1[1]);
            FUN_0177aafc(param_1[2]);
            FUN_0177aafc(param_1[3]);
            param_1[1] = local_2c;
            param_1[2] = iVar5;
            param_1[3] = iVar4;
            uVar3 = 1;
            iVar4 = 0;
            iVar5 = 0;
            local_2c = 0;
          }
          goto LAB_01748e50;
        }
        FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0xe7);
      }
      iVar4 = 0;
      iVar5 = 0;
      uVar3 = 0;
      goto LAB_01748e50;
    }
  }
  iVar4 = 0;
  local_2c = 0;
  iVar5 = 0;
  uVar3 = 0;
LAB_01748e50:
  FUN_0177aafc(iVar1);
  FUN_0177aafc(iVar2);
  FUN_0177aafc(local_2c);
  FUN_0177aafc(iVar5);
  FUN_0177aafc(iVar4);
  return uVar3;
}

