// FUN_0134384c @ 0134384c size=104 calls_out=1 calls_in=3
// strings: 

void FUN_0134384c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1[2] + 0xc);
  uVar2 = *(uint *)(param_1[2] + 4);
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  if (uVar2 == 0) {
    return;
  }
  uVar1 = param_1[1];
  if (uVar2 < uVar1) {
    if (-0x41 < *(char *)(*param_1 + uVar2)) {
      return;
    }
  }
  else if (uVar2 == uVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(*param_1,uVar1,0,uVar2,&DAT_01ce69ec);
}

