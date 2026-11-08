// FUN_017db694 @ 017db694 size=236 calls_out=3 calls_in=1
// strings: 

void FUN_017db694(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int local_5e8 [70];
  undefined1 auStack_4d0 [312];
  undefined1 auStack_398 [304];
  undefined4 local_268;
  undefined4 local_264;
  undefined1 auStack_260 [280];
  undefined1 auStack_148 [304];
  
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x17db77c);
    (*pcVar1)();
  }
  FUN_018cdd08(local_5e8);
  if (local_5e8[0] == 2) {
    FUN_01bed4e2(auStack_398,param_4,0x130);
    FUN_017d0f94(&local_268,0x28,(uint)local_5e8 | 4);
    FUN_01bed4e2((uint)auStack_4d0 | 4,param_4,0x130);
    *param_1 = 3;
    FUN_01bed4e2(param_1 + 1,auStack_4d0,0x134);
    param_1[0x4e] = local_268;
    param_1[0x4f] = local_264;
  }
  else {
    FUN_01bed4e2(auStack_260,local_5e8,0x118);
    FUN_01bed4e2(auStack_148,param_4,0x130);
    FUN_01bed4e2(param_1,auStack_260,0x248);
    *(undefined1 *)(param_1 + 0x92) = 0;
  }
  return;
}

