// FUN_017fabe0 @ 017fabe0 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_017fabe0(void)

{
  int in_r3;
  int iVar1;
  int *piVar2;
  int in_stack_00000000;
  
  in_stack_00000000 = in_stack_00000000 << 3;
  piVar2 = (int *)(in_r3 + 4);
  do {
    if (in_stack_00000000 == 0) break;
    iVar1 = *piVar2;
    in_stack_00000000 = in_stack_00000000 + -8;
    piVar2 = piVar2 + 2;
  } while (iVar1 == 0);
  FUN_017fac24();
  return;
}

