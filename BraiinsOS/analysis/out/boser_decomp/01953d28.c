// FUN_01953d28 @ 01953d28 size=220 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_01953d28(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_2e8 [16];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  int *local_2b0 [77];
  undefined1 local_17c;
  
  FUN_01bed4e2(auStack_2e8,param_2,0x10);
  piVar5 = (int *)*param_1;
  local_2d8 = *param_3;
  uStack_2d4 = param_3[1];
  uStack_2d0 = param_3[2];
  uStack_2cc = param_3[3];
  uStack_2c8 = param_3[4];
  local_2c4 = param_3[5];
  uStack_2c0 = param_3[6];
  uStack_2bc = param_3[7];
  uStack_2b8 = param_3[8];
  uStack_2b4 = param_3[9];
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1953e00);
    (*pcVar1)();
  }
  local_17c = 0;
  local_2b0[0] = piVar5;
  iVar3 = thunk_FUN_01be5118(0x28c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x28c);
  }
  FUN_01bed4e2(iVar3,local_2b0,0x28c);
  FUN_005fb2fc(&local_2d8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0195b354(piVar5);
  }
  return CONCAT44(&UNK_01d2659c,iVar3);
}

