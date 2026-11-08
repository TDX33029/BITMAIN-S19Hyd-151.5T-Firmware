// FUN_01b32e38 @ 01b32e38 size=460 calls_out=10 calls_in=2
// strings: 

bool FUN_01b32e38(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_ac [128];
  int local_2c;
  
  uVar6 = param_2[1];
  local_2c = DAT_01d53560;
  if ((int)uVar6 < 1) {
    bVar7 = true;
    param_1[1] = 0;
    param_1[3] = 0;
    goto LAB_01b32e90;
  }
  FUN_01b2e894(param_3,param_2,&PTR_01d3b2b0,0);
  if (param_2 == param_1) {
    puVar1 = (undefined4 *)FUN_01b2e970(param_3);
  }
  else {
    puVar1 = param_1;
  }
  piVar2 = (int *)FUN_01b2e970(param_3);
  if (piVar2 == (int *)0x0 || puVar1 == (undefined4 *)0x0) {
LAB_01b32ef4:
    bVar7 = false;
  }
  else {
    iVar4 = uVar6 << 1;
    iVar3 = FUN_01b2b248(puVar1,iVar4);
    if (iVar3 == 0) goto LAB_01b32ef4;
    if (uVar6 == 4) {
      FUN_01b2fff8(*puVar1,*param_2);
    }
    else if (uVar6 == 8) {
      FUN_01b2f9f4(*puVar1,*param_2);
    }
    else {
      if (0xf < (int)uVar6) {
        if ((uVar6 - 1 & uVar6) == 0) {
          iVar3 = FUN_01b2b248(piVar2,uVar6 << 2);
          if (iVar3 != 0) {
            FUN_01b3216c(*puVar1,*param_2,uVar6,*piVar2);
            goto LAB_01b32f30;
          }
        }
        else {
          iVar3 = FUN_01b2b248(piVar2,iVar4);
          if (iVar3 != 0) {
            puVar5 = (undefined1 *)*piVar2;
            goto LAB_01b32fd4;
          }
        }
        goto LAB_01b32ef4;
      }
      puVar5 = auStack_ac;
LAB_01b32fd4:
      FUN_01b30464(*puVar1,*param_2,uVar6,puVar5);
    }
LAB_01b32f30:
    puVar1[1] = iVar4;
    puVar1[3] = 0;
    if (puVar1 == param_1) {
      bVar7 = true;
    }
    else {
      iVar4 = FUN_01b2b33c(param_1,puVar1);
      bVar7 = iVar4 != 0;
    }
  }
  FUN_01b2ebbc(param_3);
LAB_01b32e90:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return bVar7;
}

