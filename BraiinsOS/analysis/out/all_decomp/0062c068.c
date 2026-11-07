// FUN_0062c068 @ 0062c068 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_0062c068(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  param_1[2] = 0;
  if (*param_1 < 0xe) {
    FUN_015bf41c(param_1,0,0xe,1,1);
    uVar1 = param_1[2];
  }
  param_1[2] = uVar1 + 0xe;
  puVar2 = (undefined4 *)(param_1[1] + uVar1);
  *puVar2 = 0x7273752f;
  puVar2[1] = 0x62696c2f;
  puVar2[2] = 0x6265642f;
  *(undefined2 *)(puVar2 + 3) = 0x6775;
  return;
}

