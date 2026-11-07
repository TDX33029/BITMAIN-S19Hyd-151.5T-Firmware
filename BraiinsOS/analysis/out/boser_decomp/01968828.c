// FUN_01968828 @ 01968828 size=416 calls_out=7 calls_in=42
// strings: 

void FUN_01968828(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_2c;
  int local_28;
  
  do {
    uVar5 = param_2[2];
    FUN_0196856c(param_2);
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    if (uVar7 == uVar6) {
      local_2c = 4;
LAB_0196896c:
      FUN_0196829c(param_1,param_2,&local_2c);
      return;
    }
    if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,uVar6,&DAT_01d272f4);
    }
    iVar1 = *param_2;
    if (*(char *)(iVar1 + uVar7) != '\\') {
      if (*(char *)(iVar1 + uVar7) != '\"') {
        param_2[2] = uVar7 + 1;
        local_2c = 0x10;
        goto LAB_0196896c;
      }
      if (*(int *)(param_3 + 8) == 0) {
        if (uVar7 < uVar5) {
          puVar4 = &DAT_01d27314;
          goto LAB_0196898c;
        }
        param_2[2] = uVar7 + 1;
        FUN_019682f8(&local_2c,param_2,iVar1 + uVar5,uVar7 - uVar5);
        if (local_2c != 0) {
          param_1[2] = local_28;
          uVar2 = 0;
          goto LAB_0196894c;
        }
      }
      else {
        if (uVar7 < uVar5) {
          puVar4 = &DAT_01d27304;
LAB_0196898c:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar5,uVar7,uVar6,puVar4);
        }
        FUN_01ac6cbc(param_3,iVar1 + uVar5,uVar7 - uVar5);
        uVar2 = *(undefined4 *)(param_3 + 4);
        uVar3 = *(undefined4 *)(param_3 + 8);
        param_2[2] = uVar7 + 1;
        FUN_019682f8(&local_2c,param_2,uVar2,uVar3);
        if (local_2c != 0) {
          param_1[2] = local_28;
          uVar2 = 1;
          goto LAB_0196894c;
        }
      }
      local_2c = local_28;
      goto LAB_01968948;
    }
    if (uVar7 < uVar5) {
      puVar4 = &DAT_01d27324;
      goto LAB_0196898c;
    }
    FUN_01ac6cbc(param_3,iVar1 + uVar5,uVar7 - uVar5);
    param_2[2] = uVar7 + 1;
    iVar1 = FUN_01967b98(param_2,param_3);
    if (iVar1 != 0) {
      local_2c = iVar1;
LAB_01968948:
      uVar2 = 2;
LAB_0196894c:
      *param_1 = uVar2;
      param_1[1] = local_2c;
      return;
    }
  } while( true );
}

