// FUN_0072dff0 @ 0072dff0 size=104 calls_out=0 calls_in=5
// strings: Invalid ELF section size or offset

void FUN_0072dff0(uint *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  if (*(int *)(param_2 + 4) == 8) {
    uVar1 = 0;
    pcVar3 = (char *)0x1;
    uVar2 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x10);
    uVar1 = *(uint *)(param_2 + 0x14);
    pcVar3 = "Invalid ELF section size or offset";
    uVar2 = (uint)(param_4 < uVar4 || param_4 - uVar4 < uVar1);
    if (uVar2 == 0) {
      pcVar3 = (char *)(param_3 + uVar4);
    }
    else {
      uVar1 = 0x22;
    }
  }
  *param_1 = uVar2;
  param_1[1] = (uint)pcVar3;
  param_1[2] = uVar1;
  return;
}

