// FUN_0094a6f8 @ 0094a6f8 size=148 calls_out=4 calls_in=9
// strings: 

void FUN_0094a6f8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 auStack_318 [376];
  int local_1a0 [95];
  
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  if (*(undefined4 **)(param_1 + 4) != puVar3) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    do {
      puVar2 = puVar1 + 0x62;
      *(undefined4 **)(param_1 + 4) = puVar2;
      local_328 = *puVar1;
      uStack_324 = puVar1[1];
      uStack_320 = puVar1[2];
      FUN_01bed4e2(auStack_318,puVar1 + 4,0x178);
      FUN_01494648(local_1a0,param_2,&local_328,auStack_318);
      if (local_1a0[0] != 8) {
        FUN_00949b58(local_1a0);
      }
      puVar1 = puVar2;
    } while (puVar2 != puVar3);
  }
  FUN_0094a7a4(param_1);
  return;
}

