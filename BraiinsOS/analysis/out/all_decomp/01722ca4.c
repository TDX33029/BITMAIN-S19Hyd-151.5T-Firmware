// FUN_01722ca4 @ 01722ca4 size=588 calls_out=12 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/jacobi.c | /aws-lc/crypto/fipsmodule/bn/jacobi.c

int FUN_01722ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar2 = FUN_017181d4(param_2);
  if (iVar2 == 0) {
    FUN_016e9cd0(3,0,0x68,"/aws-lc/crypto/fipsmodule/bn/jacobi.c",0x18);
  }
  else {
    iVar2 = FUN_0171462c(param_2);
    if (iVar2 == 0) {
      FUN_017185b4(param_3);
      puVar3 = (undefined4 *)FUN_017186b0(param_3);
      puVar4 = (undefined4 *)FUN_017186b0(param_3);
      if (((puVar4 == (undefined4 *)0x0) || (iVar2 = FUN_017147ac(puVar3,param_1), iVar2 == 0)) ||
         (iVar2 = FUN_017147ac(puVar4,param_2), iVar2 == 0)) {
LAB_01722e44:
        iVar5 = -2;
      }
      else {
        iVar5 = FUN_01717e5c(puVar3);
        iVar2 = 1;
        while (puVar1 = puVar3, uVar8 = 0, iVar5 == 0) {
          while (iVar5 = FUN_0172135c(puVar1,uVar8), iVar5 == 0) {
            uVar8 = uVar8 + 1;
          }
          iVar5 = FUN_0171ea08(puVar1,puVar1,uVar8);
          if (iVar5 == 0) goto LAB_01722e44;
          if ((uVar8 & 1) == 0) {
            iVar5 = puVar1[1];
            if (puVar1[3] == 0) {
LAB_01722e90:
              if (iVar5 == 0) goto LAB_01722df4;
              uVar8 = *(uint *)*puVar1;
            }
            else if (iVar5 == 0) {
              uVar8 = 0xffffffff;
            }
            else {
LAB_01722dcc:
              uVar8 = ~*(uint *)*puVar1;
            }
            if (puVar4[1] != 0) {
              puVar7 = (uint *)*puVar4;
LAB_01722de4:
              if ((uVar8 & *puVar7 & 2) != 0) {
                iVar2 = -iVar2;
              }
            }
          }
          else {
            if (puVar4[1] != 0) {
              puVar7 = (uint *)*puVar4;
              iVar5 = puVar1[1];
              iVar2 = *(int *)(&DAT_004288e0 + (*puVar7 & 7) * 4) * iVar2;
              if (puVar1[3] == 0) goto LAB_01722e90;
              if (iVar5 != 0) goto LAB_01722dcc;
              uVar8 = 0xffffffff;
              goto LAB_01722de4;
            }
            iVar2 = 0;
          }
LAB_01722df4:
          iVar5 = FUN_0171ef88(puVar4,puVar4,puVar1,param_3);
          if (iVar5 == 0) goto LAB_01722e44;
          puVar1[3] = 0;
          iVar5 = FUN_01717e5c(puVar4);
          puVar3 = puVar4;
          puVar4 = puVar1;
        }
        iVar6 = FUN_01718124(puVar4);
        iVar5 = 0;
        if (iVar6 != 0) {
          iVar5 = iVar2;
        }
      }
      FUN_01718904(param_3);
      return iVar5;
    }
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/jacobi.c",0x1e);
  }
  return -2;
}

