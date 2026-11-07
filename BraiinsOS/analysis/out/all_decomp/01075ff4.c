// FUN_01075ff4 @ 01075ff4 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_01075ff4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  *(undefined1 *)(param_1 + 1) = 2;
  if ((char)iVar1 != '\x01') {
    return;
  }
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x410);
  *(int *)(iVar1 + 0x410) = iVar2 + -1;
  if (*(int *)(iVar1 + 0x40c) == 0 && iVar2 == 1) {
    FUN_00fbb698();
  }
  return;
}

