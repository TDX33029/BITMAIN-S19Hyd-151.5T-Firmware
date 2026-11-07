// FUN_00a52afc @ 00a52afc size=180 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00a52afc(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 local_600;
  int *local_20;
  undefined1 local_1c;
  
  piVar5 = (int *)param_1[4];
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa52bac);
    (*pcVar1)();
  }
  local_608 = *param_1;
  uStack_604 = param_1[1];
  local_600 = param_1[2];
  local_1c = 0;
  local_20 = piVar5;
  iVar3 = thunk_FUN_01be5118(0x5f0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x5f0);
  }
  FUN_01bed4e2(iVar3,&local_608,0x5f0);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[4]);
  }
  return CONCAT44(&PTR_FUN_01c0ea00,iVar3);
}

