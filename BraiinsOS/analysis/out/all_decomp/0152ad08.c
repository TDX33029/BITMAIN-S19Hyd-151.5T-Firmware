// FUN_0152ad08 @ 0152ad08 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_0152ad08(undefined1 *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 == uVar4) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 4) = &DAT_00565310;
    *(undefined4 *)(param_1 + 8) = 0x10;
    return;
  }
  param_2[2] = uVar4 + 1;
  if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar4 + 1,uVar3,&DAT_018a78f8);
  }
  cVar1 = *(char *)(*param_2 + uVar4);
  param_1[2] = cVar1;
  cVar2 = cVar1;
  if (cVar1 != '\x01') {
    cVar2 = '\x02';
  }
  if (cVar1 == '\0') {
    cVar2 = cVar1;
  }
  param_1[1] = cVar2;
  *param_1 = 0x18;
  return;
}

