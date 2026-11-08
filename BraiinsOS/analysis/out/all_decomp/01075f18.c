// FUN_01075f18 @ 01075f18 size=204 calls_out=5 calls_in=1
// strings: 

int * FUN_01075f18(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_1[1] == '\0') {
    DataMemoryBarrier(0xb);
    if (DAT_018d8070 != 0) {
      FUN_00fbaa78();
    }
    iVar1 = FUN_00fbba58(DAT_018d8074);
    iVar2 = *param_1;
    iVar3 = param_1[1];
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = iVar1;
    if ((char)iVar3 != '\x01') {
      if ((char)iVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae210);
      }
      FUN_015e8e6c(param_1,FUN_01075ff4);
      return param_1;
    }
    iVar3 = *(int *)(iVar2 + 0x410);
    *(int *)(iVar2 + 0x410) = iVar3 + -1;
    if (*(int *)(iVar2 + 0x40c) == 0 && iVar3 == 1) {
      FUN_00fbb698(iVar2);
      return param_1;
    }
  }
  else if ((char)param_1[1] != '\x01') {
    return (int *)0x0;
  }
  return param_1;
}

