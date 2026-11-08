// FUN_00f6bed8 @ 00f6bed8 size=172 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00f6bed8(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_5d8 [1472];
  int *local_18;
  undefined1 local_14;
  
  piVar5 = (int *)*param_1;
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf6bf80);
    (*pcVar1)();
  }
  local_14 = 0;
  local_18 = piVar5;
  iVar3 = thunk_FUN_01be5118(0x5c8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x5c8);
  }
  FUN_01bed4e2(iVar3,auStack_5d8,0x5c8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01181f8c(piVar5);
  }
  return CONCAT44(&UNK_01c1996c,iVar3);
}

