// FUN_01b6be00 @ 01b6be00 size=224 calls_out=5 calls_in=1
// strings: 

int FUN_01b6be00(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      return *(int *)(param_1 + 8);
    }
    FUN_01b7076c(&DAT_01d5330c);
    if ((DAT_01d53308 != 0) &&
       (iVar1 = FUN_01b6a1e0(DAT_01d53308,param_1,&LAB_01b6bc94,&LAB_01b6bc74), iVar1 != 0)) {
      FUN_01b707cc(&DAT_01d5330c);
      return *(int *)(iVar1 + 8);
    }
    FUN_01b707cc(&DAT_01d5330c);
    puVar2 = (undefined2 *)FUN_01becf98(param_1,&DAT_0055e90a,899,2,FUN_01b6bd64);
    if (puVar2 != (undefined2 *)0x0) {
      iVar1 = FUN_01b6bd18(*puVar2);
      return *(int *)(iVar1 + 8);
    }
  }
  return 0;
}

