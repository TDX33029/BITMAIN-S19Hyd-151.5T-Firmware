// FUN_01aaa278 @ 01aaa278 size=156 calls_out=1 calls_in=526
// strings: 

undefined4 FUN_01aaa278(undefined4 param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_2 == '\x02') {
    return 1;
  }
  DataMemoryBarrier(0xb);
  puVar1 = (undefined4 *)&UNK_01d2ee94;
  puVar4 = DAT_01d50f84;
  if ((DAT_01d51af4 == 2) && (puVar1 = &DAT_01d50f7c, DAT_01d50f7c != 0)) {
    iVar2 = DAT_01d50f80 + (*(int *)(DAT_01d50f84 + 8) - 1U & 0xfffffff8) + 8;
  }
  else {
    iVar2 = puVar1[1];
    if (DAT_01d51af4 != 2) {
      puVar4 = &DAT_01d2e6fc;
    }
  }
  uVar3 = (**(code **)(puVar4 + 0x14))(iVar2,param_1);
  return uVar3;
}

