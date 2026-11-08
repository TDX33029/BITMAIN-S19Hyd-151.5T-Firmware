// FUN_01b54660 @ 01b54660 size=1256 calls_out=18 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/prime.c | /aws-lc/crypto/fipsmodule/bn/prime.c

undefined4
FUN_01b54660(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  int local_30;
  
  if (param_2 < 2) {
    uVar12 = 0x130;
  }
  else {
    if (param_3 == 0 || param_2 != 2) {
      iVar3 = FUN_01b2e788();
      if (iVar3 == 0) {
        return 0;
      }
      FUN_01b2e894();
      iVar4 = FUN_01b2e970(iVar3);
      if (iVar4 != 0) {
        iVar5 = FUN_01b208e4(param_2);
        local_30 = 0;
LAB_01b54738:
        if (param_4 != 0) {
          if (param_3 == 0) {
            FUN_01b2e894(iVar3);
            iVar6 = FUN_01b2e970(iVar3);
            if ((((iVar6 != 0) && (iVar10 = FUN_01b52efc(param_1,param_2,0,1), iVar10 != 0)) &&
                (iVar10 = FUN_01b33d3c(0,iVar6,param_1,param_4,iVar3), iVar10 != 0)) &&
               (iVar6 = FUN_01b30908(param_1,param_1,iVar6), iVar6 != 0)) {
              if (param_5 == 0) {
                iVar6 = FUN_01b2e458(param_1,1);
              }
              else {
                iVar6 = FUN_01b3081c(param_1,param_1,param_5);
              }
              if (iVar6 != 0) {
                if (*(int *)(param_1 + 4) * 0x20 < 0x401) {
                  iVar6 = 0x200;
                }
                else {
                  iVar6 = 0x400;
                }
                do {
                  iVar10 = 1;
                  puVar11 = (undefined2 *)&UNK_0055e098;
                  while( true ) {
                    puVar11 = puVar11 + 1;
                    uVar9 = FUN_01b2ec50(param_1,*puVar11);
                    if (uVar9 < 2) break;
                    iVar10 = iVar10 + 1;
                    if (iVar10 == iVar6) goto LAB_01b54934;
                  }
                  iVar10 = FUN_01b3081c(param_1,param_1,param_4);
                } while (iVar10 != 0);
              }
            }
          }
          else {
            FUN_01b2e894(iVar3);
            uVar12 = FUN_01b2e970(iVar3);
            uVar7 = FUN_01b2e970(iVar3);
            iVar6 = FUN_01b2e970(iVar3);
            if (((iVar6 != 0) && (iVar10 = FUN_01b35374(iVar6,param_4), iVar10 != 0)) &&
               ((iVar10 = FUN_01b52efc(uVar7,param_2 + -1,0,1), iVar10 != 0 &&
                ((iVar10 = FUN_01b33d3c(0,uVar12,uVar7,iVar6,iVar3), iVar10 != 0 &&
                 (iVar10 = FUN_01b30908(uVar7,uVar7,uVar12), iVar10 != 0)))))) {
              if (param_5 == 0) {
                iVar10 = FUN_01b2e458(uVar7,1);
              }
              else {
                iVar10 = FUN_01b35374(uVar12,param_5);
                if (iVar10 == 0) goto LAB_01b548e8;
                iVar10 = FUN_01b3081c(uVar7,uVar7,uVar12);
              }
              if (((iVar10 != 0) && (iVar10 = FUN_01b33afc(param_1,uVar7), iVar10 != 0)) &&
                 (iVar10 = FUN_01b2e458(param_1,1), iVar10 != 0)) {
                if (*(int *)(param_1 + 4) * 0x20 < 0x401) {
                  iVar10 = 0x200;
                }
                else {
                  iVar10 = 0x400;
                }
                do {
                  puVar11 = (undefined2 *)&UNK_0055e098;
                  while( true ) {
                    puVar11 = puVar11 + 1;
                    uVar1 = *puVar11;
                    iVar8 = FUN_01b2ec50(param_1);
                    if ((iVar8 == 0) || (iVar8 = FUN_01b2ec50(uVar7,uVar1), iVar8 == 0)) break;
                    if (puVar11 == (undefined2 *)(&UNK_0055e096 + iVar10 * 2)) goto LAB_01b54934;
                  }
                  iVar8 = FUN_01b3081c(param_1,param_1,param_4);
                } while ((iVar8 != 0) && (iVar8 = FUN_01b3081c(uVar7,uVar7,iVar6), iVar8 != 0));
              }
            }
          }
LAB_01b548e8:
          bVar2 = false;
          goto LAB_01b54938;
        }
        do {
          iVar6 = FUN_01b52efc(param_1,param_2,1);
          if (iVar6 == 0) goto LAB_01b54788;
          iVar6 = FUN_01b33884(param_1);
        } while (iVar6 != 0);
        goto LAB_01b54770;
      }
LAB_01b54788:
      uVar12 = 0;
      goto LAB_01b54a9c;
    }
    uVar12 = 0x134;
  }
  FUN_01b053d4(3,0,0x67,"/aws-lc/crypto/fipsmodule/bn/prime.c",uVar12);
  return 0;
LAB_01b54934:
  bVar2 = true;
LAB_01b54938:
  FUN_01b2ebbc(iVar3);
  if (!bVar2) goto LAB_01b54788;
LAB_01b54770:
  iVar6 = FUN_01b337a0(param_6,0,local_30);
  if (iVar6 == 0) goto LAB_01b54788;
  if (param_3 == 0) {
    iVar6 = FUN_01b545b8(param_1,iVar5,iVar3,0,param_6);
    if (iVar6 == -1) goto LAB_01b54788;
    if (iVar6 != 0) goto LAB_01b54a98;
  }
  else {
    iVar6 = FUN_01b35374(iVar4,param_1);
    if (iVar6 == 0) goto LAB_01b54788;
    iVar6 = 0;
    while( true ) {
      iVar10 = FUN_01b545b8(param_1,1,iVar3,0,0);
      if (iVar10 == -1) goto LAB_01b54788;
      if (iVar10 == 0) break;
      iVar10 = FUN_01b545b8(iVar4,1,iVar3,0,0);
      if (iVar10 == -1) goto LAB_01b54788;
      if (iVar10 == 0) break;
      iVar10 = FUN_01b337a0(param_6,1,iVar6);
      if (iVar10 == 0) goto LAB_01b54788;
      iVar6 = iVar6 + 1;
      if (iVar5 == iVar6) goto LAB_01b54a98;
    }
  }
  local_30 = local_30 + 1;
  goto LAB_01b54738;
LAB_01b54a98:
  uVar12 = 1;
LAB_01b54a9c:
  FUN_01b2ebbc(iVar3);
  FUN_01b2e7c8(iVar3);
  return uVar12;
}

