// FUN_016df7c0 @ 016df7c0 size=78 calls_out=0 calls_in=2
// strings: 

int FUN_016df7c0(uint param_1,int param_2,uint *param_3)

{
  int iVar1;
  
  if (param_2 != 0 && 2 < param_1) {
    return 0x16;
  }
  software_interrupt(0);
  iVar1 = -param_1;
  if (param_3 != (uint *)0x0 && param_1 == 0) {
    *param_3 = *param_3 & 0x7fffffff;
    param_3[1] = param_3[1] & 0xfffffffc;
    iVar1 = 0;
  }
  return iVar1;
}

