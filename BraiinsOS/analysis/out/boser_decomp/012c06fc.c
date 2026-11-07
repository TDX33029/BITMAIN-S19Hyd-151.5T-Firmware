// FUN_012c06fc @ 012c06fc size=732 calls_out=12 calls_in=2
// strings: 

void FUN_012c06fc(undefined1 *param_1,undefined4 param_2,int param_3,int *param_4,int param_5)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 ***local_70;
  undefined2 *local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [12];
  undefined4 ***local_58;
  undefined2 *local_54;
  undefined4 local_50;
  int ***local_4c;
  undefined2 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  int local_30;
  undefined1 local_2c;
  undefined1 uStack_25;
  
  if (param_5 == 4) {
    if (*param_4 == 0x65757274) {
LAB_012c0928:
      *param_1 = 0;
      param_1[1] = param_5 == 4;
      return;
    }
  }
  else if ((param_5 == 5) && (iVar2 = thunk_FUN_01bed842(param_4,"f",5), iVar2 == 0))
  goto LAB_012c0928;
  local_54 = (undefined2 *)FUN_01298504(0x18,4);
  if (local_54 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x18);
  }
  uVar6 = 0;
  local_58 = (undefined4 ***)0x2;
  local_50 = 0;
  iVar9 = 0;
  piVar5 = (int *)(local_54 + 4);
  iVar2 = param_3;
  do {
    uVar7 = (&DAT_01ce2880)[iVar9 * 2];
    local_40 = 0x80000000;
    iVar4 = (&DAT_01ce2884)[iVar9 * 2];
    local_2c = 0;
    local_44 = 0;
    local_48 = (undefined2 *)0x4;
    local_4c = (int ***)0x0;
    local_34 = uVar7;
    local_30 = iVar4;
    if (iVar4 < 0) {
LAB_012c09d4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar6,iVar2);
    }
    if (iVar4 == 0) {
      iVar2 = 1;
      iVar8 = 0;
    }
    else {
      iVar2 = FUN_01298504(iVar4,1);
      if (iVar2 == 0) {
        uVar6 = 1;
        iVar2 = iVar4;
        goto LAB_012c09d4;
      }
      iVar8 = iVar4;
    }
    FUN_01bed4e2(iVar2,uVar7,iVar4);
    FUN_01298818(&local_4c);
    piVar5[-2] = iVar8;
    iVar9 = iVar9 + 1;
    piVar5[-1] = iVar2;
    *piVar5 = iVar4;
    piVar5 = piVar5 + 3;
  } while (iVar9 != 2);
  local_50 = 2;
  local_70 = local_58;
  local_6c = local_54;
  local_68 = 2;
  FUN_006643f0(&local_4c,param_4,param_5);
  FUN_0160ec7c(auStack_64,&local_4c);
  uVar6 = local_68;
  puVar1 = local_6c;
  if (param_3 != 0) {
    local_50 = 0;
    local_58 = (undefined4 ***)0x0;
    local_40 = 0;
    local_54 = (undefined2 *)&DAT_00000001;
    local_44 = 0x60000020;
    local_48 = (undefined2 *)&DAT_01ce2890;
    local_4c = (int ***)&local_58;
    iVar2 = FUN_012bb12c(param_3,&local_4c);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01ce28a8,&DAT_01d30334);
    }
    if (local_58 != (undefined4 ***)0x80000000) {
      local_4c = local_58;
      local_48 = local_54;
      local_44 = local_50;
      goto LAB_012c0958;
    }
  }
  puVar3 = (undefined2 *)thunk_FUN_01be5118(3);
  if (puVar3 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined1 *)(puVar3 + 1) = 0x2e;
  *puVar3 = 0x2e2e;
  local_4c = (undefined4 ***)0x3;
  local_44 = 3;
  local_48 = puVar3;
LAB_012c0958:
  uVar6 = FUN_012bc0f0(param_2,auStack_64,puVar1,uVar6,&local_4c);
  *(undefined4 *)(param_1 + 4) = uVar6;
  *param_1 = 1;
  FUN_006a41c0(&local_70);
  return;
}

