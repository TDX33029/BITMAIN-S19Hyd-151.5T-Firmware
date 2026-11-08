// FUN_00f6f328 @ 00f6f328 size=188 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_00f6f328(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  int *local_28;
  undefined1 local_24;
  
  piVar5 = (int *)*param_1;
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf6f3e0);
    (*pcVar1)();
  }
  FUN_01961644(&local_650);
  local_638 = local_650;
  uStack_634 = uStack_64c;
  uStack_630 = uStack_648;
  uStack_62c = uStack_644;
  uStack_628 = uStack_640;
  uStack_624 = uStack_63c;
  local_24 = 0;
  local_28 = piVar5;
  iVar3 = thunk_FUN_01be5118(0x618);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x618);
  }
  FUN_01bed4e2(iVar3,&local_638,0x618);
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
  return CONCAT44(&UNK_01c1994c,iVar3);
}

