// FUN_01a1cab4 @ 01a1cab4 size=168 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01a1cab4(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_80 [28];
  int *local_64;
  int *local_60;
  undefined1 local_4b;
  
  local_64 = (int *)param_1[1];
  do {
    iVar3 = *local_64;
    bVar2 = (bool)hasExclusiveAccess(local_64);
  } while (!bVar2);
  *local_64 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar4 = (int *)*param_1;
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (-1 < iVar3) {
      FUN_01bed4e2(auStack_80,param_2,0x10);
      local_4b = 0;
      local_60 = piVar4;
      iVar3 = thunk_FUN_01be5118(0x78);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x78);
      }
      FUN_01bed4e2(iVar3,auStack_80,0x78);
      return CONCAT44(&UNK_01d2a670,iVar3);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a1cb58);
  (*pcVar1)();
}

