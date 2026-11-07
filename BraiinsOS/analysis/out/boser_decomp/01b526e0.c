// FUN_01b526e0 @ 01b526e0 size=1000 calls_out=21 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/prime.c

undefined4
FUN_01b526e0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int local_40;
  int local_38;
  
  iVar1 = FUN_01b2e5fc(param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_01b2e238(param_2,3), iVar1 < 1)) {
    FUN_01b053d4(3,0,0x77,"/aws-lc/crypto/fipsmodule/bn/prime.c",0x2ce);
    return 0;
  }
  local_40 = param_3;
  if (param_3 == 0) {
    FUN_01b2b8d0(param_2);
    local_40 = FUN_01b208e4();
  }
  FUN_01b2e894(param_4);
  iVar1 = FUN_01b2e970(param_4);
  if (((iVar1 != 0) && (iVar2 = FUN_01b2b33c(iVar1,param_2), iVar2 != 0)) &&
     (iVar2 = FUN_01b2e358(iVar1,1), iVar2 != 0)) {
    iVar2 = 0;
    while (iVar3 = FUN_01b35f4c(iVar1,iVar2), iVar3 == 0) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = FUN_01b2e970(param_4);
    if ((iVar3 != 0) && (iVar4 = FUN_01b33c8c(iVar3,iVar1,iVar2), iVar4 != 0)) {
      iVar4 = FUN_01b2e970(param_4);
      iVar5 = FUN_01b2e970(param_4);
      iVar6 = FUN_01b2e970(param_4);
      iVar7 = FUN_01b2e970(param_4);
      iVar8 = FUN_01b2e970(param_4);
      if ((iVar5 != 0 && iVar4 != 0) &&
         ((iVar8 != 0 && (iVar7 != 0 && iVar6 != 0) &&
          (local_38 = FUN_01b35574(param_2,param_4), local_38 != 0)))) {
        for (iVar13 = 1; iVar13 <= local_40; iVar13 = iVar13 + 1) {
          iVar9 = FUN_01b524c8(iVar4,2,iVar1);
          if ((iVar9 == 0) || (iVar9 = FUN_01b34880(iVar5,iVar4,param_2,param_4), iVar9 == 0))
          goto LAB_01b52a00;
          iVar9 = FUN_01b2e238(iVar5,1);
          if (0 < iVar9) {
LAB_01b52918:
            uVar11 = 1;
            goto LAB_01b5291c;
          }
          iVar9 = FUN_01b35f88(iVar6,iVar4,iVar3,param_2,param_4,local_38);
          if (iVar9 == 0) {
LAB_01b52a00:
            uVar12 = 0;
            goto LAB_01b527b0;
          }
          iVar9 = FUN_01b2e54c(iVar6);
          if ((iVar9 == 0) && (iVar9 = FUN_01b2be38(iVar6,iVar1), iVar9 != 0)) {
            iVar9 = 1;
            do {
              if (iVar2 <= iVar9) {
                iVar1 = FUN_01b2b33c(iVar7,iVar6);
                if (((iVar1 == 0) ||
                    (iVar1 = FUN_01b34254(iVar6,iVar7,iVar7,param_2,param_4), iVar1 == 0)) ||
                   ((iVar1 = FUN_01b2e54c(iVar6), iVar1 == 0 &&
                    (iVar1 = FUN_01b2b33c(iVar7,iVar6), iVar1 == 0)))) goto LAB_01b52a00;
LAB_01b529ec:
                iVar1 = FUN_01b2b33c(iVar8,iVar7);
                if (((iVar1 == 0) || (iVar1 = FUN_01b2e358(iVar8,1), iVar1 == 0)) ||
                   (iVar1 = FUN_01b34880(iVar5,iVar8,param_2,param_4), iVar1 == 0))
                goto LAB_01b52a00;
                iVar1 = FUN_01b2e238(iVar5,1);
                if (0 < iVar1) goto LAB_01b52918;
                uVar11 = 2;
                goto LAB_01b5291c;
              }
              iVar10 = FUN_01b2b33c(iVar7,iVar6);
              if ((iVar10 == 0) ||
                 (iVar10 = FUN_01b34254(iVar6,iVar7,iVar7,param_2,param_4), iVar10 == 0))
              goto LAB_01b52a00;
              iVar10 = FUN_01b2be38(iVar6,iVar1);
              if (iVar10 == 0) break;
              iVar10 = FUN_01b2e54c(iVar6);
              if (iVar10 != 0) goto LAB_01b529ec;
              iVar9 = iVar9 + 1;
            } while( true );
          }
          iVar9 = FUN_01b337a0(param_5,1,iVar13 + -1);
          if (iVar9 == 0) goto LAB_01b52a00;
        }
        uVar11 = 0;
LAB_01b5291c:
        uVar12 = 1;
        *param_1 = uVar11;
        goto LAB_01b527b0;
      }
    }
  }
  local_38 = 0;
  uVar12 = 0;
LAB_01b527b0:
  FUN_01b323f0(local_38);
  FUN_01b2ebbc(param_4);
  return uVar12;
}

