// FUN_0167740c @ 0167740c size=92 calls_out=0 calls_in=0
// strings: 

void FUN_0167740c(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (iVar2 == param_2[1]) goto LAB_0167745c;
    iVar2 = iVar2 + 0xc0;
    *param_2 = iVar2;
  }
  if (iVar2 != param_2[1]) {
    uVar1 = *(undefined4 *)(iVar2 + 0x74);
    param_1[1] = *(undefined4 *)(iVar2 + 0x78);
    *param_2 = iVar2 + 0xc0;
    param_1[2] = iVar2;
    *param_1 = uVar1;
    return;
  }
LAB_0167745c:
  *param_1 = 0;
  return;
}

