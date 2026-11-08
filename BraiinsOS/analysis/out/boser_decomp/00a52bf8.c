// FUN_00a52bf8 @ 00a52bf8 size=136 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00a52bf8(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  int *local_18;
  undefined1 local_14;
  
  local_18 = (int *)param_1[4];
  do {
    iVar3 = *local_18;
    bVar2 = (bool)hasExclusiveAccess(local_18);
  } while (!bVar2);
  *local_18 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa52c7c);
    (*pcVar1)();
  }
  local_600 = *param_1;
  uStack_5fc = param_1[1];
  local_5f8 = param_1[2];
  local_14 = 0;
  iVar3 = thunk_FUN_01be5118(0x5f0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x5f0);
  }
  FUN_01bed4e2(iVar3,&local_600,0x5f0);
  return CONCAT44(&PTR_FUN_01c0ea00,iVar3);
}

