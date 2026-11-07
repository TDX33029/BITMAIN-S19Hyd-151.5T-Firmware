// FUN_01ac1da4 @ 01ac1da4 size=84 calls_out=3 calls_in=1
// strings: 

bool FUN_01ac1da4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = thunk_FUN_01bee35a(param_1,0x29c);
  piVar1 = (int *)((int)uVar3 + (int)((ulonglong)uVar3 >> 0x20));
  if (((char)piVar1[2] != '\x01') && (piVar1 = (int *)FUN_01abe644(), piVar1 == (int *)0x0)) {
    return false;
  }
  if (*piVar1 == 0) {
    iVar2 = FUN_01ac1a94();
  }
  else {
    iVar2 = piVar1[1];
  }
  return param_1 == iVar2;
}

