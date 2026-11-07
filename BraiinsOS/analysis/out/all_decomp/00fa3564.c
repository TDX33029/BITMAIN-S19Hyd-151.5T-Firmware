// FUN_00fa3564 @ 00fa3564 size=484 calls_out=2 calls_in=1
// strings: 

void FUN_00fa3564(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 char *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  code *local_28;
  
  if (((param_5 != (char *)0x0) && (*param_5 == '\x03')) &&
     (iVar1 = *(int *)(param_5 + 0xc), iVar1 != 0)) {
    local_2c = &local_48;
    local_34 = (undefined4 *)&DAT_018809d4;
    local_28 = (code *)&DAT_0157d360;
    local_30 = &DAT_0157d360;
    local_48 = param_1;
    uStack_44 = param_2;
    uStack_40 = param_4;
    FUN_00fa948c(param_3,&DAT_018809bc,&DAT_0056c715,&local_34);
    iVar2 = *(int *)(param_5 + 8);
    local_3c = *(undefined4 *)(iVar2 + 4);
    local_38 = *(undefined4 *)(iVar2 + 8);
    local_2c = &local_3c;
    local_30 = (undefined4 *)&DAT_00fa17d8;
    local_28 = FUN_00fa3b90;
    local_34 = &uStack_40;
    FUN_00fa948c(param_3,&DAT_018809bc,&DAT_0035df67,&local_34);
    if (iVar1 != 1) {
      puVar3 = (undefined4 *)(iVar2 + 0x10);
      iVar1 = iVar1 * 0xc + -0xc;
      do {
        iVar2 = param_3[2];
        if ((uint)(*param_3 - iVar2) < 2) {
          FUN_00f991dc(param_3,iVar2,2,1,1);
          iVar2 = param_3[2];
        }
        param_3[2] = iVar2 + 2;
        *(undefined2 *)(param_3[1] + iVar2) = 0x202c;
        local_3c = *puVar3;
        local_38 = puVar3[1];
        local_28 = FUN_00fa3b90;
        local_2c = &local_3c;
        local_30 = (undefined4 *)&DAT_00fa17d8;
        local_34 = &uStack_40;
        FUN_00fa948c(param_3,&DAT_018809bc,&DAT_0035df67,&local_34);
        puVar3 = puVar3 + 3;
        iVar1 = iVar1 + -0xc;
      } while (iVar1 != 0);
    }
    iVar1 = param_3[2];
    if (*param_3 == iVar1) {
      FUN_00f991dc(param_3,iVar1,1,1,1);
      iVar1 = param_3[2];
    }
    *(undefined1 *)(param_3[1] + iVar1) = 0x5d;
    param_3[2] = iVar1 + 1;
  }
  return;
}

