// FUN_01b4bb30 @ 01b4bb30 size=508 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c

undefined4 FUN_01b4bb30(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5[1] == 0) {
    uVar10 = 0x59;
    uVar3 = 0x76;
  }
  else {
    iVar1 = FUN_01b3b6b4(piVar5[1]);
    if (iVar1 == 0) {
      uVar10 = 0x5d;
      uVar3 = 0x72;
    }
    else {
      iVar1 = piVar5[3];
      if (iVar1 == 0) {
        uVar10 = 0x61;
        uVar3 = 0x78;
      }
      else {
        iVar4 = *piVar5;
        if (param_2 == 0) {
          if (iVar4 == 1) {
            uVar2 = FUN_01b3b6b4(piVar5[1]);
            *param_3 = uVar2;
          }
          return 1;
        }
        if (iVar4 == 1) {
          uVar7 = *param_3;
          uVar2 = FUN_01b3b6b4(piVar5[1]);
          if (uVar2 <= uVar7) {
            uVar3 = FUN_01b4b880(param_2,param_3,piVar5[1],piVar5[2],piVar5[3],piVar5[4],piVar5[5]);
            return uVar3;
          }
          uVar10 = 0x75;
          uVar3 = 100;
        }
        else {
          if (iVar4 == 2) {
            iVar4 = piVar5[1];
            iVar6 = piVar5[2];
            uVar2 = *param_3;
            uVar3 = FUN_01afcde4(piVar5 + 6);
            uVar10 = FUN_01afce6c(piVar5 + 6);
            uVar3 = FUN_01b4b480(param_2,uVar2,iVar4,iVar6,iVar1,uVar3,uVar10);
            return uVar3;
          }
          if (iVar4 == 0) {
            uVar2 = *param_3;
            iVar4 = piVar5[1];
            iVar9 = piVar5[2];
            iVar6 = piVar5[4];
            iVar8 = piVar5[5];
            uVar3 = FUN_01afcde4(piVar5 + 6);
            uVar10 = FUN_01afce6c(piVar5 + 6);
            uVar3 = FUN_01b4b9e4(param_2,uVar2,iVar4,iVar9,iVar1,iVar6,iVar8,uVar3,uVar10);
            return uVar3;
          }
          uVar10 = 0x7f;
          uVar3 = 0x44;
        }
      }
    }
  }
  FUN_01b053d4(6,0,uVar3,"/aws-lc/crypto/fipsmodule/evp/p_hkdf.c",uVar10);
  return 0;
}

