// FUN_01a612dc @ 01a612dc size=88 calls_out=0 calls_in=0
// strings: 

void FUN_01a612dc(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (iVar2 == param_2[1]) goto LAB_01a61328;
    iVar2 = iVar2 + 0xc0;
    *param_2 = iVar2;
  }
  if (iVar2 == param_2[1]) {
LAB_01a61328:
    uVar1 = 0;
  }
  else {
    *param_2 = iVar2 + 0xc0;
    uVar1 = *(undefined4 *)(iVar2 + 0x74);
    param_1[1] = *(undefined4 *)(iVar2 + 0x78);
    param_1[2] = iVar2;
  }
  *param_1 = uVar1;
  return;
}

