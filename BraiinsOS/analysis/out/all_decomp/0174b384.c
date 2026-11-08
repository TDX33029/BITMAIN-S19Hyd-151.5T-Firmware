// FUN_0174b384 @ 0174b384 size=1240 calls_out=20 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/prime.c

undefined4
FUN_0174b384(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
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
  int local_4c;
  int local_2c;
  
  iVar1 = FUN_017181d4(param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_01717d9c(param_2,3), iVar1 < 1)) {
    FUN_016e9cd0(3,0,0x77,"/aws-lc/crypto/fipsmodule/bn/prime.c",0x2ce);
    return 0;
  }
  local_2c = param_3;
  if (param_3 == 0) {
    iVar1 = FUN_01714eb4(param_2);
    if (iVar1 < 0xea3) {
      if (iVar1 < 0x541) {
        if (iVar1 < 0x1dc) {
          if (iVar1 < 400) {
            if (iVar1 < 0x15b) {
              if (iVar1 < 0x134) {
                if (iVar1 < 0x37) {
                  local_2c = 0x22;
                }
                else {
                  local_2c = 0x1b;
                }
              }
              else {
                local_2c = 8;
              }
            }
            else {
              local_2c = 7;
            }
          }
          else {
            local_2c = 6;
          }
        }
        else {
          local_2c = 5;
        }
      }
      else {
        local_2c = 4;
      }
    }
    else {
      local_2c = 3;
    }
  }
  FUN_017185b4(param_4);
  iVar1 = FUN_017186b0(param_4);
  if (((iVar1 != 0) && (iVar2 = FUN_017147ac(iVar1,param_2), iVar2 != 0)) &&
     (iVar2 = FUN_01717ee0(iVar1,1), iVar2 != 0)) {
    iVar2 = 0;
    while (iVar3 = FUN_0172135c(iVar1,iVar2), iVar3 == 0) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = FUN_017186b0(param_4);
    if ((iVar3 != 0) && (iVar4 = FUN_0171ea08(iVar3,iVar1,iVar2), iVar4 != 0)) {
      iVar4 = FUN_017186b0(param_4);
      iVar5 = FUN_017186b0(param_4);
      iVar6 = FUN_017186b0(param_4);
      iVar7 = FUN_017186b0(param_4);
      iVar8 = FUN_017186b0(param_4);
      if ((iVar5 != 0 && iVar4 != 0) &&
         ((iVar8 != 0 && (iVar7 != 0 && iVar6 != 0) &&
          (iVar13 = FUN_01720560(param_2,param_4), iVar13 != 0)))) {
        if (0 < local_2c) {
          local_4c = 1;
LAB_0174b588:
          iVar9 = FUN_0174b144(iVar4,2,iVar1);
          if ((iVar9 == 0) || (iVar9 = FUN_0171f790(iVar5,iVar4,param_2,param_4), iVar9 == 0))
          goto LAB_0174b770;
          iVar9 = FUN_01717d9c(iVar5,1);
          if (0 < iVar9) {
LAB_0174b82c:
            uVar11 = 1;
            goto LAB_0174b650;
          }
          iVar9 = FUN_01721398(iVar6,iVar4,iVar3,param_2,param_4,iVar13);
          if (iVar9 == 0) {
LAB_0174b770:
            uVar12 = 0;
            goto LAB_0174b424;
          }
          iVar9 = FUN_01718124(iVar6);
          if ((iVar9 == 0) && (iVar9 = FUN_01715760(iVar6,iVar1), iVar9 != 0)) {
            if (iVar2 < 2) {
LAB_0174b784:
              iVar1 = FUN_017147ac(iVar7,iVar6);
              if (((iVar1 != 0) &&
                  (iVar1 = FUN_0171f040(iVar6,iVar7,iVar7,param_2,param_4), iVar1 != 0)) &&
                 ((iVar1 = FUN_01718124(iVar6), iVar1 != 0 ||
                  (iVar1 = FUN_017147ac(iVar7,iVar6), iVar1 != 0)))) {
LAB_0174b7d0:
                iVar1 = FUN_017147ac(iVar8,iVar7);
                if (((iVar1 == 0) || (iVar1 = FUN_01717ee0(iVar8,1), iVar1 == 0)) ||
                   (iVar1 = FUN_0171f790(iVar5,iVar8,param_2,param_4), iVar1 == 0))
                goto LAB_0174b770;
                iVar1 = FUN_01717d9c(iVar5,1);
                if (0 < iVar1) goto LAB_0174b82c;
                uVar11 = 2;
                goto LAB_0174b650;
              }
              goto LAB_0174b770;
            }
            iVar9 = 1;
            while( true ) {
              iVar10 = FUN_017147ac(iVar7,iVar6);
              if ((iVar10 == 0) ||
                 (iVar10 = FUN_0171f040(iVar6,iVar7,iVar7,param_2,param_4), iVar10 == 0))
              goto LAB_0174b770;
              iVar10 = FUN_01715760(iVar6,iVar1);
              if (iVar10 == 0) break;
              iVar10 = FUN_01718124(iVar6);
              iVar9 = iVar9 + 1;
              if (iVar10 != 0) goto LAB_0174b7d0;
              if (iVar2 == iVar9) goto LAB_0174b784;
            }
          }
          iVar9 = FUN_0171e414(param_5,1,local_4c + -1);
          if (iVar9 == 0) goto LAB_0174b770;
          local_4c = local_4c + 1;
          if (local_2c < local_4c) goto LAB_0174b64c;
          goto LAB_0174b588;
        }
LAB_0174b64c:
        uVar11 = 0;
LAB_0174b650:
        uVar12 = 1;
        *param_1 = uVar11;
        goto LAB_0174b424;
      }
    }
  }
  iVar13 = 0;
  uVar12 = 0;
LAB_0174b424:
  FUN_0171c904(iVar13);
  FUN_01718904(param_4);
  return uVar12;
}

