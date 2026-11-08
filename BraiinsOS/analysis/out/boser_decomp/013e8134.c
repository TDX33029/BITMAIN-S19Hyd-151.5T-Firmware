// FUN_013e8134 @ 013e8134 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_013e8134(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((*(short *)(param_2 + 0x48) == 0xe) &&
      (iVar1 = FUN_013cad2c(param_3,param_2 + 0x4c), iVar1 != 0)) &&
     ((*(ushort *)(param_3 + 0x48) & 0x1e) == 2)) {
    FUN_013cc2b4(param_1,param_3);
    return;
  }
  *param_1 = 2;
  return;
}

