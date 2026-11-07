// FUN_012a6cd4 @ 012a6cd4 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_012a6cd4(undefined4 param_1,int param_2)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  FUN_012bb980(&uStack_24,&DAT_0041faa7,0x39);
  if (*(int *)(param_2 + 0xa4) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0xa8));
  }
  *(undefined4 *)(param_2 + 0xa4) = uStack_24;
  *(undefined4 *)(param_2 + 0xa8) = uStack_20;
  *(undefined4 *)(param_2 + 0xac) = local_1c;
  FUN_01bed4e2(param_1,param_2,0x16c);
  return;
}

