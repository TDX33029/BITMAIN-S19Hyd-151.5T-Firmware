// FUN_0169fae4 @ 0169fae4 size=340 calls_out=6 calls_in=0
// strings: 

void FUN_0169fae4(undefined4 param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined1 auStack_538 [176];
  undefined4 local_488;
  undefined1 auStack_478 [384];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined1 auStack_2e8 [108];
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 auStack_248 [112];
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 auStack_1a8 [176];
  undefined4 local_f8;
  
  piVar4 = *(int **)(*(int *)(param_2 + 0xc04) + 0x13c);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x169fc34);
    (*pcVar1)();
  }
  FUN_016cb120(&local_260);
  FUN_016ba988(auStack_248,*(undefined4 *)(param_2 + 0xa90));
  local_1d8 = 0;
  local_1c0 = 0;
  local_1c4 = 0;
  local_1cc = 0;
  local_1d0 = 0;
  if (*(int *)(param_2 + 0xaa8) == 2) {
    local_1d8 = 0x80000000;
  }
  local_1c8 = 4;
  local_1d4 = 4;
  FUN_016baac4(&local_1b8,*(undefined4 *)(param_2 + 0xac4),*(undefined4 *)(param_2 + 0xae8));
  FUN_016ba0c0(auStack_1a8,param_2);
  local_550 = local_260;
  uStack_54c = uStack_25c;
  uStack_548 = uStack_258;
  uStack_544 = uStack_254;
  uStack_540 = uStack_250;
  uStack_53c = uStack_24c;
  FUN_01bed4e2(auStack_2e8,auStack_248,0x6c);
  uStack_27c = local_1d8;
  uStack_278 = local_1d4;
  uStack_274 = local_1d0;
  local_270 = local_1cc;
  uStack_26c = local_1c8;
  uStack_268 = local_1c4;
  uStack_264 = local_1c0;
  local_2f8 = local_1b8;
  uStack_2f4 = uStack_1b4;
  uStack_2f0 = uStack_1b0;
  uStack_2ec = uStack_1ac;
  FUN_01bed4e2(auStack_478,auStack_1a8,0x180);
  local_488 = 2;
  if (*(int *)(param_2 + 0xc10) == 2 && *(int *)(param_2 + 0xc14) == 0) {
    local_f8 = 2;
  }
  else {
    FUN_016c4d58(auStack_1a8,(int *)(param_2 + 0xc10));
  }
  FUN_01bed4e2(auStack_538,auStack_1a8,0xc0);
  FUN_01bed4e2(param_1,&local_550,0x2f0);
  return;
}

