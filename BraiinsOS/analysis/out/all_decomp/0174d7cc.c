// FUN_0174d7cc @ 0174d7cc size=1628 calls_out=17 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/prime.c | /aws-lc/crypto/fipsmodule/bn/prime.c

undefined4
FUN_0174d7cc(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_34;
  
  if (param_2 < 0xea3) {
    if (param_2 < 0x541) {
      if (param_2 < 0x1dc) {
        if (param_2 < 400) {
          if (param_2 < 0x15b) {
            if (param_2 < 0x134) {
              if (param_2 < 0x37) {
                if (param_2 < 2) {
                  uVar12 = 0x130;
LAB_0174dd28:
                  FUN_016e9cd0(3,0,0x67,"/aws-lc/crypto/fipsmodule/bn/prime.c",uVar12);
                  return 0;
                }
                if (param_3 != 0 && param_2 == 2) {
                  uVar12 = 0x134;
                  goto LAB_0174dd28;
                }
                iVar11 = 0x22;
              }
              else {
                iVar11 = 0x1b;
              }
            }
            else {
              iVar11 = 8;
            }
          }
          else {
            iVar11 = 7;
          }
        }
        else {
          iVar11 = 6;
        }
      }
      else {
        iVar11 = 5;
      }
    }
    else {
      iVar11 = 4;
    }
    iVar2 = FUN_017184a8();
  }
  else {
    iVar2 = FUN_017184a8();
    iVar11 = 3;
  }
  if (iVar2 == 0) {
    return 0;
  }
  FUN_017185b4();
  uVar13 = FUN_017186b0(iVar2);
  uVar12 = (undefined4)((ulonglong)uVar13 >> 0x20);
  iVar3 = (int)uVar13;
  if (iVar3 != 0) {
    if (param_4 == 0) {
      local_34 = (undefined2 *)0x1;
      puVar9 = (undefined2 *)0;
      goto LAB_0174d950;
    }
    if (param_3 == 0) {
      iVar5 = 1;
      puVar9 = (undefined2 *)0x0;
      goto LAB_0174d9d0;
    }
    local_34 = (undefined2 *)0x0;
    local_40 = 1;
LAB_0174d8c0:
    FUN_017185b4(iVar2,uVar12);
    uVar12 = FUN_017186b0(iVar2);
    uVar4 = FUN_017186b0(iVar2);
    iVar5 = FUN_017186b0(iVar2);
    if ((((iVar5 != 0) && (iVar6 = FUN_0172030c(iVar5,param_4), iVar6 != 0)) &&
        (iVar6 = FUN_0174bd44(uVar4,param_2 + -1,0,1), iVar6 != 0)) &&
       ((iVar6 = FUN_0171ead4(0,uVar12,uVar4,iVar5,iVar2), iVar6 != 0 &&
        (iVar6 = FUN_0171aa2c(uVar4,uVar4,uVar12), iVar6 != 0)))) {
      if (param_5 == 0) {
        iVar6 = FUN_0171801c(uVar4,1);
      }
      else {
        iVar6 = FUN_0172030c(uVar12,param_5);
        if (iVar6 == 0) goto LAB_0174d904;
        iVar6 = FUN_0171a934(uVar4,uVar4,uVar12);
      }
      if (((iVar6 != 0) && (iVar6 = FUN_0171e808(param_1,uVar4), iVar6 != 0)) &&
         (iVar6 = FUN_0171801c(param_1,1), iVar6 != 0)) {
        if (*(int *)(param_1 + 4) * 0x20 < 0x401) {
          iVar6 = 0x200;
        }
        else {
          iVar6 = 0x400;
        }
        local_48 = (undefined2 *)&DAT_0044c414;
        do {
          puVar9 = local_48;
          while( true ) {
            puVar9 = puVar9 + 1;
            uVar1 = *puVar9;
            iVar8 = FUN_01718998(param_1,uVar1);
            if ((iVar8 == 0) || (iVar8 = FUN_01718998(uVar4,uVar1), iVar8 == 0)) break;
            if ((undefined2 *)(&DAT_0044c412 + iVar6 * 2) == puVar9) {
              FUN_01718904(iVar2);
              iVar5 = FUN_0171e414(param_6,0,local_34);
              if (iVar5 == 0) goto LAB_0174d90c;
              local_34 = (undefined2 *)local_40;
              goto LAB_0174dc3c;
            }
          }
          iVar8 = FUN_0171a934(param_1,param_1,param_4);
        } while ((iVar8 != 0) && (iVar8 = FUN_0171a934(uVar4,uVar4,iVar5), iVar8 != 0));
      }
    }
LAB_0174d904:
    FUN_01718904(iVar2);
  }
LAB_0174d90c:
  uVar12 = 0;
LAB_0174d910:
  FUN_01718904(iVar2);
  FUN_017184e8(iVar2);
  return uVar12;
LAB_0174dc3c:
  iVar5 = FUN_0172030c(iVar3,param_1);
  if (iVar5 == 0) goto LAB_0174d90c;
  iVar5 = 0;
  while( true ) {
    iVar6 = FUN_0174d720(param_1,1,iVar2,0,0);
    if (iVar6 == -1) goto LAB_0174d90c;
    if (iVar6 == 0) break;
    iVar6 = FUN_0174d720(iVar3,1,iVar2,0,0);
    if (iVar6 == -1) goto LAB_0174d90c;
    if (iVar6 == 0) break;
    iVar6 = FUN_0171e414(param_6,1,iVar5);
    iVar5 = iVar5 + 1;
    if (iVar6 == 0) goto LAB_0174d90c;
    if (iVar5 == iVar11) goto LAB_0174dcd8;
  }
  uVar12 = 1;
  local_40 = (int)local_34 + 1;
  if (param_4 != 0) goto LAB_0174d8c0;
  puVar9 = local_34;
  local_34 = (undefined2 *)local_40;
LAB_0174d950:
  while( true ) {
    do {
      iVar5 = FUN_0174bd44(param_1,param_2,1);
      if (iVar5 == 0) goto LAB_0174d90c;
      iVar5 = FUN_0171e4f8(param_1);
    } while (iVar5 != 0);
    iVar5 = FUN_0171e414(param_6,0,puVar9);
    if (iVar5 == 0) goto LAB_0174d90c;
    if (param_3 != 0) break;
LAB_0174d994:
    iVar5 = FUN_0174d720(param_1,iVar11,iVar2,0,param_6);
    if (iVar5 == -1) goto LAB_0174d90c;
    if (iVar5 != 0) goto LAB_0174dcd8;
    iVar5 = (int)local_34 + 1;
    puVar9 = local_34;
    if (param_4 != 0) {
LAB_0174d9d0:
      FUN_017185b4(iVar2);
      iVar6 = FUN_017186b0(iVar2);
      if ((((iVar6 != 0) && (iVar8 = FUN_0174bd44(param_1,param_2,0,1), iVar8 != 0)) &&
          (iVar8 = FUN_0171ead4(0,iVar6,param_1,param_4,iVar2), iVar8 != 0)) &&
         (iVar6 = FUN_0171aa2c(param_1,param_1,iVar6), iVar6 != 0)) {
        if (param_5 == 0) {
          iVar6 = FUN_0171801c(param_1,1);
        }
        else {
          iVar6 = FUN_0171a934(param_1,param_1,param_5);
        }
        if (iVar6 != 0) {
          local_34 = (undefined2 *)&DAT_0044c414;
          if (*(int *)(param_1 + 4) * 0x20 < 0x401) {
            iVar6 = 0x200;
          }
          else {
            iVar6 = 0x400;
          }
          do {
            puVar10 = local_34;
            while( true ) {
              puVar10 = puVar10 + 1;
              uVar7 = FUN_01718998(param_1,*puVar10);
              if (uVar7 < 2) break;
              if ((undefined2 *)(&DAT_0044c412 + iVar6 * 2) == puVar10) {
                FUN_01718904(iVar2);
                iVar6 = FUN_0171e414(param_6,0,puVar9);
                if (iVar6 == 0) goto LAB_0174d90c;
                local_34 = (undefined2 *)iVar5;
                goto LAB_0174d994;
              }
            }
            iVar8 = FUN_0171a934(param_1,param_1,param_4);
          } while (iVar8 != 0);
        }
      }
      goto LAB_0174d904;
    }
    local_34 = (undefined2 *)iVar5;
  }
  goto LAB_0174dc3c;
LAB_0174dcd8:
  uVar12 = 1;
  goto LAB_0174d910;
}

