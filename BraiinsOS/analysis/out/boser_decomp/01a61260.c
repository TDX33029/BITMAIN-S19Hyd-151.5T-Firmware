// FUN_01a61260 @ 01a61260 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_01a61260(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 == param_2[1]) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x74);
    param_1[1] = *(undefined4 *)(iVar2 + 0x78);
    *param_2 = iVar2 + 0xc0;
    param_1[2] = iVar2;
  }
  *param_1 = uVar1;
  return;
}

