// FUN_0181d958 @ 0181d958 size=212 calls_out=0 calls_in=3
// strings: 

int FUN_0181d958(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16bc) == 0x10) {
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    *(undefined4 *)(param_1 + 0x16bc) = 0;
    return 0;
  }
  if (*(int *)(param_1 + 0x16bc) < 8) {
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)*(undefined2 *)(param_1 + 0x16b8);
  *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -8;
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) >> 8;
  return 0;
}

