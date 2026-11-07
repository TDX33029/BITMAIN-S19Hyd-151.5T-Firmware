// FUN_0171dae0 @ 0171dae0 size=504 calls_out=10 calls_in=2
// strings: 

uint FUN_0171dae0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_a4 [128];
  int local_24;
  
  uVar5 = param_2[1];
  local_24 = DAT_018ddaf8;
  if ((int)uVar5 < 1) {
    uVar5 = 1;
    param_1[1] = 0;
    param_1[3] = 0;
    goto LAB_0171db60;
  }
  FUN_017185b4(param_3,param_2,&PTR_018bc3f4,0);
  if (param_2 == param_1) {
    puVar4 = (undefined4 *)FUN_017186b0(param_3);
  }
  else {
    puVar4 = param_1;
  }
  puVar1 = (undefined4 *)FUN_017186b0(param_3);
  if (puVar1 == (undefined4 *)0x0 || puVar4 == (undefined4 *)0x0) {
LAB_0171db54:
    uVar5 = 0;
  }
  else {
    iVar3 = uVar5 << 1;
    iVar2 = FUN_0171464c(puVar4,uVar5 << 1);
    if (iVar2 == 0) goto LAB_0171db54;
    if (uVar5 == 4) {
      FUN_01719eb8(*puVar4,*param_2);
    }
    else if (uVar5 == 8) {
      FUN_017198a8(*puVar4,*param_2);
    }
    else {
      if (0xf < (int)uVar5) {
        if ((uVar5 - 1 & uVar5) == 0) {
          iVar2 = FUN_0171464c(puVar1,uVar5 << 2);
          if (iVar2 != 0) {
            FUN_0171b860(*puVar4,*param_2,uVar5,*puVar1);
            goto LAB_0171dc14;
          }
        }
        else {
          iVar2 = FUN_0171464c(puVar1,iVar3);
          if (iVar2 != 0) {
            FUN_0171a460(*puVar4,*param_2,uVar5,*puVar1);
            goto LAB_0171dc14;
          }
        }
        goto LAB_0171db54;
      }
      FUN_0171a460(*puVar4,*param_2,uVar5,auStack_a4);
    }
LAB_0171dc14:
    if (puVar4 == param_1) {
      uVar5 = 1;
    }
    puVar4[3] = 0;
    puVar4[1] = iVar3;
    if (puVar4 != param_1) {
      iVar3 = FUN_017147ac(param_1,puVar4);
      uVar5 = (uint)(iVar3 != 0);
    }
  }
  FUN_01718904(param_3);
LAB_0171db60:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar5;
}

