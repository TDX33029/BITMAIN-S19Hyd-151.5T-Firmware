// FUN_01a756d0 @ 01a756d0 size=176 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_01a756d0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = *(int *)(param_2 + 4);
  iVar5 = *(int *)(param_2 + 8);
  uVar7 = FUN_006665a4(iVar5,iVar6);
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  puVar1 = (undefined4 *)uVar7;
  if (iVar3 == 0) {
    puVar2 = puVar1;
  }
  else {
    puVar2 = (undefined4 *)FUN_01298504(iVar3,puVar1);
  }
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(puVar1,iVar3);
  }
  uVar4 = iVar5 - 1;
  *puVar2 = 1;
  puVar2[1] = 1;
  FUN_01bed4e2((int)puVar2 + (uVar4 & 0xfffffff8) + 8,param_1,iVar6);
  if (((uVar4 + iVar6 & -iVar5) + uVar4 & -iVar5) != 0) {
    thunk_FUN_01be4678(param_1);
  }
  return CONCAT44(param_2,puVar2);
}

