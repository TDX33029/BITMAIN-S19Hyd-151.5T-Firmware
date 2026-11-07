// FUN_01beed9a @ 01beed9a size=142 calls_out=5 calls_in=1
// strings: 

int FUN_01beed9a(int param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_24 [2];
  
  thunk_FUN_01befa32();
  FUN_01bef8fc(1,local_24);
  if (local_24[0] == 0) {
    FUN_01bef8fc(0);
  }
  iVar3 = 0;
  while ((iVar2 = *(int *)(param_1 + 0x18), iVar2 != 0 && (iVar3 != 0x6e && iVar3 != 0x16))) {
    if (2 < iVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1beedea);
      (*pcVar1)();
    }
    iVar3 = FUN_01bee0a0(param_1 + 0x18,iVar2,0,param_3,1);
  }
  FUN_01bef8fc(local_24[0],0);
  if (iVar3 != 0x16 && iVar3 != 0x6e) {
    FUN_01bee5fc(param_1);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x38);
    }
    iVar3 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar3 = 0;
      FUN_01be6d98(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    }
  }
  return iVar3;
}

