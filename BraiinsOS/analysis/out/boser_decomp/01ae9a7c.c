// FUN_01ae9a7c @ 01ae9a7c size=156 calls_out=0 calls_in=1
// strings: 

void FUN_01ae9a7c(undefined1 *param_1,int *param_2,uint param_3,int param_4,uint param_5,
                 uint param_6)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2[2];
  if (uVar4 < (uint)param_2[1]) {
    uVar5 = uVar4 + 1;
    param_2[2] = uVar5;
    cVar1 = *(char *)(*param_2 + uVar4);
    if ((byte)(cVar1 - 0x30U) < 10 && uVar5 < (uint)param_2[1]) {
      cVar2 = *(char *)(*param_2 + uVar5);
      param_2[2] = uVar4 + 2;
      if ((((byte)(cVar2 - 0x30U) < 10) &&
          (uVar4 = (uint)(byte)(cVar2 + -0x30 + (cVar1 + -0x30) * '\n'),
          (uint)-param_4 < (uint)(param_3 <= uVar4))) &&
         (param_6 != 0 || param_6 < (uVar4 <= param_5))) {
        uVar3 = 0;
        *(uint *)(param_1 + 8) = uVar4;
        *(undefined4 *)(param_1 + 0xc) = 0;
        goto LAB_01ae9ab8;
      }
    }
  }
  uVar3 = 1;
  param_1[1] = 1;
LAB_01ae9ab8:
  *param_1 = uVar3;
  return;
}

