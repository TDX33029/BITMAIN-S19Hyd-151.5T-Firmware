// FUN_01638388 @ 01638388 size=96 calls_out=1 calls_in=1
// strings: 

int FUN_01638388(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  puVar1 = (undefined4 *)*param_1;
  if ((param_1[1] - 1U < (uint)puVar1[3]) && (puVar1[2] != 0)) {
    DataMemoryBarrier(0xb);
    *(undefined1 *)(puVar1[2] + (param_1[1] - 1U) * 0x10 + 4) = 1;
    DataMemoryBarrier(0xb);
  }
  iVar2 = FUN_016d9844(*puVar1,&DAT_0041319b,1,0x4000);
  if (iVar2 == -1) {
    iVar2 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
    return iVar2 + -0x5c;
  }
  return iVar2;
}

