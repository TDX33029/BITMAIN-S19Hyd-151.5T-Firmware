// FUN_013dc960 @ 013dc960 size=136 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_013dc960(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_30;
  undefined1 *puStack_2c;
  undefined1 *local_28;
  
  iVar2 = *(int *)(*param_1 + 8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(*param_1 + 4);
    uVar4 = *param_2;
    uVar5 = param_2[1];
    iVar2 = iVar2 * 0xc;
    do {
      local_28 = &LAB_0193a90c;
      local_30 = iVar3;
      puStack_2c = (undefined1 *)&local_30;
      iVar1 = FUN_012fa178(uVar4,uVar5,&DAT_005a95ff,&puStack_2c);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 0xc;
      iVar2 = iVar2 + -0xc;
    } while (iVar2 != 0);
  }
  return 0;
}

