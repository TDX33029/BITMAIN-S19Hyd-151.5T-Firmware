// FUN_01026c08 @ 01026c08 size=72 calls_out=0 calls_in=1
// strings: 

bool FUN_01026c08(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_r12;
  bool bVar3;
  bool bVar4;
  
  bVar3 = false;
  if (param_2 != 0) {
    iVar2 = *param_1;
    bVar4 = SBORROW4(iVar2,param_2);
    if (iVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.window_size.0 >= sz as i32",0x31,&DAT_01882d2c);
    }
    iVar1 = param_2;
    if (!bVar4) {
      in_r12 = param_1[1];
      *param_1 = iVar2 - param_2;
      iVar1 = in_r12 - param_2;
    }
    bVar3 = bVar4 || SBORROW4(in_r12,param_2);
    if (!bVar4 && !SBORROW4(in_r12,param_2)) {
      param_1[1] = iVar1;
    }
  }
  return bVar3;
}

