// FUN_01a199b8 @ 01a199b8 size=176 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01a199b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  int *local_70;
  int *local_6c;
  undefined1 local_56;
  
  local_70 = (int *)param_1[1];
  do {
    iVar3 = *local_70;
    bVar2 = (bool)hasExclusiveAccess(local_70);
  } while (!bVar2);
  *local_70 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar4 = (int *)*param_1;
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (-1 < iVar3) {
      FUN_01bed4e2(auStack_90,param_2,0x10);
      local_56 = 0;
      local_80 = param_3;
      local_6c = piVar4;
      iVar3 = thunk_FUN_01be5118(0x7c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x7c);
      }
      FUN_01bed4e2(iVar3,auStack_90,0x7c);
      return CONCAT44(&UNK_01d2a5c0,iVar3);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a19a64);
  (*pcVar1)();
}

