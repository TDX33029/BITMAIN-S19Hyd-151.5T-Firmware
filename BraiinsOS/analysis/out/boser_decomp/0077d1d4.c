// FUN_0077d1d4 @ 0077d1d4 size=204 calls_out=4 calls_in=2
// strings: 

void FUN_0077d1d4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_150;
  undefined4 local_14c;
  int local_d8;
  undefined1 auStack_d4 [112];
  undefined2 local_64 [34];
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_003e0e27,0x1f,&DAT_01c08ac4);
  }
  iVar2 = param_2[1];
  (**(code **)(iVar2 + 0xc))(&local_d8,iVar1);
  if (local_d8 == -0x7fffffff) {
    local_64[0] = 0x23;
    local_14c = FUN_013e649c(local_64);
    local_d8 = -0x80000000;
  }
  else {
    if (local_d8 == -0x7ffffffe) {
      *param_1 = 0x80000001;
      return;
    }
    FUN_01bed4e2((uint)&local_150 | 4,auStack_d4,0x70);
  }
  *param_2 = 0;
  local_150 = local_d8;
  FUN_01872408(iVar1,iVar2);
  FUN_01bed4e2(param_1,&local_150,0x74);
  return;
}

