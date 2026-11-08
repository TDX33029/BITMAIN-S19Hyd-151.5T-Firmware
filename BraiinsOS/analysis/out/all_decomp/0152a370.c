// FUN_0152a370 @ 0152a370 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_0152a370(undefined1 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 == uVar4) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 4) = &DAT_0040ba9a;
    *(undefined4 *)(param_1 + 8) = 0xf;
    return;
  }
  param_2[2] = uVar4 + 1;
  if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar4 + 1,uVar3,&DAT_018a78f8);
  }
  uVar2 = 2;
  cVar1 = *(char *)(*param_2 + uVar4);
  param_1[2] = cVar1;
  if (cVar1 == '\x02') {
    uVar2 = 1;
  }
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  *param_1 = 0x18;
  return;
}

