// FUN_019686b4 @ 019686b4 size=356 calls_out=6 calls_in=41
// strings: 

void FUN_019686b4(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_2c [3];
  
  do {
    uVar5 = param_2[2];
    FUN_0196856c(param_2);
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    if (uVar7 == uVar6) {
      local_2c[0] = 4;
LAB_019687b8:
      FUN_0196829c(param_1,param_2,local_2c);
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
        local_2c[0] = 0x10;
        goto LAB_019687b8;
      }
      if (*(int *)(param_3 + 8) == 0) {
        if (uVar5 <= uVar7) {
          param_2[2] = uVar7 + 1;
          *param_1 = 0;
          param_1[1] = iVar1 + uVar5;
          param_1[2] = uVar7 - uVar5;
          return;
        }
        puVar4 = &DAT_01d27314;
      }
      else {
        if (uVar5 <= uVar7) {
          FUN_01ac6cbc(param_3,iVar1 + uVar5,uVar7 - uVar5);
          param_2[2] = uVar7 + 1;
          uVar2 = *(undefined4 *)(param_3 + 4);
          uVar3 = *(undefined4 *)(param_3 + 8);
          *param_1 = 1;
          param_1[1] = uVar2;
          param_1[2] = uVar3;
          return;
        }
        puVar4 = &DAT_01d27304;
      }
LAB_019687dc:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar5,uVar7,uVar6,puVar4);
    }
    if (uVar7 < uVar5) {
      puVar4 = &DAT_01d27324;
      goto LAB_019687dc;
    }
    FUN_01ac6cbc(param_3,iVar1 + uVar5,uVar7 - uVar5);
    param_2[2] = uVar7 + 1;
    iVar1 = FUN_01967b98(param_2,param_3);
    if (iVar1 != 0) {
      *param_1 = 2;
      param_1[1] = iVar1;
      return;
    }
  } while( true );
}

