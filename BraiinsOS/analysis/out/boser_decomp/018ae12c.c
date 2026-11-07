// FUN_018ae12c @ 018ae12c size=156 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_018ae12c(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_30;
  undefined1 *puStack_2c;
  undefined1 *local_28;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x20,&DAT_01d22464);
  }
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    do {
      local_28 = &LAB_0161d65c;
      local_30 = param_1;
      puStack_2c = (undefined1 *)&local_30;
      iVar1 = FUN_012fa178(uVar3,uVar4,&DAT_0056ff60,&puStack_2c);
      if (iVar1 != 0) {
        return 1;
      }
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

