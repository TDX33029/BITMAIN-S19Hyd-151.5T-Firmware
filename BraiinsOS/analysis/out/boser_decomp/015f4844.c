// FUN_015f4844 @ 015f4844 size=276 calls_out=1 calls_in=3
// strings: 

byte FUN_015f4844(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  bVar4 = 0;
  if ((bVar2 != 2) == (bVar1 == 2)) goto LAB_015f4950;
  if (bVar2 == 2) {
    if (((param_1[0xe] != param_2[0xe]) || (*(int *)(param_1 + 6) != *(int *)(param_2 + 6))) ||
       (*(int *)(param_1 + 10) != *(int *)(param_2 + 10))) goto LAB_015f4950;
    if (param_1[1] != 1) {
      bVar4 = param_2[1] ^ 1;
      goto LAB_015f4950;
    }
    if (param_2[1] == 0) goto LAB_015f4950;
    iVar3 = *(int *)(param_1 + 2) - *(int *)(param_2 + 2);
  }
  else {
    if (((param_1[0x31] != param_2[0x31]) ||
        (iVar3 = thunk_FUN_01bed842(param_1 + 0x11,param_2 + 0x11,0x10), iVar3 != 0)) ||
       (iVar3 = thunk_FUN_01bed842(param_1 + 0x21,param_2 + 0x21,0x10), iVar3 != 0))
    goto LAB_015f4950;
    if ((bVar2 & 1) == 0) {
      bVar4 = bVar1 ^ 1;
      goto LAB_015f4950;
    }
    if ((bVar1 & 1) == 0) goto LAB_015f4950;
    iVar3 = thunk_FUN_01bed842(param_1 + 1,param_2 + 1,0x10);
  }
  bVar4 = iVar3 == 0;
LAB_015f4950:
  return bVar4 & 1;
}

