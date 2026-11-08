// FUN_0182a294 @ 0182a294 size=248 calls_out=3 calls_in=1
// strings: 

void FUN_0182a294(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int local_e80 [2];
  undefined1 auStack_e78 [712];
  undefined1 auStack_bb0 [752];
  undefined1 auStack_8c0 [744];
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined1 auStack_5d0 [720];
  undefined1 auStack_300 [744];
  
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x182a388);
    (*pcVar1)();
  }
  FUN_018ff358(local_e80);
  if (local_e80[0] == 2) {
    FUN_01bed4e2(auStack_8c0,param_4,0x2e8);
    FUN_0187ab4c(&local_5d8,0x28,auStack_e78);
    FUN_01bed4e2((uint)auStack_bb0 | 4,param_4,0x2e8);
    *param_1 = 4;
    FUN_01bed4e2(param_1 + 1,auStack_bb0,0x2ec);
    param_1[0xbc] = local_5d8;
    param_1[0xbd] = local_5d4;
  }
  else {
    FUN_01bed4e2(auStack_5d0,local_e80,0x2d0);
    FUN_01bed4e2(auStack_300,param_4,0x2e8);
    FUN_01bed4e2(param_1,auStack_5d0,0x5b8);
    *(undefined1 *)(param_1 + 0x16e) = 0;
  }
  return;
}

