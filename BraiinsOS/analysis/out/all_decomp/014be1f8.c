// FUN_014be1f8 @ 014be1f8 size=132 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_014be1f8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_30;
  undefined1 *puStack_2c;
  code *local_28;
  
  iVar3 = *(int *)(*param_1 + 8);
  if (iVar3 != 0) {
    iVar2 = *(int *)(*param_1 + 4);
    uVar4 = *param_2;
    uVar5 = param_2[1];
    do {
      local_28 = FUN_01576770;
      local_30 = iVar2;
      puStack_2c = (undefined1 *)&local_30;
      iVar1 = FUN_00fa948c(uVar4,uVar5,&DAT_00569c68,&puStack_2c);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

