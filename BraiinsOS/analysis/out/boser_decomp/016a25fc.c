// FUN_016a25fc @ 016a25fc size=256 calls_out=5 calls_in=0
// strings: 

void FUN_016a25fc(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 auStack_240 [112];
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [384];
  
  piVar4 = *(int **)(*(int *)(param_2 + 0xc04) + 0x13c);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16a26f8);
    (*pcVar1)();
  }
  FUN_016cb120(&local_258);
  FUN_016ba988(auStack_240,*(undefined4 *)(param_2 + 0xa90));
  local_1d0 = 0;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c4 = 0;
  local_1c8 = 0;
  if (*(int *)(param_2 + 0xaa8) == 2) {
    local_1d0 = 0x80000000;
  }
  local_1c0 = 4;
  local_1cc = 4;
  FUN_016baac4(&local_1b0,*(undefined4 *)(param_2 + 0xac4),*(undefined4 *)(param_2 + 0xae8));
  FUN_016ba0c0(auStack_1a0,param_2);
  *param_1 = local_258;
  param_1[1] = uStack_254;
  param_1[2] = uStack_250;
  param_1[3] = uStack_24c;
  param_1[4] = uStack_248;
  param_1[5] = uStack_244;
  FUN_01bed4e2(param_1 + 0x9a,auStack_240,0x6c);
  param_1[0xb5] = local_1d0;
  param_1[0xb6] = local_1cc;
  param_1[0xb7] = local_1c8;
  param_1[0xb8] = local_1c4;
  param_1[0xb9] = local_1c0;
  param_1[0xba] = local_1bc;
  param_1[0xbb] = local_1b8;
  param_1[0x96] = local_1b0;
  param_1[0x97] = uStack_1ac;
  param_1[0x98] = uStack_1a8;
  param_1[0x99] = uStack_1a4;
  FUN_01bed4e2(param_1 + 0x36,auStack_1a0,0x180);
  param_1[0x32] = 2;
  return;
}

