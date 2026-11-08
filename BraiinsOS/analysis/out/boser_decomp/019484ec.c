// FUN_019484ec @ 019484ec size=196 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_019484ec(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *local_24;
  undefined1 local_1f;
  
  piVar5 = (int *)*param_1;
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x19485ac);
    (*pcVar1)();
  }
  local_50 = *param_3;
  uStack_4c = param_3[1];
  uStack_48 = param_3[2];
  uStack_44 = param_3[3];
  uStack_40 = param_3[4];
  local_3c = param_3[5];
  uStack_38 = param_3[6];
  uStack_34 = param_3[7];
  uStack_30 = param_3[8];
  uStack_2c = param_3[9];
  local_24 = piVar5;
  FUN_01bed4e2(auStack_60,param_2,0x10);
  local_1f = 0;
  iVar3 = thunk_FUN_01be5118(0x44);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x44);
  }
  FUN_01bed4e2(iVar3,auStack_60,0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0195b288(piVar5);
  }
  return CONCAT44(&UNK_01d25dc4,iVar3);
}

