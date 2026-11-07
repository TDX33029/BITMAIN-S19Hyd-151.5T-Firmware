// FUN_01a338ac @ 01a338ac size=168 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_01a338ac(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *local_70 [5];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_14;
  
  local_70[0] = (int *)*param_1;
  do {
    iVar3 = *local_70[0];
    bVar2 = (bool)hasExclusiveAccess(local_70[0]);
  } while (!bVar2);
  *local_70[0] = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1a33950);
    (*pcVar1)();
  }
  FUN_01bed4e2((uint)local_70 | 4,param_2,0x10);
  local_5c = *param_3;
  uStack_58 = param_3[1];
  uStack_54 = param_3[2];
  local_50 = *param_4;
  uStack_4c = param_4[1];
  uStack_48 = param_4[2];
  local_14 = 0;
  iVar3 = thunk_FUN_01be5118(0x60);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x60);
  }
  FUN_01bed4e2(iVar3,local_70,0x60);
  return CONCAT44(&UNK_01d2b178,iVar3);
}

