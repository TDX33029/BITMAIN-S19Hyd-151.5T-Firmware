// FUN_0157b7fc @ 0157b7fc size=512 calls_out=7 calls_in=3
// strings: denominator == 0

void FUN_0157b7fc(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar6 = param_1[5];
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("denominator == 0",0x21,&DAT_01cfc158);
  }
  iVar4 = param_1[2];
  piVar8 = param_1 + 3;
  if (iVar4 == 0) {
    param_1[5] = 0;
    if (param_1[3] == 0) {
      FUN_01a54b48(piVar8);
    }
    param_1[5] = 1;
    *(undefined4 *)param_1[4] = 1;
  }
  else {
    if (iVar4 == iVar6) {
      puVar7 = (undefined4 *)param_1[1];
      iVar5 = param_1[4];
      iVar1 = thunk_FUN_01bed842(puVar7,iVar5,iVar6 << 2);
      if (iVar1 == 0) {
        param_1[2] = 0;
        if (*param_1 == 0) {
          FUN_01a54b48(param_1);
          puVar7 = (undefined4 *)param_1[1];
        }
        piVar2 = (int *)param_1[3];
        param_1[5] = 0;
        param_1[2] = 1;
        piVar3 = piVar2;
        if (piVar2 == (int *)0x0) {
          piVar3 = piVar8;
        }
        *puVar7 = 1;
        if (piVar2 == (int *)0x0) {
          FUN_01a54b48(piVar3);
        }
        param_1[5] = 1;
        *(undefined4 *)param_1[4] = 1;
        return;
      }
    }
    else {
      puVar7 = (undefined4 *)param_1[1];
      iVar5 = param_1[4];
    }
    FUN_0157ba70(&local_68,puVar7,iVar4,iVar5,iVar6);
    local_58 = *param_1;
    iStack_54 = param_1[1];
    iStack_50 = param_1[2];
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    FUN_0164a9cc(&local_48,local_64,local_60);
    FUN_0164af2c(&local_3c,&local_58,&local_48);
    iVar5 = iStack_34;
    iVar4 = iStack_38;
    iVar6 = local_3c;
    FUN_0134aee0(local_30,local_2c,4,4);
    FUN_0134aee0(0,4,4,4);
    *param_1 = iVar6;
    param_1[1] = iVar4;
    param_1[2] = iVar5;
    local_48 = local_68;
    uStack_44 = local_64;
    uStack_40 = local_60;
    local_58 = *piVar8;
    iStack_54 = param_1[4];
    iStack_50 = param_1[5];
    *piVar8 = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    FUN_0164af2c(&local_3c,&local_58,&local_48);
    FUN_0134aee0(local_30,local_2c,4,4);
    FUN_0134aee0(0,4,4,4);
    param_1[3] = local_3c;
    param_1[4] = iStack_38;
    param_1[5] = iStack_34;
  }
  return;
}

