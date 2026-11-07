// FUN_01b274d0 @ 01b274d0 size=132 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_01b274d0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x20) & 0x1ff) != 0) {
    return 0;
  }
  iVar4 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + iVar4);
    iVar2 = param_2 + iVar4;
    iVar4 = iVar4 + 4;
    FUN_01b27488(iVar2,*puVar1);
  } while (iVar4 != 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *param_3 = *(undefined4 *)(param_1 + 0x20);
  param_3[1] = uVar3;
  return 1;
}

