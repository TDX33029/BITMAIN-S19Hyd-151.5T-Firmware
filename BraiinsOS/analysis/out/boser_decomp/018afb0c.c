// FUN_018afb0c @ 018afb0c size=100 calls_out=1 calls_in=0
// strings: 

void FUN_018afb0c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  iVar2 = 0;
  do {
    iStack_30 = param_1 + iVar2;
    puStack_28 = &LAB_0161d65c;
    puStack_2c = (undefined1 *)&iStack_30;
    iVar1 = FUN_012fa178(uVar3,uVar4,&DAT_0056ff60,&puStack_2c);
    if (iVar1 != 0) {
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x20);
  return;
}

