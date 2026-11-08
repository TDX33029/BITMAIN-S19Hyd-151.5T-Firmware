// FUN_016d2a9c @ 016d2a9c size=104 calls_out=2 calls_in=0
// strings: 

void FUN_016d2a9c(undefined4 param_1,int param_2)

{
  code *pcVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_01306fc8(&DAT_01d09b28);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16d2b00);
    (*pcVar1)();
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  FUN_01691d3c(param_1,param_2 + 0x24);
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  return;
}

