// FUN_016deb2e @ 016deb2e size=142 calls_out=5 calls_in=1
// strings: 

int FUN_016deb2e(int param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_24 [2];
  
  thunk_FUN_016df80e();
  FUN_016df690(1,local_24);
  if (local_24[0] == 0) {
    FUN_016df690(0);
  }
  iVar3 = 0;
  while ((iVar2 = *(int *)(param_1 + 0x18), iVar2 != 0 && (iVar3 != 0x6e && iVar3 != 0x16))) {
    if (2 < iVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16deb7e);
      (*pcVar1)();
    }
    iVar3 = FUN_016dde34(param_1 + 0x18,iVar2,0,param_3,1);
  }
  FUN_016df690(local_24[0],0);
  if (iVar3 != 0x16 && iVar3 != 0x6e) {
    FUN_016de390(param_1);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x38);
    }
    iVar3 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar3 = 0;
      FUN_016d6ac4(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    }
  }
  return iVar3;
}

