// FUN_01b6db00 @ 01b6db00 size=408 calls_out=7 calls_in=2
// strings: 

void FUN_01b6db00(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar3 = 0;
  if (param_2 != 0) {
    FUN_01b70810(&DAT_01d53330,FUN_01b6d92c,&PTR_01d3b2b0,0);
    if ((DAT_01d5333c == 0) ||
       ((param_3 != 0 && (FUN_01b70810(&DAT_01d5332c,FUN_01b6d710), DAT_01d53338 == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_01be32a0();
    }
    piVar1 = (int *)FUN_01be3244();
    *piVar1 = 0;
    do {
      if (DAT_01d5333c == 1) {
        uVar6 = FUN_01b6d618(param_1,param_2,param_3);
      }
      else {
        iVar5 = 0;
        local_30 = 1;
        while( true ) {
          uVar6 = FUN_01bf0424(DAT_01d53334,param_1,param_2);
          uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 != -1) break;
          if (*piVar1 != 4) {
            uVar4 = (param_3 ^ 1) & 1;
            if (iVar5 == 9) {
              uVar4 = 1;
            }
            if (uVar4 != 0) goto LAB_01b6dc54;
            iVar5 = iVar5 + 1;
            FUN_01b6d54c(&local_30);
          }
        }
      }
      uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
      iVar5 = (int)uVar6;
      if (iVar5 < 1) {
LAB_01b6dc54:
        uVar2 = 0;
        goto LAB_01b6dc58;
      }
      param_1 = param_1 + iVar5;
      param_2 = param_2 - iVar5;
    } while (param_2 != 0);
  }
  uVar2 = 1;
LAB_01b6dc58:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

