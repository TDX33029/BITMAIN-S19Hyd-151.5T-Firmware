// FUN_01268344 @ 01268344 size=104 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01268344(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x24);
  uVar3 = 3;
  if (iVar1 != 0) {
    do {
      iVar1 = iVar1 + -1;
      uVar4 = FUN_012684c0(param_1);
      param_2 = (uint)((ulonglong)uVar4 >> 0x20);
      puVar2 = (uint *)uVar4;
      if (puVar2 == (uint *)0x0) goto LAB_012683a0;
      param_2 = (uint)(byte)puVar2[1];
      *(int *)(param_1 + 0x24) = iVar1;
    } while ((param_2 != 2) && (iVar1 != 0));
    if (param_2 == 2) {
      uVar3 = (uint)(byte)puVar2[1];
      param_2 = *puVar2;
    }
  }
LAB_012683a0:
  return CONCAT44(uVar3,param_2);
}

