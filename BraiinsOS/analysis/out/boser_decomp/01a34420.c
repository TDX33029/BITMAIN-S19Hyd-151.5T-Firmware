// FUN_01a34420 @ 01a34420 size=136 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01a34420(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *local_50 [17];
  undefined1 local_c;
  
  local_50[0] = (int *)*param_1;
  do {
    iVar3 = *local_50[0];
    bVar2 = (bool)hasExclusiveAccess(local_50[0]);
  } while (!bVar2);
  *local_50[0] = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1a344a4);
    (*pcVar1)();
  }
  FUN_01bed4e2((uint)local_50 | 4,param_2,0x10);
  local_c = 0;
  iVar3 = thunk_FUN_01be5118(0x48);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x48);
  }
  FUN_01bed4e2(iVar3,local_50,0x48);
  return CONCAT44(&UNK_01d2b1c8,iVar3);
}

