// FUN_01b26e5c @ 01b26e5c size=148 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_01b26e5c(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  undefined4 uVar4;
  int iVar5;
  
  if (((*(uint *)(param_1 + 0x40) & 0x3ff) != 0) ||
     (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x4c) != 0)) {
    return 0;
  }
  iVar5 = 0;
  iVar3 = param_2;
  do {
    puVar1 = (undefined4 *)(param_1 + iVar5);
    iVar2 = param_2 + iVar5;
    iVar5 = iVar5 + 8;
    FUN_01b26e08(iVar2,iVar3,*puVar1,puVar1[1]);
    iVar3 = extraout_r1;
  } while (iVar5 != 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  *param_3 = *(undefined4 *)(param_1 + 0x40);
  param_3[1] = uVar4;
  return 1;
}

