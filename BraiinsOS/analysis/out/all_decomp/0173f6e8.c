// FUN_0173f6e8 @ 0173f6e8 size=640 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c

undefined4 FUN_0173f6e8(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar7 = *(int **)(param_1 + 0x14);
  if (piVar7[1] == 0) {
    FUN_016e9cd0(6,0,0x76,"/aws-lc/crypto/fipsmodule/evp/p_hkdf.c",0x59);
  }
  else {
    iVar1 = FUN_0172a898();
    if (iVar1 == 0) {
      FUN_016e9cd0(6,0,0x72,"/aws-lc/crypto/fipsmodule/evp/p_hkdf.c",0x5d);
    }
    else {
      iVar1 = piVar7[3];
      if (iVar1 == 0) {
        FUN_016e9cd0(6,0,0x78,"/aws-lc/crypto/fipsmodule/evp/p_hkdf.c",0x61);
      }
      else {
        iVar5 = *piVar7;
        if (param_2 == 0) {
          if (iVar5 == 1) {
            uVar4 = FUN_0172a898(piVar7[1]);
            *param_3 = uVar4;
          }
          return 1;
        }
        if (iVar5 == 1) {
          uVar6 = *param_3;
          uVar4 = FUN_0172a898(piVar7[1]);
          if (uVar4 <= uVar6) {
            uVar2 = FUN_0173f420(param_2,param_3,piVar7[1],piVar7[2],piVar7[3],piVar7[4],piVar7[5]);
            return uVar2;
          }
          FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_hkdf.c",0x75);
        }
        else {
          if (iVar5 == 2) {
            uVar4 = *param_3;
            iVar5 = piVar7[1];
            iVar8 = piVar7[2];
            uVar2 = FUN_016e145c(piVar7 + 6);
            uVar3 = FUN_016e14e0(piVar7 + 6);
            uVar2 = FUN_0173efa4(param_2,uVar4,iVar5,iVar8,iVar1,uVar2,uVar3);
            return uVar2;
          }
          if (iVar5 == 0) {
            uVar4 = *param_3;
            iVar5 = piVar7[1];
            iVar9 = piVar7[2];
            iVar10 = piVar7[4];
            iVar8 = piVar7[5];
            uVar2 = FUN_016e145c(piVar7 + 6);
            uVar3 = FUN_016e14e0(piVar7 + 6);
            uVar2 = FUN_0173f598(param_2,uVar4,iVar5,iVar9,iVar1,iVar10,iVar8,uVar2,uVar3);
            return uVar2;
          }
          FUN_016e9cd0(6,0,0x44,"/aws-lc/crypto/fipsmodule/evp/p_hkdf.c",0x7f);
        }
      }
    }
  }
  return 0;
}

