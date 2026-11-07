// FUN_018906c4 @ 018906c4 size=140 calls_out=3 calls_in=3
// strings: 

void FUN_018906c4(uint *param_1,int *param_2)

{
  int iVar1;
  uint local_78 [26];
  
  FUN_01bed93e((uint)local_78 | 4,0,0x61);
  local_78[0] = *(uint *)(*param_2 + 0xc);
  if (0x61 < local_78[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_78[0],0x61,&DAT_01d2137c);
  }
  iVar1 = (**(code **)(*param_2 + 8))((uint)local_78 | 4,local_78[0],param_2);
  if (iVar1 == 0) {
    FUN_01bed4e2(param_1 + 1,local_78,0x68);
  }
  *param_1 = (uint)(iVar1 != 0);
  return;
}

