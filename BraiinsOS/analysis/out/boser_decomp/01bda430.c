// FUN_01bda430 @ 01bda430 size=44 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_01bda430(undefined4 param_1,uint param_2,int param_3)

{
  *(uint *)(param_3 + 0xf0) = (param_2 >> 5) + 5;
  FUN_01bda220();
  return 0;
}

