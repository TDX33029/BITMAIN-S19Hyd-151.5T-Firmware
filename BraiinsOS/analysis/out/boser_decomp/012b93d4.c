// FUN_012b93d4 @ 012b93d4 size=120 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_012b93d4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r9;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  do {
    do {
      uVar5 = FUN_012b11f4(param_1);
      puVar1 = (undefined4 *)uVar5;
      if (puVar1 == (undefined4 *)0x0) {
        uVar4 = 0;
        goto LAB_012b9440;
      }
      iVar2 = FUN_012bf928((int)((ulonglong)uVar5 >> 0x20),"");
    } while (iVar2 == 0);
    uVar4 = *puVar1;
    unaff_r9 = puVar1[1];
    iVar2 = FUN_012a4878(*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c),uVar4,unaff_r9)
    ;
  } while ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x11c) & 4) != 0));
LAB_012b9440:
  return CONCAT44(unaff_r9,uVar4);
}

