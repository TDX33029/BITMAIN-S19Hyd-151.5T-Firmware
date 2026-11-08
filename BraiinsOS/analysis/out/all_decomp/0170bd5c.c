// FUN_0170bd5c @ 0170bd5c size=496 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_0170bd5c(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_110 [76];
  undefined1 auStack_c4 [76];
  undefined1 auStack_78 [76];
  int local_2c;
  
  iVar7 = *param_1;
  iVar1 = iVar7 * 4;
  local_2c = DAT_018ddaf8;
  uVar3 = 0;
  if (iVar1 != 0) {
    if (param_2 < param_3) {
      if (param_3 < param_2 + iVar1) goto LAB_0170bf0c;
    }
    else if ((param_3 < param_2) && (uVar3 = param_3 + iVar1, param_2 < uVar3)) goto LAB_0170bf0c;
    uVar6 = param_2 + iVar1;
    FUN_016dd1aa(param_2,param_3,iVar1,uVar3);
    if (uVar6 < param_4) {
      if (param_4 < uVar6 + iVar1) goto LAB_0170bf0c;
    }
    else if ((param_4 < uVar6) && (uVar6 < param_4 + iVar1)) goto LAB_0170bf0c;
    FUN_016dd1aa(uVar6,param_4,iVar1);
    uVar3 = param_2 + iVar7 * 8;
    if (uVar3 < param_5) {
      if (param_5 < uVar3 + iVar1) {
LAB_0170bf0c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0,0x170bf0c);
        (*pcVar2)();
      }
    }
    else if ((param_5 < uVar3) && (uVar3 < param_5 + iVar1)) goto LAB_0170bf0c;
    FUN_016dd1aa(uVar3,param_5,iVar1);
  }
  iVar4 = iVar7 * 8;
  (*(code *)param_1[9])();
  iVar7 = iVar7 * 0xc + param_2;
  iVar5 = 0xf;
  do {
    (*(code *)param_1[10])
              (iVar7,iVar1 + iVar7,iVar4 + iVar7,param_2,iVar1 + param_2,param_2 + iVar4,0,
               auStack_110,auStack_c4,auStack_78);
    iVar7 = iVar1 + iVar7 + iVar4;
    param_2 = iVar1 + param_2 + iVar4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

